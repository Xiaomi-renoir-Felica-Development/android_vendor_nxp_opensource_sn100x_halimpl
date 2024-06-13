/******************************************************************************
 *
<<<<<<<< HEAD:SN100x/extns/intf/nxpnfc/2.0/types.hal
 *  Copyright 2020 NXP
========
 *  Copyright 2019 Google, Inc.
>>>>>>>> LA.QSSI.14.0.c2-01700-qssi.0:SN100x/src/include/metrics.h
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at:
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 ******************************************************************************/
<<<<<<<< HEAD:SN100x/extns/intf/nxpnfc/2.0/types.hal
package vendor.nxp.nxpnfc@2.0;

enum NxpNfcHalEseState : uint64_t {
    HAL_NFC_ESE_UPDATE_COMPLETED = 0,
    HAL_NFC_ESE_UPDATE_STARTED,
    HAL_NFC_ESE_JCOP_UPDATE_REQUIRED,
    HAL_NFC_ESE_JCOP_UPDATE_COMPLETED,
    HAL_NFC_ESE_LS_UPDATE_REQUIRED,
    HAL_NFC_ESE_LS_UPDATE_COMPLETED
};
========

#pragma once

enum ErrorType { UNKNOWN, NCI_TIMEOUT, ERROR_NTF, AID_OVERFLOW };
>>>>>>>> LA.QSSI.14.0.c2-01700-qssi.0:SN100x/src/include/metrics.h
