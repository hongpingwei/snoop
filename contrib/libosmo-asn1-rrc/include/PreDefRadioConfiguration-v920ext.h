/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_PreDefRadioConfiguration_v920ext_H_
#define	_PreDefRadioConfiguration_v920ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MAC-hs-WindowSize-r9.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PreDefRadioConfiguration-v920ext */
typedef struct PreDefRadioConfiguration_v920ext {
	MAC_hs_WindowSize_r9_t	 mac_ehsWindowSize;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PreDefRadioConfiguration_v920ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PreDefRadioConfiguration_v920ext;

#ifdef __cplusplus
}
#endif

#endif	/* _PreDefRadioConfiguration_v920ext_H_ */
#include <asn_internal.h>
