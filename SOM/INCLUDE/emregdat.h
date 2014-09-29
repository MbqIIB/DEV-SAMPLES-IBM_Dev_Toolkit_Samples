
/*
 * This file was generated by the SOM Compiler.
 * FileName: emregdat.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.17
 *     SOM Emitter emith: 2.47
 */

/*
 *    COMPONENT_NAME: somu
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


#ifndef SOM_SOMEEMRegisterData_h
#define SOM_SOMEEMRegisterData_h


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
#ifndef SOMEEMRegisterData
#define SOMEEMRegisterData SOMObject
#endif
/*
 *  SOMEEMRegisterData is the class utilized for holding registration
 *  data for events types to be registered with Event Management Framework(EMan)
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

#define SOMEEMRegisterData_MajorVersion 2
#define SOMEEMRegisterData_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define SOMEEMRegisterDataNewClass c
#pragma linkage(c, system)
#define SOMEEMRegisterDataClassData d
#define SOMEEMRegisterDataCClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define SOMEEMRegisterData_classObj SOMEEMRegisterDataClassData.classObject
#define _SOMEEMRegisterData SOMEEMRegisterData_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK SOMEEMRegisterDataNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(SOMEEMRegisterDataNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct SOMEEMRegisterDataClassDataStructure {
	SOMClass *classObject;
	somMToken someClearRegData;
	somMToken someSetRegDataClientType;
	somMToken someSetRegDataEventMask;
	somMToken someSetRegDataSink;
	somMToken someSetRegDataSinkMask;
	somMToken someSetRegDataTimerCount;
	somMToken someSetRegDataTimerInterval;
} SOMDLINK SOMEEMRegisterDataClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct SOMEEMRegisterDataCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
	somMethodProc *someSetRegDataEventMask;
} SOMDLINK SOMEEMRegisterDataCClassData;

/*
 * New and Renew macros for SOMEEMRegisterData
 */
#define SOMEEMRegisterDataNew() \
   ( _SOMEEMRegisterData ? \
	_somNew(_SOMEEMRegisterData) \
	: ( SOMEEMRegisterDataNewClass(\
		SOMEEMRegisterData_MajorVersion, \
		SOMEEMRegisterData_MinorVersion),\
	   _somNew(_SOMEEMRegisterData)))
#define SOMEEMRegisterDataRenew(buf) \
   ( _SOMEEMRegisterData ? \
	_somRenew(_SOMEEMRegisterData, buf) \
	: ( SOMEEMRegisterDataNewClass(\
		SOMEEMRegisterData_MajorVersion, \
		SOMEEMRegisterData_MinorVersion),\
	   _somRenew(_SOMEEMRegisterData, buf)))

/*
 * Override method: somInit
 */
#define SOMEEMRegisterData_somInit(somSelf) \
	SOMObject_somInit(somSelf)

/*
 * Override method: somUninit
 */
#define SOMEEMRegisterData_somUninit(somSelf) \
	SOMObject_somUninit(somSelf)

/*
 * New Method: someClearRegData
 */
typedef void   SOMLINK somTP_SOMEEMRegisterData_someClearRegData(SOMEEMRegisterData *somSelf, Environment *ev);
#pragma linkage(somTP_SOMEEMRegisterData_someClearRegData, system)
typedef somTP_SOMEEMRegisterData_someClearRegData *somTD_SOMEEMRegisterData_someClearRegData;
/*
 *  Clears the registration data
 */
#define somMD_SOMEEMRegisterData_someClearRegData "::SOMEEMRegisterData::someClearRegData"
#define SOMEEMRegisterData_someClearRegData(somSelf,ev) \
    (SOM_Resolve(somSelf, SOMEEMRegisterData, someClearRegData) \
	(somSelf,ev))
#ifndef SOMGD_someClearRegData
    #if (defined(_someClearRegData) || defined(__someClearRegData))
        #undef _someClearRegData
        #undef __someClearRegData
        #define SOMGD_someClearRegData 1
    #else
        #define _someClearRegData SOMEEMRegisterData_someClearRegData
    #endif /* _someClearRegData */
#endif /* SOMGD_someClearRegData */

/*
 * New Method: someSetRegDataClientType
 */
typedef void   SOMLINK somTP_SOMEEMRegisterData_someSetRegDataClientType(SOMEEMRegisterData *somSelf, Environment *ev, 
		string clientType);
#pragma linkage(somTP_SOMEEMRegisterData_someSetRegDataClientType, system)
typedef somTP_SOMEEMRegisterData_someSetRegDataClientType *somTD_SOMEEMRegisterData_someSetRegDataClientType;
/*
 *  Sets the client event type within the registration data
 */
#define somMD_SOMEEMRegisterData_someSetRegDataClientType "::SOMEEMRegisterData::someSetRegDataClientType"
#define SOMEEMRegisterData_someSetRegDataClientType(somSelf,ev,clientType) \
    (SOM_Resolve(somSelf, SOMEEMRegisterData, someSetRegDataClientType) \
	(somSelf,ev,clientType))
#ifndef SOMGD_someSetRegDataClientType
    #if (defined(_someSetRegDataClientType) || defined(__someSetRegDataClientType))
        #undef _someSetRegDataClientType
        #undef __someSetRegDataClientType
        #define SOMGD_someSetRegDataClientType 1
    #else
        #define _someSetRegDataClientType SOMEEMRegisterData_someSetRegDataClientType
    #endif /* _someSetRegDataClientType */
#endif /* SOMGD_someSetRegDataClientType */

/*
 * New Method: someSetRegDataEventMask
 */
typedef void   SOMLINK somTP_SOMEEMRegisterData_someSetRegDataEventMask(SOMEEMRegisterData *somSelf, Environment *ev, 
		long eventType, 
		va_list ap);
#pragma linkage(somTP_SOMEEMRegisterData_someSetRegDataEventMask, system)
typedef somTP_SOMEEMRegisterData_someSetRegDataEventMask *somTD_SOMEEMRegisterData_someSetRegDataEventMask;
/*
 *  Sets the generic event mask within the registration data, using NULL terminated
 *  event type list. Event types are defined in eventmsk.h
 */
#define somMD_SOMEEMRegisterData_someSetRegDataEventMask "::SOMEEMRegisterData::someSetRegDataEventMask"
#define SOMEEMRegisterData_someSetRegDataEventMask(somSelf,ev,eventType,ap) \
    (SOM_Resolve(somSelf, SOMEEMRegisterData, someSetRegDataEventMask) \
	(somSelf,ev,eventType,ap))

/*
 * legacy support for non-system-linkage vararg stub
 * use -mnolegacy to avoid generating this stub.
 */
#ifdef SOMEEMRegisterData_VA_EXTERN
    SOMEXTERN
#else
    static
#endif
void   va_SOMEEMRegisterData_someSetRegDataEventMask(SOMEEMRegisterData *somSelf, Environment *ev,
		long eventType,
		...)
#if (defined(SOMEEMRegisterData_VA_STUBS)||!defined(SOMEEMRegisterData_VA_EXTERN))
{
    va_list ap;
    va_start(ap, eventType);
    SOMEEMRegisterData_someSetRegDataEventMask(somSelf,ev,eventType,ap);
    va_end(ap);
}    
#else
    ;
#endif

/*
 * normal vararg stubs
 */
#ifndef SOMGD_va_someSetRegDataEventMask
   #ifdef va_someSetRegDataEventMask
      #undef va_someSetRegDataEventMask
      #define SOMGD_va_someSetRegDataEventMask 1
   #else
      #define va_someSetRegDataEventMask somva_SOMEEMRegisterData_someSetRegDataEventMask
   #endif /* va_someSetRegDataEventMask */
#endif /* SOMGD_va_someSetRegDataEventMask */
#ifndef SOMGD_someSetRegDataEventMask
    #if (defined(_someSetRegDataEventMask) || defined(__someSetRegDataEventMask))
        #undef _someSetRegDataEventMask
        #undef __someSetRegDataEventMask
        #define SOMGD_someSetRegDataEventMask 1
    #else
        #define _someSetRegDataEventMask somva_SOMEEMRegisterData_someSetRegDataEventMask
    #endif /* _someSetRegDataEventMask */
#endif /* SOMGD_someSetRegDataEventMask */
#ifdef SOMEEMRegisterData_VA_EXTERN
#pragma linkage(somva_SOMEEMRegisterData_someSetRegDataEventMask, system)
    SOMEXTERN
#else
    static
#endif
void  SOMLINK somva_SOMEEMRegisterData_someSetRegDataEventMask(SOMEEMRegisterData *somSelf, Environment *ev,
		long eventType,
		...)
#if (defined(SOMEEMRegisterData_VA_STUBS)||!defined(SOMEEMRegisterData_VA_EXTERN))
{
    va_list ap;
    va_start(ap, eventType);
    SOMEEMRegisterData_someSetRegDataEventMask(somSelf,ev,eventType,ap);
    va_end(ap);
}    
#else
    ;
#endif

/*
 * New Method: someSetRegDataSink
 */
typedef void   SOMLINK somTP_SOMEEMRegisterData_someSetRegDataSink(SOMEEMRegisterData *somSelf, Environment *ev, 
		long sink);
#pragma linkage(somTP_SOMEEMRegisterData_someSetRegDataSink, system)
typedef somTP_SOMEEMRegisterData_someSetRegDataSink *somTD_SOMEEMRegisterData_someSetRegDataSink;
/*
 *  Sets the sink, or source i/o file descriptor, within the registration data
 */
#define somMD_SOMEEMRegisterData_someSetRegDataSink "::SOMEEMRegisterData::someSetRegDataSink"
#define SOMEEMRegisterData_someSetRegDataSink(somSelf,ev,sink) \
    (SOM_Resolve(somSelf, SOMEEMRegisterData, someSetRegDataSink) \
	(somSelf,ev,sink))
#ifndef SOMGD_someSetRegDataSink
    #if (defined(_someSetRegDataSink) || defined(__someSetRegDataSink))
        #undef _someSetRegDataSink
        #undef __someSetRegDataSink
        #define SOMGD_someSetRegDataSink 1
    #else
        #define _someSetRegDataSink SOMEEMRegisterData_someSetRegDataSink
    #endif /* _someSetRegDataSink */
#endif /* SOMGD_someSetRegDataSink */

/*
 * New Method: someSetRegDataSinkMask
 */
typedef void   SOMLINK somTP_SOMEEMRegisterData_someSetRegDataSinkMask(SOMEEMRegisterData *somSelf, Environment *ev, 
		unsigned long sinkMask);
#pragma linkage(somTP_SOMEEMRegisterData_someSetRegDataSinkMask, system)
typedef somTP_SOMEEMRegisterData_someSetRegDataSinkMask *somTD_SOMEEMRegisterData_someSetRegDataSinkMask;
/*
 *  Sets the sink mask within the registration data
 */
#define somMD_SOMEEMRegisterData_someSetRegDataSinkMask "::SOMEEMRegisterData::someSetRegDataSinkMask"
#define SOMEEMRegisterData_someSetRegDataSinkMask(somSelf,ev,sinkMask) \
    (SOM_Resolve(somSelf, SOMEEMRegisterData, someSetRegDataSinkMask) \
	(somSelf,ev,sinkMask))
#ifndef SOMGD_someSetRegDataSinkMask
    #if (defined(_someSetRegDataSinkMask) || defined(__someSetRegDataSinkMask))
        #undef _someSetRegDataSinkMask
        #undef __someSetRegDataSinkMask
        #define SOMGD_someSetRegDataSinkMask 1
    #else
        #define _someSetRegDataSinkMask SOMEEMRegisterData_someSetRegDataSinkMask
    #endif /* _someSetRegDataSinkMask */
#endif /* SOMGD_someSetRegDataSinkMask */

/*
 * New Method: someSetRegDataTimerCount
 */
typedef void   SOMLINK somTP_SOMEEMRegisterData_someSetRegDataTimerCount(SOMEEMRegisterData *somSelf, Environment *ev, 
		long count);
#pragma linkage(somTP_SOMEEMRegisterData_someSetRegDataTimerCount, system)
typedef somTP_SOMEEMRegisterData_someSetRegDataTimerCount *somTD_SOMEEMRegisterData_someSetRegDataTimerCount;
/*
 *  Sets the number of times the timer will trigger, within the registration data.
 *  The default behavior is for the timer to trigger indefinitely.
 */
#define somMD_SOMEEMRegisterData_someSetRegDataTimerCount "::SOMEEMRegisterData::someSetRegDataTimerCount"
#define SOMEEMRegisterData_someSetRegDataTimerCount(somSelf,ev,count) \
    (SOM_Resolve(somSelf, SOMEEMRegisterData, someSetRegDataTimerCount) \
	(somSelf,ev,count))
#ifndef SOMGD_someSetRegDataTimerCount
    #if (defined(_someSetRegDataTimerCount) || defined(__someSetRegDataTimerCount))
        #undef _someSetRegDataTimerCount
        #undef __someSetRegDataTimerCount
        #define SOMGD_someSetRegDataTimerCount 1
    #else
        #define _someSetRegDataTimerCount SOMEEMRegisterData_someSetRegDataTimerCount
    #endif /* _someSetRegDataTimerCount */
#endif /* SOMGD_someSetRegDataTimerCount */

/*
 * New Method: someSetRegDataTimerInterval
 */
typedef void   SOMLINK somTP_SOMEEMRegisterData_someSetRegDataTimerInterval(SOMEEMRegisterData *somSelf, Environment *ev, 
		long interval);
#pragma linkage(somTP_SOMEEMRegisterData_someSetRegDataTimerInterval, system)
typedef somTP_SOMEEMRegisterData_someSetRegDataTimerInterval *somTD_SOMEEMRegisterData_someSetRegDataTimerInterval;
/*
 *  Sets the timer interval within the registration data.
 *  Interval specification is in milliseconds
 */
#define somMD_SOMEEMRegisterData_someSetRegDataTimerInterval "::SOMEEMRegisterData::someSetRegDataTimerInterval"
#define SOMEEMRegisterData_someSetRegDataTimerInterval(somSelf,ev,interval) \
    (SOM_Resolve(somSelf, SOMEEMRegisterData, someSetRegDataTimerInterval) \
	(somSelf,ev,interval))
#ifndef SOMGD_someSetRegDataTimerInterval
    #if (defined(_someSetRegDataTimerInterval) || defined(__someSetRegDataTimerInterval))
        #undef _someSetRegDataTimerInterval
        #undef __someSetRegDataTimerInterval
        #define SOMGD_someSetRegDataTimerInterval 1
    #else
        #define _someSetRegDataTimerInterval SOMEEMRegisterData_someSetRegDataTimerInterval
    #endif /* _someSetRegDataTimerInterval */
#endif /* SOMGD_someSetRegDataTimerInterval */
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define SOMEEMRegisterData_somDefaultInit SOMObject_somDefaultInit
#define SOMEEMRegisterData_somDestruct SOMObject_somDestruct
#define SOMEEMRegisterData_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define SOMEEMRegisterData_somDefaultAssign SOMObject_somDefaultAssign
#define SOMEEMRegisterData_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define SOMEEMRegisterData_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define SOMEEMRegisterData_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define SOMEEMRegisterData_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define SOMEEMRegisterData_somDefaultVAssign SOMObject_somDefaultVAssign
#define SOMEEMRegisterData_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define SOMEEMRegisterData_somFree SOMObject_somFree
#define SOMEEMRegisterData_somGetClass SOMObject_somGetClass
#define SOMEEMRegisterData_somGetClassName SOMObject_somGetClassName
#define SOMEEMRegisterData_somGetSize SOMObject_somGetSize
#define SOMEEMRegisterData_somIsA SOMObject_somIsA
#define SOMEEMRegisterData_somIsInstanceOf SOMObject_somIsInstanceOf
#define SOMEEMRegisterData_somRespondsTo SOMObject_somRespondsTo
#define SOMEEMRegisterData_somDispatch SOMObject_somDispatch
#define SOMEEMRegisterData_somClassDispatch SOMObject_somClassDispatch
#define SOMEEMRegisterData_somCastObj SOMObject_somCastObj
#define SOMEEMRegisterData_somResetObj SOMObject_somResetObj
#define SOMEEMRegisterData_somDispatchV SOMObject_somDispatchV
#define SOMEEMRegisterData_somDispatchL SOMObject_somDispatchL
#define SOMEEMRegisterData_somDispatchA SOMObject_somDispatchA
#define SOMEEMRegisterData_somDispatchD SOMObject_somDispatchD
#define SOMEEMRegisterData_somPrintSelf SOMObject_somPrintSelf
#define SOMEEMRegisterData_somDumpSelf SOMObject_somDumpSelf
#define SOMEEMRegisterData_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_SOMEEMRegisterData_h */