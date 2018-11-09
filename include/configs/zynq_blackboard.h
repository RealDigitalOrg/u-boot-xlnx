/*
 * (C) Copyright 2012 Xilinx
 * (C) Copyright 2014 Digilent Inc.
 * (C) Copyright 2018 Real Digital
 *
 * Configuration for Zynq Development Board - Blackboard
 * See zynq-common.h for Zynq common configs
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __CONFIG_ZYNQ_BLACKBOARD_H
#define __CONFIG_ZYNQ_BLACKBOARD_H

#define CONFIG_ZYNQ_I2C0
#define CONFIG_ZYNQ_I2C1
#define CONFIG_SYS_I2C_EEPROM_ADDR_LEN	1
#define CONFIG_CMD_EEPROM
#define CONFIG_DISPLAY
#define CONFIG_I2C_EDID

/* Define Blackboard PS Clock Frequency to 33.3333 MHz */
#define CONFIG_ZYNQ_PS_CLK_FREQ	33333333UL

#include <configs/zynq-common.h>

#endif /* __CONFIG_ZYNQ_BLACKBOARD_H */
