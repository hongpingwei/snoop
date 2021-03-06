/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_HS_DSCH_PagingSystemInformation_H_
#define	_HS_DSCH_PagingSystemInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SecondaryScramblingCode.h"
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include "TransportBlockSizeIndex.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PICH_ForHSDPASupportedPaging;

/* HS-DSCH-PagingSystemInformation */
typedef struct HS_DSCH_PagingSystemInformation {
	SecondaryScramblingCode_t	*dlScramblingCode	/* OPTIONAL */;
	struct HS_DSCH_PagingSystemInformation__pich_ForHSDPASupportedPagingList {
		A_SEQUENCE_OF(struct PICH_ForHSDPASupportedPaging) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} pich_ForHSDPASupportedPagingList;
	long	 numberOfPcchTransmissions;
	struct HS_DSCH_PagingSystemInformation__transportBlockSizeList {
		A_SEQUENCE_OF(TransportBlockSizeIndex_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} transportBlockSizeList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HS_DSCH_PagingSystemInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HS_DSCH_PagingSystemInformation;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PICH-ForHSDPASupportedPaging.h"

#endif	/* _HS_DSCH_PagingSystemInformation_H_ */
#include <asn_internal.h>
