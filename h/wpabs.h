
/*
 * This file was generated by the SOM Compiler.
 * FileName: G:\cwpsh\rel\os2c\include\base\os2\wpabs.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.14
 *     SOM Emitter emith: 2.43
 */

/*
 *   Module Header
 * 
 *   Module Name: WPABS
 * 
 *   OS/2 Presentation Manager Workplace class definitions
 * 
 *   Copyright (c) International Business Machines Corporation 1991, 1992
 * 
 */


#ifndef SOM_WPAbstract_h
#define SOM_WPAbstract_h


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
#ifndef WPAbstract
#define WPAbstract SOMObject
#endif
#include <wpobject.h>

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
#ifndef M_WPAbstract
    #define M_WPAbstract SOMObject
#endif /* M_WPAbstract */

/*
 * End of bindings for IDL types.
 */

#define WPAbstract_MajorVersion 1
#define WPAbstract_MinorVersion 2

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define WPAbstractNewClass wpabc
#pragma linkage(wpabc, system)
#define WPAbstractClassData wpabd
#define WPAbstractCClassData wpabx
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */

/*
 * Include the meta class file
 */
#include <wpabs.h>
/*--------------Migration------------*/
#define WPAbstract_classObj WPAbstractClassData.classObject
#define _WPAbstract WPAbstract_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK WPAbstractNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(WPAbstractNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct WPAbstractClassDataStructure {
	SOMClass *classObject;
} SOMDLINK WPAbstractClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct WPAbstractCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK WPAbstractCClassData;

/*
 * New and Renew macros for WPAbstract
 */
#define WPAbstractNew() \
   ( _WPAbstract ? \
	_somNew(_WPAbstract) \
	: ( WPAbstractNewClass(\
		WPAbstract_MajorVersion, \
		WPAbstract_MinorVersion),\
	   _somNew(_WPAbstract)))
#define WPAbstractRenew(buf) \
   ( _WPAbstract ? \
	_somRenew(_WPAbstract, buf) \
	: ( WPAbstractNewClass(\
		WPAbstract_MajorVersion, \
		WPAbstract_MinorVersion),\
	   _somRenew(_WPAbstract, buf)))

/*
 * Override method: wpQueryHandle
 */
#define WPAbstract_wpQueryHandle(somSelf) \
	WPObject_wpQueryHandle(somSelf)

/*
 * Override method: wpSaveImmediate
 */
#define WPAbstract_wpSaveImmediate(somSelf) \
	WPObject_wpSaveImmediate(somSelf)

/*
 * Override method: wpSaveState
 */
#define WPAbstract_wpSaveState(somSelf) \
	WPObject_wpSaveState(somSelf)

/*
 * Override method: wpRestoreState
 */
#define WPAbstract_wpRestoreState(somSelf,ulReserved) \
	WPObject_wpRestoreState(somSelf,ulReserved)

/*
 * Override method: wpSetTitle
 */
#define WPAbstract_wpSetTitle(somSelf,pszNewTitle) \
	WPObject_wpSetTitle(somSelf,pszNewTitle)

/*
 * Override method: wpCopyObject
 */
#define WPAbstract_wpCopyObject(somSelf,Folder,fLock) \
	WPObject_wpCopyObject(somSelf,Folder,fLock)

/*
 * Override method: wpMoveObject
 */
#define WPAbstract_wpMoveObject(somSelf,Folder) \
	WPObject_wpMoveObject(somSelf,Folder)

/*
 * Override method: wpQueryIcon
 */
#define WPAbstract_wpQueryIcon(somSelf) \
	WPObject_wpQueryIcon(somSelf)

/*
 * Override method: wpQueryIconData
 */
#define WPAbstract_wpQueryIconData(somSelf,pIconInfo) \
	WPObject_wpQueryIconData(somSelf,pIconInfo)

/*
 * Override method: wpSetIconData
 */
#define WPAbstract_wpSetIconData(somSelf,pIconInfo) \
	WPObject_wpSetIconData(somSelf,pIconInfo)

/*
 * Override method: wpDragOver
 */
#define WPAbstract_wpDragOver(somSelf,hwndCnr,pdrgInfo) \
	WPObject_wpDragOver(somSelf,hwndCnr,pdrgInfo)

/*
 * Override method: wpReplaceObject
 */
#define WPAbstract_wpReplaceObject(somSelf,targetObject,fMove) \
	WPObject_wpReplaceObject(somSelf,targetObject,fMove)

/*
 * Override method: wpQueryNameClashOptions
 */
#define WPAbstract_wpQueryNameClashOptions(somSelf,menuID) \
	WPObject_wpQueryNameClashOptions(somSelf,menuID)

/*
 * Override method: somDefaultInit
 */
#define WPAbstract_somDefaultInit(somSelf,ctrl) \
	SOMObject_somDefaultInit(somSelf,ctrl)

/*
 * Override method: somDestruct
 */
#define WPAbstract_somDestruct(somSelf,doFree,ctrl) \
	SOMObject_somDestruct(somSelf,doFree,ctrl)

/*
 * Override method: wpIdentify
 */
#define WPAbstract_wpIdentify(somSelf,pszIdentity) \
	WPObject_wpIdentify(somSelf,pszIdentity)
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define WPAbstract_wpAddObjectGeneralPage WPObject_wpAddObjectGeneralPage
#define WPAbstract_wpAddObjectGeneralPage2 WPObject_wpAddObjectGeneralPage2
#define WPAbstract_wpAddObjectWindowPage WPObject_wpAddObjectWindowPage
#define WPAbstract_wpAddSettingsPages WPObject_wpAddSettingsPages
#define WPAbstract_wpAddToObjUseList WPObject_wpAddToObjUseList
#define WPAbstract_wpAllocMem WPObject_wpAllocMem
#define WPAbstract_wpAppendObject WPObject_wpAppendObject
#define WPAbstract_wpAssertObjectMutexSem WPObject_wpAssertObjectMutexSem
#define WPAbstract_wpClose WPObject_wpClose
#define WPAbstract_wpCnrInsertObject WPObject_wpCnrInsertObject
#define WPAbstract_wpCnrRemoveObject WPObject_wpCnrRemoveObject
#define WPAbstract_wpCnrSetEmphasis WPObject_wpCnrSetEmphasis
#define WPAbstract_wpConfirmDelete WPObject_wpConfirmDelete
#define WPAbstract_wpConfirmObjectTitle WPObject_wpConfirmObjectTitle
#define WPAbstract_wpCopiedFromTemplate WPObject_wpCopiedFromTemplate
#define WPAbstract_wpCreateAnother WPObject_wpCreateAnother
#define WPAbstract_wpCreateFromTemplate WPObject_wpCreateFromTemplate
#define WPAbstract_wpCreateShadowObject WPObject_wpCreateShadowObject
#define WPAbstract_wpDelete WPObject_wpDelete
#define WPAbstract_wpDeleteFromObjUseList WPObject_wpDeleteFromObjUseList
#define WPAbstract_wpDisplayHelp WPObject_wpDisplayHelp
#define WPAbstract_wpDisplayMenu WPObject_wpDisplayMenu
#define WPAbstract_wpDoesObjectMatch WPObject_wpDoesObjectMatch
#define WPAbstract_wpDraggedOverObject WPObject_wpDraggedOverObject
#define WPAbstract_wpDrop WPObject_wpDrop
#define WPAbstract_wpDroppedOnObject WPObject_wpDroppedOnObject
#define WPAbstract_wpEndConversation WPObject_wpEndConversation
#define WPAbstract_wpFilterPopupMenu WPObject_wpFilterPopupMenu
#define WPAbstract_wpFilterMenu WPObject_wpFilterMenu
#define WPAbstract_wpFindUseItem WPObject_wpFindUseItem
#define WPAbstract_wpFormatDragItem WPObject_wpFormatDragItem
#define WPAbstract_wpFree WPObject_wpFree
#define WPAbstract_wpFreeMem WPObject_wpFreeMem
#define WPAbstract_wpHide WPObject_wpHide
#define WPAbstract_wpInitData WPObject_wpInitData
#define WPAbstract_wpInsertPopupMenuItems WPObject_wpInsertPopupMenuItems
#define WPAbstract_wpInsertMenuItems WPObject_wpInsertMenuItems
#define WPAbstract_wpInsertSettingsPage WPObject_wpInsertSettingsPage
#define WPAbstract_wpMenuItemHelpSelected WPObject_wpMenuItemHelpSelected
#define WPAbstract_wpMenuItemSelected WPObject_wpMenuItemSelected
#define WPAbstract_wpModifyPopupMenu WPObject_wpModifyPopupMenu
#define WPAbstract_wpModifyMenu WPObject_wpModifyMenu
#define WPAbstract_wpOpen WPObject_wpOpen
#define WPAbstract_wpPrintObject WPObject_wpPrintObject
#define WPAbstract_wpQueryConcurrentView WPObject_wpQueryConcurrentView
#define WPAbstract_wpQueryButtonAppearance WPObject_wpQueryButtonAppearance
#define WPAbstract_wpQueryConfirmations WPObject_wpQueryConfirmations
#define WPAbstract_wpQueryDefaultHelp WPObject_wpQueryDefaultHelp
#define WPAbstract_wpQueryDefaultView WPObject_wpQueryDefaultView
#define WPAbstract_wpQueryDetailsData WPObject_wpQueryDetailsData
#define WPAbstract_wpQueryError WPObject_wpQueryError
#define WPAbstract_wpSetFolder WPObject_wpSetFolder
#define WPAbstract_wpQueryFolder WPObject_wpQueryFolder
#define WPAbstract_wpQueryMinWindow WPObject_wpQueryMinWindow
#define WPAbstract_wpQueryStyle WPObject_wpQueryStyle
#define WPAbstract_wpSetTaskRec WPObject_wpSetTaskRec
#define WPAbstract_wpFindTaskRec WPObject_wpFindTaskRec
#define WPAbstract_wpQueryTitle WPObject_wpQueryTitle
#define WPAbstract_wpRegisterView WPObject_wpRegisterView
#define WPAbstract_wpReleaseObjectMutexSem WPObject_wpReleaseObjectMutexSem
#define WPAbstract_wpRender WPObject_wpRender
#define WPAbstract_wpRenderComplete WPObject_wpRenderComplete
#define WPAbstract_wpRequestObjectMutexSem WPObject_wpRequestObjectMutexSem
#define WPAbstract_wpRestore WPObject_wpRestore
#define WPAbstract_wpRestoreData WPObject_wpRestoreData
#define WPAbstract_wpRestoreLong WPObject_wpRestoreLong
#define WPAbstract_wpRestoreString WPObject_wpRestoreString
#define WPAbstract_wpSaveData WPObject_wpSaveData
#define WPAbstract_wpSaveDeferred WPObject_wpSaveDeferred
#define WPAbstract_wpSaveLong WPObject_wpSaveLong
#define WPAbstract_wpSaveString WPObject_wpSaveString
#define WPAbstract_wpScanSetupString WPObject_wpScanSetupString
#define WPAbstract_wpSetConcurrentView WPObject_wpSetConcurrentView
#define WPAbstract_wpSetButtonAppearance WPObject_wpSetButtonAppearance
#define WPAbstract_wpSetDefaultHelp WPObject_wpSetDefaultHelp
#define WPAbstract_wpSetDefaultView WPObject_wpSetDefaultView
#define WPAbstract_wpSetError WPObject_wpSetError
#define WPAbstract_wpQueryScreenGroupID WPObject_wpQueryScreenGroupID
#define WPAbstract_wpSetupOnce WPObject_wpSetupOnce
#define WPAbstract_wpSetIcon WPObject_wpSetIcon
#define WPAbstract_wpSetMinWindow WPObject_wpSetMinWindow
#define WPAbstract_wpModifyStyle WPObject_wpModifyStyle
#define WPAbstract_wpSetup WPObject_wpSetup
#define WPAbstract_wpSwitchTo WPObject_wpSwitchTo
#define WPAbstract_wpUnInitData WPObject_wpUnInitData
#define WPAbstract_wpViewObject WPObject_wpViewObject
#define WPAbstract_wpQueryTrueStyle WPObject_wpQueryTrueStyle
#define WPAbstract_wpUnlockObject WPObject_wpUnlockObject
#define WPAbstract_wpObjectReady WPObject_wpObjectReady
#define WPAbstract_wpIsObjectInitialized WPObject_wpIsObjectInitialized
#define WPAbstract_wpCreateShadowObjectExt WPObject_wpCreateShadowObjectExt
#define WPAbstract_wpCnrDeleteUseItem WPObject_wpCnrDeleteUseItem
#define WPAbstract_wpIsDeleteable WPObject_wpIsDeleteable
#define WPAbstract_wpQueryCoreRecord WPObject_wpQueryCoreRecord
#define WPAbstract_wpSetObjectID WPObject_wpSetObjectID
#define WPAbstract_wpQueryObjectID WPObject_wpQueryObjectID
#define WPAbstract_wpSetDefaultIconPos WPObject_wpSetDefaultIconPos
#define WPAbstract_wpQueryDefaultIconPos WPObject_wpQueryDefaultIconPos
#define WPAbstract_wpCnrRefreshDetails WPObject_wpCnrRefreshDetails
#define WPAbstract_wpFindViewItem WPObject_wpFindViewItem
#define WPAbstract_wpLockObject WPObject_wpLockObject
#define WPAbstract_wpIsLocked WPObject_wpIsLocked
#define WPAbstract_wpQueryContainerFlagPtr WPObject_wpQueryContainerFlagPtr
#define WPAbstract_wpWaitForClose WPObject_wpWaitForClose
#define WPAbstract_wpSetMenuStyle WPObject_wpSetMenuStyle
#define WPAbstract_wpQueryMenuStyle WPObject_wpQueryMenuStyle
#define WPAbstract_wpSetStyle WPObject_wpSetStyle
#define WPAbstract_somInit SOMObject_somInit
#define WPAbstract_somUninit SOMObject_somUninit
#define WPAbstract_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define WPAbstract_somDefaultAssign SOMObject_somDefaultAssign
#define WPAbstract_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define WPAbstract_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define WPAbstract_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define WPAbstract_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define WPAbstract_somDefaultVAssign SOMObject_somDefaultVAssign
#define WPAbstract_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define WPAbstract_somFree SOMObject_somFree
#define WPAbstract_somGetClass SOMObject_somGetClass
#define WPAbstract_somGetClassName SOMObject_somGetClassName
#define WPAbstract_somGetSize SOMObject_somGetSize
#define WPAbstract_somIsA SOMObject_somIsA
#define WPAbstract_somIsInstanceOf SOMObject_somIsInstanceOf
#define WPAbstract_somRespondsTo SOMObject_somRespondsTo
#define WPAbstract_somDispatch SOMObject_somDispatch
#define WPAbstract_somClassDispatch SOMObject_somClassDispatch
#define WPAbstract_somCastObj SOMObject_somCastObj
#define WPAbstract_somResetObj SOMObject_somResetObj
#define WPAbstract_somDispatchV SOMObject_somDispatchV
#define WPAbstract_somDispatchL SOMObject_somDispatchL
#define WPAbstract_somDispatchA SOMObject_somDispatchA
#define WPAbstract_somDispatchD SOMObject_somDispatchD
#define WPAbstract_somPrintSelf SOMObject_somPrintSelf
#define WPAbstract_somDumpSelf SOMObject_somDumpSelf
#define WPAbstract_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_WPAbstract_h */

#ifndef SOM_M_WPAbstract_h
#define SOM_M_WPAbstract_h


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
#ifndef M_WPAbstract
#define M_WPAbstract SOMObject
#endif
#include <wpobject.h>

/*
 * Start of bindings for IDL types
 */


/*
 * End of bindings for IDL types.
 */

#define M_WPAbstract_MajorVersion 1
#define M_WPAbstract_MinorVersion 2

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define M_WPAbstractNewClass wpabc
#pragma linkage(wpabc, system)
#define M_WPAbstractClassData wpabd
#define M_WPAbstractCClassData wpabx
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define M_WPAbstract_classObj M_WPAbstractClassData.classObject
#define _M_WPAbstract M_WPAbstract_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK M_WPAbstractNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(M_WPAbstractNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct M_WPAbstractClassDataStructure {
	SOMClass *classObject;
	somMToken wpclsAbsPrivate1;
	somMToken wpclsAbsPrivate2;
	somMToken wpclsAbsPrivate3;
	somMToken wpclsQuerySetting;
	somMToken wpclsSetSetting;
} SOMDLINK M_WPAbstractClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct M_WPAbstractCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK M_WPAbstractCClassData;

/*
 * New and Renew macros for M_WPAbstract
 */
#define M_WPAbstractNew() \
   ( _M_WPAbstract ? \
	_somNew(_M_WPAbstract) \
	: ( M_WPAbstractNewClass(\
		M_WPAbstract_MajorVersion, \
		M_WPAbstract_MinorVersion),\
	   _somNew(_M_WPAbstract)))
#define M_WPAbstractRenew(buf) \
   ( _M_WPAbstract ? \
	_somRenew(_M_WPAbstract, buf) \
	: ( M_WPAbstractNewClass(\
		M_WPAbstract_MajorVersion, \
		M_WPAbstract_MinorVersion),\
	   _somRenew(_M_WPAbstract, buf)))

/*
 * Override method: wpclsQueryTitle
 */
#define M_WPAbstract_wpclsQueryTitle(somSelf) \
	M_WPObject_wpclsQueryTitle(somSelf)

/*
 * Override method: wpclsObjectFromHandle
 */
#define M_WPAbstract_wpclsObjectFromHandle(somSelf,hObject) \
	M_WPObject_wpclsObjectFromHandle(somSelf,hObject)

/*
 * New Method: wpclsQuerySetting
 */
typedef ULONG   SOMLINK somTP_M_WPAbstract_wpclsQuerySetting(M_WPAbstract *somSelf, 
		PSZ pszSetting, 
		PVOID pValue, 
		ULONG ulValueLen);
#pragma linkage(somTP_M_WPAbstract_wpclsQuerySetting, system)
typedef somTP_M_WPAbstract_wpclsQuerySetting *somTD_M_WPAbstract_wpclsQuerySetting;
#define somMD_M_WPAbstract_wpclsQuerySetting "::M_WPAbstract::wpclsQuerySetting"
#define M_WPAbstract_wpclsQuerySetting(somSelf,pszSetting,pValue,ulValueLen) \
    (SOM_Resolve(somSelf, M_WPAbstract, wpclsQuerySetting) \
	(somSelf,pszSetting,pValue,ulValueLen))
#ifndef SOMGD_wpclsQuerySetting
    #if (defined(_wpclsQuerySetting) || defined(__wpclsQuerySetting))
        #undef _wpclsQuerySetting
        #undef __wpclsQuerySetting
        #define SOMGD_wpclsQuerySetting 1
    #else
        #define _wpclsQuerySetting M_WPAbstract_wpclsQuerySetting
    #endif /* _wpclsQuerySetting */
#endif /* SOMGD_wpclsQuerySetting */

/*
 * New Method: wpclsSetSetting
 */
typedef BOOL   SOMLINK somTP_M_WPAbstract_wpclsSetSetting(M_WPAbstract *somSelf, 
		PSZ pszSetting, 
		PVOID pValue);
#pragma linkage(somTP_M_WPAbstract_wpclsSetSetting, system)
typedef somTP_M_WPAbstract_wpclsSetSetting *somTD_M_WPAbstract_wpclsSetSetting;
#define somMD_M_WPAbstract_wpclsSetSetting "::M_WPAbstract::wpclsSetSetting"
#define M_WPAbstract_wpclsSetSetting(somSelf,pszSetting,pValue) \
    (SOM_Resolve(somSelf, M_WPAbstract, wpclsSetSetting) \
	(somSelf,pszSetting,pValue))
#ifndef SOMGD_wpclsSetSetting
    #if (defined(_wpclsSetSetting) || defined(__wpclsSetSetting))
        #undef _wpclsSetSetting
        #undef __wpclsSetSetting
        #define SOMGD_wpclsSetSetting 1
    #else
        #define _wpclsSetSetting M_WPAbstract_wpclsSetSetting
    #endif /* _wpclsSetSetting */
#endif /* SOMGD_wpclsSetSetting */
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define M_WPAbstract_wpclsCreateDefaultTemplates M_WPObject_wpclsCreateDefaultTemplates
#define M_WPAbstract_wpclsInitData M_WPObject_wpclsInitData
#define M_WPAbstract_wpclsMakeAwake M_WPObject_wpclsMakeAwake
#define M_WPAbstract_wpclsNew M_WPObject_wpclsNew
#define M_WPAbstract_wpclsQueryDefaultHelp M_WPObject_wpclsQueryDefaultHelp
#define M_WPAbstract_wpclsQueryDefaultView M_WPObject_wpclsQueryDefaultView
#define M_WPAbstract_wpclsQueryDetails M_WPObject_wpclsQueryDetails
#define M_WPAbstract_wpclsQueryDetailsInfo M_WPObject_wpclsQueryDetailsInfo
#define M_WPAbstract_wpclsQueryExtendedCriteria M_WPObject_wpclsQueryExtendedCriteria
#define M_WPAbstract_wpclsQueryFolder M_WPObject_wpclsQueryFolder
#define M_WPAbstract_wpclsQueryIcon M_WPObject_wpclsQueryIcon
#define M_WPAbstract_wpclsQuerySearchInfo M_WPObject_wpclsQuerySearchInfo
#define M_WPAbstract_wpclsQueryStyle M_WPObject_wpclsQueryStyle
#define M_WPAbstract_wpclsUnInitData M_WPObject_wpclsUnInitData
#define M_WPAbstract_wpclsFindObjectFirst M_WPObject_wpclsFindObjectFirst
#define M_WPAbstract_wpclsFindObjectNext M_WPObject_wpclsFindObjectNext
#define M_WPAbstract_wpclsFindObjectEnd M_WPObject_wpclsFindObjectEnd
#define M_WPAbstract_wpclsSetError M_WPObject_wpclsSetError
#define M_WPAbstract_wpclsQueryError M_WPObject_wpclsQueryError
#define M_WPAbstract_wpclsQuerySettingsPageSize M_WPObject_wpclsQuerySettingsPageSize
#define M_WPAbstract_wpclsQueryIconData M_WPObject_wpclsQueryIconData
#define M_WPAbstract_wpclsQueryObject M_WPObject_wpclsQueryObject
#define M_WPAbstract_wpclsQueryButtonAppearance M_WPObject_wpclsQueryButtonAppearance
#define M_WPAbstract_wpclsDecUsage M_WPObject_wpclsDecUsage
#define M_WPAbstract_wpclsIncUsage M_WPObject_wpclsIncUsage
#define M_WPAbstract_wpclsInsertMultipleObjects M_WPObject_wpclsInsertMultipleObjects
#define M_WPAbstract_wpclsFindOneObject M_WPObject_wpclsFindOneObject
#define M_WPAbstract_wpclsSetSettingsPageSize M_WPObject_wpclsSetSettingsPageSize
#define M_WPAbstract_wpclsSetIconData M_WPObject_wpclsSetIconData
#define M_WPAbstract_wpclsSetIcon M_WPObject_wpclsSetIcon
#define M_WPAbstract_wpclsRemoveObjects M_WPObject_wpclsRemoveObjects
#define M_WPAbstract_somUninit SOMObject_somUninit
#define M_WPAbstract_somClassReady SOMClass_somClassReady
#define M_WPAbstract_somNew SOMClass_somNew
#define M_WPAbstract_somRenew SOMClass_somRenew
#define M_WPAbstract__get_somDataAlignment SOMClass__get_somDataAlignment
#define M_WPAbstract__get_somInstanceDataOffsets SOMClass__get_somInstanceDataOffsets
#define M_WPAbstract__get_somDirectInitClasses SOMClass__get_somDirectInitClasses
#define M_WPAbstract__set_somDirectInitClasses SOMClass__set_somDirectInitClasses
#define M_WPAbstract_somNewNoInit SOMClass_somNewNoInit
#define M_WPAbstract_somRenewNoInit SOMClass_somRenewNoInit
#define M_WPAbstract_somRenewNoZero SOMClass_somRenewNoZero
#define M_WPAbstract_somRenewNoInitNoZero SOMClass_somRenewNoInitNoZero
#define M_WPAbstract_somAllocate SOMClass_somAllocate
#define M_WPAbstract_somDeallocate SOMClass_somDeallocate
#define M_WPAbstract__get_somClassAllocate SOMClass__get_somClassAllocate
#define M_WPAbstract__get_somClassDeallocate SOMClass__get_somClassDeallocate
#define M_WPAbstract_somGetInstanceInitMask SOMClass_somGetInstanceInitMask
#define M_WPAbstract_somGetInstanceDestructionMask SOMClass_somGetInstanceDestructionMask
#define M_WPAbstract_somGetInstanceAssignmentMask SOMClass_somGetInstanceAssignmentMask
#define M_WPAbstract_somInitClass SOMClass_somInitClass
#define M_WPAbstract_somInitMIClass SOMClass_somInitMIClass
#define M_WPAbstract_somAddStaticMethod SOMClass_somAddStaticMethod
#define M_WPAbstract_somAddDynamicMethod SOMClass_somAddDynamicMethod
#define M_WPAbstract_somOverrideSMethod SOMClass_somOverrideSMethod
#define M_WPAbstract_somGetApplyStub SOMClass_somGetApplyStub
#define M_WPAbstract_somGetClassData SOMClass_somGetClassData
#define M_WPAbstract_somSetClassData SOMClass_somSetClassData
#define M_WPAbstract_somGetClassMtab SOMClass_somGetClassMtab
#define M_WPAbstract_somGetInstanceOffset SOMClass_somGetInstanceOffset
#define M_WPAbstract_somGetInstancePartSize SOMClass_somGetInstancePartSize
#define M_WPAbstract_somGetInstanceSize SOMClass_somGetInstanceSize
#define M_WPAbstract_somGetInstanceToken SOMClass_somGetInstanceToken
#define M_WPAbstract_somGetMemberToken SOMClass_somGetMemberToken
#define M_WPAbstract_somGetMethodData SOMClass_somGetMethodData
#define M_WPAbstract_somGetRdStub SOMClass_somGetRdStub
#define M_WPAbstract_somGetMethodDescriptor SOMClass_somGetMethodDescriptor
#define M_WPAbstract_somGetMethodIndex SOMClass_somGetMethodIndex
#define M_WPAbstract_somGetMethodToken SOMClass_somGetMethodToken
#define M_WPAbstract_somGetName SOMClass_somGetName
#define M_WPAbstract_somGetNthMethodData SOMClass_somGetNthMethodData
#define M_WPAbstract_somGetNthMethodInfo SOMClass_somGetNthMethodInfo
#define M_WPAbstract_somGetNumMethods SOMClass_somGetNumMethods
#define M_WPAbstract_somGetNumStaticMethods SOMClass_somGetNumStaticMethods
#define M_WPAbstract_somGetParent SOMClass_somGetParent
#define M_WPAbstract_somGetParents SOMClass_somGetParents
#define M_WPAbstract_somGetPClsMtab SOMClass_somGetPClsMtab
#define M_WPAbstract_somGetPClsMtabs SOMClass_somGetPClsMtabs
#define M_WPAbstract_somGetVersionNumbers SOMClass_somGetVersionNumbers
#define M_WPAbstract_somSetMethodDescriptor SOMClass_somSetMethodDescriptor
#define M_WPAbstract_somFindMethod SOMClass_somFindMethod
#define M_WPAbstract_somFindMethodOk SOMClass_somFindMethodOk
#define M_WPAbstract_somFindSMethod SOMClass_somFindSMethod
#define M_WPAbstract_somFindSMethodOk SOMClass_somFindSMethodOk
#define M_WPAbstract_somLookupMethod SOMClass_somLookupMethod
#define M_WPAbstract_somCheckVersion SOMClass_somCheckVersion
#define M_WPAbstract_somDescendedFrom SOMClass_somDescendedFrom
#define M_WPAbstract_somSupportsMethod SOMClass_somSupportsMethod
#define M_WPAbstract_somDefinedMethod SOMClass_somDefinedMethod
#define M_WPAbstract_somOverrideMtab SOMClass_somOverrideMtab
#define M_WPAbstract_somDefaultInit SOMObject_somDefaultInit
#define M_WPAbstract_somDestruct SOMObject_somDestruct
#define M_WPAbstract_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define M_WPAbstract_somDefaultAssign SOMObject_somDefaultAssign
#define M_WPAbstract_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define M_WPAbstract_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define M_WPAbstract_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define M_WPAbstract_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define M_WPAbstract_somDefaultVAssign SOMObject_somDefaultVAssign
#define M_WPAbstract_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define M_WPAbstract_somInit SOMObject_somInit
#define M_WPAbstract_somFree SOMObject_somFree
#define M_WPAbstract_somGetClass SOMObject_somGetClass
#define M_WPAbstract_somGetClassName SOMObject_somGetClassName
#define M_WPAbstract_somGetSize SOMObject_somGetSize
#define M_WPAbstract_somIsA SOMObject_somIsA
#define M_WPAbstract_somIsInstanceOf SOMObject_somIsInstanceOf
#define M_WPAbstract_somRespondsTo SOMObject_somRespondsTo
#define M_WPAbstract_somDispatch SOMObject_somDispatch
#define M_WPAbstract_somClassDispatch SOMObject_somClassDispatch
#define M_WPAbstract_somCastObj SOMObject_somCastObj
#define M_WPAbstract_somResetObj SOMObject_somResetObj
#define M_WPAbstract_somDispatchV SOMObject_somDispatchV
#define M_WPAbstract_somDispatchL SOMObject_somDispatchL
#define M_WPAbstract_somDispatchA SOMObject_somDispatchA
#define M_WPAbstract_somDispatchD SOMObject_somDispatchD
#define M_WPAbstract_somPrintSelf SOMObject_somPrintSelf
#define M_WPAbstract_somDumpSelf SOMObject_somDumpSelf
#define M_WPAbstract_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_M_WPAbstract_h */
