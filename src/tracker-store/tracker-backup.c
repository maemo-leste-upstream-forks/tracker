/* tracker-backup.c generated by valac 0.11.4, the Vala compiler
 * generated from tracker-backup.vala, do not modify */

/*
 * Copyright (C) 2006, Jamie McCracken <jamiemcc@gnome.org>
 * Copyright (C) 2008-2011, Nokia <ivan.frade@nokia.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA  02110-1301, USA.
 */

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <gio/gio.h>
#include <tracker-store/tracker-events.h>
#include <libtracker-common/tracker-common.h>
#include <libtracker-data/tracker-data-query.h>
#include <libtracker-data/tracker-data-update.h>
#include <libtracker-data/tracker-data-backup.h>


#define TRACKER_TYPE_BACKUP (tracker_backup_get_type ())
#define TRACKER_BACKUP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRACKER_TYPE_BACKUP, TrackerBackup))
#define TRACKER_BACKUP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRACKER_TYPE_BACKUP, TrackerBackupClass))
#define TRACKER_IS_BACKUP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRACKER_TYPE_BACKUP))
#define TRACKER_IS_BACKUP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRACKER_TYPE_BACKUP))
#define TRACKER_BACKUP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRACKER_TYPE_BACKUP, TrackerBackupClass))

typedef struct _TrackerBackup TrackerBackup;
typedef struct _TrackerBackupClass TrackerBackupClass;
typedef struct _TrackerBackupPrivate TrackerBackupPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _Block1Data Block1Data;

#define TRACKER_TYPE_RESOURCES (tracker_resources_get_type ())
#define TRACKER_RESOURCES(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRACKER_TYPE_RESOURCES, TrackerResources))
#define TRACKER_RESOURCES_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRACKER_TYPE_RESOURCES, TrackerResourcesClass))
#define TRACKER_IS_RESOURCES(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRACKER_TYPE_RESOURCES))
#define TRACKER_IS_RESOURCES_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRACKER_TYPE_RESOURCES))
#define TRACKER_RESOURCES_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRACKER_TYPE_RESOURCES, TrackerResourcesClass))

typedef struct _TrackerResources TrackerResources;
typedef struct _TrackerResourcesClass TrackerResourcesClass;
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
typedef struct _Block2Data Block2Data;
typedef struct _TrackerBackupSaveData TrackerBackupSaveData;

#define TRACKER_TYPE_STATUS (tracker_status_get_type ())
#define TRACKER_STATUS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRACKER_TYPE_STATUS, TrackerStatus))
#define TRACKER_STATUS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRACKER_TYPE_STATUS, TrackerStatusClass))
#define TRACKER_IS_STATUS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRACKER_TYPE_STATUS))
#define TRACKER_IS_STATUS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRACKER_TYPE_STATUS))
#define TRACKER_STATUS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRACKER_TYPE_STATUS, TrackerStatusClass))

typedef struct _TrackerStatus TrackerStatus;
typedef struct _TrackerStatusClass TrackerStatusClass;
typedef struct _TrackerBackupRestoreData TrackerBackupRestoreData;

struct _TrackerBackup {
	GObject parent_instance;
	TrackerBackupPrivate * priv;
};

struct _TrackerBackupClass {
	GObjectClass parent_class;
};

struct _Block1Data {
	int _ref_count_;
	TrackerBackup * self;
	gpointer _async_data_;
};

struct _Block2Data {
	int _ref_count_;
	Block1Data * _data1_;
	GError* backup_error;
};

struct _TrackerBackupSaveData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	TrackerBackup* self;
	char* sender;
	gchar* destination_uri;
	Block1Data* _data1_;
	TrackerNotifyClassGetter getter;
	GObject* _tmp0_;
	TrackerResources* resources;
	TrackerNotifyClassGetter _tmp1_;
	TrackerDBusRequest* _tmp2_;
	TrackerDBusRequest* request;
	Block2Data* _data2_;
	GFile* _tmp3_;
	GFile* destination;
	GError* _tmp4_;
	GError * e;
	GError* _tmp5_;
	GError * _inner_error_;
};

struct _TrackerBackupRestoreData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	TrackerBackup* self;
	char* sender;
	gchar* journal_uri;
	TrackerNotifyClassGetter getter;
	GObject* _tmp0_;
	TrackerResources* resources;
	TrackerNotifyClassGetter _tmp1_;
	TrackerDBusRequest* _tmp2_;
	TrackerDBusRequest* request;
	GFile* _tmp3_;
	GFile* journal;
	GObject* _tmp4_;
	TrackerStatus* notifier;
	void* _tmp5_;
	GDestroyNotify _tmp6_;
	TrackerBusyCallback _tmp7_;
	void* busy_callback_target;
	GDestroyNotify busy_callback_target_destroy_notify;
	TrackerBusyCallback _tmp8_;
	TrackerBusyCallback busy_callback;
	GError * e;
	GError* _tmp9_;
	GError * _inner_error_;
};


static gpointer tracker_backup_parent_class = NULL;

GType tracker_backup_get_type (void) G_GNUC_CONST;
guint tracker_backup_register_object (void* object, GDBusConnection* connection, const gchar* path, GError** error);
enum  {
	TRACKER_BACKUP_DUMMY_PROPERTY
};
#define TRACKER_BACKUP_PATH "/org/freedesktop/Tracker1/Backup"
static void tracker_backup_save_data_free (gpointer _data);
void tracker_backup_save (TrackerBackup* self, const char* sender, const gchar* destination_uri, GAsyncReadyCallback _callback_, gpointer _user_data_);
void tracker_backup_save_finish (TrackerBackup* self, GAsyncResult* _res_, GError** error);
static gboolean tracker_backup_save_co (TrackerBackupSaveData* data);
static Block1Data* block1_data_ref (Block1Data* _data1_);
static void block1_data_unref (Block1Data* _data1_);
GObject* tracker_dbus_get_object (GType type);
GType tracker_resources_get_type (void) G_GNUC_CONST;
guint tracker_resources_register_object (void* object, GDBusConnection* connection, const gchar* path, GError** error);
void tracker_resources_disable_signals (TrackerResources* self);
static Block2Data* block2_data_ref (Block2Data* _data2_);
static void block2_data_unref (Block2Data* _data2_);
void tracker_store_pause (GAsyncReadyCallback _callback_, gpointer _user_data_);
void tracker_store_pause_finish (GAsyncResult* _res_);
static void tracker_backup_save_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_);
static void _lambda6_ (GError* _error_, Block2Data* _data2_);
static void __lambda6__tracker_data_backup_finished (GError* _error_, gpointer self);
void tracker_resources_enable_signals (TrackerResources* self);
void tracker_store_resume (void);
static void tracker_backup_restore_data_free (gpointer _data);
void tracker_backup_restore (TrackerBackup* self, const char* sender, const gchar* journal_uri, GAsyncReadyCallback _callback_, gpointer _user_data_);
void tracker_backup_restore_finish (TrackerBackup* self, GAsyncResult* _res_, GError** error);
static gboolean tracker_backup_restore_co (TrackerBackupRestoreData* data);
static void tracker_backup_restore_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_);
GType tracker_status_get_type (void) G_GNUC_CONST;
guint tracker_status_register_object (void* object, GDBusConnection* connection, const gchar* path, GError** error);
TrackerBusyCallback tracker_status_get_callback (TrackerStatus* self, void** result_target, GDestroyNotify* result_target_destroy_notify);
TrackerBackup* tracker_backup_new (void);
TrackerBackup* tracker_backup_construct (GType object_type);
static void _dbus_tracker_backup_save (TrackerBackup* self, GVariant* parameters, GDBusMethodInvocation* invocation);
static void _dbus_tracker_backup_save_ready (GObject * source_object, GAsyncResult * _res_, gpointer _user_data_);
static void _dbus_tracker_backup_restore (TrackerBackup* self, GVariant* parameters, GDBusMethodInvocation* invocation);
static void _dbus_tracker_backup_restore_ready (GObject * source_object, GAsyncResult * _res_, gpointer _user_data_);
static void tracker_backup_dbus_interface_method_call (GDBusConnection* connection, const gchar* sender, const gchar* object_path, const gchar* interface_name, const gchar* method_name, GVariant* parameters, GDBusMethodInvocation* invocation, gpointer user_data);
static GVariant* tracker_backup_dbus_interface_get_property (GDBusConnection* connection, const gchar* sender, const gchar* object_path, const gchar* interface_name, const gchar* property_name, GError** error, gpointer user_data);
static gboolean tracker_backup_dbus_interface_set_property (GDBusConnection* connection, const gchar* sender, const gchar* object_path, const gchar* interface_name, const gchar* property_name, GVariant* value, GError** error, gpointer user_data);
static void _tracker_backup_unregister_object (gpointer user_data);

static const GDBusArgInfo _tracker_backup_dbus_arg_info_save_destination_uri = {-1, "destination_uri", "s"};
static const GDBusArgInfo * const _tracker_backup_dbus_arg_info_save_in[] = {&_tracker_backup_dbus_arg_info_save_destination_uri, NULL};
static const GDBusArgInfo * const _tracker_backup_dbus_arg_info_save_out[] = {NULL};
static const GDBusMethodInfo _tracker_backup_dbus_method_info_save = {-1, "Save", (GDBusArgInfo **) (&_tracker_backup_dbus_arg_info_save_in), (GDBusArgInfo **) (&_tracker_backup_dbus_arg_info_save_out)};
static const GDBusArgInfo _tracker_backup_dbus_arg_info_restore_journal_uri = {-1, "journal_uri", "s"};
static const GDBusArgInfo * const _tracker_backup_dbus_arg_info_restore_in[] = {&_tracker_backup_dbus_arg_info_restore_journal_uri, NULL};
static const GDBusArgInfo * const _tracker_backup_dbus_arg_info_restore_out[] = {NULL};
static const GDBusMethodInfo _tracker_backup_dbus_method_info_restore = {-1, "Restore", (GDBusArgInfo **) (&_tracker_backup_dbus_arg_info_restore_in), (GDBusArgInfo **) (&_tracker_backup_dbus_arg_info_restore_out)};
static const GDBusMethodInfo * const _tracker_backup_dbus_method_info[] = {&_tracker_backup_dbus_method_info_save, &_tracker_backup_dbus_method_info_restore, NULL};
static const GDBusSignalInfo * const _tracker_backup_dbus_signal_info[] = {NULL};
static const GDBusPropertyInfo * const _tracker_backup_dbus_property_info[] = {NULL};
static const GDBusInterfaceInfo _tracker_backup_dbus_interface_info = {-1, "org.freedesktop.Tracker1.Backup", (GDBusMethodInfo **) (&_tracker_backup_dbus_method_info), (GDBusSignalInfo **) (&_tracker_backup_dbus_signal_info), (GDBusPropertyInfo **) (&_tracker_backup_dbus_property_info)};
static const GDBusInterfaceVTable _tracker_backup_dbus_interface_vtable = {tracker_backup_dbus_interface_method_call, tracker_backup_dbus_interface_get_property, tracker_backup_dbus_interface_set_property};

static void tracker_backup_save_data_free (gpointer _data) {
	TrackerBackupSaveData* data;
	data = _data;
	_g_free0 (data->sender);
	_g_free0 (data->destination_uri);
	_g_object_unref0 (data->self);
	g_slice_free (TrackerBackupSaveData, data);
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


void tracker_backup_save (TrackerBackup* self, const char* sender, const gchar* destination_uri, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	TrackerBackupSaveData* _data_;
	_data_ = g_slice_new0 (TrackerBackupSaveData);
	_data_->_async_result = g_simple_async_result_new (G_OBJECT (self), _callback_, _user_data_, tracker_backup_save);
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, tracker_backup_save_data_free);
	_data_->self = _g_object_ref0 (self);
	_data_->sender = g_strdup (sender);
	_data_->destination_uri = g_strdup (destination_uri);
	tracker_backup_save_co (_data_);
}


void tracker_backup_save_finish (TrackerBackup* self, GAsyncResult* _res_, GError** error) {
	TrackerBackupSaveData* _data_;
	if (g_simple_async_result_propagate_error (G_SIMPLE_ASYNC_RESULT (_res_), error)) {
		return;
	}
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
}


static Block1Data* block1_data_ref (Block1Data* _data1_) {
	g_atomic_int_inc (&_data1_->_ref_count_);
	return _data1_;
}


static void block1_data_unref (Block1Data* _data1_) {
	if (g_atomic_int_dec_and_test (&_data1_->_ref_count_)) {
		_g_object_unref0 (_data1_->self);
		g_slice_free (Block1Data, _data1_);
	}
}


static Block2Data* block2_data_ref (Block2Data* _data2_) {
	g_atomic_int_inc (&_data2_->_ref_count_);
	return _data2_;
}


static void block2_data_unref (Block2Data* _data2_) {
	if (g_atomic_int_dec_and_test (&_data2_->_ref_count_)) {
		block1_data_unref (_data2_->_data1_);
		_g_error_free0 (_data2_->backup_error);
		g_slice_free (Block2Data, _data2_);
	}
}


static void tracker_backup_save_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_) {
	TrackerBackupSaveData* data;
	data = _user_data_;
	data->_source_object_ = source_object;
	data->_res_ = _res_;
	tracker_backup_save_co (data);
}


static gpointer _g_error_copy0 (gpointer self) {
	return self ? g_error_copy (self) : NULL;
}


static void _lambda6_ (GError* _error_, Block2Data* _data2_) {
	Block1Data* _data1_;
	TrackerBackup * self;
	GError* _tmp0_;
	GError* _tmp1_;
	_data1_ = _data2_->_data1_;
	self = _data1_->self;
	_tmp0_ = _g_error_copy0 (_error_);
	_tmp1_ = _tmp0_;
	_g_error_free0 (_data2_->backup_error);
	_data2_->backup_error = _tmp1_;
	tracker_backup_save_co (_data1_->_async_data_);
}


static void __lambda6__tracker_data_backup_finished (GError* _error_, gpointer self) {
	_lambda6_ (_error_, self);
}


static gboolean tracker_backup_save_co (TrackerBackupSaveData* data) {
	switch (data->_state_) {
		case 0:
		goto _state_0;
		case 1:
		goto _state_1;
		case 2:
		goto _state_2;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	data->_data1_ = g_slice_new0 (Block1Data);
	data->_data1_->_ref_count_ = 1;
	data->_data1_->self = g_object_ref (data->self);
	data->_data1_->_async_data_ = data;
	data->getter = NULL;
	data->_tmp0_ = NULL;
	data->_tmp0_ = tracker_dbus_get_object (TRACKER_TYPE_RESOURCES);
	data->resources = TRACKER_RESOURCES (data->_tmp0_);
	if (data->resources != NULL) {
		tracker_resources_disable_signals (data->resources);
		data->_tmp1_ = NULL;
		data->_tmp1_ = tracker_events_get_class_getter ();
		data->getter = data->_tmp1_;
		tracker_events_shutdown ();
	}
	data->_tmp2_ = NULL;
	data->_tmp2_ = tracker_dbus_request_begin ((const gchar*) data->sender, "D-Bus request to save backup into '%s'", data->destination_uri, NULL);
	data->request = data->_tmp2_;
	data->_data2_ = g_slice_new0 (Block2Data);
	data->_data2_->_ref_count_ = 1;
	data->_data2_->_data1_ = block1_data_ref (data->_data1_);
	data->_tmp3_ = NULL;
	data->_tmp3_ = g_file_new_for_uri (data->destination_uri);
	data->destination = data->_tmp3_;
	data->_state_ = 1;
	tracker_store_pause (tracker_backup_save_ready, data);
	return FALSE;
	_state_1:
	tracker_store_pause_finish (data->_res_);
	data->_data2_->backup_error = NULL;
	tracker_data_backup_save (data->destination, __lambda6__tracker_data_backup_finished, block2_data_ref (data->_data2_), block2_data_unref);
	data->_state_ = 2;
	return FALSE;
	_state_2:
	;
	if (data->_data2_->backup_error != NULL) {
		data->_tmp4_ = _g_error_copy0 (data->_data2_->backup_error);
		data->_inner_error_ = data->_tmp4_;
		_g_object_unref0 (data->destination);
		block2_data_unref (data->_data2_);
		goto __catch0_g_error;
	}
	tracker_dbus_request_end (data->request, NULL);
	_g_object_unref0 (data->destination);
	block2_data_unref (data->_data2_);
	goto __finally0;
	__catch0_g_error:
	{
		data->e = data->_inner_error_;
		data->_inner_error_ = NULL;
		tracker_dbus_request_end (data->request, data->e);
		data->_tmp5_ = _g_error_copy0 (data->e);
		data->_inner_error_ = data->_tmp5_;
		_g_error_free0 (data->e);
		goto __finally0;
	}
	__finally0:
	if (data->resources != NULL) {
		tracker_events_init (data->getter);
		tracker_resources_enable_signals (data->resources);
	}
	tracker_store_resume ();
	if (data->_inner_error_ != NULL) {
		g_simple_async_result_set_from_error (data->_async_result, data->_inner_error_);
		g_error_free (data->_inner_error_);
		_g_object_unref0 (data->resources);
		block1_data_unref (data->_data1_);
		if (data->_state_ == 0) {
			g_simple_async_result_complete_in_idle (data->_async_result);
		} else {
			g_simple_async_result_complete (data->_async_result);
		}
		g_object_unref (data->_async_result);
		return FALSE;
	}
	_g_object_unref0 (data->resources);
	block1_data_unref (data->_data1_);
	if (data->_state_ == 0) {
		g_simple_async_result_complete_in_idle (data->_async_result);
	} else {
		g_simple_async_result_complete (data->_async_result);
	}
	g_object_unref (data->_async_result);
	return FALSE;
}


static void tracker_backup_restore_data_free (gpointer _data) {
	TrackerBackupRestoreData* data;
	data = _data;
	_g_free0 (data->sender);
	_g_free0 (data->journal_uri);
	_g_object_unref0 (data->self);
	g_slice_free (TrackerBackupRestoreData, data);
}


void tracker_backup_restore (TrackerBackup* self, const char* sender, const gchar* journal_uri, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	TrackerBackupRestoreData* _data_;
	_data_ = g_slice_new0 (TrackerBackupRestoreData);
	_data_->_async_result = g_simple_async_result_new (G_OBJECT (self), _callback_, _user_data_, tracker_backup_restore);
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, tracker_backup_restore_data_free);
	_data_->self = _g_object_ref0 (self);
	_data_->sender = g_strdup (sender);
	_data_->journal_uri = g_strdup (journal_uri);
	tracker_backup_restore_co (_data_);
}


void tracker_backup_restore_finish (TrackerBackup* self, GAsyncResult* _res_, GError** error) {
	TrackerBackupRestoreData* _data_;
	if (g_simple_async_result_propagate_error (G_SIMPLE_ASYNC_RESULT (_res_), error)) {
		return;
	}
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
}


static void tracker_backup_restore_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_) {
	TrackerBackupRestoreData* data;
	data = _user_data_;
	data->_source_object_ = source_object;
	data->_res_ = _res_;
	tracker_backup_restore_co (data);
}


static gboolean tracker_backup_restore_co (TrackerBackupRestoreData* data) {
	switch (data->_state_) {
		case 0:
		goto _state_0;
		case 1:
		goto _state_1;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	data->getter = NULL;
	data->_tmp0_ = NULL;
	data->_tmp0_ = tracker_dbus_get_object (TRACKER_TYPE_RESOURCES);
	data->resources = TRACKER_RESOURCES (data->_tmp0_);
	if (data->resources != NULL) {
		tracker_resources_disable_signals (data->resources);
		data->_tmp1_ = NULL;
		data->_tmp1_ = tracker_events_get_class_getter ();
		data->getter = data->_tmp1_;
		tracker_events_shutdown ();
	}
	data->_tmp2_ = NULL;
	data->_tmp2_ = tracker_dbus_request_begin ((const gchar*) data->sender, "D-Bus request to restore backup from '%s'", data->journal_uri, NULL);
	data->request = data->_tmp2_;
	data->_state_ = 1;
	tracker_store_pause (tracker_backup_restore_ready, data);
	return FALSE;
	_state_1:
	tracker_store_pause_finish (data->_res_);
	data->_tmp3_ = NULL;
	data->_tmp3_ = g_file_new_for_uri (data->journal_uri);
	data->journal = data->_tmp3_;
	data->_tmp4_ = NULL;
	data->_tmp4_ = tracker_dbus_get_object (TRACKER_TYPE_STATUS);
	data->notifier = TRACKER_STATUS (data->_tmp4_);
	data->_tmp5_ = NULL;
	data->_tmp6_ = NULL;
	data->_tmp7_ = NULL;
	data->_tmp7_ = tracker_status_get_callback (data->notifier, &data->_tmp5_, &data->_tmp6_);
	data->busy_callback_target = NULL;
	data->busy_callback_target_destroy_notify = NULL;
	data->_tmp8_ = data->_tmp7_;
	data->busy_callback_target = data->_tmp5_;
	data->busy_callback_target_destroy_notify = data->_tmp6_;
	data->busy_callback = data->_tmp8_;
	tracker_data_backup_restore (data->journal, NULL, data->busy_callback, data->busy_callback_target, &data->_inner_error_);
	if (data->_inner_error_ != NULL) {
		(data->busy_callback_target_destroy_notify == NULL) ? NULL : (data->busy_callback_target_destroy_notify (data->busy_callback_target), NULL);
		data->busy_callback = NULL;
		data->busy_callback_target = NULL;
		data->busy_callback_target_destroy_notify = NULL;
		_g_object_unref0 (data->notifier);
		_g_object_unref0 (data->journal);
		goto __catch1_g_error;
	}
	tracker_dbus_request_end (data->request, NULL);
	(data->busy_callback_target_destroy_notify == NULL) ? NULL : (data->busy_callback_target_destroy_notify (data->busy_callback_target), NULL);
	data->busy_callback = NULL;
	data->busy_callback_target = NULL;
	data->busy_callback_target_destroy_notify = NULL;
	_g_object_unref0 (data->notifier);
	_g_object_unref0 (data->journal);
	goto __finally1;
	__catch1_g_error:
	{
		data->e = data->_inner_error_;
		data->_inner_error_ = NULL;
		tracker_dbus_request_end (data->request, data->e);
		data->_tmp9_ = _g_error_copy0 (data->e);
		data->_inner_error_ = data->_tmp9_;
		_g_error_free0 (data->e);
		goto __finally1;
	}
	__finally1:
	if (data->resources != NULL) {
		tracker_events_init (data->getter);
		tracker_resources_enable_signals (data->resources);
	}
	tracker_store_resume ();
	if (data->_inner_error_ != NULL) {
		g_simple_async_result_set_from_error (data->_async_result, data->_inner_error_);
		g_error_free (data->_inner_error_);
		_g_object_unref0 (data->resources);
		if (data->_state_ == 0) {
			g_simple_async_result_complete_in_idle (data->_async_result);
		} else {
			g_simple_async_result_complete (data->_async_result);
		}
		g_object_unref (data->_async_result);
		return FALSE;
	}
	_g_object_unref0 (data->resources);
	if (data->_state_ == 0) {
		g_simple_async_result_complete_in_idle (data->_async_result);
	} else {
		g_simple_async_result_complete (data->_async_result);
	}
	g_object_unref (data->_async_result);
	return FALSE;
}


TrackerBackup* tracker_backup_construct (GType object_type) {
	TrackerBackup * self = NULL;
	self = (TrackerBackup*) g_object_new (object_type, NULL);
	return self;
}


TrackerBackup* tracker_backup_new (void) {
	return tracker_backup_construct (TRACKER_TYPE_BACKUP);
}


static void tracker_backup_class_init (TrackerBackupClass * klass) {
	tracker_backup_parent_class = g_type_class_peek_parent (klass);
}


static void tracker_backup_instance_init (TrackerBackup * self) {
}


GType tracker_backup_get_type (void) {
	static volatile gsize tracker_backup_type_id__volatile = 0;
	if (g_once_init_enter (&tracker_backup_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (TrackerBackupClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) tracker_backup_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (TrackerBackup), 0, (GInstanceInitFunc) tracker_backup_instance_init, NULL };
		GType tracker_backup_type_id;
		tracker_backup_type_id = g_type_register_static (G_TYPE_OBJECT, "TrackerBackup", &g_define_type_info, 0);
		g_type_set_qdata (tracker_backup_type_id, g_quark_from_static_string ("vala-dbus-register-object"), (void*) tracker_backup_register_object);
		g_once_init_leave (&tracker_backup_type_id__volatile, tracker_backup_type_id);
	}
	return tracker_backup_type_id__volatile;
}


static void _dbus_tracker_backup_save (TrackerBackup* self, GVariant* parameters, GDBusMethodInvocation* invocation) {
	GVariantIter _arguments_iter;
	gchar* destination_uri = NULL;
	GVariant* _tmp0_;
	g_variant_iter_init (&_arguments_iter, parameters);
	_tmp0_ = g_variant_iter_next_value (&_arguments_iter);
	destination_uri = g_variant_dup_string (_tmp0_, NULL);
	g_variant_unref (_tmp0_);
	tracker_backup_save (self, g_dbus_method_invocation_get_sender (invocation), destination_uri, (GAsyncReadyCallback) _dbus_tracker_backup_save_ready, invocation);
	_g_free0 (destination_uri);
}


static void _dbus_tracker_backup_save_ready (GObject * source_object, GAsyncResult * _res_, gpointer _user_data_) {
	GDBusMethodInvocation * invocation;
	GError* error = NULL;
	GDBusMessage* _reply_message;
	GVariant* _reply;
	GVariantBuilder _reply_builder;
	invocation = _user_data_;
	tracker_backup_save_finish ((TrackerBackup*) source_object, _res_, &error);
	if (error) {
		g_dbus_method_invocation_return_gerror (invocation, error);
		return;
	}
	_reply_message = g_dbus_message_new_method_reply (g_dbus_method_invocation_get_message (invocation));
	g_variant_builder_init (&_reply_builder, G_VARIANT_TYPE_TUPLE);
	_reply = g_variant_builder_end (&_reply_builder);
	g_dbus_message_set_body (_reply_message, _reply);
	g_dbus_connection_send_message (g_dbus_method_invocation_get_connection (invocation), _reply_message, G_DBUS_SEND_MESSAGE_FLAGS_NONE, NULL, NULL);
	g_object_unref (invocation);
	g_object_unref (_reply_message);
}


static void _dbus_tracker_backup_restore (TrackerBackup* self, GVariant* parameters, GDBusMethodInvocation* invocation) {
	GVariantIter _arguments_iter;
	gchar* journal_uri = NULL;
	GVariant* _tmp1_;
	g_variant_iter_init (&_arguments_iter, parameters);
	_tmp1_ = g_variant_iter_next_value (&_arguments_iter);
	journal_uri = g_variant_dup_string (_tmp1_, NULL);
	g_variant_unref (_tmp1_);
	tracker_backup_restore (self, g_dbus_method_invocation_get_sender (invocation), journal_uri, (GAsyncReadyCallback) _dbus_tracker_backup_restore_ready, invocation);
	_g_free0 (journal_uri);
}


static void _dbus_tracker_backup_restore_ready (GObject * source_object, GAsyncResult * _res_, gpointer _user_data_) {
	GDBusMethodInvocation * invocation;
	GError* error = NULL;
	GDBusMessage* _reply_message;
	GVariant* _reply;
	GVariantBuilder _reply_builder;
	invocation = _user_data_;
	tracker_backup_restore_finish ((TrackerBackup*) source_object, _res_, &error);
	if (error) {
		g_dbus_method_invocation_return_gerror (invocation, error);
		return;
	}
	_reply_message = g_dbus_message_new_method_reply (g_dbus_method_invocation_get_message (invocation));
	g_variant_builder_init (&_reply_builder, G_VARIANT_TYPE_TUPLE);
	_reply = g_variant_builder_end (&_reply_builder);
	g_dbus_message_set_body (_reply_message, _reply);
	g_dbus_connection_send_message (g_dbus_method_invocation_get_connection (invocation), _reply_message, G_DBUS_SEND_MESSAGE_FLAGS_NONE, NULL, NULL);
	g_object_unref (invocation);
	g_object_unref (_reply_message);
}


static void tracker_backup_dbus_interface_method_call (GDBusConnection* connection, const gchar* sender, const gchar* object_path, const gchar* interface_name, const gchar* method_name, GVariant* parameters, GDBusMethodInvocation* invocation, gpointer user_data) {
	gpointer* data;
	gpointer object;
	data = user_data;
	object = data[0];
	if (strcmp (method_name, "Save") == 0) {
		_dbus_tracker_backup_save (object, parameters, invocation);
	} else if (strcmp (method_name, "Restore") == 0) {
		_dbus_tracker_backup_restore (object, parameters, invocation);
	} else {
		g_object_unref (invocation);
	}
}


static GVariant* tracker_backup_dbus_interface_get_property (GDBusConnection* connection, const gchar* sender, const gchar* object_path, const gchar* interface_name, const gchar* property_name, GError** error, gpointer user_data) {
	gpointer* data;
	gpointer object;
	data = user_data;
	object = data[0];
	return NULL;
}


static gboolean tracker_backup_dbus_interface_set_property (GDBusConnection* connection, const gchar* sender, const gchar* object_path, const gchar* interface_name, const gchar* property_name, GVariant* value, GError** error, gpointer user_data) {
	gpointer* data;
	gpointer object;
	data = user_data;
	object = data[0];
	return FALSE;
}


guint tracker_backup_register_object (gpointer object, GDBusConnection* connection, const gchar* path, GError** error) {
	guint result;
	gpointer *data;
	data = g_new (gpointer, 3);
	data[0] = g_object_ref (object);
	data[1] = g_object_ref (connection);
	data[2] = g_strdup (path);
	result = g_dbus_connection_register_object (connection, path, (GDBusInterfaceInfo *) (&_tracker_backup_dbus_interface_info), &_tracker_backup_dbus_interface_vtable, data, _tracker_backup_unregister_object, error);
	if (!result) {
		return 0;
	}
	return result;
}


static void _tracker_backup_unregister_object (gpointer user_data) {
	gpointer* data;
	data = user_data;
	g_object_unref (data[0]);
	g_object_unref (data[1]);
	g_free (data[2]);
	g_free (data);
}



