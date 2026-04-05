## SPDX-License-Identifier: GPL-2.0-only

bootblock-y += bootblock.c
romstage-y += romstage.c
ramstage-y += ramstage.c

# AMD firmware config
AMDFW_CONFIG = $(src)/mainboard/$(MAINBOARDDIR)/amdfw.cfg

# Bootsplash
$(obj)/bootsplash.jpg: $(call strip_quotes,$(CONFIG_BOOTSPLASH_FILE))
	cp $< $@
