/*���������������������������������������������������������������ķ*/
/*� File:         MAIN.C                                          �*/
/*� Date Created: 02/15/95                                        �*/
/*���������������������������������������������������������������Ľ*/

/*���������������������������������������������������������������ķ*/
/*� Description:                                                  �*/
/*�   This is "main" wrapper for a DAPIE-Based app.  It initial-  �*/
/*� izes the AWE environment, call the WinMain function, and upon �*/
/*� completion, calls the WinTerm function to shutdown the AWE    �*/
/*� environment.                                                  �*/
/*�                                                               �*/
/*���������������������������������������������������������������Ľ*/

/* Include the windows header files ... */
#include <os2win.h>

int main(int argc, char *argv[], char *envp[])
{
   /* Now call WinRun to run the application ... */
   return WinCallWinMain( argc, argv, &WinMain, SW_SHOWNORMAL );
}
