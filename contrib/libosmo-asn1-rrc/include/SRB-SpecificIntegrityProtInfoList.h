/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "../asn/Internode-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_SRB_SpecificIntegrityProtInfoList_H_
#define	_SRB_SpecificIntegrityProtInfoList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SRB_SpecificIntegrityProtInfo;

/* SRB-SpecificIntegrityProtInfoList */
typedef struct SRB_SpecificIntegrityProtInfoList {
	A_SEQUENCE_OF(struct SRB_SpecificIntegrityProtInfo) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SRB_SpecificIntegrityProtInfoList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SRB_SpecificIntegrityProtInfoList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SRB-SpecificIntegrityProtInfo.h"

#endif	/* _SRB_SpecificIntegrityProtInfoList_H_ */
#include <asn_internal.h>
