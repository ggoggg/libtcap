/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "TCAPMessages"
 * 	found in "../asn1/tcap.asn"
 */

#ifndef	_TerminalType_H_
#define	_TerminalType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <ENUMERATED.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TerminalType {
	TerminalType_unknown	= 0,
	TerminalType_dialPulse	= 1,
	TerminalType_dtmf	= 2,
	TerminalType_isdn	= 3,
	TerminalType_isdnNoDtmf	= 4,
	TerminalType_spare	= 16
} e_TerminalType;

/* TerminalType */
typedef ENUMERATED_t	 TerminalType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TerminalType;
asn_struct_free_f TerminalType_free;
asn_struct_print_f TerminalType_print;
asn_constr_check_f TerminalType_constraint;
ber_type_decoder_f TerminalType_decode_ber;
der_type_encoder_f TerminalType_encode_der;
xer_type_decoder_f TerminalType_decode_xer;
xer_type_encoder_f TerminalType_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _TerminalType_H_ */
#include <asn_internal.h>
