/*  =========================================================================
    fty_prometheus_rest_classes - private header file

    Copyright (C) 2014 - 2018 Eaton

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
    =========================================================================
*/

#ifndef FTY_PROMETHEUS_REST_CLASSES_H_INCLUDED
#define FTY_PROMETHEUS_REST_CLASSES_H_INCLUDED

//  Platform definitions, must come first
#include "platform.h"

//  External API
#include "../include/fty_prometheus_rest.h"

//  Extra headers

//  Opaque class structures to allow forward references
#ifndef TNTMLM_T_DEFINED
typedef struct _tntmlm_t tntmlm_t;
#define TNTMLM_T_DEFINED
#endif
#ifndef METRICS_T_DEFINED
typedef struct _metrics_t metrics_t;
#define METRICS_T_DEFINED
#endif

//  Internal API

#include "tntmlm.h"
#include "metrics.h"

//  *** To avoid double-definitions, only define if building without draft ***
#ifndef FTY_PROMETHEUS_REST_BUILD_DRAFT_API

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_PROMETHEUS_REST_PRIVATE void
    tntmlm_test (bool verbose);

//  Self test for private classes
FTY_PROMETHEUS_REST_PRIVATE void
    fty_prometheus_rest_private_selftest (bool verbose);

#endif // FTY_PROMETHEUS_REST_BUILD_DRAFT_API

#endif