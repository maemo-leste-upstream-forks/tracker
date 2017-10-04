/* tracker-direct.h generated by valac 0.38.1, the Vala compiler, do not modify */


#ifndef __TRACKER_DIRECT_H__
#define __TRACKER_DIRECT_H__

#include <glib.h>
#include "libtracker-sparql/tracker-sparql.h"
#include <gio/gio.h>

G_BEGIN_DECLS


#define TRACKER_DIRECT_TYPE_CONNECTION (tracker_direct_connection_get_type ())
#define TRACKER_DIRECT_CONNECTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRACKER_DIRECT_TYPE_CONNECTION, TrackerDirectConnection))
#define TRACKER_DIRECT_CONNECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRACKER_DIRECT_TYPE_CONNECTION, TrackerDirectConnectionClass))
#define TRACKER_DIRECT_IS_CONNECTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRACKER_DIRECT_TYPE_CONNECTION))
#define TRACKER_DIRECT_IS_CONNECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRACKER_DIRECT_TYPE_CONNECTION))
#define TRACKER_DIRECT_CONNECTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRACKER_DIRECT_TYPE_CONNECTION, TrackerDirectConnectionClass))

typedef struct _TrackerDirectConnection TrackerDirectConnection;
typedef struct _TrackerDirectConnectionClass TrackerDirectConnectionClass;
typedef struct _TrackerDirectConnectionPrivate TrackerDirectConnectionPrivate;

struct _TrackerDirectConnection {
	TrackerSparqlConnection parent_instance;
	TrackerDirectConnectionPrivate * priv;
	GSourceFunc init_callback;
	gpointer init_callback_target;
	GDestroyNotify init_callback_target_destroy_notify;
};

struct _TrackerDirectConnectionClass {
	TrackerSparqlConnectionClass parent_class;
};


GType tracker_direct_connection_get_type (void) G_GNUC_CONST;
TrackerDirectConnection* tracker_direct_connection_new (TrackerSparqlConnectionFlags connection_flags, GFile* loc, GFile* journal, GFile* ontology, GError** error);
TrackerDirectConnection* tracker_direct_connection_construct (GType object_type, TrackerSparqlConnectionFlags connection_flags, GFile* loc, GFile* journal, GFile* ontology, GError** error);


G_END_DECLS

#endif
