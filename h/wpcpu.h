
/*
 * This file was generated by the SOM Compiler.
 * FileName: G:\cwpsh\rel\os2c\include\base\os2\wpcpu.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.14
 *     SOM Emitter emith: 2.43
 */

/*
 *   Module Header
 * 
 *   Module Name: WPCPU
 * 
 *   OS/2 Presentation Manager Workplace class definitions
 * 
 *   Copyright (c) International Business Machines Corporation 1991, 1992
 * 
 */


#ifndef SOM_WPDevCPU_h
#define SOM_WPDevCPU_h


/*
 * Passthru lines: File: "C.h", "before"
 */



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
#ifndef WPDevCPU
#define WPDevCPU SOMObject
#endif
#include <wpdevice.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */
#ifndef WPFolder
    #define WPFolder SOMObject
#endif /* WPFolder */
#ifndef M_WPObject
    #define M_WPObject SOMObject
#endif /* M_WPObject */
#ifndef WPObject
    #define WPObject SOMObject
#endif /* WPObject */
#ifndef WPImageFile
    #define WPImageFile SOMObject
#endif /* WPImageFile */
#ifndef M_WPTransient
    #define M_WPTransient SOMObject
#endif /* M_WPTransient */
#ifndef M_WPDevice
    #define M_WPDevice SOMObject
#endif /* M_WPDevice */
#ifndef M_WPDevCPU
    #define M_WPDevCPU SOMObject
#endif /* M_WPDevCPU */

/*
 * End of bindings for IDL types.
 */

#define WPDevCPU_MajorVersion 1
#define WPDevCPU_MinorVersion 2

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define WPDevCPUNewClass wpcpuc
#pragma linkage(wpcpuc, system)
#define WPDevCPUClassData wpcpud
#define WPDevCPUCClassData wpcpux
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */

/*
 * Include the meta class file
 */
#include <wpcpu.h>
/*--------------Migration------------*/
#define WPDevCPU_classObj WPDevCPUClassData.classObject
#define _WPDevCPU WPDevCPU_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK WPDevCPUNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(WPDevCPUNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct WPDevCPUClassDataStructure {
	SOMClass *classObject;
} SOMDLINK WPDevCPUClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct WPDevCPUCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK WPDevCPUCClassData;

/*
 * New and Renew macros for WPDevCPU
 */
#define WPDevCPUNew() \
   ( _WPDevCPU ? \
	_somNew(_WPDevCPU) \
	: ( WPDevCPUNewClass(\
		WPDevCPU_MajorVersion, \
		WPDevCPU_MinorVersion),\
	   _somNew(_WPDevCPU)))
#define WPDevCPURenew(buf) \
   ( _WPDevCPU ? \
	_somRenew(_WPDevCPU, buf) \
	: ( WPDevCPUNewClass(\
		WPDevCPU_MajorVersion, \
		WPDevCPU_MinorVersion),\
	   _somRenew(_WPDevCPU, buf)))
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define WPDevCPU_wpAddDeviceDevice1Page WPDevice_wpAddDeviceDevice1Page
#define WPDevCPU_wpAddDeviceDevice2Page WPDevice_wpAddDeviceDevice2Page
#define WPDevCPU_wpAddDeviceDMA1Page WPDevice_wpAddDeviceDMA1Page
#define WPDevCPU_wpAddDeviceIRQ1Page WPDevice_wpAddDeviceIRQ1Page
#define WPDevCPU_wpAddDeviceMemory1Page WPDevice_wpAddDeviceMemory1Page
#define WPDevCPU_wpAddDeviceIO1Page WPDevice_wpAddDeviceIO1Page
#define WPDevCPU_wpAddSettingsPages WPObject_wpAddSettingsPages
#define WPDevCPU_wpInitData WPObject_wpInitData
#define WPDevCPU_wpModifyPopupMenu WPObject_wpModifyPopupMenu
#define WPDevCPU_wpQueryDetailsData WPObject_wpQueryDetailsData
#define WPDevCPU_wpRestoreState WPObject_wpRestoreState
#define WPDevCPU_wpSaveState WPObject_wpSaveState
#define WPDevCPU_wpSetup WPObject_wpSetup
#define WPDevCPU_wpUnInitData WPObject_wpUnInitData
#define WPDevCPU_wpCnrInsertObject WPObject_wpCnrInsertObject
#define WPDevCPU_wpQueryHandle WPObject_wpQueryHandle
#define WPDevCPU_wpCopyObject WPObject_wpCopyObject
#define WPDevCPU_somDefaultInit SOMObject_somDefaultInit
#define WPDevCPU_somDestruct SOMObject_somDestruct
#define WPDevCPU_wpQueryIcon WPObject_wpQueryIcon
#define WPDevCPU_wpSaveImmediate WPObject_wpSaveImmediate
#define WPDevCPU_wpIdentify WPObject_wpIdentify
#define WPDevCPU_wpAddObjectGeneralPage WPObject_wpAddObjectGeneralPage
#define WPDevCPU_wpAddObjectGeneralPage2 WPObject_wpAddObjectGeneralPage2
#define WPDevCPU_wpAddObjectWindowPage WPObject_wpAddObjectWindowPage
#define WPDevCPU_wpAddToObjUseList WPObject_wpAddToObjUseList
#define WPDevCPU_wpAllocMem WPObject_wpAllocMem
#define WPDevCPU_wpAppendObject WPObject_wpAppendObject
#define WPDevCPU_wpAssertObjectMutexSem WPObject_wpAssertObjectMutexSem
#define WPDevCPU_wpClose WPObject_wpClose
#define WPDevCPU_wpCnrRemoveObject WPObject_wpCnrRemoveObject
#define WPDevCPU_wpCnrSetEmphasis WPObject_wpCnrSetEmphasis
#define WPDevCPU_wpConfirmDelete WPObject_wpConfirmDelete
#define WPDevCPU_wpConfirmObjectTitle WPObject_wpConfirmObjectTitle
#define WPDevCPU_wpCopiedFromTemplate WPObject_wpCopiedFromTemplate
#define WPDevCPU_wpCreateAnother WPObject_wpCreateAnother
#define WPDevCPU_wpCreateFromTemplate WPObject_wpCreateFromTemplate
#define WPDevCPU_wpCreateShadowObject WPObject_wpCreateShadowObject
#define WPDevCPU_wpDelete WPObject_wpDelete
#define WPDevCPU_wpDeleteFromObjUseList WPObject_wpDeleteFromObjUseList
#define WPDevCPU_wpDisplayHelp WPObject_wpDisplayHelp
#define WPDevCPU_wpDisplayMenu WPObject_wpDisplayMenu
#define WPDevCPU_wpDoesObjectMatch WPObject_wpDoesObjectMatch
#define WPDevCPU_wpDraggedOverObject WPObject_wpDraggedOverObject
#define WPDevCPU_wpDragOver WPObject_wpDragOver
#define WPDevCPU_wpDrop WPObject_wpDrop
#define WPDevCPU_wpDroppedOnObject WPObject_wpDroppedOnObject
#define WPDevCPU_wpEndConversation WPObject_wpEndConversation
#define WPDevCPU_wpFilterPopupMenu WPObject_wpFilterPopupMenu
#define WPDevCPU_wpFilterMenu WPObject_wpFilterMenu
#define WPDevCPU_wpFindUseItem WPObject_wpFindUseItem
#define WPDevCPU_wpFormatDragItem WPObject_wpFormatDragItem
#define WPDevCPU_wpFree WPObject_wpFree
#define WPDevCPU_wpFreeMem WPObject_wpFreeMem
#define WPDevCPU_wpHide WPObject_wpHide
#define WPDevCPU_wpInsertPopupMenuItems WPObject_wpInsertPopupMenuItems
#define WPDevCPU_wpInsertMenuItems WPObject_wpInsertMenuItems
#define WPDevCPU_wpInsertSettingsPage WPObject_wpInsertSettingsPage
#define WPDevCPU_wpMenuItemHelpSelected WPObject_wpMenuItemHelpSelected
#define WPDevCPU_wpMenuItemSelected WPObject_wpMenuItemSelected
#define WPDevCPU_wpModifyMenu WPObject_wpModifyMenu
#define WPDevCPU_wpMoveObject WPObject_wpMoveObject
#define WPDevCPU_wpOpen WPObject_wpOpen
#define WPDevCPU_wpPrintObject WPObject_wpPrintObject
#define WPDevCPU_wpQueryConcurrentView WPObject_wpQueryConcurrentView
#define WPDevCPU_wpQueryButtonAppearance WPObject_wpQueryButtonAppearance
#define WPDevCPU_wpQueryConfirmations WPObject_wpQueryConfirmations
#define WPDevCPU_wpQueryDefaultHelp WPObject_wpQueryDefaultHelp
#define WPDevCPU_wpQueryDefaultView WPObject_wpQueryDefaultView
#define WPDevCPU_wpQueryError WPObject_wpQueryError
#define WPDevCPU_wpSetFolder WPObject_wpSetFolder
#define WPDevCPU_wpQueryFolder WPObject_wpQueryFolder
#define WPDevCPU_wpQueryIconData WPObject_wpQueryIconData
#define WPDevCPU_wpQueryMinWindow WPObject_wpQueryMinWindow
#define WPDevCPU_wpQueryNameClashOptions WPObject_wpQueryNameClashOptions
#define WPDevCPU_wpQueryStyle WPObject_wpQueryStyle
#define WPDevCPU_wpSetTaskRec WPObject_wpSetTaskRec
#define WPDevCPU_wpFindTaskRec WPObject_wpFindTaskRec
#define WPDevCPU_wpQueryTitle WPObject_wpQueryTitle
#define WPDevCPU_wpRegisterView WPObject_wpRegisterView
#define WPDevCPU_wpReleaseObjectMutexSem WPObject_wpReleaseObjectMutexSem
#define WPDevCPU_wpRender WPObject_wpRender
#define WPDevCPU_wpRenderComplete WPObject_wpRenderComplete
#define WPDevCPU_wpReplaceObject WPObject_wpReplaceObject
#define WPDevCPU_wpRequestObjectMutexSem WPObject_wpRequestObjectMutexSem
#define WPDevCPU_wpRestore WPObject_wpRestore
#define WPDevCPU_wpRestoreData WPObject_wpRestoreData
#define WPDevCPU_wpRestoreLong WPObject_wpRestoreLong
#define WPDevCPU_wpRestoreString WPObject_wpRestoreString
#define WPDevCPU_wpSaveData WPObject_wpSaveData
#define WPDevCPU_wpSaveDeferred WPObject_wpSaveDeferred
#define WPDevCPU_wpSaveLong WPObject_wpSaveLong
#define WPDevCPU_wpSaveString WPObject_wpSaveString
#define WPDevCPU_wpScanSetupString WPObject_wpScanSetupString
#define WPDevCPU_wpSetConcurrentView WPObject_wpSetConcurrentView
#define WPDevCPU_wpSetButtonAppearance WPObject_wpSetButtonAppearance
#define WPDevCPU_wpSetDefaultHelp WPObject_wpSetDefaultHelp
#define WPDevCPU_wpSetDefaultView WPObject_wpSetDefaultView
#define WPDevCPU_wpSetError WPObject_wpSetError
#define WPDevCPU_wpQueryScreenGroupID WPObject_wpQueryScreenGroupID
#define WPDevCPU_wpSetupOnce WPObject_wpSetupOnce
#define WPDevCPU_wpSetIcon WPObject_wpSetIcon
#define WPDevCPU_wpSetIconData WPObject_wpSetIconData
#define WPDevCPU_wpSetMinWindow WPObject_wpSetMinWindow
#define WPDevCPU_wpModifyStyle WPObject_wpModifyStyle
#define WPDevCPU_wpSetTitle WPObject_wpSetTitle
#define WPDevCPU_wpSwitchTo WPObject_wpSwitchTo
#define WPDevCPU_wpViewObject WPObject_wpViewObject
#define WPDevCPU_wpQueryTrueStyle WPObject_wpQueryTrueStyle
#define WPDevCPU_wpUnlockObject WPObject_wpUnlockObject
#define WPDevCPU_wpObjectReady WPObject_wpObjectReady
#define WPDevCPU_wpIsObjectInitialized WPObject_wpIsObjectInitialized
#define WPDevCPU_wpCreateShadowObjectExt WPObject_wpCreateShadowObjectExt
#define WPDevCPU_wpCnrDeleteUseItem WPObject_wpCnrDeleteUseItem
#define WPDevCPU_wpIsDeleteable WPObject_wpIsDeleteable
#define WPDevCPU_wpQueryCoreRecord WPObject_wpQueryCoreRecord
#define WPDevCPU_wpSetObjectID WPObject_wpSetObjectID
#define WPDevCPU_wpQueryObjectID WPObject_wpQueryObjectID
#define WPDevCPU_wpSetDefaultIconPos WPObject_wpSetDefaultIconPos
#define WPDevCPU_wpQueryDefaultIconPos WPObject_wpQueryDefaultIconPos
#define WPDevCPU_wpCnrRefreshDetails WPObject_wpCnrRefreshDetails
#define WPDevCPU_wpFindViewItem WPObject_wpFindViewItem
#define WPDevCPU_wpLockObject WPObject_wpLockObject
#define WPDevCPU_wpIsLocked WPObject_wpIsLocked
#define WPDevCPU_wpQueryContainerFlagPtr WPObject_wpQueryContainerFlagPtr
#define WPDevCPU_wpWaitForClose WPObject_wpWaitForClose
#define WPDevCPU_wpSetMenuStyle WPObject_wpSetMenuStyle
#define WPDevCPU_wpQueryMenuStyle WPObject_wpQueryMenuStyle
#define WPDevCPU_wpSetStyle WPObject_wpSetStyle
#define WPDevCPU_somInit SOMObject_somInit
#define WPDevCPU_somUninit SOMObject_somUninit
#define WPDevCPU_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define WPDevCPU_somDefaultAssign SOMObject_somDefaultAssign
#define WPDevCPU_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define WPDevCPU_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define WPDevCPU_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define WPDevCPU_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define WPDevCPU_somDefaultVAssign SOMObject_somDefaultVAssign
#define WPDevCPU_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define WPDevCPU_somFree SOMObject_somFree
#define WPDevCPU_somGetClass SOMObject_somGetClass
#define WPDevCPU_somGetClassName SOMObject_somGetClassName
#define WPDevCPU_somGetSize SOMObject_somGetSize
#define WPDevCPU_somIsA SOMObject_somIsA
#define WPDevCPU_somIsInstanceOf SOMObject_somIsInstanceOf
#define WPDevCPU_somRespondsTo SOMObject_somRespondsTo
#define WPDevCPU_somDispatch SOMObject_somDispatch
#define WPDevCPU_somClassDispatch SOMObject_somClassDispatch
#define WPDevCPU_somCastObj SOMObject_somCastObj
#define WPDevCPU_somResetObj SOMObject_somResetObj
#define WPDevCPU_somDispatchV SOMObject_somDispatchV
#define WPDevCPU_somDispatchL SOMObject_somDispatchL
#define WPDevCPU_somDispatchA SOMObject_somDispatchA
#define WPDevCPU_somDispatchD SOMObject_somDispatchD
#define WPDevCPU_somPrintSelf SOMObject_somPrintSelf
#define WPDevCPU_somDumpSelf SOMObject_somDumpSelf
#define WPDevCPU_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_WPDevCPU_h */

#ifndef SOM_M_WPDevCPU_h
#define SOM_M_WPDevCPU_h


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
#ifndef M_WPDevCPU
#define M_WPDevCPU SOMObject
#endif
/*
 *  New class methods section
 */
#include <wpdevice.h>

/*
 * Start of bindings for IDL types
 */


/*
 * End of bindings for IDL types.
 */

#define M_WPDevCPU_MajorVersion 1
#define M_WPDevCPU_MinorVersion 2

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define M_WPDevCPUNewClass wpcpuc
#pragma linkage(wpcpuc, system)
#define M_WPDevCPUClassData wpcpud
#define M_WPDevCPUCClassData wpcpux
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define M_WPDevCPU_classObj M_WPDevCPUClassData.classObject
#define _M_WPDevCPU M_WPDevCPU_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK M_WPDevCPUNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(M_WPDevCPUNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct M_WPDevCPUClassDataStructure {
	SOMClass *classObject;
} SOMDLINK M_WPDevCPUClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct M_WPDevCPUCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK M_WPDevCPUCClassData;

/*
 * New and Renew macros for M_WPDevCPU
 */
#define M_WPDevCPUNew() \
   ( _M_WPDevCPU ? \
	_somNew(_M_WPDevCPU) \
	: ( M_WPDevCPUNewClass(\
		M_WPDevCPU_MajorVersion, \
		M_WPDevCPU_MinorVersion),\
	   _somNew(_M_WPDevCPU)))
#define M_WPDevCPURenew(buf) \
   ( _M_WPDevCPU ? \
	_somRenew(_M_WPDevCPU, buf) \
	: ( M_WPDevCPUNewClass(\
		M_WPDevCPU_MajorVersion, \
		M_WPDevCPU_MinorVersion),\
	   _somRenew(_M_WPDevCPU, buf)))

/*
 * Override method: wpclsInitData
 */
#define M_WPDevCPU_wpclsInitData(somSelf) \
	M_WPObject_wpclsInitData(somSelf)

/*
 * Override method: wpclsQueryIconData
 */
#define M_WPDevCPU_wpclsQueryIconData(somSelf,pIconInfo) \
	M_WPObject_wpclsQueryIconData(somSelf,pIconInfo)

/*
 * Override method: wpclsQueryTitle
 */
#define M_WPDevCPU_wpclsQueryTitle(somSelf) \
	M_WPObject_wpclsQueryTitle(somSelf)

/*
 * Override method: wpclsUnInitData
 */
#define M_WPDevCPU_wpclsUnInitData(somSelf) \
	M_WPObject_wpclsUnInitData(somSelf)
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define M_WPDevCPU_wpclsQueryDefaultHelp M_WPObject_wpclsQueryDefaultHelp
#define M_WPDevCPU_wpclsQueryDefaultView M_WPObject_wpclsQueryDefaultView
#define M_WPDevCPU_wpclsQueryDetailsInfo M_WPObject_wpclsQueryDetailsInfo
#define M_WPDevCPU_wpclsQueryStyle M_WPObject_wpclsQueryStyle
#define M_WPDevCPU_wpclsObjectFromHandle M_WPObject_wpclsObjectFromHandle
#define M_WPDevCPU_wpclsCreateDefaultTemplates M_WPObject_wpclsCreateDefaultTemplates
#define M_WPDevCPU_wpclsMakeAwake M_WPObject_wpclsMakeAwake
#define M_WPDevCPU_wpclsNew M_WPObject_wpclsNew
#define M_WPDevCPU_wpclsQueryDetails M_WPObject_wpclsQueryDetails
#define M_WPDevCPU_wpclsQueryExtendedCriteria M_WPObject_wpclsQueryExtendedCriteria
#define M_WPDevCPU_wpclsQueryFolder M_WPObject_wpclsQueryFolder
#define M_WPDevCPU_wpclsQueryIcon M_WPObject_wpclsQueryIcon
#define M_WPDevCPU_wpclsQuerySearchInfo M_WPObject_wpclsQuerySearchInfo
#define M_WPDevCPU_wpclsFindObjectFirst M_WPObject_wpclsFindObjectFirst
#define M_WPDevCPU_wpclsFindObjectNext M_WPObject_wpclsFindObjectNext
#define M_WPDevCPU_wpclsFindObjectEnd M_WPObject_wpclsFindObjectEnd
#define M_WPDevCPU_wpclsSetError M_WPObject_wpclsSetError
#define M_WPDevCPU_wpclsQueryError M_WPObject_wpclsQueryError
#define M_WPDevCPU_wpclsQuerySettingsPageSize M_WPObject_wpclsQuerySettingsPageSize
#define M_WPDevCPU_wpclsQueryObject M_WPObject_wpclsQueryObject
#define M_WPDevCPU_wpclsQueryButtonAppearance M_WPObject_wpclsQueryButtonAppearance
#define M_WPDevCPU_wpclsDecUsage M_WPObject_wpclsDecUsage
#define M_WPDevCPU_wpclsIncUsage M_WPObject_wpclsIncUsage
#define M_WPDevCPU_wpclsInsertMultipleObjects M_WPObject_wpclsInsertMultipleObjects
#define M_WPDevCPU_wpclsFindOneObject M_WPObject_wpclsFindOneObject
#define M_WPDevCPU_wpclsSetSettingsPageSize M_WPObject_wpclsSetSettingsPageSize
#define M_WPDevCPU_wpclsSetIconData M_WPObject_wpclsSetIconData
#define M_WPDevCPU_wpclsSetIcon M_WPObject_wpclsSetIcon
#define M_WPDevCPU_wpclsRemoveObjects M_WPObject_wpclsRemoveObjects
#define M_WPDevCPU_somUninit SOMObject_somUninit
#define M_WPDevCPU_somClassReady SOMClass_somClassReady
#define M_WPDevCPU_somNew SOMClass_somNew
#define M_WPDevCPU_somRenew SOMClass_somRenew
#define M_WPDevCPU__get_somDataAlignment SOMClass__get_somDataAlignment
#define M_WPDevCPU__get_somInstanceDataOffsets SOMClass__get_somInstanceDataOffsets
#define M_WPDevCPU__get_somDirectInitClasses SOMClass__get_somDirectInitClasses
#define M_WPDevCPU__set_somDirectInitClasses SOMClass__set_somDirectInitClasses
#define M_WPDevCPU_somNewNoInit SOMClass_somNewNoInit
#define M_WPDevCPU_somRenewNoInit SOMClass_somRenewNoInit
#define M_WPDevCPU_somRenewNoZero SOMClass_somRenewNoZero
#define M_WPDevCPU_somRenewNoInitNoZero SOMClass_somRenewNoInitNoZero
#define M_WPDevCPU_somAllocate SOMClass_somAllocate
#define M_WPDevCPU_somDeallocate SOMClass_somDeallocate
#define M_WPDevCPU__get_somClassAllocate SOMClass__get_somClassAllocate
#define M_WPDevCPU__get_somClassDeallocate SOMClass__get_somClassDeallocate
#define M_WPDevCPU_somGetInstanceInitMask SOMClass_somGetInstanceInitMask
#define M_WPDevCPU_somGetInstanceDestructionMask SOMClass_somGetInstanceDestructionMask
#define M_WPDevCPU_somGetInstanceAssignmentMask SOMClass_somGetInstanceAssignmentMask
#define M_WPDevCPU_somInitClass SOMClass_somInitClass
#define M_WPDevCPU_somInitMIClass SOMClass_somInitMIClass
#define M_WPDevCPU_somAddStaticMethod SOMClass_somAddStaticMethod
#define M_WPDevCPU_somAddDynamicMethod SOMClass_somAddDynamicMethod
#define M_WPDevCPU_somOverrideSMethod SOMClass_somOverrideSMethod
#define M_WPDevCPU_somGetApplyStub SOMClass_somGetApplyStub
#define M_WPDevCPU_somGetClassData SOMClass_somGetClassData
#define M_WPDevCPU_somSetClassData SOMClass_somSetClassData
#define M_WPDevCPU_somGetClassMtab SOMClass_somGetClassMtab
#define M_WPDevCPU_somGetInstanceOffset SOMClass_somGetInstanceOffset
#define M_WPDevCPU_somGetInstancePartSize SOMClass_somGetInstancePartSize
#define M_WPDevCPU_somGetInstanceSize SOMClass_somGetInstanceSize
#define M_WPDevCPU_somGetInstanceToken SOMClass_somGetInstanceToken
#define M_WPDevCPU_somGetMemberToken SOMClass_somGetMemberToken
#define M_WPDevCPU_somGetMethodData SOMClass_somGetMethodData
#define M_WPDevCPU_somGetRdStub SOMClass_somGetRdStub
#define M_WPDevCPU_somGetMethodDescriptor SOMClass_somGetMethodDescriptor
#define M_WPDevCPU_somGetMethodIndex SOMClass_somGetMethodIndex
#define M_WPDevCPU_somGetMethodToken SOMClass_somGetMethodToken
#define M_WPDevCPU_somGetName SOMClass_somGetName
#define M_WPDevCPU_somGetNthMethodData SOMClass_somGetNthMethodData
#define M_WPDevCPU_somGetNthMethodInfo SOMClass_somGetNthMethodInfo
#define M_WPDevCPU_somGetNumMethods SOMClass_somGetNumMethods
#define M_WPDevCPU_somGetNumStaticMethods SOMClass_somGetNumStaticMethods
#define M_WPDevCPU_somGetParent SOMClass_somGetParent
#define M_WPDevCPU_somGetParents SOMClass_somGetParents
#define M_WPDevCPU_somGetPClsMtab SOMClass_somGetPClsMtab
#define M_WPDevCPU_somGetPClsMtabs SOMClass_somGetPClsMtabs
#define M_WPDevCPU_somGetVersionNumbers SOMClass_somGetVersionNumbers
#define M_WPDevCPU_somSetMethodDescriptor SOMClass_somSetMethodDescriptor
#define M_WPDevCPU_somFindMethod SOMClass_somFindMethod
#define M_WPDevCPU_somFindMethodOk SOMClass_somFindMethodOk
#define M_WPDevCPU_somFindSMethod SOMClass_somFindSMethod
#define M_WPDevCPU_somFindSMethodOk SOMClass_somFindSMethodOk
#define M_WPDevCPU_somLookupMethod SOMClass_somLookupMethod
#define M_WPDevCPU_somCheckVersion SOMClass_somCheckVersion
#define M_WPDevCPU_somDescendedFrom SOMClass_somDescendedFrom
#define M_WPDevCPU_somSupportsMethod SOMClass_somSupportsMethod
#define M_WPDevCPU_somDefinedMethod SOMClass_somDefinedMethod
#define M_WPDevCPU_somOverrideMtab SOMClass_somOverrideMtab
#define M_WPDevCPU_somDefaultInit SOMObject_somDefaultInit
#define M_WPDevCPU_somDestruct SOMObject_somDestruct
#define M_WPDevCPU_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define M_WPDevCPU_somDefaultAssign SOMObject_somDefaultAssign
#define M_WPDevCPU_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define M_WPDevCPU_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define M_WPDevCPU_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define M_WPDevCPU_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define M_WPDevCPU_somDefaultVAssign SOMObject_somDefaultVAssign
#define M_WPDevCPU_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define M_WPDevCPU_somInit SOMObject_somInit
#define M_WPDevCPU_somFree SOMObject_somFree
#define M_WPDevCPU_somGetClass SOMObject_somGetClass
#define M_WPDevCPU_somGetClassName SOMObject_somGetClassName
#define M_WPDevCPU_somGetSize SOMObject_somGetSize
#define M_WPDevCPU_somIsA SOMObject_somIsA
#define M_WPDevCPU_somIsInstanceOf SOMObject_somIsInstanceOf
#define M_WPDevCPU_somRespondsTo SOMObject_somRespondsTo
#define M_WPDevCPU_somDispatch SOMObject_somDispatch
#define M_WPDevCPU_somClassDispatch SOMObject_somClassDispatch
#define M_WPDevCPU_somCastObj SOMObject_somCastObj
#define M_WPDevCPU_somResetObj SOMObject_somResetObj
#define M_WPDevCPU_somDispatchV SOMObject_somDispatchV
#define M_WPDevCPU_somDispatchL SOMObject_somDispatchL
#define M_WPDevCPU_somDispatchA SOMObject_somDispatchA
#define M_WPDevCPU_somDispatchD SOMObject_somDispatchD
#define M_WPDevCPU_somPrintSelf SOMObject_somPrintSelf
#define M_WPDevCPU_somDumpSelf SOMObject_somDumpSelf
#define M_WPDevCPU_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_M_WPDevCPU_h */
