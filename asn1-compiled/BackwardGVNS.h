/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "TCAPMessages"
 * 	found in "../asn1/tcap.asn"
 */

#ifndef	_BackwardGVNS_H_
#define	_BackwardGVNS_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BackwardGVNS */
typedef OCTET_STRING_t	 BackwardGVNS_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BackwardGVNS;
asn_struct_free_f BackwardGVNS_free;
asn_struct_print_f BackwardGVNS_print;
asn_constr_check_f BackwardGVNS_constraint;
ber_type_decoder_f BackwardGVNS_decode_ber;
der_type_encoder_f BackwardGVNS_encode_der;
xer_type_decoder_f BackwardGVNS_decode_xer;
xer_type_encoder_f BackwardGVNS_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _BackwardGVNS_H_ */
#include <asn_internal.h>
