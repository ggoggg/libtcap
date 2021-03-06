/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "TCAPMessages"
 * 	found in "../asn1/tcap.asn"
 */

#ifndef	_Digits_H_
#define	_Digits_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Digits */
typedef OCTET_STRING_t	 Digits_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Digits;
asn_struct_free_f Digits_free;
asn_struct_print_f Digits_print;
asn_constr_check_f Digits_constraint;
ber_type_decoder_f Digits_decode_ber;
der_type_encoder_f Digits_encode_der;
xer_type_decoder_f Digits_decode_xer;
xer_type_encoder_f Digits_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _Digits_H_ */
#include <asn_internal.h>
