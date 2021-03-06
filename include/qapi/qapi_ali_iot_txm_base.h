#ifndef QAPI_ALI_IOT_TXM_BASE_H
#define QAPI_ALI_IOT_TXM_BASE_H 

/**
  @file qapi_iot_txm_base.h 
  @brief  Contains QAPI Driver ID mappings for Dataservices

 EXTERNALIZED FUNCTIONS
  none

 INITIALIZATION AND SEQUENCING REQUIREMENTS
  none

 Copyright (c) 2017  by Qualcomm Technologies, Inc.  All Rights Reserved.
 Confidential and Proprietary - Qualcomm Technologies, Inc.
 ======================================================================*/
/*======================================================================
 *
 *                       EDIT HISTORY FOR FILE
 *
 *   This section contains comments describing changes made to the
 *   module. Notice that changes are listed in reverse chronological
 *   order.
 *
 *  
 *
 *
 * when         who     what, where, why
 * ----------   ---     ------------------------------------------------
 ======================================================================*/
 

#ifdef __cplusplus
extern "C" {
#endif

#include "qapi_txm_base.h"

/*** Maximum IDs for dataservices is defined by macro TXM_QAPI_DATA_SERVICES_NUM_IDS ***/

#define  TXM_QAPI_IOT_BASE                        TXM_QAPI_FS_BASE + 30
/*SIMCOM zhangwei at 2017-11-10 for iot  hal  include begin */
#define  TXM_QAPI_IOT_NUM_IDS                     29
#define  TXM_QAPI_IOT_HAL_BASE                           (TXM_QAPI_IOT_BASE +TXM_QAPI_IOT_NUM_IDS + 1)
/*SIMCOM zhangwei at 2017-11-10 for iot  hal  include end */
#ifdef __cplusplus
} /* closing brace for extern "C" */
#endif

#endif /* QAPI_TXM_BASE_H */

