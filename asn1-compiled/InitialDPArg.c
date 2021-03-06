/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "TCAPMessages"
 * 	found in "../asn1/tcap.asn"
 */

#include "InitialDPArg.h"

static asn_TYPE_member_t asn_MBR_InitialDPArg_1[] = {
	{ ATF_POINTER, 53, offsetof(struct InitialDPArg, serviceKey),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ServiceKey,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"serviceKey"
		},
	{ ATF_POINTER, 52, offsetof(struct InitialDPArg, dialledDigits),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CalledPartyNumber,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"dialledDigits"
		},
	{ ATF_POINTER, 51, offsetof(struct InitialDPArg, calledPartyNumber),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CalledPartyNumber,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"calledPartyNumber"
		},
	{ ATF_POINTER, 50, offsetof(struct InitialDPArg, callingPartyNumber),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CallingPartyNumber,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"callingPartyNumber"
		},
	{ ATF_POINTER, 49, offsetof(struct InitialDPArg, callingPartyBusinessGroupID),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CallingPartyBusinessGroupID,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"callingPartyBusinessGroupID"
		},
	{ ATF_POINTER, 48, offsetof(struct InitialDPArg, callingPartysCategory),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CallingPartysCategory,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"callingPartysCategory"
		},
	{ ATF_POINTER, 47, offsetof(struct InitialDPArg, callingPartySubaddress),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CallingPartySubaddress,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"callingPartySubaddress"
		},
	{ ATF_POINTER, 46, offsetof(struct InitialDPArg, cGEncountered),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CGEncountered,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"cGEncountered"
		},
	{ ATF_POINTER, 45, offsetof(struct InitialDPArg, iPSSPCapabilities),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IPSSPCapabilities,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"iPSSPCapabilities"
		},
	{ ATF_POINTER, 44, offsetof(struct InitialDPArg, iPAvailable),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IPAvailable,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"iPAvailable"
		},
	{ ATF_POINTER, 43, offsetof(struct InitialDPArg, locationNumber),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LocationNumber,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"locationNumber"
		},
	{ ATF_POINTER, 42, offsetof(struct InitialDPArg, miscCallInfo),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MiscCallInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"miscCallInfo"
		},
	{ ATF_POINTER, 41, offsetof(struct InitialDPArg, originalCalledPartyID),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OriginalCalledPartyID,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"originalCalledPartyID"
		},
	{ ATF_POINTER, 40, offsetof(struct InitialDPArg, serviceProfileIdentifier),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ServiceProfileIdentifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"serviceProfileIdentifier"
		},
	{ ATF_POINTER, 39, offsetof(struct InitialDPArg, terminalType),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TerminalType,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"terminalType"
		},
	{ ATF_POINTER, 38, offsetof(struct InitialDPArg, triggerType),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TriggerType,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"triggerType"
		},
	{ ATF_POINTER, 37, offsetof(struct InitialDPArg, highLayerCompatibility),
		(ASN_TAG_CLASS_CONTEXT | (23 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HighLayerCompatibility,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"highLayerCompatibility"
		},
	{ ATF_POINTER, 36, offsetof(struct InitialDPArg, serviceInteractionIndicators),
		(ASN_TAG_CLASS_CONTEXT | (24 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ServiceInteractionIndicators,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"serviceInteractionIndicators"
		},
	{ ATF_POINTER, 35, offsetof(struct InitialDPArg, additionalCallingPartyNumber),
		(ASN_TAG_CLASS_CONTEXT | (25 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AdditionalCallingPartyNumber,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"additionalCallingPartyNumber"
		},
	{ ATF_POINTER, 34, offsetof(struct InitialDPArg, forwardCallIndicators),
		(ASN_TAG_CLASS_CONTEXT | (26 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ForwardCallIndicators,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"forwardCallIndicators"
		},
	{ ATF_POINTER, 33, offsetof(struct InitialDPArg, bearerCapability),
		(ASN_TAG_CLASS_CONTEXT | (27 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_BearerCapability,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"bearerCapability"
		},
	{ ATF_POINTER, 32, offsetof(struct InitialDPArg, eventTypeBCSM),
		(ASN_TAG_CLASS_CONTEXT | (28 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EventTypeBCSM,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"eventTypeBCSM"
		},
	{ ATF_POINTER, 31, offsetof(struct InitialDPArg, redirectingPartyID),
		(ASN_TAG_CLASS_CONTEXT | (29 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RedirectingPartyID,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"redirectingPartyID"
		},
	{ ATF_POINTER, 30, offsetof(struct InitialDPArg, redirectionInformation),
		(ASN_TAG_CLASS_CONTEXT | (30 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RedirectionInformation,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"redirectionInformation"
		},
	{ ATF_POINTER, 29, offsetof(struct InitialDPArg, cause),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Cause,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"cause"
		},
	{ ATF_POINTER, 28, offsetof(struct InitialDPArg, componentType),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ComponentType,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"componentType"
		},
	{ ATF_POINTER, 27, offsetof(struct InitialDPArg, component),
		(ASN_TAG_CLASS_CONTEXT | (19 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Component,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"component"
		},
	{ ATF_POINTER, 26, offsetof(struct InitialDPArg, componentCorrelationID),
		(ASN_TAG_CLASS_CONTEXT | (20 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ComponentCorrelationID,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"componentCorrelationID"
		},
	{ ATF_POINTER, 25, offsetof(struct InitialDPArg, iSDNAccessRelatedInformation),
		(ASN_TAG_CLASS_CONTEXT | (21 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ISDNAccessRelatedInformation,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"iSDNAccessRelatedInformation"
		},
	{ ATF_POINTER, 24, offsetof(struct InitialDPArg, iNServiceCompatibilityIndication),
		(ASN_TAG_CLASS_CONTEXT | (22 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_INServiceCompatibilityIndication,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"iNServiceCompatibilityIndication"
		},
	{ ATF_POINTER, 23, offsetof(struct InitialDPArg, genericNumbers),
		(ASN_TAG_CLASS_CONTEXT | (31 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GenericNumbers,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"genericNumbers"
		},
	{ ATF_POINTER, 22, offsetof(struct InitialDPArg, serviceInteractionIndicatorsTwo),
		(ASN_TAG_CLASS_CONTEXT | (32 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ServiceInteractionIndicatorsTwo,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"serviceInteractionIndicatorsTwo"
		},
	{ ATF_POINTER, 21, offsetof(struct InitialDPArg, forwardGVNS),
		(ASN_TAG_CLASS_CONTEXT | (33 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ForwardGVNS,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"forwardGVNS"
		},
	{ ATF_POINTER, 20, offsetof(struct InitialDPArg, createdCallSegmentAssociation),
		(ASN_TAG_CLASS_CONTEXT | (34 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSAID,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"createdCallSegmentAssociation"
		},
	{ ATF_POINTER, 19, offsetof(struct InitialDPArg, uSIServiceIndicator),
		(ASN_TAG_CLASS_CONTEXT | (35 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_USIServiceIndicator,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"uSIServiceIndicator"
		},
	{ ATF_POINTER, 18, offsetof(struct InitialDPArg, uSIInformation),
		(ASN_TAG_CLASS_CONTEXT | (36 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_USIInformation,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"uSIInformation"
		},
	{ ATF_POINTER, 17, offsetof(struct InitialDPArg, carrier),
		(ASN_TAG_CLASS_CONTEXT | (37 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Carrier,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"carrier"
		},
	{ ATF_POINTER, 16, offsetof(struct InitialDPArg, cCSS),
		(ASN_TAG_CLASS_CONTEXT | (38 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CCSS,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"cCSS"
		},
	{ ATF_POINTER, 15, offsetof(struct InitialDPArg, vPNIndicator),
		(ASN_TAG_CLASS_CONTEXT | (39 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VPNIndicator,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"vPNIndicator"
		},
	{ ATF_POINTER, 14, offsetof(struct InitialDPArg, cNInfo),
		(ASN_TAG_CLASS_CONTEXT | (40 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CNInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"cNInfo"
		},
	{ ATF_POINTER, 13, offsetof(struct InitialDPArg, callReference),
		(ASN_TAG_CLASS_CONTEXT | (41 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CallReference,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"callReference"
		},
	{ ATF_POINTER, 12, offsetof(struct InitialDPArg, routeingNumber),
		(ASN_TAG_CLASS_CONTEXT | (42 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RouteingNumber,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"routeingNumber"
		},
	{ ATF_POINTER, 11, offsetof(struct InitialDPArg, callingGeodeticLocation),
		(ASN_TAG_CLASS_CONTEXT | (43 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CallingGeodeticLocation,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"callingGeodeticLocation"
		},
	{ ATF_POINTER, 10, offsetof(struct InitialDPArg, calledPartySubaddress),
		(ASN_TAG_CLASS_CONTEXT | (60 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CalledPartySubaddress,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"calledPartySubaddress"
		},
	{ ATF_POINTER, 9, offsetof(struct InitialDPArg, connectionIdentifier),
		(ASN_TAG_CLASS_CONTEXT | (61 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ConnectionIdentifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"connectionIdentifier"
		},
	{ ATF_POINTER, 8, offsetof(struct InitialDPArg, genericIdentifier),
		(ASN_TAG_CLASS_CONTEXT | (62 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GenericIdentifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"genericIdentifier"
		},
	{ ATF_POINTER, 7, offsetof(struct InitialDPArg, qOSParameter),
		(ASN_TAG_CLASS_CONTEXT | (63 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QoSParameter,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"qOSParameter"
		},
	{ ATF_POINTER, 6, offsetof(struct InitialDPArg, bISDNParameters),
		(ASN_TAG_CLASS_CONTEXT | (64 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BISDNParameters,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"bISDNParameters"
		},
	{ ATF_POINTER, 5, offsetof(struct InitialDPArg, globalCallReference),
		(ASN_TAG_CLASS_CONTEXT | (44 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GlobalCallReference,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"globalCallReference"
		},
	{ ATF_POINTER, 4, offsetof(struct InitialDPArg, cug_Index),
		(ASN_TAG_CLASS_CONTEXT | (45 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CUG_Index,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"cug-Index"
		},
	{ ATF_POINTER, 3, offsetof(struct InitialDPArg, cug_Interlock),
		(ASN_TAG_CLASS_CONTEXT | (46 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CUG_Interlock,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"cug-Interlock"
		},
	{ ATF_POINTER, 2, offsetof(struct InitialDPArg, cug_OutgoingAccess),
		(ASN_TAG_CLASS_CONTEXT | (47 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"cug-OutgoingAccess"
		},
	{ ATF_POINTER, 1, offsetof(struct InitialDPArg, ipRelatedInformation),
		(ASN_TAG_CLASS_CONTEXT | (48 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IPRelatedInformation,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"ipRelatedInformation"
		},
};
static ber_tlv_tag_t asn_DEF_InitialDPArg_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_InitialDPArg_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* serviceKey at 601 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dialledDigits at 602 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* calledPartyNumber at 603 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* callingPartyNumber at 604 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* callingPartyBusinessGroupID at 605 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* callingPartysCategory at 606 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* callingPartySubaddress at 607 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* cGEncountered at 608 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* iPSSPCapabilities at 609 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* iPAvailable at 610 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* locationNumber at 611 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* miscCallInfo at 612 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* originalCalledPartyID at 613 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* serviceProfileIdentifier at 614 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* terminalType at 615 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 15, 0, 0 }, /* triggerType at 617 */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 24, 0, 0 }, /* cause at 628 */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 25, 0, 0 }, /* componentType at 629 */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 26, 0, 0 }, /* component at 630 */
    { (ASN_TAG_CLASS_CONTEXT | (20 << 2)), 27, 0, 0 }, /* componentCorrelationID at 631 */
    { (ASN_TAG_CLASS_CONTEXT | (21 << 2)), 28, 0, 0 }, /* iSDNAccessRelatedInformation at 633 */
    { (ASN_TAG_CLASS_CONTEXT | (22 << 2)), 29, 0, 0 }, /* iNServiceCompatibilityIndication at 635 */
    { (ASN_TAG_CLASS_CONTEXT | (23 << 2)), 16, 0, 0 }, /* highLayerCompatibility at 618 */
    { (ASN_TAG_CLASS_CONTEXT | (24 << 2)), 17, 0, 0 }, /* serviceInteractionIndicators at 620 */
    { (ASN_TAG_CLASS_CONTEXT | (25 << 2)), 18, 0, 0 }, /* additionalCallingPartyNumber at 622 */
    { (ASN_TAG_CLASS_CONTEXT | (26 << 2)), 19, 0, 0 }, /* forwardCallIndicators at 623 */
    { (ASN_TAG_CLASS_CONTEXT | (27 << 2)), 20, 0, 0 }, /* bearerCapability at 624 */
    { (ASN_TAG_CLASS_CONTEXT | (28 << 2)), 21, 0, 0 }, /* eventTypeBCSM at 625 */
    { (ASN_TAG_CLASS_CONTEXT | (29 << 2)), 22, 0, 0 }, /* redirectingPartyID at 626 */
    { (ASN_TAG_CLASS_CONTEXT | (30 << 2)), 23, 0, 0 }, /* redirectionInformation at 627 */
    { (ASN_TAG_CLASS_CONTEXT | (31 << 2)), 30, 0, 0 }, /* genericNumbers at 636 */
    { (ASN_TAG_CLASS_CONTEXT | (32 << 2)), 31, 0, 0 }, /* serviceInteractionIndicatorsTwo at 638 */
    { (ASN_TAG_CLASS_CONTEXT | (33 << 2)), 32, 0, 0 }, /* forwardGVNS at 639 */
    { (ASN_TAG_CLASS_CONTEXT | (34 << 2)), 33, 0, 0 }, /* createdCallSegmentAssociation at 640 */
    { (ASN_TAG_CLASS_CONTEXT | (35 << 2)), 34, 0, 0 }, /* uSIServiceIndicator at 641 */
    { (ASN_TAG_CLASS_CONTEXT | (36 << 2)), 35, 0, 0 }, /* uSIInformation at 642 */
    { (ASN_TAG_CLASS_CONTEXT | (37 << 2)), 36, 0, 0 }, /* carrier at 643 */
    { (ASN_TAG_CLASS_CONTEXT | (38 << 2)), 37, 0, 0 }, /* cCSS at 644 */
    { (ASN_TAG_CLASS_CONTEXT | (39 << 2)), 38, 0, 0 }, /* vPNIndicator at 645 */
    { (ASN_TAG_CLASS_CONTEXT | (40 << 2)), 39, 0, 0 }, /* cNInfo at 646 */
    { (ASN_TAG_CLASS_CONTEXT | (41 << 2)), 40, 0, 0 }, /* callReference at 647 */
    { (ASN_TAG_CLASS_CONTEXT | (42 << 2)), 41, 0, 0 }, /* routeingNumber at 648 */
    { (ASN_TAG_CLASS_CONTEXT | (43 << 2)), 42, 0, 0 }, /* callingGeodeticLocation at 649 */
    { (ASN_TAG_CLASS_CONTEXT | (44 << 2)), 48, 0, 0 }, /* globalCallReference at 656 */
    { (ASN_TAG_CLASS_CONTEXT | (45 << 2)), 49, 0, 0 }, /* cug-Index at 657 */
    { (ASN_TAG_CLASS_CONTEXT | (46 << 2)), 50, 0, 0 }, /* cug-Interlock at 658 */
    { (ASN_TAG_CLASS_CONTEXT | (47 << 2)), 51, 0, 0 }, /* cug-OutgoingAccess at 659 */
    { (ASN_TAG_CLASS_CONTEXT | (48 << 2)), 52, 0, 0 }, /* ipRelatedInformation at 660 */
    { (ASN_TAG_CLASS_CONTEXT | (60 << 2)), 43, 0, 0 }, /* calledPartySubaddress at 650 */
    { (ASN_TAG_CLASS_CONTEXT | (61 << 2)), 44, 0, 0 }, /* connectionIdentifier at 651 */
    { (ASN_TAG_CLASS_CONTEXT | (62 << 2)), 45, 0, 0 }, /* genericIdentifier at 652 */
    { (ASN_TAG_CLASS_CONTEXT | (63 << 2)), 46, 0, 0 }, /* qOSParameter at 653 */
    { (ASN_TAG_CLASS_CONTEXT | (64 << 2)), 47, 0, 0 } /* bISDNParameters at 654 */
};
static asn_SEQUENCE_specifics_t asn_SPC_InitialDPArg_specs_1 = {
	sizeof(struct InitialDPArg),
	offsetof(struct InitialDPArg, _asn_ctx),
	asn_MAP_InitialDPArg_tag2el_1,
	53,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	47,	/* Start extensions */
	54	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_InitialDPArg = {
	"InitialDPArg",
	"InitialDPArg",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_InitialDPArg_tags_1,
	sizeof(asn_DEF_InitialDPArg_tags_1)
		/sizeof(asn_DEF_InitialDPArg_tags_1[0]), /* 1 */
	asn_DEF_InitialDPArg_tags_1,	/* Same as above */
	sizeof(asn_DEF_InitialDPArg_tags_1)
		/sizeof(asn_DEF_InitialDPArg_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_InitialDPArg_1,
	53,	/* Elements count */
	&asn_SPC_InitialDPArg_specs_1	/* Additional specs */
};

