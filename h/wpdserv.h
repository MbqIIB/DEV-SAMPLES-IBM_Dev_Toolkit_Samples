
/*
 * This file was generated by the SOM Compiler.
 * FileName: G:\cwpsh\rel\os2c\include\base\os2\wpdserv.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.14
 *     SOM Emitter emith: 2.43
 */

/*
 *  Copyright (c) IBM Corporation  1994 - All Rights Reserved
 * 
 *  WPDSERV - Workplace Shell DSOM Server Class DLL
 */


#ifndef SOM_WPDServer_h
#define SOM_WPDServer_h


#include <som.h>

/*
 * -- This emitter treats Method Tokens as Thunks by default.
 * -- Use the sc modifier "nothunks" to change this default
 */
#undef somresolve_
#define somresolve_(obj,mToken) ((somMethodProc*)((void)obj, mToken))

/*
 * Define the class name as an object type
 */
#ifndef WPDServer
#define WPDServer SOMObject
#endif
#include <somdserv.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */
#ifndef Container
    #define Container SOMObject
#endif /* Container */
#ifndef SOMDObject
    #define SOMDObject SOMObject
#endif /* SOMDObject */
#ifndef WPObject
    #define WPObject SOMObject
#endif /* WPObject */

/*
 * End of bindings for IDL types.
 */

/*
 * Passthru lines: File: "C.h", "after"
 */
#define INCL_WIN
#include <os2.h>


#define WPDServer_MajorVersion 0
#define WPDServer_MinorVersion 0

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define WPDServerNewClass wpdservc
#pragma linkage(wpdservc, system)
#define WPDServerClassData wpdservd
#define WPDServerCClassData wpdservx
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define WPDServer_classObj WPDServerClassData.classObject
#define _WPDServer WPDServer_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK WPDServerNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(WPDServerNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct WPDServerClassDataStructure {
	SOMClass *classObject;
} SOMDLINK WPDServerClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct WPDServerCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK WPDServerCClassData;

/*
 * New and Renew macros for WPDServer
 */
#define WPDServerNew() \
   ( _WPDServer ? \
	_somNew(_WPDServer) \
	: ( WPDServerNewClass(\
		WPDServer_MajorVersion, \
		WPDServer_MinorVersion),\
	   _somNew(_WPDServer)))
#define WPDServerRenew(buf) \
   ( _WPDServer ? \
	_somRenew(_WPDServer, buf) \
	: ( WPDServerNewClass(\
		WPDServer_MajorVersion, \
		WPDServer_MinorVersion),\
	   _somRenew(_WPDServer, buf)))
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define WPDServer_somdRefFromSOMObj SOMDServer_somdRefFromSOMObj
#define WPDServer_somdSOMObjFromRef SOMDServer_somdSOMObjFromRef
#define WPDServer_somdDispatchMethod SOMDServer_somdDispatchMethod
#define WPDServer_somdCreateObj SOMDServer_somdCreateObj
#define WPDServer_somdDeleteObj SOMDServer_somdDeleteObj
#define WPDServer_somdGetClassObj SOMDServer_somdGetClassObj
#define WPDServer_somdObjReferencesCached SOMDServer_somdObjReferencesCached
#define WPDServer_somDefaultInit SOMObject_somDefaultInit
#define WPDServer_somDestruct SOMObject_somDestruct
#define WPDServer_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define WPDServer_somDefaultAssign SOMObject_somDefaultAssign
#define WPDServer_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define WPDServer_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define WPDServer_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define WPDServer_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define WPDServer_somDefaultVAssign SOMObject_somDefaultVAssign
#define WPDServer_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define WPDServer_somInit SOMObject_somInit
#define WPDServer_somFree SOMObject_somFree
#define WPDServer_somUninit SOMObject_somUninit
#define WPDServer_somGetClass SOMObject_somGetClass
#define WPDServer_somGetClassName SOMObject_somGetClassName
#define WPDServer_somGetSize SOMObject_somGetSize
#define WPDServer_somIsA SOMObject_somIsA
#define WPDServer_somIsInstanceOf SOMObject_somIsInstanceOf
#define WPDServer_somRespondsTo SOMObject_somRespondsTo
#define WPDServer_somDispatch SOMObject_somDispatch
#define WPDServer_somClassDispatch SOMObject_somClassDispatch
#define WPDServer_somCastObj SOMObject_somCastObj
#define WPDServer_somResetObj SOMObject_somResetObj
#define WPDServer_somDispatchV SOMObject_somDispatchV
#define WPDServer_somDispatchL SOMObject_somDispatchL
#define WPDServer_somDispatchA SOMObject_somDispatchA
#define WPDServer_somDispatchD SOMObject_somDispatchD
#define WPDServer_somPrintSelf SOMObject_somPrintSelf
#define WPDServer_somDumpSelf SOMObject_somDumpSelf
#define WPDServer_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_WPDServer_h */
