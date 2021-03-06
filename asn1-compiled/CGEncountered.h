/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "TCAPMessages"
 * 	found in "../asn1/tcap.asn"
 */

#ifndef	_CGEncountered_H_
#define	_CGEncountered_H_


#include <asn_application.h>

/* Including external dependencies */
#include <ENUMERATED.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CGEncountered {
	CGEncountered_noCGencountered	= 0,
	CGEncountered_manualCGencountered	= 1,
	CGEncountered_sCPOverload	= 2
} e_CGEncountered;

/* CGEncountered */
typedef ENUMERATED_t	 CGEncountered_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CGEncountered;
asn_struct_free_f CGEncountered_free;
asn_struct_print_f CGEncountered_print;
asn_constr_check_f CGEncountered_constraint;
ber_type_decoder_f CGEncountered_decode_ber;
der_type_encoder_f CGEncountered_encode_der;
xer_type_decoder_f CGEncountered_decode_xer;
xer_type_encoder_f CGEncountered_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _CGEncountered_H_ */
#include <asn_internal.h>
