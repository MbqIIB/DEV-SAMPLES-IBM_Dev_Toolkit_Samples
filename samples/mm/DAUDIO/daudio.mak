#===================================================================
#
#   DAUDIO.MAK - DAUDIO Make file
#   Copyright  IBM Corporation 1996
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

HEADERS = daudio.h
#-------------------------------------------------------------------
#
#   A list of all of the object files
#
#-------------------------------------------------------------------

OBJS = $(OBJDIR)\daudio.obj

#-------------------------------------------------------------------
#   This section lists all files to be built by make.  The
#   makefile builds the executable as well as its associated help
#   file.
#-------------------------------------------------------------------
all: $(EXEDIR)\daudio.exe

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
$(OBJDIR)\daudio.res: daudio.rc $(HEADERS) daudio.ico daudio.dlg prodinfo.bmp
                $(RC) $(RCFLAGS) $(@B).rc $@
                @del prodinfo.bmp

prodinfo.bmp :
           copy ..\..\prodinfo.bmp $@

$(OBJDIR)\daudio.obj: daudio.c $(HEADERS)

$(EXEDIR)\daudio.exe: $(OBJS) daudio.def $(OBJDIR)\daudio.res
   -$(CREATE_PATH)
   $(LINK) $@ /B"/ST:20000 /NOFREE" daudio.def $(MTLIBS) $(MMLIBS) @<<$(OBJDIR)\daudio.lnk
$(OBJS)
<<
   $(RC) -p -x $(OBJDIR)\daudio.res $@

clean :
        @if exist *.obj del *.obj
        @if exist *.dll del *.dll
        @if exist *.exe del *.exe
