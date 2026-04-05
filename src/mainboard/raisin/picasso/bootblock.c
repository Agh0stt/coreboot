/* SPDX-License-Identifier: GPL-2.0-only */

#include <bootblock_common.h>

void bootblock_mainboard_early_init(void)
{
	/* KB9022 EC on LPC — no early init needed,
	 * LPC bus activity from coreboot is sufficient
	 * to satisfy EC watchdog (~60s timeout) */
}
