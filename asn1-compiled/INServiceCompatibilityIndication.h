/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "TCAPMessages"
 * 	found in "../asn1/tcap.asn"
 */

#ifndef	_INServiceCompatibilityIndication_H_
#define	_INServiceCompatibilityIndication_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Entry;

/* INServiceCompatibilityIndication */
typedef struct INServiceCompatibilityIndication {
	A_SEQUENCE_OF(struct Entry) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} INServiceCompatibilityIndication_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_INServiceCompatibilityIndication;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Entry.h"

#endif	/* _INServiceCompatibilityIndication_H_ */
#include <asn_internal.h>
