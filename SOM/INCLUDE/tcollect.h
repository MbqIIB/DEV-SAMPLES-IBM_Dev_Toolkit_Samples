
/*
 * This file was generated by the SOM Compiler.
 * FileName: tcollect.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.17
 *     SOM Emitter emith: 2.47
 */

/*
 *    COMPONENT_NAME: somuc
 * 
 *    ORIGINS: 82, 81, 27
 * 
 * 
 *     25H7912  (C)  COPYRIGHT International Business Machines Corp. 1992,1996,1996
 *    All Rights Reserved
 *    Licensed Materials - Property of IBM
 *    US Government Users Restricted Rights - Use, duplication or
 *    disclosure restricted by GSA ADP Schedule Contract with IBM Corp.
 * 
 *    Copyright � 1988, 1989 Apple Computer, Inc. All rights reserved.
 * 
 * CLASS_NAME: somf_TCollection
 * 
 * DESCRIPTION: This class represents a group of objects.  It is implemented
 *              as an abstract class from which all collection classes inherit
 *              methods.
 * 
 *  This file was generated by the SOM Compiler.
 *  FileName: TCollect.id2.
 *  Generated using:
 *      SOM Precompiler spc: 6.13
 *      SOM Emitter emitidl.dll: 6.18
 */


#ifndef SOM_somf_TCollection_h
#define SOM_somf_TCollection_h


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
#ifndef somf_TCollection
#define somf_TCollection SOMObject
#endif
#include <mcollect.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */
#ifndef somf_TIterator
    #define somf_TIterator SOMObject
#endif /* somf_TIterator */
#define somf_TCollection_kCollectionSizeHint 8 /* 8 */

#ifndef SOM_DONT_USE_SHORT_NAMES
#ifndef SOMTGD_kCollectionSizeHint
    #ifdef kCollectionSizeHint
        #undef kCollectionSizeHint
        #define SOMTGD_kCollectionSizeHint 1
    #else
        #define kCollectionSizeHint somf_TCollection_kCollectionSizeHint
    #endif /* kCollectionSizeHint */
#endif /* SOMTGD_kCollectionSizeHint */
#endif /* SOM_DONT_USE_SHORT_NAMES */

/*
 * End of bindings for IDL types.
 */

/*
 * Passthru lines: File: "C.h", "after"
 */

#include <titeratr.h>

#define somf_TCollection_MajorVersion 2
#define somf_TCollection_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define somf_TCollectionNewClass c
#pragma linkage(c, system)
#define somf_TCollectionClassData d
#define somf_TCollectionCClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define somf_TCollection_classObj somf_TCollectionClassData.classObject
#define _somf_TCollection somf_TCollection_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK somf_TCollectionNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(somf_TCollectionNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct somf_TCollectionClassDataStructure {
	SOMClass *classObject;
	somMToken somfAdd;
	somMToken somfAddAll;
	somMToken somfRemove;
	somMToken somfRemoveAll;
	somMToken somfDeleteAll;
	somMToken somfCount;
	somMToken somfMember;
	somMToken somfCreateIterator;
	somMToken somfTestFunction;
	somMToken somfSetTestFunction;
	somMToken somfTCollectionInit;
} SOMDLINK somf_TCollectionClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct somf_TCollectionCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK somf_TCollectionCClassData;

/*
 * New and Renew macros for somf_TCollection
 */
#define somf_TCollectionNew() \
   ( _somf_TCollection ? \
	_somNew(_somf_TCollection) \
	: ( somf_TCollectionNewClass(\
		somf_TCollection_MajorVersion, \
		somf_TCollection_MinorVersion),\
	   _somNew(_somf_TCollection)))
#define somf_TCollectionRenew(buf) \
   ( _somf_TCollection ? \
	_somRenew(_somf_TCollection, buf) \
	: ( somf_TCollectionNewClass(\
		somf_TCollection_MajorVersion, \
		somf_TCollection_MinorVersion),\
	   _somRenew(_somf_TCollection, buf)))

/*
 * Override method: somfIsEqual
 */
#define somf_TCollection_somfIsEqual(somSelf,ev,obj) \
	somf_MCollectible_somfIsEqual(somSelf,ev,obj)

/*
 * New Method: somfAdd
 */
typedef somf_MCollectible*   SOMLINK somTP_somf_TCollection_somfAdd(somf_TCollection *somSelf, Environment *ev, 
		somf_MCollectible* obj);
#pragma linkage(somTP_somf_TCollection_somfAdd, system)
typedef somTP_somf_TCollection_somfAdd *somTD_somf_TCollection_somfAdd;
/*
 *  Add obj to this.
 */
#define somMD_somf_TCollection_somfAdd "::somf_TCollection::somfAdd"
#define somf_TCollection_somfAdd(somSelf,ev,obj) \
    (SOM_Resolve(somSelf, somf_TCollection, somfAdd) \
	(somSelf,ev,obj))
#ifndef SOMGD_somfAdd
    #if (defined(_somfAdd) || defined(__somfAdd))
        #undef _somfAdd
        #undef __somfAdd
        #define SOMGD_somfAdd 1
    #else
        #define _somfAdd somf_TCollection_somfAdd
    #endif /* _somfAdd */
#endif /* SOMGD_somfAdd */

/*
 * New Method: somfAddAll
 */
typedef void   SOMLINK somTP_somf_TCollection_somfAddAll(somf_TCollection *somSelf, Environment *ev, 
		somf_TCollection* col);
#pragma linkage(somTP_somf_TCollection_somfAddAll, system)
typedef somTP_somf_TCollection_somfAddAll *somTD_somf_TCollection_somfAddAll;
/*
 *  Add all of the objects in collection to this.  Essentially this is
 *  equivalent to getting an iterator for the collection passed in and adding
 *  each element in the collection to this.
 */
#define somMD_somf_TCollection_somfAddAll "::somf_TCollection::somfAddAll"
#define somf_TCollection_somfAddAll(somSelf,ev,col) \
    (SOM_Resolve(somSelf, somf_TCollection, somfAddAll) \
	(somSelf,ev,col))
#ifndef SOMGD_somfAddAll
    #if (defined(_somfAddAll) || defined(__somfAddAll))
        #undef _somfAddAll
        #undef __somfAddAll
        #define SOMGD_somfAddAll 1
    #else
        #define _somfAddAll somf_TCollection_somfAddAll
    #endif /* _somfAddAll */
#endif /* SOMGD_somfAddAll */

/*
 * New Method: somfRemove
 */
typedef somf_MCollectible*   SOMLINK somTP_somf_TCollection_somfRemove(somf_TCollection *somSelf, Environment *ev, 
		somf_MCollectible* obj);
#pragma linkage(somTP_somf_TCollection_somfRemove, system)
typedef somTP_somf_TCollection_somfRemove *somTD_somf_TCollection_somfRemove;
/*
 *  Remove obj from this.  Return the object which was actually removed
 *  (which if you are using an IsEqual test function may not be the same as the
 *  object passed in only "equal")
 */
#define somMD_somf_TCollection_somfRemove "::somf_TCollection::somfRemove"
#define somf_TCollection_somfRemove(somSelf,ev,obj) \
    (SOM_Resolve(somSelf, somf_TCollection, somfRemove) \
	(somSelf,ev,obj))
#ifndef SOMGD_somfRemove
    #if (defined(_somfRemove) || defined(__somfRemove))
        #undef _somfRemove
        #undef __somfRemove
        #define SOMGD_somfRemove 1
    #else
        #define _somfRemove somf_TCollection_somfRemove
    #endif /* _somfRemove */
#endif /* SOMGD_somfRemove */

/*
 * New Method: somfRemoveAll
 */
typedef void   SOMLINK somTP_somf_TCollection_somfRemoveAll(somf_TCollection *somSelf, Environment *ev);
#pragma linkage(somTP_somf_TCollection_somfRemoveAll, system)
typedef somTP_somf_TCollection_somfRemoveAll *somTD_somf_TCollection_somfRemoveAll;
/*
 *  Remove all of the objects from this.
 */
#define somMD_somf_TCollection_somfRemoveAll "::somf_TCollection::somfRemoveAll"
#define somf_TCollection_somfRemoveAll(somSelf,ev) \
    (SOM_Resolve(somSelf, somf_TCollection, somfRemoveAll) \
	(somSelf,ev))
#ifndef SOMGD_somfRemoveAll
    #if (defined(_somfRemoveAll) || defined(__somfRemoveAll))
        #undef _somfRemoveAll
        #undef __somfRemoveAll
        #define SOMGD_somfRemoveAll 1
    #else
        #define _somfRemoveAll somf_TCollection_somfRemoveAll
    #endif /* _somfRemoveAll */
#endif /* SOMGD_somfRemoveAll */

/*
 * New Method: somfDeleteAll
 */
typedef void   SOMLINK somTP_somf_TCollection_somfDeleteAll(somf_TCollection *somSelf, Environment *ev);
#pragma linkage(somTP_somf_TCollection_somfDeleteAll, system)
typedef somTP_somf_TCollection_somfDeleteAll *somTD_somf_TCollection_somfDeleteAll;
/*
 *  Remove all of the objects from this and deallocate the storage that these
 *  objects might have owned (that is, the destructor function is called
 *  for each object in the collection).
 */
#define somMD_somf_TCollection_somfDeleteAll "::somf_TCollection::somfDeleteAll"
#define somf_TCollection_somfDeleteAll(somSelf,ev) \
    (SOM_Resolve(somSelf, somf_TCollection, somfDeleteAll) \
	(somSelf,ev))
#ifndef SOMGD_somfDeleteAll
    #if (defined(_somfDeleteAll) || defined(__somfDeleteAll))
        #undef _somfDeleteAll
        #undef __somfDeleteAll
        #define SOMGD_somfDeleteAll 1
    #else
        #define _somfDeleteAll somf_TCollection_somfDeleteAll
    #endif /* _somfDeleteAll */
#endif /* SOMGD_somfDeleteAll */

/*
 * New Method: somfCount
 */
typedef long   SOMLINK somTP_somf_TCollection_somfCount(somf_TCollection *somSelf, Environment *ev);
#pragma linkage(somTP_somf_TCollection_somfCount, system)
typedef somTP_somf_TCollection_somfCount *somTD_somf_TCollection_somfCount;
/*
 *  Return the number of objects in this.
 */
#define somMD_somf_TCollection_somfCount "::somf_TCollection::somfCount"
#define somf_TCollection_somfCount(somSelf,ev) \
    (SOM_Resolve(somSelf, somf_TCollection, somfCount) \
	(somSelf,ev))
#ifndef SOMGD_somfCount
    #if (defined(_somfCount) || defined(__somfCount))
        #undef _somfCount
        #undef __somfCount
        #define SOMGD_somfCount 1
    #else
        #define _somfCount somf_TCollection_somfCount
    #endif /* _somfCount */
#endif /* SOMGD_somfCount */

/*
 * New Method: somfMember
 */
typedef somf_MCollectible*   SOMLINK somTP_somf_TCollection_somfMember(somf_TCollection *somSelf, Environment *ev, 
		somf_MCollectible* obj);
#pragma linkage(somTP_somf_TCollection_somfMember, system)
typedef somTP_somf_TCollection_somfMember *somTD_somf_TCollection_somfMember;
/*
 *  Each object in this is compared to obj using the function testFn.  Return the
 *  object for which testFn returned TRUE.  Return SOMF_NIL if not object was found.
 */
#define somMD_somf_TCollection_somfMember "::somf_TCollection::somfMember"
#define somf_TCollection_somfMember(somSelf,ev,obj) \
    (SOM_Resolve(somSelf, somf_TCollection, somfMember) \
	(somSelf,ev,obj))
#ifndef SOMGD_somfMember
    #if (defined(_somfMember) || defined(__somfMember))
        #undef _somfMember
        #undef __somfMember
        #define SOMGD_somfMember 1
    #else
        #define _somfMember somf_TCollection_somfMember
    #endif /* _somfMember */
#endif /* SOMGD_somfMember */

/*
 * New Method: somfCreateIterator
 */
typedef somf_TIterator*   SOMLINK somTP_somf_TCollection_somfCreateIterator(somf_TCollection *somSelf, Environment *ev);
#pragma linkage(somTP_somf_TCollection_somfCreateIterator, system)
typedef somTP_somf_TCollection_somfCreateIterator *somTD_somf_TCollection_somfCreateIterator;
/*
 *  This method returns a new iterator which is suitable for use in iterating
 *  over the objects in this collection.
 */
#define somMD_somf_TCollection_somfCreateIterator "::somf_TCollection::somfCreateIterator"
#define somf_TCollection_somfCreateIterator(somSelf,ev) \
    (SOM_Resolve(somSelf, somf_TCollection, somfCreateIterator) \
	(somSelf,ev))
#ifndef SOMGD_somfCreateIterator
    #if (defined(_somfCreateIterator) || defined(__somfCreateIterator))
        #undef _somfCreateIterator
        #undef __somfCreateIterator
        #define SOMGD_somfCreateIterator 1
    #else
        #define _somfCreateIterator somf_TCollection_somfCreateIterator
    #endif /* _somfCreateIterator */
#endif /* SOMGD_somfCreateIterator */

/*
 * New Method: somfTestFunction
 */
typedef somf_MCollectible_somf_MCollectibleCompareFn   SOMLINK somTP_somf_TCollection_somfTestFunction(somf_TCollection *somSelf, Environment *ev);
#pragma linkage(somTP_somf_TCollection_somfTestFunction, system)
typedef somTP_somf_TCollection_somfTestFunction *somTD_somf_TCollection_somfTestFunction;
/*
 *  Return the test function.  This is usually either IsSame or IsEqual.
 */
#define somMD_somf_TCollection_somfTestFunction "::somf_TCollection::somfTestFunction"
#define somf_TCollection_somfTestFunction(somSelf,ev) \
    (SOM_Resolve(somSelf, somf_TCollection, somfTestFunction) \
	(somSelf,ev))
#ifndef SOMGD_somfTestFunction
    #if (defined(_somfTestFunction) || defined(__somfTestFunction))
        #undef _somfTestFunction
        #undef __somfTestFunction
        #define SOMGD_somfTestFunction 1
    #else
        #define _somfTestFunction somf_TCollection_somfTestFunction
    #endif /* _somfTestFunction */
#endif /* SOMGD_somfTestFunction */

/*
 * New Method: somfSetTestFunction
 */
typedef void   SOMLINK somTP_somf_TCollection_somfSetTestFunction(somf_TCollection *somSelf, Environment *ev, 
		somf_MCollectible_somf_MCollectibleCompareFn testfn);
#pragma linkage(somTP_somf_TCollection_somfSetTestFunction, system)
typedef somTP_somf_TCollection_somfSetTestFunction *somTD_somf_TCollection_somfSetTestFunction;
/*
 *  Set the test function.
 */
#define somMD_somf_TCollection_somfSetTestFunction "::somf_TCollection::somfSetTestFunction"
#define somf_TCollection_somfSetTestFunction(somSelf,ev,testfn) \
    (SOM_Resolve(somSelf, somf_TCollection, somfSetTestFunction) \
	(somSelf,ev,testfn))
#ifndef SOMGD_somfSetTestFunction
    #if (defined(_somfSetTestFunction) || defined(__somfSetTestFunction))
        #undef _somfSetTestFunction
        #undef __somfSetTestFunction
        #define SOMGD_somfSetTestFunction 1
    #else
        #define _somfSetTestFunction somf_TCollection_somfSetTestFunction
    #endif /* _somfSetTestFunction */
#endif /* SOMGD_somfSetTestFunction */

/*
 * New Method: somfTCollectionInit
 */
typedef somf_TCollection*   SOMLINK somTP_somf_TCollection_somfTCollectionInit(somf_TCollection *somSelf, Environment *ev, 
		somf_MCollectible_somf_MCollectibleCompareFn testfn);
#pragma linkage(somTP_somf_TCollection_somfTCollectionInit, system)
typedef somTP_somf_TCollection_somfTCollectionInit *somTD_somf_TCollection_somfTCollectionInit;
/*
 *  Initialize the somf_TCollection test function to testfn.
 */
#define somMD_somf_TCollection_somfTCollectionInit "::somf_TCollection::somfTCollectionInit"
#define somf_TCollection_somfTCollectionInit(somSelf,ev,testfn) \
    (SOM_Resolve(somSelf, somf_TCollection, somfTCollectionInit) \
	(somSelf,ev,testfn))
#ifndef SOMGD_somfTCollectionInit
    #if (defined(_somfTCollectionInit) || defined(__somfTCollectionInit))
        #undef _somfTCollectionInit
        #undef __somfTCollectionInit
        #define SOMGD_somfTCollectionInit 1
    #else
        #define _somfTCollectionInit somf_TCollection_somfTCollectionInit
    #endif /* _somfTCollectionInit */
#endif /* SOMGD_somfTCollectionInit */
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define somf_TCollection_somfClone somf_MCollectible_somfClone
#define somf_TCollection_somfClonePointer somf_MCollectible_somfClonePointer
#define somf_TCollection_somfHash somf_MCollectible_somfHash
#define somf_TCollection_somfIsSame somf_MCollectible_somfIsSame
#define somf_TCollection_somfIsNotEqual somf_MCollectible_somfIsNotEqual
#define somf_TCollection_somDefaultInit SOMObject_somDefaultInit
#define somf_TCollection_somDestruct SOMObject_somDestruct
#define somf_TCollection_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define somf_TCollection_somDefaultAssign SOMObject_somDefaultAssign
#define somf_TCollection_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define somf_TCollection_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define somf_TCollection_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define somf_TCollection_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define somf_TCollection_somDefaultVAssign SOMObject_somDefaultVAssign
#define somf_TCollection_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define somf_TCollection_somInit SOMObject_somInit
#define somf_TCollection_somFree SOMObject_somFree
#define somf_TCollection_somUninit SOMObject_somUninit
#define somf_TCollection_somGetClass SOMObject_somGetClass
#define somf_TCollection_somGetClassName SOMObject_somGetClassName
#define somf_TCollection_somGetSize SOMObject_somGetSize
#define somf_TCollection_somIsA SOMObject_somIsA
#define somf_TCollection_somIsInstanceOf SOMObject_somIsInstanceOf
#define somf_TCollection_somRespondsTo SOMObject_somRespondsTo
#define somf_TCollection_somDispatch SOMObject_somDispatch
#define somf_TCollection_somClassDispatch SOMObject_somClassDispatch
#define somf_TCollection_somCastObj SOMObject_somCastObj
#define somf_TCollection_somResetObj SOMObject_somResetObj
#define somf_TCollection_somDispatchV SOMObject_somDispatchV
#define somf_TCollection_somDispatchL SOMObject_somDispatchL
#define somf_TCollection_somDispatchA SOMObject_somDispatchA
#define somf_TCollection_somDispatchD SOMObject_somDispatchD
#define somf_TCollection_somPrintSelf SOMObject_somPrintSelf
#define somf_TCollection_somDumpSelf SOMObject_somDumpSelf
#define somf_TCollection_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_somf_TCollection_h */
