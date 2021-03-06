/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "TCAPMessages"
 * 	found in "../asn1/tcap.asn"
 */

#ifndef	_BothwayThroughConnectionInd_H_
#define	_BothwayThroughConnectionInd_H_


#include <asn_application.h>

/* Including external dependencies */
#include <ENUMERATED.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BothwayThroughConnectionInd {
	BothwayThroughConnectionInd_bothwayPathRequired	= 0,
	BothwayThroughConnectionInd_bothwayPathNotRequired	= 1
} e_BothwayThroughConnectionInd;

/* BothwayThroughConnectionInd */
typedef ENUMERATED_t	 BothwayThroughConnectionInd_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BothwayThroughConnectionInd;
asn_struct_free_f BothwayThroughConnectionInd_free;
asn_struct_print_f BothwayThroughConnectionInd_print;
asn_constr_check_f BothwayThroughConnectionInd_constraint;
ber_type_decoder_f BothwayThroughConnectionInd_decode_ber;
der_type_encoder_f BothwayThroughConnectionInd_encode_der;
xer_type_decoder_f BothwayThroughConnectionInd_decode_xer;
xer_type_encoder_f BothwayThroughConnectionInd_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _BothwayThroughConnectionInd_H_ */
#include <asn_internal.h>
