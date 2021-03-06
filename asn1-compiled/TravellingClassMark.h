/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "TCAPMessages"
 * 	found in "../asn1/tcap.asn"
 */

#ifndef	_TravellingClassMark_H_
#define	_TravellingClassMark_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LocationNumber.h"

#ifdef __cplusplus
extern "C" {
#endif

/* TravellingClassMark */
typedef LocationNumber_t	 TravellingClassMark_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TravellingClassMark;
asn_struct_free_f TravellingClassMark_free;
asn_struct_print_f TravellingClassMark_print;
asn_constr_check_f TravellingClassMark_constraint;
ber_type_decoder_f TravellingClassMark_decode_ber;
der_type_encoder_f TravellingClassMark_encode_der;
xer_type_decoder_f TravellingClassMark_decode_xer;
xer_type_encoder_f TravellingClassMark_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _TravellingClassMark_H_ */
#include <asn_internal.h>
