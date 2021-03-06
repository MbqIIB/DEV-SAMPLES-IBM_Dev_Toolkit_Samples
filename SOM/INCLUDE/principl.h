
/*
 * This file was generated by the SOM Compiler.
 * FileName: principl.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.17
 *     SOM Emitter emith: 2.47
 */

/*
 *    COMPONENT_NAME: somd
 * 
 *    ORIGINS: 27
 * 
 * 
 *    10H9767, 10H9769  (C) COPYRIGHT International Business Machines Corp. 1992,1994
 *    All Rights Reserved
 *    Licensed Materials - Property of IBM
 *    US Government Users Restricted Rights - Use, duplication or
 *    disclosure restricted by GSA ADP Schedule Contract with IBM Corp.
 * 
 */


#ifndef SOM_Principal_h
#define SOM_Principal_h


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
#ifndef Principal
#define Principal SOMObject
#endif
/*
 *    This is a class interface definition which defines the CORBA-defined
 *    Principal object. CORBA defines the Principal object but (at this
 *    time) does not define the interface to this object. The methods for
 *    this object are, therefore, subject to change in future implementations.
 * 
 *    The BOA guarantees that for every method invocation it will identify
 *    the principal on whose behalf the request is performed. An object
 *    implementation may request an instance of this class to determine
 *    if a method invocation has been made by someone with the appropriate
 *    authority. An instance of this class is returned when the following
 *    method is invoked on the BOA:
 * 
 *      get_principal(in BOA boaobj, in Environment lcl_ev,
 *                    in SOMDObject obj, in Environment req_ev);
 * 
 */
#include <somobj.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */

/*
 * End of bindings for IDL types.
 */

#define Principal_MajorVersion 1
#define Principal_MinorVersion 0

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define PrincipalNewClass c
#pragma linkage(c, system)
#define PrincipalClassData d
#define PrincipalCClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define Principal_classObj PrincipalClassData.classObject
#define _Principal Principal_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK PrincipalNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(PrincipalNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct PrincipalClassDataStructure {
	SOMClass *classObject;
	somMToken _set_userName;
	somMToken _get_userName;
	somMToken _set_hostName;
	somMToken _get_hostName;
} SOMDLINK PrincipalClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct PrincipalCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK PrincipalCClassData;

/*
 * New and Renew macros for Principal
 */
#define PrincipalNew() \
   ( _Principal ? \
	_somNew(_Principal) \
	: ( PrincipalNewClass(\
		Principal_MajorVersion, \
		Principal_MinorVersion),\
	   _somNew(_Principal)))
#define PrincipalRenew(buf) \
   ( _Principal ? \
	_somRenew(_Principal, buf) \
	: ( PrincipalNewClass(\
		Principal_MajorVersion, \
		Principal_MinorVersion),\
	   _somRenew(_Principal, buf)))

/*
 * Override method: somDefaultInit
 */
#define Principal_somDefaultInit(somSelf,ctrl) \
	SOMObject_somDefaultInit(somSelf,ctrl)

/*
 * Override method: somDestruct
 */
#define Principal_somDestruct(somSelf,doFree,ctrl) \
	SOMObject_somDestruct(somSelf,doFree,ctrl)

/*
 * New Method: _get_userName
 */
typedef string   SOMLINK somTP_Principal__get_userName(Principal *somSelf, Environment *ev);
#pragma linkage(somTP_Principal__get_userName, system)
typedef somTP_Principal__get_userName *somTD_Principal__get_userName;
/*
 *  User who made the request.
 */
#define somMD_Principal__get_userName "::Principal::_get_userName"
#define Principal__get_userName(somSelf,ev) \
    (SOM_Resolve(somSelf, Principal, _get_userName) \
	(somSelf,ev))
#ifndef SOMGD_get_userName
    #if (defined(_get_userName) || defined(__get_userName))
        #undef _get_userName
        #undef __get_userName
        #define SOMGD_get_userName 1
    #else
        #define __get_userName Principal__get_userName
    #endif /* __get_userName */
#endif /* SOMGD_get_userName */

/*
 * New Method: _set_userName
 */
typedef void   SOMLINK somTP_Principal__set_userName(Principal *somSelf, Environment *ev, 
		string userName);
#pragma linkage(somTP_Principal__set_userName, system)
typedef somTP_Principal__set_userName *somTD_Principal__set_userName;
/*
 *  User who made the request.
 */
#define somMD_Principal__set_userName "::Principal::_set_userName"
#define Principal__set_userName(somSelf,ev,userName) \
    (SOM_Resolve(somSelf, Principal, _set_userName) \
	(somSelf,ev,userName))
#ifndef SOMGD_set_userName
    #if (defined(_set_userName) || defined(__set_userName))
        #undef _set_userName
        #undef __set_userName
        #define SOMGD_set_userName 1
    #else
        #define __set_userName Principal__set_userName
    #endif /* __set_userName */
#endif /* SOMGD_set_userName */

/*
 * New Method: _get_hostName
 */
typedef string   SOMLINK somTP_Principal__get_hostName(Principal *somSelf, Environment *ev);
#pragma linkage(somTP_Principal__get_hostName, system)
typedef somTP_Principal__get_hostName *somTD_Principal__get_hostName;
/*
 *  Host from which the request was made.
 */
#define somMD_Principal__get_hostName "::Principal::_get_hostName"
#define Principal__get_hostName(somSelf,ev) \
    (SOM_Resolve(somSelf, Principal, _get_hostName) \
	(somSelf,ev))
#ifndef SOMGD_get_hostName
    #if (defined(_get_hostName) || defined(__get_hostName))
        #undef _get_hostName
        #undef __get_hostName
        #define SOMGD_get_hostName 1
    #else
        #define __get_hostName Principal__get_hostName
    #endif /* __get_hostName */
#endif /* SOMGD_get_hostName */

/*
 * New Method: _set_hostName
 */
typedef void   SOMLINK somTP_Principal__set_hostName(Principal *somSelf, Environment *ev, 
		string hostName);
#pragma linkage(somTP_Principal__set_hostName, system)
typedef somTP_Principal__set_hostName *somTD_Principal__set_hostName;
/*
 *  Host from which the request was made.
 */
#define somMD_Principal__set_hostName "::Principal::_set_hostName"
#define Principal__set_hostName(somSelf,ev,hostName) \
    (SOM_Resolve(somSelf, Principal, _set_hostName) \
	(somSelf,ev,hostName))
#ifndef SOMGD_set_hostName
    #if (defined(_set_hostName) || defined(__set_hostName))
        #undef _set_hostName
        #undef __set_hostName
        #define SOMGD_set_hostName 1
    #else
        #define __set_hostName Principal__set_hostName
    #endif /* __set_hostName */
#endif /* SOMGD_set_hostName */
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define Principal_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define Principal_somDefaultAssign SOMObject_somDefaultAssign
#define Principal_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define Principal_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define Principal_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define Principal_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define Principal_somDefaultVAssign SOMObject_somDefaultVAssign
#define Principal_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define Principal_somInit SOMObject_somInit
#define Principal_somFree SOMObject_somFree
#define Principal_somUninit SOMObject_somUninit
#define Principal_somGetClass SOMObject_somGetClass
#define Principal_somGetClassName SOMObject_somGetClassName
#define Principal_somGetSize SOMObject_somGetSize
#define Principal_somIsA SOMObject_somIsA
#define Principal_somIsInstanceOf SOMObject_somIsInstanceOf
#define Principal_somRespondsTo SOMObject_somRespondsTo
#define Principal_somDispatch SOMObject_somDispatch
#define Principal_somClassDispatch SOMObject_somClassDispatch
#define Principal_somCastObj SOMObject_somCastObj
#define Principal_somResetObj SOMObject_somResetObj
#define Principal_somDispatchV SOMObject_somDispatchV
#define Principal_somDispatchL SOMObject_somDispatchL
#define Principal_somDispatchA SOMObject_somDispatchA
#define Principal_somDispatchD SOMObject_somDispatchD
#define Principal_somPrintSelf SOMObject_somPrintSelf
#define Principal_somDumpSelf SOMObject_somDumpSelf
#define Principal_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_Principal_h */
