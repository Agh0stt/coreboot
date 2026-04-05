/* SPDX-License-Identifier: GPL-2.0-only */

#include <baseboard/variants.h>
#include <soc/romstage.h>

void mainboard_romstage_params(struct romstage_params *params)
{
	/* DRAM config handled via APCB/AGESA
	 * DIMM B only, SPD on I2C2 addr 0x51 */
}
