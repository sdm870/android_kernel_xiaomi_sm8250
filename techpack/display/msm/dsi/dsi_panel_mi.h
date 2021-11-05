/*
 * Copyright (c) 2021, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef _DSI_PANEL_MI_H_
#define _DSI_PANEL_MI_H_

struct dsi_panel_mi_cfg {
	struct dsi_panel *dsi_panel;

	bool panel_dead_flag;
	bool tddi_doubleclick_flag;
};

int dsi_panel_parse_mi_config(struct dsi_panel *panel,
				struct device_node *of_node);

#endif /* _DSI_PANEL_MI_H_ */
