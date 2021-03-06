/* SPDX-License-Identifier: GPL-2.0-only */

#ifndef _SOC_RAMSTAGE_H_
#define _SOC_RAMSTAGE_H_

#include <device/device.h>
#include <fsp/api.h>
#include <fsp/util.h>

#include "../../chip.h"

void mainboard_silicon_init_params(FSPS_UPD *supd);
void soc_init_pre_device(void *chip_info);

#endif
