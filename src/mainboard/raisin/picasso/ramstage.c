/* SPDX-License-Identifier: GPL-2.0-only */

#include <device/device.h>

static void mainboard_enable(struct device *dev)
{
	/* Nothing needed for basic boot.
	 * Add KB9022 EC mailbox init here later
	 * for fan/keyboard/battery support. */
}

struct chip_operations mainboard_ops = {
	.enable_dev = mainboard_enable,
};
