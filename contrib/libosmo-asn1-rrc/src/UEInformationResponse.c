/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "UEInformationResponse.h"

static ber_tlv_tag_t asn_DEF_nonCriticalExtensions_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtensions_specs_7 = {
	sizeof(struct UEInformationResponse__vb50NonCriticalExtensions__nonCriticalExtensions),
	offsetof(struct UEInformationResponse__vb50NonCriticalExtensions__nonCriticalExtensions, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtensions_7 = {
	"nonCriticalExtensions",
	"nonCriticalExtensions",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_nonCriticalExtensions_tags_7,
	sizeof(asn_DEF_nonCriticalExtensions_tags_7)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_7[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtensions_tags_7,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtensions_tags_7)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_7[0]), /* 2 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtensions_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_vb50NonCriticalExtensions_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UEInformationResponse__vb50NonCriticalExtensions, ueInformationResponse_vb50ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UEInformationResponse_vb50ext_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ueInformationResponse-vb50ext"
		},
	{ ATF_POINTER, 1, offsetof(struct UEInformationResponse__vb50NonCriticalExtensions, nonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_nonCriticalExtensions_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonCriticalExtensions"
		},
};
static int asn_MAP_vb50NonCriticalExtensions_oms_5[] = { 1 };
static ber_tlv_tag_t asn_DEF_vb50NonCriticalExtensions_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_vb50NonCriticalExtensions_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ueInformationResponse-vb50ext at 11501 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtensions at 11502 */
};
static asn_SEQUENCE_specifics_t asn_SPC_vb50NonCriticalExtensions_specs_5 = {
	sizeof(struct UEInformationResponse__vb50NonCriticalExtensions),
	offsetof(struct UEInformationResponse__vb50NonCriticalExtensions, _asn_ctx),
	asn_MAP_vb50NonCriticalExtensions_tag2el_5,
	2,	/* Count of tags in the map */
	asn_MAP_vb50NonCriticalExtensions_oms_5,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_vb50NonCriticalExtensions_5 = {
	"vb50NonCriticalExtensions",
	"vb50NonCriticalExtensions",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_vb50NonCriticalExtensions_tags_5,
	sizeof(asn_DEF_vb50NonCriticalExtensions_tags_5)
		/sizeof(asn_DEF_vb50NonCriticalExtensions_tags_5[0]) - 1, /* 1 */
	asn_DEF_vb50NonCriticalExtensions_tags_5,	/* Same as above */
	sizeof(asn_DEF_vb50NonCriticalExtensions_tags_5)
		/sizeof(asn_DEF_vb50NonCriticalExtensions_tags_5[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_vb50NonCriticalExtensions_5,
	2,	/* Elements count */
	&asn_SPC_vb50NonCriticalExtensions_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_UEInformationResponse_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UEInformationResponse, rrc_TransactionIdentifier),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_TransactionIdentifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rrc-TransactionIdentifier"
		},
	{ ATF_POINTER, 3, offsetof(struct UEInformationResponse, loggedMeasReport),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LoggedMeasReport,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"loggedMeasReport"
		},
	{ ATF_POINTER, 2, offsetof(struct UEInformationResponse, loggedANRReportInfoList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LoggedANRReportInfoList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"loggedANRReportInfoList"
		},
	{ ATF_POINTER, 1, offsetof(struct UEInformationResponse, vb50NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_vb50NonCriticalExtensions_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"vb50NonCriticalExtensions"
		},
};
static int asn_MAP_UEInformationResponse_oms_1[] = { 1, 2, 3 };
static ber_tlv_tag_t asn_DEF_UEInformationResponse_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_UEInformationResponse_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrc-TransactionIdentifier at 11497 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* loggedMeasReport at 11498 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* loggedANRReportInfoList at 11499 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* vb50NonCriticalExtensions at 11501 */
};
static asn_SEQUENCE_specifics_t asn_SPC_UEInformationResponse_specs_1 = {
	sizeof(struct UEInformationResponse),
	offsetof(struct UEInformationResponse, _asn_ctx),
	asn_MAP_UEInformationResponse_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_UEInformationResponse_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UEInformationResponse = {
	"UEInformationResponse",
	"UEInformationResponse",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_UEInformationResponse_tags_1,
	sizeof(asn_DEF_UEInformationResponse_tags_1)
		/sizeof(asn_DEF_UEInformationResponse_tags_1[0]), /* 1 */
	asn_DEF_UEInformationResponse_tags_1,	/* Same as above */
	sizeof(asn_DEF_UEInformationResponse_tags_1)
		/sizeof(asn_DEF_UEInformationResponse_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UEInformationResponse_1,
	4,	/* Elements count */
	&asn_SPC_UEInformationResponse_specs_1	/* Additional specs */
};

