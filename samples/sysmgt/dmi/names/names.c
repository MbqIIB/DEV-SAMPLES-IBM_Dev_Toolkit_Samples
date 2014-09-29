/**********************************************************************
    Filename: names.c

    Copyright (c) 1993 - 1994, International Business Machines, Corporation. All rights reserved.

    Description: Example of an OS/2 Runtime component built using the
                 component skeleton code. (ciskel.c)  Under OS/2 a
                 runtime component is a DLL.

************************* INCLUDES ***********************************/

#include "dmiapi.h"

/************************ PUBLICS ************************************/
/* Get the specified attribute. */
DmiCiAttribute_t * DMI_FUNC_ENTRY CiGetAttribute(DMI_UNSIGNED componentId,
                                   DMI_UNSIGNED groupId,
                                   DMI_UNSIGNED attributeId,
                                   DMI_UNSIGNED keyCount,
                                   DmiCiAttribute_t const _FAR *const keyList);

/* Get the attribute with the same ID, but one row further within the table. */
DmiCiAttribute_t * DMI_FUNC_ENTRY CiGetNextAttribute(DMI_UNSIGNED componentId,
                                    DMI_UNSIGNED groupId,
                                    DMI_UNSIGNED attributeId,
                                    DMI_UNSIGNED keyCount,
                                    DmiCiAttribute_t const _FAR *const keyList);

/* Release the specified attribute. */
enum CiBoolean DMI_FUNC_ENTRY CiReleaseAttribute(DMI_UNSIGNED componentId,
                                    DMI_UNSIGNED groupId,
                                    DMI_UNSIGNED attributeId,
                                    DMI_UNSIGNED keyCount,
                                    DmiCiAttribute_t const _FAR *const keyList,
                                    void const _FAR *const attributeValue);

/* Reserve the specified attribute. */
enum CiBoolean DMI_FUNC_ENTRY CiReserveAttribute(DMI_UNSIGNED componentId,
                                    DMI_UNSIGNED groupId,
                                    DMI_UNSIGNED attributeId,
                                    DMI_UNSIGNED keyCount,
                                    DmiCiAttribute_t const _FAR *const keyList,
                                    void const _FAR *const attributeValue);

/* Set the specified attribute. */
enum CiBoolean DMI_FUNC_ENTRY CiSetAttribute(DMI_UNSIGNED componentId,
                                   DMI_UNSIGNED groupId,
                                   DMI_UNSIGNED attributeId,
                                   DMI_UNSIGNED keyCount,
                                   DmiCiAttribute_t const _FAR *const keyList,
                                   void const _FAR *const attributeValue);

/*********************************************************************/

/************************ DEFINES ************************************/

/*
    CI_MAX_KEY_COUNT is used to reserve space within the CI skeleton for
    building key lists.  If the instrumentation code is supporting a component
    that has keyed groups, then CI_MAX_KEY_COUNT should be set to the number
    of keys in the group that has the longest key list.  If the component has
    no keyed groups, this can be set to zero.
*/

#define CI_MAX_KEY_COUNT 1

/*********************************************************************/

/************************ GLOBALS ************************************/

/*
    The actual command control structure for this Component.
*/

DmiCiControl_t CiCommandBlock = { 0 };

/*********************************************************************/

/*
    The main entry point of the instrumentation.  The Service Layer calls this
    procedure.  This procedure builds a CiCommand Block, and passes the package
    to DmiCiProcess() in DMIAPI.LIB.  Based on the function ptrs provided,
    DmiCiProcess() function will call those user-provided functions when
    required.
*/

DMI_UNSIGNED DMI_FUNC_ENTRY DmiCiInvoke(void _FAR *dmiCommand)
{

static void _FAR	*thisDmiCommand = (void _FAR *) 0;
static DMI_UNSIGNED	status = 0;

/*
    This static array is where the Ci-style key lists are built.  Note that the
    size of this static array is fairly small since the actual values are not
    copied from the Service Layer request and confirm buffers.  The value
    pointers in the array of CiAttribute objects point back into the buffers
    themselves.
*/

    static DmiCiAttribute_t    ciKeyList[CI_MAX_KEY_COUNT] = { 0 };

/*
    Save the current command block pointer.
*/

    thisDmiCommand = dmiCommand;

    CiCommandBlock.CiGetAttribute = CiGetAttribute;
    CiCommandBlock.CiGetNextAttribute = CiGetNextAttribute;
    CiCommandBlock.CiReleaseAttribute = CiReleaseAttribute;
    CiCommandBlock.CiReserveAttribute = CiReserveAttribute;
    CiCommandBlock.CiSetAttribute = CiSetAttribute;

/*
    Set the maximum number of keys used and the key list pointer.
*/

    CiCommandBlock.MaxKeyCount = CI_MAX_KEY_COUNT;
    CiCommandBlock.ciKeyList = ciKeyList;

/*
    Call the DMIAPI.LIB function to process command.
*/

    status = DmiCiProcess(&CiCommandBlock, thisDmiCommand);

/*
    Return to the Service Layer.
*/

    return status;
}

/*
    The cancel entry point of the instrumentation.  The Service Layer calls
    this procedure when it has been requested to cancel a DMI command that
    this instrumentation code is handling.  This procedure only sets the global
    cicancelFlag.  If the instrumentation author wishes to use the state of
    the cancel flag, then logic must be added to the user-written
    procedures in the "public" section.
*/

DMI_UNSIGNED DMI_FUNC_ENTRY DmiCiCancel(void)
{

    CiCommandBlock.ciCancelFlag = CiTrue;
    return SLERR_NO_ERROR;

}

#define FILL_IN

#ifdef FILL_IN

#define NAMES_INDEX 1
#define NAMES_OS  2
#define NAMES_COMPANY  3
#define NAMES_SL    4
#define NUM_NAMES sizeof Names / sizeof Names[0]

typedef struct {
    DMI_UNSIGNED  length;
    char           body[30];
} CMP_STRING;

/* This macro builds an initialized CMP_STRING object initialized with
   the string passed into it. */

#define MIF_iString(n, s) CMP_STRING n = { sizeof(s) - 1, s }


typedef struct _Name{
    DMI_UNSIGNED    index;
    CMP_STRING    *osname;
    CMP_STRING    *company;
    CMP_STRING    *SL;
} Name;


MIF_iString(os1, "OS/2 Warp");
MIF_iString(os2, "OS/2 Warp Connect (PowerPC)");
MIF_iString(os3, "AIX");
MIF_iString(comp1,"IBM Corp.");
MIF_iString(comp2,"IBM Corp.");
MIF_iString(comp3,"IBM Corp.");

MIF_iString(sl1,"WARP SL Kit");
MIF_iString(sl2,"WARP for PowerPC SL Kit");
MIF_iString(sl3,"AIX SL Kit");


Name Names[] = {1, &os1,&comp1,&sl1, 2, &os2,&comp2,
     &sl2, 3, &os3,&comp3,&sl3};


/*
    The following four procedures are the ones that the instrumenation provider
    needs to "fill in."  None of the procedures above the line should ever
    need to be modified.
*/

/*
    Return a pointer to a DmiCiAttribute_t object that contains the ID, type, and
    pointer to value for the requested attribute.  The component ID, group ID,
    and attribute ID are passed in as parameters.

    If the given group is not a table, then keyCount will be zero, and keyList
    will be a NIL pointer.

    If the group is a table a keyList may or may not be given.  If it is
    provided, then the attribute value from the requested row should be
    returned.  If there is no key list, then the attribute value from the
    first row should be returned.
*/

DmiCiAttribute_t * DMI_FUNC_ENTRY CiGetAttribute(DMI_UNSIGNED componentId,
                                   DMI_UNSIGNED groupId,
                                   DMI_UNSIGNED attributeId,
                                   DMI_UNSIGNED keyCount,
                                   DmiCiAttribute_t const _FAR *const keyList)
{
static DmiCiAttribute_t GetAttr;
ULONG Index;

    Index = 0;     /* default to the first element in the table */
    if(keyCount && (keyList != (DmiCiAttribute_t _FAR *)NULL)){   /* need to check the key list */
        Index = *(ULONG *)(keyList->pAttributeValue);  /* get the key value */
        if((Index < 1) || (Index > 3)) return (DmiCiAttribute_t *)NULL;
        Index--;   /* decrement it to allign with the array offset */
    }
    switch((GetAttr.iAttributeId = attributeId)){
        case 1:  /* index number */
            GetAttr.iAttributeType = MIF_INTEGER;
            GetAttr.pAttributeValue = &(Names[Index].index);
            break;
        case 2:  /* Operating System */
            GetAttr.iAttributeType = MIF_DISPLAYSTRING;
            GetAttr.pAttributeValue = Names[Index].osname;
            break;
        case 3:  /* Operating system manufacturer */
            GetAttr.iAttributeType = MIF_DISPLAYSTRING;
            GetAttr.pAttributeValue = Names[Index].company;
            break;
        case 4:  /* The SL for the operating system */
            GetAttr.iAttributeType = MIF_DISPLAYSTRING;
            GetAttr.pAttributeValue = Names[Index].SL;
            break;
        default:    /* this is not an attribute ID we understand */
            return (DmiCiAttribute_t *)NULL;
    }
    return (DmiCiAttribute_t *)&GetAttr;
}


/*
    Return a pointer to a CiATtribute object that cotains the ID, type, and
    pointer to value for the SUCCESSOR of the specified attribute.  For example:

    {1, "Red"}
    {2, "Green"}
    {3, "Blue"}

    Assume that the previous is a small table.  Also assume that the table is
    component 2, group 2.  Assume further that the columns of this table are
    attributes 1 and 2, and that attribute 1 is the key.  Then, if the caller
    requests CiGetNextAttribute(2, 2, 2, 1, keyList) and the key list contains
    1, then this procedure should return a DmiCiAttribute_t object with the value
    2.  If 2 is in the key list, the result should be 3.  And finally, if 3 is
    in the key list the procedure should retun NIL as this is the last row in
    the table.
*/

DmiCiAttribute_t * DMI_FUNC_ENTRY CiGetNextAttribute(DMI_UNSIGNED componentId,
                                       DMI_UNSIGNED groupId,
                                       DMI_UNSIGNED attributeId,
                                       DMI_UNSIGNED keyCount,
                                       DmiCiAttribute_t const _FAR *const keyList)
{
static DmiCiAttribute_t GetAttr;
ULONG Index;

    Index = 0;     /* default to the first element in the table */
    if(keyCount && (keyList != (DmiCiAttribute_t _FAR *)NULL)){   /* need to check the key list */
        Index = *(ULONG *)(keyList->pAttributeValue);  /* get the key value */
        Index++;
        if((Index < 1) || (Index > 3)) return (DmiCiAttribute_t *)NULL;
        Index--;   /* decrement it to allign with the array offset */
    }
    switch((GetAttr.iAttributeId = attributeId)){
        case 1:  /* index number */
            GetAttr.iAttributeType = MIF_INTEGER;
            GetAttr.pAttributeValue = &(Names[Index].index);
            break;
        case 2:  /* Operating System */
            GetAttr.iAttributeType = MIF_DISPLAYSTRING;
            GetAttr.pAttributeValue = Names[Index].osname;
            break;
        case 3:  /* Operating system manufacturer */
            GetAttr.iAttributeType = MIF_DISPLAYSTRING;
            GetAttr.pAttributeValue = Names[Index].company;
            break;
        case 4:  /* The SL for the operating system */
            GetAttr.iAttributeType = MIF_DISPLAYSTRING;
            GetAttr.pAttributeValue = Names[Index].SL;
            break;
        default:    /* this is not an attribute ID we understand */
            return (DmiCiAttribute_t *)NULL;
    }
    return (DmiCiAttribute_t *)&GetAttr;
}

/*
    The caller is asking the instrumentation code to decommit from a set
    operation after a reserve has been issued.  Return CiTrue if successful,
    CiFalse otherwise.
*/

enum CiBoolean DMI_FUNC_ENTRY CiReleaseAttribute(DMI_UNSIGNED componentId,
                                  DMI_UNSIGNED groupId,
                                  DMI_UNSIGNED attributeId,
                                  DMI_UNSIGNED keyCount,
                                  DmiCiAttribute_t const _FAR *const keyList,
                                  void const _FAR *const attributeValue)
{
    return CiTrue;
}

/*
    The caller is asking if the specified attribute could be set if these
    same parameters were passed to the CiSetAttribute procedure.  Return CiTrue
    or CiFalse.
*/

enum CiBoolean DMI_FUNC_ENTRY CiReserveAttribute(DMI_UNSIGNED componentId,
                                  DMI_UNSIGNED groupId,
                                  DMI_UNSIGNED attributeId,
                                  DMI_UNSIGNED keyCount,
                                  DmiCiAttribute_t const _FAR *const keyList,
                                  void const _FAR *const attributeValue)
{
    return CiTrue;
}

/*
    Set the specified attribute with the given value.  If successful, return
    CiTrue, otherwise return CiFalse.  The component ID, group ID, and
    attribute ID are passed in as parameters.

    If the given group is not a table, then keyCount will be zero, and keyList
    will be a NIL pointer.

    If the group is a table a keyList may or may not be given.  If it is
    provided, then the attribute in the specified row should be set.  If there
    is no key list, then the attribute in the first row should be set.
*/

enum CiBoolean DMI_FUNC_ENTRY CiSetAttribute(DMI_UNSIGNED componentId,
                              DMI_UNSIGNED groupId,
                              DMI_UNSIGNED attributeId,
                              DMI_UNSIGNED keyCount,
                              DmiCiAttribute_t const _FAR *const keyList,
                              void const _FAR *const attributeValue)
{
    return CiFalse;
}

#endif

