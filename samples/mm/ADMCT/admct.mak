#===================================================================
#
#   ADMCT.MAK - Make file for Waveform Audio MCI Driver
#   Copyright  IBM Corporation 1992
#
#===================================================================
#===================================================================
# Include the file ibmsamp.inc which defines the various macros
# depending on the target specified.
#
# The following macros are defined in ibmsamp.inc:
#
#       OBJDIR   - Directory where object files are created
#       EXEDIR   - Directory where executable files are created
#       RC       - Resource compiler
#       RCFLAGS  - Resource compiler flags
#       LINK     - Linker
#       LFLAGS   - Linker flags
#       MTLIBS   - Multithreaded versions of the runtime libraries
#       MMLIBS   - Multimedia libraries
#===================================================================

!include ..\..\ibmsamp.inc

HEADERS =
#-------------------------------------------------------------------
#
#  Component specific requirements for compile flags
#
#-------------------------------------------------------------------

CC = $(CC) -Ge- -Sm -DINCL_32 -DTOOLKIT -I.

#-------------------------------------------------------------------
#
#   A list of all of the object files
#
#-------------------------------------------------------------------

OBJS = \
$(OBJDIR)\admcdat.obj  \
$(OBJDIR)\admcinit.obj \
$(OBJDIR)\admcstat.obj \
$(OBJDIR)\admcrest.obj \
$(OBJDIR)\admcload.obj \
$(OBJDIR)\admcrecd.obj \
$(OBJDIR)\admcplay.obj \
$(OBJDIR)\audiosub.obj \
$(OBJDIR)\audiomcd.obj \
$(OBJDIR)\hhpheap.obj  \
$(OBJDIR)\checkmem.obj \
$(OBJDIR)\loadsubs.obj \
$(OBJDIR)\admcset.obj  \
$(OBJDIR)\admcconn.obj \
$(OBJDIR)\admccue.obj  \
$(OBJDIR)\admcsave.obj \
$(OBJDIR)\admccap.obj  \
$(OBJDIR)\strmsubs.obj \
$(OBJDIR)\admcopen.obj \
$(OBJDIR)\admcedit.obj \
$(OBJDIR)\admcpst.obj  \
$(OBJDIR)\admccopy.obj \
$(OBJDIR)\admcseek.obj \
$(OBJDIR)\admcclos.obj \
$(OBJDIR)\admcini.obj  \
$(OBJDIR)\admcini2.obj \
$(OBJDIR)\connect.obj  \
$(OBJDIR)\spicalls.obj

ALL_IPF =

#-------------------------------------------------------------------
#   This section lists all files to be built by the make.  The
#   makefile builds the executible as well as its associated help
#   file.
#-------------------------------------------------------------------
all: $(EXEDIR)\audiomct.dll

#-------------------------------------------------------------------
#   This section creates the command file used by the linker.  This
#   command file is recreated automatically every time you change
#   the object file list, linker flags, or library list.
#-------------------------------------------------------------------
#-------------------------------------------------------------------
#   Dependencies
#     This section lists all object files needed to be built for the
#     application, along with the files it is dependent upon (e.g.
#     its source and any header files).
#-------------------------------------------------------------------
$(OBJDIR)\audiomcd.res: audiomcd.rc $(HEADERS) prodinfo.bmp
                $(RC) $(RCFLAGS) $(@B).rc $@
                @del prodinfo.bmp

prodinfo.bmp :
           copy ..\..\prodinfo.bmp $@

$(EXEDIR)\audiomct.dll: $(OBJS) audiomct.def $(OBJDIR)\audiomcd.res
   -$(CREATE_PATH)
   $(LINK) $@ audiomct.def $(MTLIBS) $(MMLIBS) @<<$(OBJDIR)\audiomct.lnk
$(OBJS)
<<
   $(RC) -p -x $(OBJDIR)\audiomcd.res $@

audiomct.def: admct.mak
        @echo Creating file <<$@

 LIBRARY AUDIOMCT INITINSTANCE
 DATA MULTIPLE NONSHARED
 SEGMENTS
   SHR_SEG       CLASS 'FAR_DATA' SHARED
   SHR_SEG_CONST CLASS 'FAR_DATA' SHARED
   SHR_SEG_BSS   CLASS 'FAR_DATA' SHARED

 BASE = 0x1B2A0000
 EXPORTS   mciDriverEntry
<<keep

clean :
        @if exist *.obj del *.obj
        @if exist *.dll del *.dll
        @if exist *.exe del *.exe
