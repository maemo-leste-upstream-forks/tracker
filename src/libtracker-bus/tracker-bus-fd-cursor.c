/* tracker-bus-fd-cursor.c generated by valac 0.36.3, the Vala compiler
 * generated from tracker-bus-fd-cursor.vala, do not modify */

/*
 * Copyright (C) 2010, Nokia <ivan.frade@nokia.com>
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

#include <glib.h>
#include <glib-object.h>
#include "libtracker-sparql/tracker-sparql.h"
#include <gio/gio.h>
#include <stdlib.h>
#include <string.h>


#define TRACKER_BUS_TYPE_FD_CURSOR (tracker_bus_fd_cursor_get_type ())
#define TRACKER_BUS_FD_CURSOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRACKER_BUS_TYPE_FD_CURSOR, TrackerBusFDCursor))
#define TRACKER_BUS_FD_CURSOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRACKER_BUS_TYPE_FD_CURSOR, TrackerBusFDCursorClass))
#define TRACKER_BUS_IS_FD_CURSOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRACKER_BUS_TYPE_FD_CURSOR))
#define TRACKER_BUS_IS_FD_CURSOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRACKER_BUS_TYPE_FD_CURSOR))
#define TRACKER_BUS_FD_CURSOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRACKER_BUS_TYPE_FD_CURSOR, TrackerBusFDCursorClass))

typedef struct _TrackerBusFDCursor TrackerBusFDCursor;
typedef struct _TrackerBusFDCursorClass TrackerBusFDCursorClass;
typedef struct _TrackerBusFDCursorPrivate TrackerBusFDCursorPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _TrackerBusFdCursorNextAsyncData TrackerBusFdCursorNextAsyncData;
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);
#define _vala_return_if_fail(expr, msg) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return; }
#define _vala_return_val_if_fail(expr, msg, val) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return val; }
#define _vala_warn_if_fail(expr, msg) if G_LIKELY (expr) ; else g_warn_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _TrackerBusFDCursor {
	TrackerSparqlCursor parent_instance;
	TrackerBusFDCursorPrivate * priv;
	gchar* buffer;
	gulong buffer_index;
	gulong buffer_size;
	gint _n_columns;
	gint* offsets;
	gint* types;
	gchar* data;
	gchar** variable_names;
	gint variable_names_length1;
	gint _variable_names_size_;
};

struct _TrackerBusFDCursorClass {
	TrackerSparqlCursorClass parent_class;
};

struct _TrackerBusFdCursorNextAsyncData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GTask* _async_result;
	TrackerBusFDCursor* self;
	GCancellable* cancellable;
	gboolean result;
	gboolean _tmp0_;
	GCancellable* _tmp1_;
	gboolean _tmp2_;
	GError * _inner_error_;
};


static gpointer tracker_bus_fd_cursor_parent_class = NULL;

GType tracker_bus_fd_cursor_get_type (void) G_GNUC_CONST;
enum  {
	TRACKER_BUS_FD_CURSOR_DUMMY_PROPERTY,
	TRACKER_BUS_FD_CURSOR_N_COLUMNS
};
TrackerBusFDCursor* tracker_bus_fd_cursor_new (gchar* buffer, gulong buffer_size, gchar** variable_names, int variable_names_length1);
TrackerBusFDCursor* tracker_bus_fd_cursor_construct (GType object_type, gchar* buffer, gulong buffer_size, gchar** variable_names, int variable_names_length1);
static gchar** _vala_array_dup3 (gchar** self, int length);
static inline gint tracker_bus_fd_cursor_buffer_read_int (TrackerBusFDCursor* self);
static TrackerSparqlValueType tracker_bus_fd_cursor_real_get_value_type (TrackerSparqlCursor* base, gint column);
static const gchar* tracker_bus_fd_cursor_real_get_variable_name (TrackerSparqlCursor* base, gint column);
static const gchar* tracker_bus_fd_cursor_real_get_string (TrackerSparqlCursor* base, gint column, glong* length);
static gboolean tracker_bus_fd_cursor_real_next (TrackerSparqlCursor* base, GCancellable* cancellable, GError** error);
static void tracker_bus_fd_cursor_real_next_async_data_free (gpointer _data);
static void tracker_bus_fd_cursor_real_next_async (TrackerSparqlCursor* base, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_);
static gboolean tracker_bus_fd_cursor_real_next_async_co (TrackerBusFdCursorNextAsyncData* _data_);
static void tracker_bus_fd_cursor_real_rewind (TrackerSparqlCursor* base);
static void tracker_bus_fd_cursor_finalize (GObject * obj);
static void _vala_tracker_bus_fd_cursor_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


static gchar** _vala_array_dup3 (gchar** self, int length) {
	gchar** result;
	int i;
#line 34 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	result = g_new0 (gchar*, length + 1);
#line 34 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	for (i = 0; i < length; i++) {
#line 115 "tracker-bus-fd-cursor.c"
		gchar* _tmp0_;
#line 34 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
		_tmp0_ = g_strdup (self[i]);
#line 34 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
		result[i] = _tmp0_;
#line 121 "tracker-bus-fd-cursor.c"
	}
#line 34 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	return result;
#line 125 "tracker-bus-fd-cursor.c"
}


TrackerBusFDCursor* tracker_bus_fd_cursor_construct (GType object_type, gchar* buffer, gulong buffer_size, gchar** variable_names, int variable_names_length1) {
	TrackerBusFDCursor * self = NULL;
	gchar* _tmp0_;
	gulong _tmp1_;
	gchar** _tmp2_;
	gint _tmp2__length1;
	gchar** _tmp3_;
	gint _tmp3__length1;
	gchar** _tmp4_;
	gint _tmp4__length1;
#line 31 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	self = (TrackerBusFDCursor*) tracker_sparql_cursor_construct (object_type);
#line 32 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp0_ = buffer;
#line 32 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	self->buffer = _tmp0_;
#line 33 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp1_ = buffer_size;
#line 33 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	self->buffer_size = _tmp1_;
#line 34 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp2_ = variable_names;
#line 34 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp2__length1 = variable_names_length1;
#line 34 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp3_ = (_tmp2_ != NULL) ? _vala_array_dup3 (_tmp2_, _tmp2__length1) : ((gpointer) _tmp2_);
#line 34 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp3__length1 = _tmp2__length1;
#line 34 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	self->variable_names = (_vala_array_free (self->variable_names, self->variable_names_length1, (GDestroyNotify) g_free), NULL);
#line 34 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	self->variable_names = _tmp3_;
#line 34 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	self->variable_names_length1 = _tmp3__length1;
#line 34 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	self->_variable_names_size_ = self->variable_names_length1;
#line 35 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp4_ = variable_names;
#line 35 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp4__length1 = variable_names_length1;
#line 35 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	self->_n_columns = _tmp4__length1;
#line 31 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	return self;
#line 173 "tracker-bus-fd-cursor.c"
}


TrackerBusFDCursor* tracker_bus_fd_cursor_new (gchar* buffer, gulong buffer_size, gchar** variable_names, int variable_names_length1) {
#line 31 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	return tracker_bus_fd_cursor_construct (TRACKER_BUS_TYPE_FD_CURSOR, buffer, buffer_size, variable_names, variable_names_length1);
#line 180 "tracker-bus-fd-cursor.c"
}


static inline gint tracker_bus_fd_cursor_buffer_read_int (TrackerBusFDCursor* self) {
	gint result = 0;
	gint v = 0;
	gchar* _tmp0_;
	gulong _tmp1_;
	gulong _tmp2_;
#line 42 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	g_return_val_if_fail (self != NULL, 0);
#line 43 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp0_ = self->buffer;
#line 43 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp1_ = self->buffer_index;
#line 43 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	v = *((gint*) (_tmp0_ + _tmp1_));
#line 45 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp2_ = self->buffer_index;
#line 45 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	self->buffer_index = _tmp2_ + 4;
#line 47 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	result = v;
#line 47 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	return result;
#line 206 "tracker-bus-fd-cursor.c"
}


static TrackerSparqlValueType tracker_bus_fd_cursor_real_get_value_type (TrackerSparqlCursor* base, gint column) {
	TrackerBusFDCursor * self;
	TrackerSparqlValueType result = 0;
	gint* _tmp0_;
	gint* _tmp1_;
	gint _tmp2_;
	gint _tmp3_;
#line 54 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	self = (TrackerBusFDCursor*) base;
#line 54 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp0_ = self->types;
#line 54 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_vala_return_val_if_fail (_tmp0_ != NULL, "types != null", 0);
#line 57 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp1_ = self->types;
#line 57 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp2_ = column;
#line 57 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp3_ = _tmp1_[_tmp2_];
#line 57 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	result = (TrackerSparqlValueType) _tmp3_;
#line 57 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	return result;
#line 233 "tracker-bus-fd-cursor.c"
}


static const gchar* tracker_bus_fd_cursor_real_get_variable_name (TrackerSparqlCursor* base, gint column) {
	TrackerBusFDCursor * self;
	const gchar* result = NULL;
	gchar** _tmp0_;
	gint _tmp0__length1;
	gchar** _tmp1_;
	gint _tmp1__length1;
	gint _tmp2_;
	const gchar* _tmp3_;
#line 60 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	self = (TrackerBusFDCursor*) base;
#line 60 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp0_ = self->variable_names;
#line 60 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp0__length1 = self->variable_names_length1;
#line 60 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_vala_return_val_if_fail (_tmp0_ != NULL, "variable_names != null", NULL);
#line 62 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp1_ = self->variable_names;
#line 62 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp1__length1 = self->variable_names_length1;
#line 62 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp2_ = column;
#line 62 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp3_ = _tmp1_[_tmp2_];
#line 62 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	result = _tmp3_;
#line 62 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	return result;
#line 266 "tracker-bus-fd-cursor.c"
}


static const gchar* tracker_bus_fd_cursor_real_get_string (TrackerSparqlCursor* base, gint column, glong* length) {
	TrackerBusFDCursor * self;
	glong _vala_length = 0L;
	const gchar* result = NULL;
	gint _tmp0_;
	gint _tmp1_;
	gint _tmp2_;
	gchar* _tmp3_;
	const gchar* str = NULL;
	gint* _tmp4_;
	gint _tmp5_;
	gint _tmp6_;
	gint _tmp7_;
	const gchar* _tmp13_;
	gint _tmp14_;
	gint _tmp15_;
	const gchar* _tmp16_;
#line 65 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	self = (TrackerBusFDCursor*) base;
#line 65 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp0_ = column;
#line 65 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp1_ = tracker_sparql_cursor_get_n_columns ((TrackerSparqlCursor*) self);
#line 65 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp2_ = _tmp1_;
#line 65 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp3_ = self->data;
#line 65 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_vala_return_val_if_fail ((_tmp0_ < _tmp2_) && (_tmp3_ != NULL), "column < n_columns && data != null", NULL);
#line 67 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	str = NULL;
#line 70 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp4_ = self->types;
#line 70 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp5_ = column;
#line 70 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp6_ = _tmp4_[_tmp5_];
#line 70 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	if (_tmp6_ == ((gint) TRACKER_SPARQL_VALUE_TYPE_UNBOUND)) {
#line 71 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
		_vala_length = (glong) 0;
#line 72 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
		result = NULL;
#line 72 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
		if (length) {
#line 72 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
			*length = _vala_length;
#line 317 "tracker-bus-fd-cursor.c"
		}
#line 72 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
		return result;
#line 321 "tracker-bus-fd-cursor.c"
	}
#line 75 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp7_ = column;
#line 75 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	if (_tmp7_ == 0) {
#line 327 "tracker-bus-fd-cursor.c"
		gchar* _tmp8_;
#line 76 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
		_tmp8_ = self->data;
#line 76 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
		str = (const gchar*) _tmp8_;
#line 333 "tracker-bus-fd-cursor.c"
	} else {
		gchar* _tmp9_;
		gint* _tmp10_;
		gint _tmp11_;
		gint _tmp12_;
#line 78 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
		_tmp9_ = self->data;
#line 78 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
		_tmp10_ = self->offsets;
#line 78 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
		_tmp11_ = column;
#line 78 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
		_tmp12_ = _tmp10_[_tmp11_ - 1];
#line 78 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
		str = (const gchar*) ((_tmp9_ + _tmp12_) + 1);
#line 349 "tracker-bus-fd-cursor.c"
	}
#line 81 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp13_ = str;
#line 81 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp14_ = strlen (_tmp13_);
#line 81 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp15_ = _tmp14_;
#line 81 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_vala_length = (glong) _tmp15_;
#line 83 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp16_ = str;
#line 83 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	result = _tmp16_;
#line 83 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	if (length) {
#line 83 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
		*length = _vala_length;
#line 367 "tracker-bus-fd-cursor.c"
	}
#line 83 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	return result;
#line 371 "tracker-bus-fd-cursor.c"
}


static gboolean tracker_bus_fd_cursor_real_next (TrackerSparqlCursor* base, GCancellable* cancellable, GError** error) {
	TrackerBusFDCursor * self;
	gboolean result = FALSE;
	gint last_offset = 0;
	gboolean _tmp0_ = FALSE;
	GCancellable* _tmp1_;
	gulong _tmp6_;
	gulong _tmp7_;
	gint _tmp8_;
	gchar* _tmp9_;
	gulong _tmp10_;
	gulong _tmp11_;
	gint _tmp12_;
	gint _tmp13_;
	gchar* _tmp14_;
	gulong _tmp15_;
	gulong _tmp16_;
	gint _tmp17_;
	gint _tmp18_;
	gint _tmp19_;
	gchar* _tmp20_;
	gulong _tmp21_;
	gulong _tmp22_;
	gint _tmp23_;
	GError * _inner_error_ = NULL;
#line 86 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	self = (TrackerBusFDCursor*) base;
#line 89 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp1_ = cancellable;
#line 89 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	if (_tmp1_ != NULL) {
#line 406 "tracker-bus-fd-cursor.c"
		GCancellable* _tmp2_;
		gboolean _tmp3_;
#line 89 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
		_tmp2_ = cancellable;
#line 89 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
		_tmp3_ = g_cancellable_is_cancelled (_tmp2_);
#line 89 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
		_tmp0_ = _tmp3_;
#line 415 "tracker-bus-fd-cursor.c"
	} else {
#line 89 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
		_tmp0_ = FALSE;
#line 419 "tracker-bus-fd-cursor.c"
	}
#line 89 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	if (_tmp0_) {
#line 423 "tracker-bus-fd-cursor.c"
		GError* _tmp4_;
		gboolean _tmp5_ = FALSE;
#line 90 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
		_tmp4_ = g_error_new_literal (G_IO_ERROR, G_IO_ERROR_CANCELLED, "Operation was cancelled");
#line 90 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
		_inner_error_ = _tmp4_;
#line 90 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
		g_propagate_error (error, _inner_error_);
#line 90 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
		return _tmp5_;
#line 434 "tracker-bus-fd-cursor.c"
	}
#line 93 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp6_ = self->buffer_index;
#line 93 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp7_ = self->buffer_size;
#line 93 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	if (_tmp6_ >= _tmp7_) {
#line 94 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
		result = FALSE;
#line 94 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
		return result;
#line 446 "tracker-bus-fd-cursor.c"
	}
#line 104 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp8_ = tracker_bus_fd_cursor_buffer_read_int (self);
#line 104 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	self->_n_columns = _tmp8_;
#line 108 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp9_ = self->buffer;
#line 108 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp10_ = self->buffer_index;
#line 108 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	self->types = (gint*) (_tmp9_ + _tmp10_);
#line 109 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp11_ = self->buffer_index;
#line 109 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp12_ = tracker_sparql_cursor_get_n_columns ((TrackerSparqlCursor*) self);
#line 109 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp13_ = _tmp12_;
#line 109 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	self->buffer_index = _tmp11_ + (sizeof (gint) * _tmp13_);
#line 111 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp14_ = self->buffer;
#line 111 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp15_ = self->buffer_index;
#line 111 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	self->offsets = (gint*) (_tmp14_ + _tmp15_);
#line 112 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp16_ = self->buffer_index;
#line 112 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp17_ = tracker_sparql_cursor_get_n_columns ((TrackerSparqlCursor*) self);
#line 112 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp18_ = _tmp17_;
#line 112 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	self->buffer_index = _tmp16_ + (sizeof (gint) * (_tmp18_ - 1));
#line 113 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp19_ = tracker_bus_fd_cursor_buffer_read_int (self);
#line 113 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	last_offset = _tmp19_;
#line 115 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp20_ = self->buffer;
#line 115 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp21_ = self->buffer_index;
#line 115 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	self->data = _tmp20_ + _tmp21_;
#line 117 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp22_ = self->buffer_index;
#line 117 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp23_ = last_offset;
#line 117 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	self->buffer_index = _tmp22_ + (_tmp23_ + 1);
#line 119 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	result = TRUE;
#line 119 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	return result;
#line 500 "tracker-bus-fd-cursor.c"
}


static void tracker_bus_fd_cursor_real_next_async_data_free (gpointer _data) {
	TrackerBusFdCursorNextAsyncData* _data_;
	_data_ = _data;
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_g_object_unref0 (_data_->cancellable);
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_g_object_unref0 (_data_->self);
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	g_slice_free (TrackerBusFdCursorNextAsyncData, _data_);
#line 513 "tracker-bus-fd-cursor.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	return self ? g_object_ref (self) : NULL;
#line 520 "tracker-bus-fd-cursor.c"
}


static void tracker_bus_fd_cursor_real_next_async (TrackerSparqlCursor* base, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	TrackerBusFDCursor * self;
	TrackerBusFdCursorNextAsyncData* _data_;
	TrackerBusFDCursor* _tmp0_;
	GCancellable* _tmp1_;
	GCancellable* _tmp2_;
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	self = (TrackerBusFDCursor*) base;
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_data_ = g_slice_new0 (TrackerBusFdCursorNextAsyncData);
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_data_->_async_result = g_task_new (G_OBJECT (self), cancellable, _callback_, _user_data_);
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	g_task_set_task_data (_data_->_async_result, _data_, tracker_bus_fd_cursor_real_next_async_data_free);
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp0_ = _g_object_ref0 (self);
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_data_->self = _tmp0_;
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp1_ = cancellable;
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp2_ = _g_object_ref0 (_tmp1_);
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_g_object_unref0 (_data_->cancellable);
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_data_->cancellable = _tmp2_;
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	tracker_bus_fd_cursor_real_next_async_co (_data_);
#line 552 "tracker-bus-fd-cursor.c"
}


static gboolean tracker_bus_fd_cursor_real_next_finish (TrackerSparqlCursor* base, GAsyncResult* _res_, GError** error) {
	gboolean result;
	TrackerBusFdCursorNextAsyncData* _data_;
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_data_ = g_task_propagate_pointer (G_TASK (_res_), error);
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	if (NULL == _data_) {
#line 563 "tracker-bus-fd-cursor.c"
		gboolean _tmp0_ = FALSE;
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
		return _tmp0_;
#line 567 "tracker-bus-fd-cursor.c"
	}
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	result = _data_->result;
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	return result;
#line 573 "tracker-bus-fd-cursor.c"
}


static gboolean tracker_bus_fd_cursor_real_next_async_co (TrackerBusFdCursorNextAsyncData* _data_) {
#line 122 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	switch (_data_->_state_) {
#line 122 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
		case 0:
#line 582 "tracker-bus-fd-cursor.c"
		goto _state_0;
		default:
#line 122 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
		g_assert_not_reached ();
#line 587 "tracker-bus-fd-cursor.c"
	}
	_state_0:
#line 124 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_data_->_tmp1_ = _data_->cancellable;
#line 124 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_data_->_tmp2_ = tracker_sparql_cursor_next ((TrackerSparqlCursor*) _data_->self, _data_->_tmp1_, &_data_->_inner_error_);
#line 124 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_data_->_tmp0_ = _data_->_tmp2_;
#line 124 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	if (G_UNLIKELY (_data_->_inner_error_ != NULL)) {
#line 124 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
		g_task_return_error (_data_->_async_result, _data_->_inner_error_);
#line 124 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
		g_object_unref (_data_->_async_result);
#line 124 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
		return FALSE;
#line 604 "tracker-bus-fd-cursor.c"
	}
#line 124 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_data_->result = _data_->_tmp0_;
#line 124 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	g_task_return_pointer (_data_->_async_result, _data_, NULL);
#line 124 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	if (_data_->_state_ != 0) {
#line 124 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
		while (g_task_get_completed (_data_->_async_result) != TRUE) {
#line 124 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
			g_main_context_iteration (g_task_get_context (_data_->_async_result), TRUE);
#line 616 "tracker-bus-fd-cursor.c"
		}
	}
#line 124 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	g_object_unref (_data_->_async_result);
#line 124 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	return FALSE;
#line 623 "tracker-bus-fd-cursor.c"
}


static void tracker_bus_fd_cursor_real_rewind (TrackerSparqlCursor* base) {
	TrackerBusFDCursor * self;
	gchar* _tmp0_;
#line 127 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	self = (TrackerBusFDCursor*) base;
#line 128 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	self->buffer_index = (gulong) 0;
#line 129 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp0_ = self->buffer;
#line 129 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	self->data = _tmp0_;
#line 638 "tracker-bus-fd-cursor.c"
}


static gint tracker_bus_fd_cursor_real_get_n_columns (TrackerSparqlCursor* base) {
	gint result;
	TrackerBusFDCursor* self;
	gint _tmp0_;
#line 51 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	self = (TrackerBusFDCursor*) base;
#line 51 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp0_ = self->_n_columns;
#line 51 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	result = _tmp0_;
#line 51 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	return result;
#line 654 "tracker-bus-fd-cursor.c"
}


static void tracker_bus_fd_cursor_class_init (TrackerBusFDCursorClass * klass) {
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	tracker_bus_fd_cursor_parent_class = g_type_class_peek_parent (klass);
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	((TrackerSparqlCursorClass *) klass)->get_value_type = (TrackerSparqlValueType (*) (TrackerSparqlCursor *, gint)) tracker_bus_fd_cursor_real_get_value_type;
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	((TrackerSparqlCursorClass *) klass)->get_variable_name = (const gchar* (*) (TrackerSparqlCursor *, gint)) tracker_bus_fd_cursor_real_get_variable_name;
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	((TrackerSparqlCursorClass *) klass)->get_string = (const gchar* (*) (TrackerSparqlCursor *, gint, glong*)) tracker_bus_fd_cursor_real_get_string;
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	((TrackerSparqlCursorClass *) klass)->next = (gboolean (*) (TrackerSparqlCursor *, GCancellable*, GError**)) tracker_bus_fd_cursor_real_next;
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	((TrackerSparqlCursorClass *) klass)->next_async = (void (*) (TrackerSparqlCursor *, GCancellable*, GAsyncReadyCallback, gpointer)) tracker_bus_fd_cursor_real_next_async;
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	((TrackerSparqlCursorClass *) klass)->next_finish = (gboolean (*) (TrackerSparqlCursor *, GAsyncResult*, GError**)) tracker_bus_fd_cursor_real_next_finish;
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	((TrackerSparqlCursorClass *) klass)->rewind = (void (*) (TrackerSparqlCursor *)) tracker_bus_fd_cursor_real_rewind;
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	TRACKER_SPARQL_CURSOR_CLASS (klass)->get_n_columns = tracker_bus_fd_cursor_real_get_n_columns;
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_tracker_bus_fd_cursor_get_property;
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	G_OBJECT_CLASS (klass)->finalize = tracker_bus_fd_cursor_finalize;
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), TRACKER_BUS_FD_CURSOR_N_COLUMNS, g_param_spec_int ("n-columns", "n-columns", "n-columns", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
#line 683 "tracker-bus-fd-cursor.c"
}


static void tracker_bus_fd_cursor_instance_init (TrackerBusFDCursor * self) {
}


static void tracker_bus_fd_cursor_finalize (GObject * obj) {
	TrackerBusFDCursor * self;
	gchar* _tmp0_;
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TRACKER_BUS_TYPE_FD_CURSOR, TrackerBusFDCursor);
#line 39 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	_tmp0_ = self->buffer;
#line 39 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	g_free (_tmp0_);
#line 29 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	self->variable_names = (_vala_array_free (self->variable_names, self->variable_names_length1, (GDestroyNotify) g_free), NULL);
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	G_OBJECT_CLASS (tracker_bus_fd_cursor_parent_class)->finalize (obj);
#line 704 "tracker-bus-fd-cursor.c"
}


GType tracker_bus_fd_cursor_get_type (void) {
	static volatile gsize tracker_bus_fd_cursor_type_id__volatile = 0;
	if (g_once_init_enter (&tracker_bus_fd_cursor_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (TrackerBusFDCursorClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) tracker_bus_fd_cursor_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (TrackerBusFDCursor), 0, (GInstanceInitFunc) tracker_bus_fd_cursor_instance_init, NULL };
		GType tracker_bus_fd_cursor_type_id;
		tracker_bus_fd_cursor_type_id = g_type_register_static (TRACKER_SPARQL_TYPE_CURSOR, "TrackerBusFDCursor", &g_define_type_info, 0);
		g_once_init_leave (&tracker_bus_fd_cursor_type_id__volatile, tracker_bus_fd_cursor_type_id);
	}
	return tracker_bus_fd_cursor_type_id__volatile;
}


static void _vala_tracker_bus_fd_cursor_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	TrackerBusFDCursor * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TRACKER_BUS_TYPE_FD_CURSOR, TrackerBusFDCursor);
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
	switch (property_id) {
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
		case TRACKER_BUS_FD_CURSOR_N_COLUMNS:
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
		g_value_set_int (value, tracker_sparql_cursor_get_n_columns ((TrackerSparqlCursor*) self));
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
		break;
#line 731 "tracker-bus-fd-cursor.c"
		default:
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-bus-fd-cursor.vala"
		break;
#line 737 "tracker-bus-fd-cursor.c"
	}
}


static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}



