/* tracker-store.h generated by valac 0.22.1, the Vala compiler, do not modify */


#ifndef __TRACKER_STORE_H__
#define __TRACKER_STORE_H__

#include <glib.h>
#include <glib-object.h>
#include <gio/gio.h>
#include <stdlib.h>
#include <string.h>
#include "tracker-store/tracker-config.h"
#include "libtracker-data/tracker-data-update.h"
#include <float.h>
#include <math.h>
#include <gio/gunixoutputstream.h>
#include <gio/gunixinputstream.h>
#include "libtracker-data/tracker-db-interface.h"

G_BEGIN_DECLS


#define TRACKER_TYPE_BACKUP (tracker_backup_get_type ())
#define TRACKER_BACKUP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRACKER_TYPE_BACKUP, TrackerBackup))
#define TRACKER_BACKUP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRACKER_TYPE_BACKUP, TrackerBackupClass))
#define TRACKER_IS_BACKUP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRACKER_TYPE_BACKUP))
#define TRACKER_IS_BACKUP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRACKER_TYPE_BACKUP))
#define TRACKER_BACKUP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRACKER_TYPE_BACKUP, TrackerBackupClass))

typedef struct _TrackerBackup TrackerBackup;
typedef struct _TrackerBackupClass TrackerBackupClass;
typedef struct _TrackerBackupPrivate TrackerBackupPrivate;

#define TRACKER_TYPE_DBUS (tracker_dbus_get_type ())
#define TRACKER_DBUS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRACKER_TYPE_DBUS, TrackerDBus))
#define TRACKER_DBUS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRACKER_TYPE_DBUS, TrackerDBusClass))
#define TRACKER_IS_DBUS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRACKER_TYPE_DBUS))
#define TRACKER_IS_DBUS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRACKER_TYPE_DBUS))
#define TRACKER_DBUS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRACKER_TYPE_DBUS, TrackerDBusClass))

typedef struct _TrackerDBus TrackerDBus;
typedef struct _TrackerDBusClass TrackerDBusClass;
typedef struct _TrackerDBusPrivate TrackerDBusPrivate;

#define TRACKER_TYPE_STATUS (tracker_status_get_type ())
#define TRACKER_STATUS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRACKER_TYPE_STATUS, TrackerStatus))
#define TRACKER_STATUS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRACKER_TYPE_STATUS, TrackerStatusClass))
#define TRACKER_IS_STATUS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRACKER_TYPE_STATUS))
#define TRACKER_IS_STATUS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRACKER_TYPE_STATUS))
#define TRACKER_STATUS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRACKER_TYPE_STATUS, TrackerStatusClass))

typedef struct _TrackerStatus TrackerStatus;
typedef struct _TrackerStatusClass TrackerStatusClass;

#define TRACKER_TYPE_RESOURCES (tracker_resources_get_type ())
#define TRACKER_RESOURCES(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRACKER_TYPE_RESOURCES, TrackerResources))
#define TRACKER_RESOURCES_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRACKER_TYPE_RESOURCES, TrackerResourcesClass))
#define TRACKER_IS_RESOURCES(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRACKER_TYPE_RESOURCES))
#define TRACKER_IS_RESOURCES_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRACKER_TYPE_RESOURCES))
#define TRACKER_RESOURCES_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRACKER_TYPE_RESOURCES, TrackerResourcesClass))

typedef struct _TrackerResources TrackerResources;
typedef struct _TrackerResourcesClass TrackerResourcesClass;
typedef struct _TrackerResourcesPrivate TrackerResourcesPrivate;

#define TRACKER_TYPE_STATISTICS (tracker_statistics_get_type ())
#define TRACKER_STATISTICS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRACKER_TYPE_STATISTICS, TrackerStatistics))
#define TRACKER_STATISTICS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRACKER_TYPE_STATISTICS, TrackerStatisticsClass))
#define TRACKER_IS_STATISTICS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRACKER_TYPE_STATISTICS))
#define TRACKER_IS_STATISTICS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRACKER_TYPE_STATISTICS))
#define TRACKER_STATISTICS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRACKER_TYPE_STATISTICS, TrackerStatisticsClass))

typedef struct _TrackerStatistics TrackerStatistics;
typedef struct _TrackerStatisticsClass TrackerStatisticsClass;
typedef struct _TrackerStatisticsPrivate TrackerStatisticsPrivate;
typedef struct _TrackerStatusPrivate TrackerStatusPrivate;

#define TRACKER_TYPE_STEROIDS (tracker_steroids_get_type ())
#define TRACKER_STEROIDS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRACKER_TYPE_STEROIDS, TrackerSteroids))
#define TRACKER_STEROIDS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRACKER_TYPE_STEROIDS, TrackerSteroidsClass))
#define TRACKER_IS_STEROIDS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRACKER_TYPE_STEROIDS))
#define TRACKER_IS_STEROIDS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRACKER_TYPE_STEROIDS))
#define TRACKER_STEROIDS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRACKER_TYPE_STEROIDS, TrackerSteroidsClass))

typedef struct _TrackerSteroids TrackerSteroids;
typedef struct _TrackerSteroidsClass TrackerSteroidsClass;
typedef struct _TrackerSteroidsPrivate TrackerSteroidsPrivate;

#define TRACKER_TYPE_STORE (tracker_store_get_type ())
#define TRACKER_STORE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRACKER_TYPE_STORE, TrackerStore))
#define TRACKER_STORE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRACKER_TYPE_STORE, TrackerStoreClass))
#define TRACKER_IS_STORE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRACKER_TYPE_STORE))
#define TRACKER_IS_STORE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRACKER_TYPE_STORE))
#define TRACKER_STORE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRACKER_TYPE_STORE, TrackerStoreClass))

typedef struct _TrackerStore TrackerStore;
typedef struct _TrackerStoreClass TrackerStoreClass;
typedef struct _TrackerStorePrivate TrackerStorePrivate;

#define TRACKER_STORE_TYPE_PRIORITY (tracker_store_priority_get_type ())

struct _TrackerBackup {
	GObject parent_instance;
	TrackerBackupPrivate * priv;
};

struct _TrackerBackupClass {
	GObjectClass parent_class;
};

struct _TrackerDBus {
	GTypeInstance parent_instance;
	volatile int ref_count;
	TrackerDBusPrivate * priv;
};

struct _TrackerDBusClass {
	GTypeClass parent_class;
	void (*finalize) (TrackerDBus *self);
};

struct _TrackerResources {
	GObject parent_instance;
	TrackerResourcesPrivate * priv;
};

struct _TrackerResourcesClass {
	GObjectClass parent_class;
};

struct _TrackerStatistics {
	GObject parent_instance;
	TrackerStatisticsPrivate * priv;
};

struct _TrackerStatisticsClass {
	GObjectClass parent_class;
};

struct _TrackerStatus {
	GObject parent_instance;
	TrackerStatusPrivate * priv;
};

struct _TrackerStatusClass {
	GObjectClass parent_class;
};

struct _TrackerSteroids {
	GObject parent_instance;
	TrackerSteroidsPrivate * priv;
};

struct _TrackerSteroidsClass {
	GObjectClass parent_class;
};

struct _TrackerStore {
	GTypeInstance parent_instance;
	volatile int ref_count;
	TrackerStorePrivate * priv;
};

struct _TrackerStoreClass {
	GTypeClass parent_class;
	void (*finalize) (TrackerStore *self);
};

typedef enum  {
	TRACKER_STORE_PRIORITY_HIGH,
	TRACKER_STORE_PRIORITY_LOW,
	TRACKER_STORE_PRIORITY_TURTLE,
	TRACKER_STORE_PRIORITY_N_PRIORITIES
} TrackerStorePriority;

typedef void (*TrackerStoreSparqlQueryInThread) (TrackerDBCursor* cursor, void* user_data, GError** error);

GType tracker_backup_get_type (void) G_GNUC_CONST;
guint tracker_backup_register_object (void* object, GDBusConnection* connection, const gchar* path, GError** error);
#define TRACKER_BACKUP_PATH "/org/freedesktop/Tracker1/Backup"
void tracker_backup_save (TrackerBackup* self, const char* sender, const gchar* destination_uri, GAsyncReadyCallback _callback_, gpointer _user_data_);
void tracker_backup_save_finish (TrackerBackup* self, GAsyncResult* _res_, GError** error);
void tracker_backup_restore (TrackerBackup* self, const char* sender, const gchar* journal_uri, GAsyncReadyCallback _callback_, gpointer _user_data_);
void tracker_backup_restore_finish (TrackerBackup* self, GAsyncResult* _res_, GError** error);
TrackerBackup* tracker_backup_new (void);
TrackerBackup* tracker_backup_construct (GType object_type);
gpointer tracker_dbus_ref (gpointer instance);
void tracker_dbus_unref (gpointer instance);
GParamSpec* tracker_param_spec_dbus (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void tracker_value_set_dbus (GValue* value, gpointer v_object);
void tracker_value_take_dbus (GValue* value, gpointer v_object);
gpointer tracker_value_get_dbus (const GValue* value);
GType tracker_dbus_get_type (void) G_GNUC_CONST;
gboolean tracker_dbus_register_names (void);
gboolean tracker_dbus_init (TrackerConfig* config_p);
void tracker_dbus_shutdown (void);
GType tracker_status_get_type (void) G_GNUC_CONST;
guint tracker_status_register_object (void* object, GDBusConnection* connection, const gchar* path, GError** error);
TrackerStatus* tracker_dbus_register_notifier (void);
gboolean tracker_dbus_register_objects (void);
gboolean tracker_dbus_register_prepare_class_signal (void);
GObject* tracker_dbus_get_object (GType type);
TrackerDBus* tracker_dbus_new (void);
TrackerDBus* tracker_dbus_construct (GType object_type);
GType tracker_resources_get_type (void) G_GNUC_CONST;
guint tracker_resources_register_object (void* object, GDBusConnection* connection, const gchar* path, GError** error);
#define TRACKER_RESOURCES_PATH "/org/freedesktop/Tracker1/Resources"
TrackerResources* tracker_resources_new (GDBusConnection* connection, TrackerConfig* config_p);
TrackerResources* tracker_resources_construct (GType object_type, GDBusConnection* connection, TrackerConfig* config_p);
void tracker_resources_load (TrackerResources* self, const char* sender, const gchar* uri, GAsyncReadyCallback _callback_, gpointer _user_data_);
void tracker_resources_load_finish (TrackerResources* self, GAsyncResult* _res_, GError** error);
void tracker_resources_sparql_query (TrackerResources* self, const char* sender, const gchar* query, GAsyncReadyCallback _callback_, gpointer _user_data_);
GVariant* tracker_resources_sparql_query_finish (TrackerResources* self, GAsyncResult* _res_, GError** error);
void tracker_resources_sparql_update (TrackerResources* self, const char* sender, const gchar* update, GAsyncReadyCallback _callback_, gpointer _user_data_);
void tracker_resources_sparql_update_finish (TrackerResources* self, GAsyncResult* _res_, GError** error);
void tracker_resources_sparql_update_blank (TrackerResources* self, const char* sender, const gchar* update, GAsyncReadyCallback _callback_, gpointer _user_data_);
GVariant* tracker_resources_sparql_update_blank_finish (TrackerResources* self, GAsyncResult* _res_, GError** error);
void tracker_resources_sync (TrackerResources* self, const char* sender);
void tracker_resources_batch_sparql_update (TrackerResources* self, const char* sender, const gchar* update, GAsyncReadyCallback _callback_, gpointer _user_data_);
void tracker_resources_batch_sparql_update_finish (TrackerResources* self, GAsyncResult* _res_, GError** error);
void tracker_resources_batch_commit (TrackerResources* self);
void tracker_resources_enable_signals (TrackerResources* self);
void tracker_resources_disable_signals (TrackerResources* self);
void tracker_resources_unreg_batches (TrackerResources* self, const gchar* old_owner);
GType tracker_statistics_get_type (void) G_GNUC_CONST;
guint tracker_statistics_register_object (void* object, GDBusConnection* connection, const gchar* path, GError** error);
#define TRACKER_STATISTICS_PATH "/org/freedesktop/Tracker1/Statistics"
GVariant* tracker_statistics_get (TrackerStatistics* self, const char* sender, GError** error);
TrackerStatistics* tracker_statistics_new (void);
TrackerStatistics* tracker_statistics_construct (GType object_type);
#define TRACKER_STATUS_PATH "/org/freedesktop/Tracker1/Status"
TrackerBusyCallback tracker_status_get_callback (TrackerStatus* self, void** result_target, GDestroyNotify* result_target_destroy_notify);
gdouble tracker_status_get_progress (TrackerStatus* self);
gchar* tracker_status_get_status (TrackerStatus* self);
void tracker_status_wait (TrackerStatus* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
void tracker_status_wait_finish (TrackerStatus* self, GAsyncResult* _res_, GError** error);
TrackerStatus* tracker_status_new (void);
TrackerStatus* tracker_status_construct (GType object_type);
GType tracker_steroids_get_type (void) G_GNUC_CONST;
guint tracker_steroids_register_object (void* object, GDBusConnection* connection, const gchar* path, GError** error);
#define TRACKER_STEROIDS_PATH "/org/freedesktop/Tracker1/Steroids"
#define TRACKER_STEROIDS_BUFFER_SIZE 65536
void tracker_steroids_query (TrackerSteroids* self, const char* sender, const gchar* query, GUnixOutputStream* output_stream, GAsyncReadyCallback _callback_, gpointer _user_data_);
gchar** tracker_steroids_query_finish (TrackerSteroids* self, GAsyncResult* _res_, int* result_length1, GError** error);
void tracker_steroids_update (TrackerSteroids* self, const char* sender, GUnixInputStream* input_stream, GAsyncReadyCallback _callback_, gpointer _user_data_);
void tracker_steroids_update_finish (TrackerSteroids* self, GAsyncResult* _res_, GError** error);
void tracker_steroids_batch_update (TrackerSteroids* self, const char* sender, GUnixInputStream* input_stream, GAsyncReadyCallback _callback_, gpointer _user_data_);
void tracker_steroids_batch_update_finish (TrackerSteroids* self, GAsyncResult* _res_, GError** error);
void tracker_steroids_update_blank (TrackerSteroids* self, const char* sender, GUnixInputStream* input_stream, GAsyncReadyCallback _callback_, gpointer _user_data_);
GVariant* tracker_steroids_update_blank_finish (TrackerSteroids* self, GAsyncResult* _res_, GError** error);
void tracker_steroids_batch_update_blank (TrackerSteroids* self, const char* sender, GUnixInputStream* input_stream, GAsyncReadyCallback _callback_, gpointer _user_data_);
GVariant* tracker_steroids_batch_update_blank_finish (TrackerSteroids* self, GAsyncResult* _res_, GError** error);
void tracker_steroids_update_array (TrackerSteroids* self, const char* sender, GUnixInputStream* input_stream, GAsyncReadyCallback _callback_, gpointer _user_data_);
GVariant* tracker_steroids_update_array_finish (TrackerSteroids* self, GAsyncResult* _res_, GError** error);
TrackerSteroids* tracker_steroids_new (void);
TrackerSteroids* tracker_steroids_construct (GType object_type);
gpointer tracker_store_ref (gpointer instance);
void tracker_store_unref (gpointer instance);
GParamSpec* tracker_param_spec_store (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void tracker_value_set_store (GValue* value, gpointer v_object);
void tracker_value_take_store (GValue* value, gpointer v_object);
gpointer tracker_value_get_store (const GValue* value);
GType tracker_store_get_type (void) G_GNUC_CONST;
GType tracker_store_priority_get_type (void) G_GNUC_CONST;
void tracker_store_wal_checkpoint (void);
void tracker_store_init (void);
void tracker_store_shutdown (void);
void tracker_store_sparql_query (const gchar* sparql, TrackerStorePriority priority, TrackerStoreSparqlQueryInThread in_thread, void* in_thread_target, const gchar* client_id, GAsyncReadyCallback _callback_, gpointer _user_data_);
void tracker_store_sparql_query_finish (GAsyncResult* _res_, GError** error);
void tracker_store_sparql_update (const gchar* sparql, TrackerStorePriority priority, const gchar* client_id, GAsyncReadyCallback _callback_, gpointer _user_data_);
void tracker_store_sparql_update_finish (GAsyncResult* _res_, GError** error);
void tracker_store_sparql_update_blank (const gchar* sparql, TrackerStorePriority priority, const gchar* client_id, GAsyncReadyCallback _callback_, gpointer _user_data_);
GVariant* tracker_store_sparql_update_blank_finish (GAsyncResult* _res_, GError** error);
void tracker_store_queue_turtle_import (GFile* file, const gchar* client_id, GAsyncReadyCallback _callback_, gpointer _user_data_);
void tracker_store_queue_turtle_import_finish (GAsyncResult* _res_, GError** error);
guint tracker_store_get_queue_size (TrackerStore* self);
void tracker_store_unreg_batches (const gchar* client_id);
void tracker_store_pause (GAsyncReadyCallback _callback_, gpointer _user_data_);
void tracker_store_pause_finish (GAsyncResult* _res_);
void tracker_store_resume (void);
TrackerStore* tracker_store_new (void);
TrackerStore* tracker_store_construct (GType object_type);


G_END_DECLS

#endif
