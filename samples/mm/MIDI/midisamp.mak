#===================================================================
#
#   MIDISAMP.MAK - MIDISAMP Make file
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

HEADERS =
#-------------------------------------------------------------------
#
#   A list of all of the object files
#
#-------------------------------------------------------------------

OBJS = $(OBJDIR)\midisamp.obj

#-------------------------------------------------------------------
#   This section lists all files to be built by make.  The
#   makefile builds the executable as well as its associated help
#   file.
#-------------------------------------------------------------------
all: $(EXEDIR)\midisamp.exe

MMLIBS = $(MMLIBS) rtmidi.lib

#-------------------------------------------------------------------
#   Dependencies
#     This section lists all object files needed to be built for the
#     application, along with the files it is dependent upon (e.g.
#     its source and any header files).
#-------------------------------------------------------------------

$(OBJDIR)\midisamp.obj: midisamp.c $(HEADERS)

$(EXEDIR)\midisamp.exe: $(OBJS) midisamp.def
   -$(CREATE_PATH)
   $(LINK) $@ midisamp.def $(MTLIBS) $(MMLIBS) @<<$(OBJDIR)\midisamp.lnk
$(OBJS)
<<

clean :
        @if exist *.obj del *.obj
        @if exist *.dll del *.dll
        @if exist *.exe del *.exe
