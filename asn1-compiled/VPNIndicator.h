/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "TCAPMessages"
 * 	found in "../asn1/tcap.asn"
 */

#ifndef	_VPNIndicator_H_
#define	_VPNIndicator_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>

#ifdef __cplusplus
extern "C" {
#endif

/* VPNIndicator */
typedef BOOLEAN_t	 VPNIndicator_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VPNIndicator;
asn_struct_free_f VPNIndicator_free;
asn_struct_print_f VPNIndicator_print;
asn_constr_check_f VPNIndicator_constraint;
ber_type_decoder_f VPNIndicator_decode_ber;
der_type_encoder_f VPNIndicator_encode_der;
xer_type_decoder_f VPNIndicator_decode_xer;
xer_type_encoder_f VPNIndicator_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _VPNIndicator_H_ */
#include <asn_internal.h>
