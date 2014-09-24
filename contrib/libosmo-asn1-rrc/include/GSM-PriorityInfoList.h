/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_GSM_PriorityInfoList_H_
#define	_GSM_PriorityInfoList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GSM_PriorityInfo;

/* GSM-PriorityInfoList */
typedef struct GSM_PriorityInfoList {
	A_SEQUENCE_OF(struct GSM_PriorityInfo) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GSM_PriorityInfoList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GSM_PriorityInfoList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GSM-PriorityInfo.h"

#endif	/* _GSM_PriorityInfoList_H_ */
#include <asn_internal.h>