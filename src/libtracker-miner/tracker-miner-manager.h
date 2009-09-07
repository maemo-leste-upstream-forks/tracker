/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*- */
/*
 * Copyright (C) 2009, Nokia (urho.konttori@nokia.com)
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA  02110-1301, USA.
 */

#ifndef __LIBTRACKERMINER_MANAGER_H__
#define __LIBTRACKERMINER_MANAGER_H__

#include <glib-object.h>

G_BEGIN_DECLS

#define TRACKER_TYPE_MINER_MANAGER         (tracker_miner_manager_get_type())
#define TRACKER_MINER_MANAGER(o)           (G_TYPE_CHECK_INSTANCE_CAST ((o), TRACKER_TYPE_MINER_MANAGER, TrackerMinerManager))
#define TRACKER_MINER_MANAGER_CLASS(c)     (G_TYPE_CHECK_CLASS_CAST ((c),    TRACKER_TYPE_MINER_MANAGER, TrackerMinerManagerClass))
#define TRACKER_IS_MINER_MANAGER(o)        (G_TYPE_CHECK_INSTANCE_TYPE ((o), TRACKER_TYPE_MINER_MANAGER))
#define TRACKER_IS_MINER_MANAGER_CLASS(c)  (G_TYPE_CHECK_CLASS_TYPE ((c),    TRACKER_TYPE_MINER_MANAGER))
#define TRACKER_MINER_MANAGER_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o),  TRACKER_TYPE_MINER_MANAGER, TrackerMinerManagerClass))

typedef struct TrackerMinerManager TrackerMinerManager;
typedef struct TrackerMinerManagerClass TrackerMinerManagerClass;

struct TrackerMinerManager {
	GObject parent_instance;
};

struct TrackerMinerManagerClass {
	GObjectClass parent_class;

	void (* miner_progress) (TrackerMinerManager *manager,
				 const gchar         *miner_name,
				 const gchar         *status,
				 gdouble              progress);
	void (* miner_paused)   (TrackerMinerManager *manager,
				 const gchar         *miner_name);
	void (* miner_resumed)  (TrackerMinerManager *manager,
				 const gchar         *miner_name);
};

GType   tracker_miner_manager_get_type (void) G_GNUC_CONST;

TrackerMinerManager * tracker_miner_manager_new (void);

GSList *tracker_miner_manager_get_running   (TrackerMinerManager *manager);
GSList *tracker_miner_manager_get_available (TrackerMinerManager *manager);

gboolean tracker_miner_manager_pause  (TrackerMinerManager *manager,
				       const gchar         *miner,
				       const gchar         *reason,
				       guint32             *cookie);
gboolean tracker_miner_manager_resume (TrackerMinerManager *manager,
				       const gchar         *miner,
				       guint32              cookie);

G_END_DECLS

#endif /* __LIBTRACKERMINER_MANAGER_H__ */
