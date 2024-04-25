/*
 * SPDX-FileCopyrightText: (c) 2003, 2004 Lev Walkin <vlm@lionet.info>. All rights reserved.
 * SPDX-License-Identifier: BSD-1-Clause
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Components"
 *     found in "../supl-common.asn"
 */

#ifndef _GsmCellInformation_H
#define _GsmCellInformation_H

#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* Forward declarations */
    struct NMR;

    /* GsmCellInformation */
    typedef struct GsmCellInformation
    {
        long refMCC;
        long refMNC;
        long refLAC;
        long refCI;
        struct NMR *nMR /* OPTIONAL */;
        long *tA /* OPTIONAL */;
        /*
         * This type is extensible,
         * possible extensions are below.
         */

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } GsmCellInformation_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_GsmCellInformation;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NMR.h"

#endif /* _GsmCellInformation_H_ */
#include <asn_internal.h>
