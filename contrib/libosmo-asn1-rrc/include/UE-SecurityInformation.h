/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_UE_SecurityInformation_H_
#define	_UE_SecurityInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "START-Value.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UE-SecurityInformation */
typedef struct UE_SecurityInformation {
	START_Value_t	 start_CS;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_SecurityInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_SecurityInformation;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_SecurityInformation_H_ */
#include <asn_internal.h>
