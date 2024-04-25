/*
 * SPDX-FileCopyrightText: (c) 2003, 2004 Lev Walkin <vlm@lionet.info>. All rights reserved.
 * SPDX-License-Identifier: BSD-1-Clause
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 *     found in "../rrlp-components.asn"
 */

#ifndef _PositionMethod_H
#define _PositionMethod_H

#include <asn_application.h>

/* Including external dependencies */
#include <ENUMERATED.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* Dependencies */
    typedef enum PositionMethod
    {
        PositionMethod_eotd = 0,
        PositionMethod_gps = 1,
        PositionMethod_gpsOrEOTD = 2
    } e_PositionMethod;

    /* PositionMethod */
    typedef ENUMERATED_t PositionMethod_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_PositionMethod;
    asn_struct_free_f PositionMethod_free;
    asn_struct_print_f PositionMethod_print;
    asn_constr_check_f PositionMethod_constraint;
    ber_type_decoder_f PositionMethod_decode_ber;
    der_type_encoder_f PositionMethod_encode_der;
    xer_type_decoder_f PositionMethod_decode_xer;
    xer_type_encoder_f PositionMethod_encode_xer;
    per_type_decoder_f PositionMethod_decode_uper;
    per_type_encoder_f PositionMethod_encode_uper;

#ifdef __cplusplus
}
#endif

#endif /* _PositionMethod_H_ */
#include <asn_internal.h>
