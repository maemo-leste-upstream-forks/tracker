/* tracker-array-cursor.c generated by valac 0.38.2, the Vala compiler
 * generated from tracker-array-cursor.vala, do not modify */

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
#include <stdlib.h>
#include <string.h>
#include <gio/gio.h>


#define TRACKER_BUS_TYPE_ARRAY_CURSOR (tracker_bus_array_cursor_get_type ())
#define TRACKER_BUS_ARRAY_CURSOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRACKER_BUS_TYPE_ARRAY_CURSOR, TrackerBusArrayCursor))
#define TRACKER_BUS_ARRAY_CURSOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRACKER_BUS_TYPE_ARRAY_CURSOR, TrackerBusArrayCursorClass))
#define TRACKER_BUS_IS_ARRAY_CURSOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRACKER_BUS_TYPE_ARRAY_CURSOR))
#define TRACKER_BUS_IS_ARRAY_CURSOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRACKER_BUS_TYPE_ARRAY_CURSOR))
#define TRACKER_BUS_ARRAY_CURSOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRACKER_BUS_TYPE_ARRAY_CURSOR, TrackerBusArrayCursorClass))

typedef struct _TrackerBusArrayCursor TrackerBusArrayCursor;
typedef struct _TrackerBusArrayCursorClass TrackerBusArrayCursorClass;
typedef struct _TrackerBusArrayCursorPrivate TrackerBusArrayCursorPrivate;
enum  {
	TRACKER_BUS_ARRAY_CURSOR_DUMMY_PROPERTY,
	TRACKER_BUS_ARRAY_CURSOR_N_COLUMNS_PROPERTY,
	TRACKER_BUS_ARRAY_CURSOR_LAST_PROPERTY
};
static GParamSpec* tracker_bus_array_cursor_properties[TRACKER_BUS_ARRAY_CURSOR_LAST_PROPERTY];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _TrackerBusArrayCursorNextAsyncData TrackerBusArrayCursorNextAsyncData;
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);
#define _vala_return_if_fail(expr, msg) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return; }
#define _vala_return_val_if_fail(expr, msg, val) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return val; }
#define _vala_warn_if_fail(expr, msg) if G_LIKELY (expr) ; else g_warn_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _TrackerBusArrayCursor {
	TrackerSparqlCursor parent_instance;
	TrackerBusArrayCursorPrivate * priv;
};

struct _TrackerBusArrayCursorClass {
	TrackerSparqlCursorClass parent_class;
};

struct _TrackerBusArrayCursorPrivate {
	gint rows;
	gint current_row;
	gchar** results;
	gint results_length1;
	gint results_length2;
	gchar** var_names;
	gint var_names_length1;
	gint _var_names_size_;
	TrackerSparqlValueType* types;
	gint types_length1;
	gint _types_size_;
	gint cols;
};

struct _TrackerBusArrayCursorNextAsyncData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GTask* _async_result;
	TrackerBusArrayCursor* self;
	GCancellable* cancellable;
	gboolean result;
	gboolean _tmp0_;
	GCancellable* _tmp1_;
	gboolean _tmp2_;
	GError * _inner_error_;
};


static gpointer tracker_bus_array_cursor_parent_class = NULL;

GType tracker_bus_array_cursor_get_type (void) G_GNUC_CONST;
#define TRACKER_BUS_ARRAY_CURSOR_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TRACKER_BUS_TYPE_ARRAY_CURSOR, TrackerBusArrayCursorPrivate))
TrackerBusArrayCursor* tracker_bus_array_cursor_new (gchar** results, int results_length1, int results_length2, gint rows, gint cols, gchar** var_names, int var_names_length1, TrackerSparqlValueType* types, int types_length1);
TrackerBusArrayCursor* tracker_bus_array_cursor_construct (GType object_type, gchar** results, int results_length1, int results_length2, gint rows, gint cols, gchar** var_names, int var_names_length1, TrackerSparqlValueType* types, int types_length1);
static TrackerSparqlValueType* _vala_array_dup1 (TrackerSparqlValueType* self, int length);
static gchar** _vala_array_dup2 (gchar** self, int length);
static TrackerSparqlValueType tracker_bus_array_cursor_real_get_value_type (TrackerSparqlCursor* base, gint column);
static const gchar* tracker_bus_array_cursor_real_get_variable_name (TrackerSparqlCursor* base, gint column);
static const gchar* tracker_bus_array_cursor_real_get_string (TrackerSparqlCursor* base, gint column, glong* length);
static gboolean tracker_bus_array_cursor_real_next (TrackerSparqlCursor* base, GCancellable* cancellable, GError** error);
static void tracker_bus_array_cursor_real_next_async_data_free (gpointer _data);
static void tracker_bus_array_cursor_real_next_async (TrackerSparqlCursor* base, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_);
static gboolean tracker_bus_array_cursor_real_next_async_co (TrackerBusArrayCursorNextAsyncData* _data_);
static void tracker_bus_array_cursor_real_rewind (TrackerSparqlCursor* base);
static void tracker_bus_array_cursor_finalize (GObject * obj);
static void _vala_tracker_bus_array_cursor_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


static TrackerSparqlValueType* _vala_array_dup1 (TrackerSparqlValueType* self, int length) {
#line 32 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	return g_memdup (self, length * sizeof (TrackerSparqlValueType));
#line 119 "tracker-array-cursor.c"
}


static gchar** _vala_array_dup2 (gchar** self, int length) {
	gchar** result;
	int i;
#line 33 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	result = g_new0 (gchar*, length + 1);
#line 33 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	for (i = 0; i < length; i++) {
#line 130 "tracker-array-cursor.c"
		gchar* _tmp0_;
#line 33 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
		_tmp0_ = g_strdup (self[i]);
#line 33 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
		result[i] = _tmp0_;
#line 136 "tracker-array-cursor.c"
	}
#line 33 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	return result;
#line 140 "tracker-array-cursor.c"
}


TrackerBusArrayCursor* tracker_bus_array_cursor_construct (GType object_type, gchar** results, int results_length1, int results_length2, gint rows, gint cols, gchar** var_names, int var_names_length1, TrackerSparqlValueType* types, int types_length1) {
	TrackerBusArrayCursor * self = NULL;
	gint _tmp0_;
	gint _tmp1_;
	gchar** _tmp2_;
	gint _tmp2__length1;
	gint _tmp2__length2;
	TrackerSparqlValueType* _tmp3_;
	gint _tmp3__length1;
	TrackerSparqlValueType* _tmp4_;
	gint _tmp4__length1;
	gchar** _tmp5_;
	gint _tmp5__length1;
	gchar** _tmp6_;
	gint _tmp6__length1;
#line 28 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	self = (TrackerBusArrayCursor*) tracker_sparql_cursor_construct (object_type);
#line 29 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_tmp0_ = rows;
#line 29 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	self->priv->rows = _tmp0_;
#line 30 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_tmp1_ = cols;
#line 30 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	self->priv->cols = _tmp1_;
#line 31 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_tmp2_ = results;
#line 31 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_tmp2__length1 = results_length1;
#line 31 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_tmp2__length2 = results_length2;
#line 31 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	results = NULL;
#line 31 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	results_length1 = 0;
#line 31 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	results_length2 = 0;
#line 31 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	self->priv->results = (_vala_array_free (self->priv->results, self->priv->results_length1 * self->priv->results_length2, (GDestroyNotify) g_free), NULL);
#line 31 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	self->priv->results = _tmp2_;
#line 31 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	self->priv->results_length1 = _tmp2__length1;
#line 31 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	self->priv->results_length2 = _tmp2__length2;
#line 32 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_tmp3_ = types;
#line 32 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_tmp3__length1 = types_length1;
#line 32 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_tmp4_ = (_tmp3_ != NULL) ? _vala_array_dup1 (_tmp3_, _tmp3__length1) : ((gpointer) _tmp3_);
#line 32 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_tmp4__length1 = _tmp3__length1;
#line 32 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	self->priv->types = (g_free (self->priv->types), NULL);
#line 32 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	self->priv->types = _tmp4_;
#line 32 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	self->priv->types_length1 = _tmp4__length1;
#line 32 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	self->priv->_types_size_ = self->priv->types_length1;
#line 33 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_tmp5_ = var_names;
#line 33 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_tmp5__length1 = var_names_length1;
#line 33 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_tmp6_ = (_tmp5_ != NULL) ? _vala_array_dup2 (_tmp5_, _tmp5__length1) : ((gpointer) _tmp5_);
#line 33 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_tmp6__length1 = _tmp5__length1;
#line 33 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	self->priv->var_names = (_vala_array_free (self->priv->var_names, self->priv->var_names_length1, (GDestroyNotify) g_free), NULL);
#line 33 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	self->priv->var_names = _tmp6_;
#line 33 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	self->priv->var_names_length1 = _tmp6__length1;
#line 33 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	self->priv->_var_names_size_ = self->priv->var_names_length1;
#line 28 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	results = (_vala_array_free (results, results_length1 * results_length2, (GDestroyNotify) g_free), NULL);
#line 28 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	return self;
#line 225 "tracker-array-cursor.c"
}


TrackerBusArrayCursor* tracker_bus_array_cursor_new (gchar** results, int results_length1, int results_length2, gint rows, gint cols, gchar** var_names, int var_names_length1, TrackerSparqlValueType* types, int types_length1) {
#line 28 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	return tracker_bus_array_cursor_construct (TRACKER_BUS_TYPE_ARRAY_CURSOR, results, results_length1, results_length2, rows, cols, var_names, var_names_length1, types, types_length1);
#line 232 "tracker-array-cursor.c"
}


static TrackerSparqlValueType tracker_bus_array_cursor_real_get_value_type (TrackerSparqlCursor* base, gint column) {
	TrackerBusArrayCursor * self;
	TrackerSparqlValueType result = 0;
	gint _tmp0_;
	TrackerSparqlValueType* _tmp1_;
	gint _tmp1__length1;
	gint _tmp2_;
	TrackerSparqlValueType _tmp3_;
#line 38 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	self = (TrackerBusArrayCursor*) base;
#line 38 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_tmp0_ = self->priv->current_row;
#line 38 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_vala_return_val_if_fail (_tmp0_ >= 0, "current_row >= 0", 0);
#line 40 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_tmp1_ = self->priv->types;
#line 40 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_tmp1__length1 = self->priv->types_length1;
#line 40 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_tmp2_ = column;
#line 40 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_tmp3_ = _tmp1_[_tmp2_];
#line 40 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	result = _tmp3_;
#line 40 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	return result;
#line 262 "tracker-array-cursor.c"
}


static const gchar* tracker_bus_array_cursor_real_get_variable_name (TrackerSparqlCursor* base, gint column) {
	TrackerBusArrayCursor * self;
	const gchar* result = NULL;
	gint _tmp0_;
	gchar** _tmp1_;
	gint _tmp1__length1;
	gint _tmp2_;
	const gchar* _tmp3_;
#line 43 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	self = (TrackerBusArrayCursor*) base;
#line 43 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_tmp0_ = self->priv->current_row;
#line 43 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_vala_return_val_if_fail (_tmp0_ >= 0, "current_row >= 0", NULL);
#line 45 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_tmp1_ = self->priv->var_names;
#line 45 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_tmp1__length1 = self->priv->var_names_length1;
#line 45 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_tmp2_ = column;
#line 45 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_tmp3_ = _tmp1_[_tmp2_];
#line 45 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	result = _tmp3_;
#line 45 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	return result;
#line 292 "tracker-array-cursor.c"
}


static const gchar* tracker_bus_array_cursor_real_get_string (TrackerSparqlCursor* base, gint column, glong* length) {
	TrackerBusArrayCursor * self;
	glong _vala_length = 0L;
	const gchar* result = NULL;
	gint _tmp0_;
	const gchar* str = NULL;
	gchar** _tmp1_;
	gint _tmp1__length1;
	gint _tmp1__length2;
	gint _tmp2_;
	gint _tmp3_;
	const gchar* _tmp4_;
	gint _tmp5_;
	gint _tmp6_;
#line 48 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	self = (TrackerBusArrayCursor*) base;
#line 48 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_tmp0_ = self->priv->current_row;
#line 48 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_vala_return_val_if_fail (_tmp0_ >= 0, "current_row >= 0", NULL);
#line 52 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_tmp1_ = self->priv->results;
#line 52 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_tmp1__length1 = self->priv->results_length1;
#line 52 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_tmp1__length2 = self->priv->results_length2;
#line 52 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_tmp2_ = self->priv->current_row;
#line 52 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_tmp3_ = column;
#line 52 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_tmp4_ = _tmp1_[(_tmp2_ * _tmp1__length2) + _tmp3_];
#line 52 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	str = _tmp4_;
#line 54 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_tmp5_ = strlen (str);
#line 54 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_tmp6_ = _tmp5_;
#line 54 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_vala_length = (glong) _tmp6_;
#line 56 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	result = str;
#line 56 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	if (length) {
#line 56 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
		*length = _vala_length;
#line 342 "tracker-array-cursor.c"
	}
#line 56 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	return result;
#line 346 "tracker-array-cursor.c"
}


static gboolean tracker_bus_array_cursor_real_next (TrackerSparqlCursor* base, GCancellable* cancellable, GError** error) {
	TrackerBusArrayCursor * self;
	gboolean result = FALSE;
	gboolean _tmp0_ = FALSE;
	GCancellable* _tmp1_;
	gint _tmp6_;
	gint _tmp7_;
	gint _tmp8_;
	GError * _inner_error_ = NULL;
#line 59 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	self = (TrackerBusArrayCursor*) base;
#line 60 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_tmp1_ = cancellable;
#line 60 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	if (_tmp1_ != NULL) {
#line 365 "tracker-array-cursor.c"
		GCancellable* _tmp2_;
		gboolean _tmp3_;
#line 60 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
		_tmp2_ = cancellable;
#line 60 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
		_tmp3_ = g_cancellable_is_cancelled (_tmp2_);
#line 60 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
		_tmp0_ = _tmp3_;
#line 374 "tracker-array-cursor.c"
	} else {
#line 60 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
		_tmp0_ = FALSE;
#line 378 "tracker-array-cursor.c"
	}
#line 60 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	if (_tmp0_) {
#line 382 "tracker-array-cursor.c"
		GError* _tmp4_;
		gboolean _tmp5_ = FALSE;
#line 61 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
		_tmp4_ = g_error_new_literal (G_IO_ERROR, G_IO_ERROR_CANCELLED, "Operation was cancelled");
#line 61 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
		_inner_error_ = _tmp4_;
#line 61 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
		g_propagate_error (error, _inner_error_);
#line 61 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
		return _tmp5_;
#line 393 "tracker-array-cursor.c"
	}
#line 64 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_tmp6_ = self->priv->current_row;
#line 64 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_tmp7_ = self->priv->rows;
#line 64 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	if (_tmp6_ >= (_tmp7_ - 1)) {
#line 65 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
		result = FALSE;
#line 65 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
		return result;
#line 405 "tracker-array-cursor.c"
	}
#line 67 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_tmp8_ = self->priv->current_row;
#line 67 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	self->priv->current_row = _tmp8_ + 1;
#line 68 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	result = TRUE;
#line 68 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	return result;
#line 415 "tracker-array-cursor.c"
}


static void tracker_bus_array_cursor_real_next_async_data_free (gpointer _data) {
	TrackerBusArrayCursorNextAsyncData* _data_;
	_data_ = _data;
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_g_object_unref0 (_data_->cancellable);
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_g_object_unref0 (_data_->self);
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	g_slice_free (TrackerBusArrayCursorNextAsyncData, _data_);
#line 428 "tracker-array-cursor.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	return self ? g_object_ref (self) : NULL;
#line 435 "tracker-array-cursor.c"
}


static void tracker_bus_array_cursor_real_next_async (TrackerSparqlCursor* base, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	TrackerBusArrayCursor * self;
	TrackerBusArrayCursorNextAsyncData* _data_;
	TrackerBusArrayCursor* _tmp0_;
	GCancellable* _tmp1_;
	GCancellable* _tmp2_;
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	self = (TrackerBusArrayCursor*) base;
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_data_ = g_slice_new0 (TrackerBusArrayCursorNextAsyncData);
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_data_->_async_result = g_task_new (G_OBJECT (self), cancellable, _callback_, _user_data_);
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	g_task_set_task_data (_data_->_async_result, _data_, tracker_bus_array_cursor_real_next_async_data_free);
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_tmp0_ = _g_object_ref0 (self);
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_data_->self = _tmp0_;
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_tmp1_ = cancellable;
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_tmp2_ = _g_object_ref0 (_tmp1_);
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_g_object_unref0 (_data_->cancellable);
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_data_->cancellable = _tmp2_;
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	tracker_bus_array_cursor_real_next_async_co (_data_);
#line 467 "tracker-array-cursor.c"
}


static gboolean tracker_bus_array_cursor_real_next_finish (TrackerSparqlCursor* base, GAsyncResult* _res_, GError** error) {
	gboolean result;
	TrackerBusArrayCursorNextAsyncData* _data_;
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_data_ = g_task_propagate_pointer (G_TASK (_res_), error);
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	if (NULL == _data_) {
#line 478 "tracker-array-cursor.c"
		gboolean _tmp0_ = FALSE;
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
		return _tmp0_;
#line 482 "tracker-array-cursor.c"
	}
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	result = _data_->result;
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	return result;
#line 488 "tracker-array-cursor.c"
}


static gboolean tracker_bus_array_cursor_real_next_async_co (TrackerBusArrayCursorNextAsyncData* _data_) {
#line 71 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	switch (_data_->_state_) {
#line 71 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
		case 0:
#line 497 "tracker-array-cursor.c"
		goto _state_0;
		default:
#line 71 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
		g_assert_not_reached ();
#line 502 "tracker-array-cursor.c"
	}
	_state_0:
#line 73 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_data_->_tmp1_ = _data_->cancellable;
#line 73 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_data_->_tmp2_ = tracker_sparql_cursor_next ((TrackerSparqlCursor*) _data_->self, _data_->_tmp1_, &_data_->_inner_error_);
#line 73 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_data_->_tmp0_ = _data_->_tmp2_;
#line 73 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	if (G_UNLIKELY (_data_->_inner_error_ != NULL)) {
#line 73 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
		g_task_return_error (_data_->_async_result, _data_->_inner_error_);
#line 73 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
		g_object_unref (_data_->_async_result);
#line 73 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
		return FALSE;
#line 519 "tracker-array-cursor.c"
	}
#line 73 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_data_->result = _data_->_tmp0_;
#line 73 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	g_task_return_pointer (_data_->_async_result, _data_, NULL);
#line 73 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	if (_data_->_state_ != 0) {
#line 73 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
		while (g_task_get_completed (_data_->_async_result) != TRUE) {
#line 73 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
			g_main_context_iteration (g_task_get_context (_data_->_async_result), TRUE);
#line 531 "tracker-array-cursor.c"
		}
	}
#line 73 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	g_object_unref (_data_->_async_result);
#line 73 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	return FALSE;
#line 538 "tracker-array-cursor.c"
}


static void tracker_bus_array_cursor_real_rewind (TrackerSparqlCursor* base) {
	TrackerBusArrayCursor * self;
#line 76 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	self = (TrackerBusArrayCursor*) base;
#line 77 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	self->priv->current_row = 0;
#line 548 "tracker-array-cursor.c"
}


static gint tracker_bus_array_cursor_real_get_n_columns (TrackerSparqlCursor* base) {
	gint result;
	TrackerBusArrayCursor* self;
	gint _tmp0_;
#line 36 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	self = (TrackerBusArrayCursor*) base;
#line 36 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	_tmp0_ = self->priv->cols;
#line 36 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	result = _tmp0_;
#line 36 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	return result;
#line 564 "tracker-array-cursor.c"
}


static void tracker_bus_array_cursor_class_init (TrackerBusArrayCursorClass * klass) {
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	tracker_bus_array_cursor_parent_class = g_type_class_peek_parent (klass);
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	g_type_class_add_private (klass, sizeof (TrackerBusArrayCursorPrivate));
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	((TrackerSparqlCursorClass *) klass)->get_value_type = (TrackerSparqlValueType (*) (TrackerSparqlCursor *, gint)) tracker_bus_array_cursor_real_get_value_type;
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	((TrackerSparqlCursorClass *) klass)->get_variable_name = (const gchar* (*) (TrackerSparqlCursor *, gint)) tracker_bus_array_cursor_real_get_variable_name;
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	((TrackerSparqlCursorClass *) klass)->get_string = (const gchar* (*) (TrackerSparqlCursor *, gint, glong*)) tracker_bus_array_cursor_real_get_string;
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	((TrackerSparqlCursorClass *) klass)->next = (gboolean (*) (TrackerSparqlCursor *, GCancellable*, GError**)) tracker_bus_array_cursor_real_next;
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	((TrackerSparqlCursorClass *) klass)->next_async = (void (*) (TrackerSparqlCursor *, GCancellable*, GAsyncReadyCallback, gpointer)) tracker_bus_array_cursor_real_next_async;
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	((TrackerSparqlCursorClass *) klass)->next_finish = (gboolean (*) (TrackerSparqlCursor *, GAsyncResult*, GError**)) tracker_bus_array_cursor_real_next_finish;
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	((TrackerSparqlCursorClass *) klass)->rewind = (void (*) (TrackerSparqlCursor *)) tracker_bus_array_cursor_real_rewind;
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	TRACKER_SPARQL_CURSOR_CLASS (klass)->get_n_columns = tracker_bus_array_cursor_real_get_n_columns;
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_tracker_bus_array_cursor_get_property;
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	G_OBJECT_CLASS (klass)->finalize = tracker_bus_array_cursor_finalize;
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), TRACKER_BUS_ARRAY_CURSOR_N_COLUMNS_PROPERTY, tracker_bus_array_cursor_properties[TRACKER_BUS_ARRAY_CURSOR_N_COLUMNS_PROPERTY] = g_param_spec_int ("n-columns", "n-columns", "n-columns", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
#line 595 "tracker-array-cursor.c"
}


static void tracker_bus_array_cursor_instance_init (TrackerBusArrayCursor * self) {
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	self->priv = TRACKER_BUS_ARRAY_CURSOR_GET_PRIVATE (self);
#line 22 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	self->priv->current_row = -1;
#line 604 "tracker-array-cursor.c"
}


static void tracker_bus_array_cursor_finalize (GObject * obj) {
	TrackerBusArrayCursor * self;
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TRACKER_BUS_TYPE_ARRAY_CURSOR, TrackerBusArrayCursor);
#line 23 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	self->priv->results = (_vala_array_free (self->priv->results, self->priv->results_length1 * self->priv->results_length2, (GDestroyNotify) g_free), NULL);
#line 24 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	self->priv->var_names = (_vala_array_free (self->priv->var_names, self->priv->var_names_length1, (GDestroyNotify) g_free), NULL);
#line 25 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	self->priv->types = (g_free (self->priv->types), NULL);
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	G_OBJECT_CLASS (tracker_bus_array_cursor_parent_class)->finalize (obj);
#line 620 "tracker-array-cursor.c"
}


GType tracker_bus_array_cursor_get_type (void) {
	static volatile gsize tracker_bus_array_cursor_type_id__volatile = 0;
	if (g_once_init_enter (&tracker_bus_array_cursor_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (TrackerBusArrayCursorClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) tracker_bus_array_cursor_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (TrackerBusArrayCursor), 0, (GInstanceInitFunc) tracker_bus_array_cursor_instance_init, NULL };
		GType tracker_bus_array_cursor_type_id;
		tracker_bus_array_cursor_type_id = g_type_register_static (TRACKER_SPARQL_TYPE_CURSOR, "TrackerBusArrayCursor", &g_define_type_info, 0);
		g_once_init_leave (&tracker_bus_array_cursor_type_id__volatile, tracker_bus_array_cursor_type_id);
	}
	return tracker_bus_array_cursor_type_id__volatile;
}


static void _vala_tracker_bus_array_cursor_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	TrackerBusArrayCursor * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TRACKER_BUS_TYPE_ARRAY_CURSOR, TrackerBusArrayCursor);
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
	switch (property_id) {
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
		case TRACKER_BUS_ARRAY_CURSOR_N_COLUMNS_PROPERTY:
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
		g_value_set_int (value, tracker_sparql_cursor_get_n_columns ((TrackerSparqlCursor*) self));
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
		break;
#line 647 "tracker-array-cursor.c"
		default:
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 20 "/home/carlos/Source/gnome/tracker/src/libtracker-bus/tracker-array-cursor.vala"
		break;
#line 653 "tracker-array-cursor.c"
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



