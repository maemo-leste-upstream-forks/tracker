/* tracker-bus.h generated by valac 0.37.2.2-c384a, the Vala compiler, do not modify */


#ifndef __TRACKER_BUS_H__
#define __TRACKER_BUS_H__

#include <glib.h>
#include "libtracker-sparql/tracker-sparql.h"
#include <stdlib.h>
#include <string.h>
#include <gio/gio.h>

G_BEGIN_DECLS


#define TRACKER_BUS_TYPE_CONNECTION (tracker_bus_connection_get_type ())
#define TRACKER_BUS_CONNECTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRACKER_BUS_TYPE_CONNECTION, TrackerBusConnection))
#define TRACKER_BUS_CONNECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRACKER_BUS_TYPE_CONNECTION, TrackerBusConnectionClass))
#define TRACKER_BUS_IS_CONNECTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRACKER_BUS_TYPE_CONNECTION))
#define TRACKER_BUS_IS_CONNECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRACKER_BUS_TYPE_CONNECTION))
#define TRACKER_BUS_CONNECTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRACKER_BUS_TYPE_CONNECTION, TrackerBusConnectionClass))

typedef struct _TrackerBusConnection TrackerBusConnection;
typedef struct _TrackerBusConnectionClass TrackerBusConnectionClass;
typedef struct _TrackerBusConnectionPrivate TrackerBusConnectionPrivate;

struct _TrackerBusConnection {
	TrackerSparqlConnection parent_instance;
	TrackerBusConnectionPrivate * priv;
};

struct _TrackerBusConnectionClass {
	TrackerSparqlConnectionClass parent_class;
};


GType tracker_bus_connection_get_type (void) G_GNUC_CONST;
TrackerBusConnection* tracker_bus_connection_new (const gchar* dbus_name, GError** error);
TrackerBusConnection* tracker_bus_connection_construct (GType object_type, const gchar* dbus_name, GError** error);


G_END_DECLS

#endif
