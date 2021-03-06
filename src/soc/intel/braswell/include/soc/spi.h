/* SPDX-License-Identifier: GPL-2.0-only */

#ifndef _SOC_SPI_H_
#define _SOC_SPI_H_

#include <stdint.h>

/* These registers live behind SPI_BASE_ADDRESS. */
#define HSFSTS				0x04
# define FLOCKDN			(0x1 << 15)
#define LVSCC				0xc4
# define VCL				(0x1 << 23)
# define EO(x)				(((x) & 0xff) << 8)
# define WG_1_BYTE			(0x0 << 2)
# define WG_64_BYTE			(0x1 << 2)
# define BES_256_BYTE			(0x0 << 0)
# define BES_4_KB			(0x1 << 0)
# define BES_8_KB			(0x2 << 0)
# define BES_64_KB			(0x3 << 0)
#define UVSCC				0xc8
#define SCS				0xf8
# define SMIWPEN			(0x1 << 7)
#define BCR				0xfc
# define EISS				(0x1 << 5)
# define SRC_MASK			(0x3 << 2)
# define SRC_CACHE_NO_PREFETCH		(0x0 << 2)
# define SRC_NO_CACHE_NO_PREFETCH	(0x1 << 2)
# define SRC_CACHE_PREFETCH		(0x2 << 2)
# define BCR_LE				(0x1 << 1)
# define BCR_WPD			(0x1 << 0)

/*
 * SPI VSCC configuration.
 */
struct vscc_config {
	uint32_t lvscc;
	uint32_t uvscc;
};

/* Return 0 on success < 0 on failure. */
int mainboard_get_spi_vscc_config(struct vscc_config *cfg);

#endif /* _SOC_SPI_H_ */
