/* tracker-remote.h generated by valac 0.43.90, the Vala compiler, do not modify */

#ifndef __TRACKER_REMOTE_H__
#define __TRACKER_REMOTE_H__

#include "libtracker-sparql/tracker-sparql.h"
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include <glib.h>
#include <stdlib.h>
#include <string.h>
#include <gio/gio.h>
#include <libsoup/soup.h>

G_BEGIN_DECLS

#define TRACKER_REMOTE_TYPE_JSON_CURSOR (tracker_remote_json_cursor_get_type ())
#define TRACKER_REMOTE_JSON_CURSOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRACKER_REMOTE_TYPE_JSON_CURSOR, TrackerRemoteJsonCursor))
#define TRACKER_REMOTE_JSON_CURSOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRACKER_REMOTE_TYPE_JSON_CURSOR, TrackerRemoteJsonCursorClass))
#define TRACKER_REMOTE_IS_JSON_CURSOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRACKER_REMOTE_TYPE_JSON_CURSOR))
#define TRACKER_REMOTE_IS_JSON_CURSOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRACKER_REMOTE_TYPE_JSON_CURSOR))
#define TRACKER_REMOTE_JSON_CURSOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRACKER_REMOTE_TYPE_JSON_CURSOR, TrackerRemoteJsonCursorClass))

typedef struct _TrackerRemoteJsonCursor TrackerRemoteJsonCursor;
typedef struct _TrackerRemoteJsonCursorClass TrackerRemoteJsonCursorClass;
typedef struct _TrackerRemoteJsonCursorPrivate TrackerRemoteJsonCursorPrivate;

#define TRACKER_REMOTE_TYPE_XML_CURSOR (tracker_remote_xml_cursor_get_type ())
#define TRACKER_REMOTE_XML_CURSOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRACKER_REMOTE_TYPE_XML_CURSOR, TrackerRemoteXmlCursor))
#define TRACKER_REMOTE_XML_CURSOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRACKER_REMOTE_TYPE_XML_CURSOR, TrackerRemoteXmlCursorClass))
#define TRACKER_REMOTE_IS_XML_CURSOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRACKER_REMOTE_TYPE_XML_CURSOR))
#define TRACKER_REMOTE_IS_XML_CURSOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRACKER_REMOTE_TYPE_XML_CURSOR))
#define TRACKER_REMOTE_XML_CURSOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRACKER_REMOTE_TYPE_XML_CURSOR, TrackerRemoteXmlCursorClass))

typedef struct _TrackerRemoteXmlCursor TrackerRemoteXmlCursor;
typedef struct _TrackerRemoteXmlCursorClass TrackerRemoteXmlCursorClass;
typedef struct _TrackerRemoteXmlCursorPrivate TrackerRemoteXmlCursorPrivate;

#define TRACKER_REMOTE_TYPE_CONNECTION (tracker_remote_connection_get_type ())
#define TRACKER_REMOTE_CONNECTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRACKER_REMOTE_TYPE_CONNECTION, TrackerRemoteConnection))
#define TRACKER_REMOTE_CONNECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRACKER_REMOTE_TYPE_CONNECTION, TrackerRemoteConnectionClass))
#define TRACKER_REMOTE_IS_CONNECTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRACKER_REMOTE_TYPE_CONNECTION))
#define TRACKER_REMOTE_IS_CONNECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRACKER_REMOTE_TYPE_CONNECTION))
#define TRACKER_REMOTE_CONNECTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRACKER_REMOTE_TYPE_CONNECTION, TrackerRemoteConnectionClass))

typedef struct _TrackerRemoteConnection TrackerRemoteConnection;
typedef struct _TrackerRemoteConnectionClass TrackerRemoteConnectionClass;
typedef struct _TrackerRemoteConnectionPrivate TrackerRemoteConnectionPrivate;

struct _TrackerRemoteJsonCursor {
	TrackerSparqlCursor parent_instance;
	TrackerRemoteJsonCursorPrivate * priv;
	JsonParser* _parser;
	JsonArray* _vars;
	JsonArray* _results;
	JsonObject* _cur_row;
	guint _cur_idx;
	gboolean _started_iterating;
};

struct _TrackerRemoteJsonCursorClass {
	TrackerSparqlCursorClass parent_class;
};

struct _TrackerRemoteXmlCursor {
	TrackerSparqlCursor parent_instance;
	TrackerRemoteXmlCursorPrivate * priv;
};

struct _TrackerRemoteXmlCursorClass {
	TrackerSparqlCursorClass parent_class;
};

struct _TrackerRemoteConnection {
	TrackerSparqlConnection parent_instance;
	TrackerRemoteConnectionPrivate * priv;
	SoupSession* _session;
	gchar* _base_uri;
};

struct _TrackerRemoteConnectionClass {
	TrackerSparqlConnectionClass parent_class;
};

GType tracker_remote_json_cursor_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (TrackerRemoteJsonCursor, g_object_unref)
TrackerRemoteJsonCursor* tracker_remote_json_cursor_new (const gchar* document,
                                                         glong length,
                                                         GError** error);
TrackerRemoteJsonCursor* tracker_remote_json_cursor_construct (GType object_type,
                                                               const gchar* document,
                                                               glong length,
                                                               GError** error);
GType tracker_remote_xml_cursor_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (TrackerRemoteXmlCursor, g_object_unref)
TrackerRemoteXmlCursor* tracker_remote_xml_cursor_new (const gchar* document,
                                                       glong length,
                                                       GError** error);
TrackerRemoteXmlCursor* tracker_remote_xml_cursor_construct (GType object_type,
                                                             const gchar* document,
                                                             glong length,
                                                             GError** error);
GType tracker_remote_connection_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (TrackerRemoteConnection, g_object_unref)
TrackerRemoteConnection* tracker_remote_connection_new (const gchar* base_uri);
TrackerRemoteConnection* tracker_remote_connection_construct (GType object_type,
                                                              const gchar* base_uri);

G_END_DECLS

#endif
