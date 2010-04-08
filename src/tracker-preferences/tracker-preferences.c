/* tracker-preferences.c generated by valac, the Vala compiler
 * generated from tracker-preferences.vala, do not modify */

/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*- */
/*
 * Copyright (C) 2009, Nokia
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
 *
 * Author: Philip Van Hoof <philip@codeminded.be>
 */

#include <glib.h>
#include <glib-object.h>
#include <miners/fs/tracker-config.h>
#include <tracker-status-icon/tracker-icon-config.h>
#include <stdlib.h>
#include <string.h>
#include <gtk/gtk.h>
#include <glib/gi18n-lib.h>
#include <float.h>
#include <math.h>
#include <gio/gio.h>
#include <config.h>
#include <stdio.h>

#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define __g_list_free_gtk_tree_path_free0(var) ((var == NULL) ? NULL : (var = (_g_list_free_gtk_tree_path_free (var), NULL)))
#define _gtk_tree_path_free0(var) ((var == NULL) ? NULL : (var = (gtk_tree_path_free (var), NULL)))
#define __g_slist_free_g_free0(var) ((var == NULL) ? NULL : (var = (_g_slist_free_g_free (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))


extern TrackerConfig* config;
TrackerConfig* config = NULL;
extern TrackerIconConfig* icon_config;
TrackerIconConfig* icon_config = NULL;
extern GtkWindow* window;
GtkWindow* window = NULL;
extern GtkCheckButton* checkbutton_enable_index_on_battery_first_time;
GtkCheckButton* checkbutton_enable_index_on_battery_first_time = NULL;
extern GtkCheckButton* checkbutton_enable_index_on_battery;
GtkCheckButton* checkbutton_enable_index_on_battery = NULL;
extern GtkSpinButton* spinbutton_delay;
GtkSpinButton* spinbutton_delay = NULL;
extern GtkCheckButton* checkbutton_enable_monitoring;
GtkCheckButton* checkbutton_enable_monitoring = NULL;
extern GtkCheckButton* checkbutton_index_mounted_directories;
GtkCheckButton* checkbutton_index_mounted_directories = NULL;
extern GtkCheckButton* checkbutton_index_removable_media;
GtkCheckButton* checkbutton_index_removable_media = NULL;
extern GtkCheckButton* checkbutton_index_optical_discs;
GtkCheckButton* checkbutton_index_optical_discs = NULL;
extern GtkScale* hscale_disk_space_limit;
GtkScale* hscale_disk_space_limit = NULL;
extern GtkScale* hscale_throttle;
GtkScale* hscale_throttle = NULL;
extern GtkListStore* liststore_index_recursively;
GtkListStore* liststore_index_recursively = NULL;
extern GtkListStore* liststore_index_single;
GtkListStore* liststore_index_single = NULL;
extern GtkListStore* liststore_ignored_directories;
GtkListStore* liststore_ignored_directories = NULL;
extern GtkListStore* liststore_ignored_files;
GtkListStore* liststore_ignored_files = NULL;
extern GtkListStore* liststore_gnored_directories_with_content;
GtkListStore* liststore_gnored_directories_with_content = NULL;
extern GtkTreeView* treeview_index_recursively;
GtkTreeView* treeview_index_recursively = NULL;
extern GtkTreeView* treeview_index_single;
GtkTreeView* treeview_index_single = NULL;
extern GtkTreeView* treeview_ignored_directories;
GtkTreeView* treeview_ignored_directories = NULL;
extern GtkTreeView* treeview_ignored_directories_with_content;
GtkTreeView* treeview_ignored_directories_with_content = NULL;
extern GtkTreeView* treeview_ignored_files;
GtkTreeView* treeview_ignored_files = NULL;
extern GtkToggleButton* togglebutton_home;
GtkToggleButton* togglebutton_home = NULL;
extern GtkRadioButton* radiobutton_display_never;
GtkRadioButton* radiobutton_display_never = NULL;
extern GtkRadioButton* radiobutton_display_active;
GtkRadioButton* radiobutton_display_active = NULL;
extern GtkRadioButton* radiobutton_display_always;
GtkRadioButton* radiobutton_display_always = NULL;

#define HOME_STRING "$HOME"
void radiobutton_visibility_toggled_cb (GtkRadioButton* source);
void initialize_visibility_radiobutton (void);
void spinbutton_delay_value_changed_cb (GtkSpinButton* source);
void checkbutton_enable_monitoring_toggled_cb (GtkCheckButton* source);
void checkbutton_enable_index_on_battery_toggled_cb (GtkCheckButton* source);
void checkbutton_enable_index_on_battery_first_time_toggled_cb (GtkCheckButton* source);
void checkbutton_index_mounted_directories_toggled_cb (GtkCheckButton* source);
void checkbutton_index_removable_media_toggled_cb (GtkCheckButton* source);
void checkbutton_index_optical_discs_toggled_cb (GtkCheckButton* source);
char* hscale_disk_space_limit_format_value_cb (GtkScale* source, double value);
char* hscale_throttle_format_value_cb (GtkScale* source, double value);
void add_freevalue (GtkListStore* model);
void add_dir (GtkListStore* model);
static void _g_list_free_gtk_tree_path_free (GList* self);
void del_dir (GtkTreeView* view);
void button_index_recursively_add_clicked_cb (GtkButton* source);
void button_index_recursively_remove_clicked_cb (GtkButton* source);
void button_index_single_remove_clicked_cb (GtkButton* source);
void button_index_single_add_clicked_cb (GtkButton* source);
void button_ignored_directories_globs_add_clicked_cb (GtkButton* source);
void button_ignored_directories_add_clicked_cb (GtkButton* source);
void button_ignored_directories_remove_clicked_cb (GtkButton* source);
void button_ignored_directories_with_content_add_clicked_cb (GtkButton* source);
void button_ignored_directories_with_content_remove_clicked_cb (GtkButton* source);
void button_ignored_files_add_clicked_cb (GtkButton* source);
void button_ignored_files_remove_clicked_cb (GtkButton* source);
static void _g_slist_free_g_free (GSList* self);
GSList* model_to_slist (GtkListStore* model);
gboolean model_contains (GtkTreeModel* model, const char* needle);
void button_apply_clicked_cb (GtkButton* source);
void button_close_clicked_cb (GtkButton* source);
void togglebutton_home_toggled_cb (GtkToggleButton* source);
void fill_in_model (GtkListStore* model, GSList* list);
void setup_standard_treeview (GtkTreeView* view, const char* title);
gint _vala_main (char** args, int args_length1);
static int _vala_strcmp0 (const char * str1, const char * str2);



void radiobutton_visibility_toggled_cb (GtkRadioButton* source) {
	g_return_if_fail (source != NULL);
	if (gtk_toggle_button_get_active ((GtkToggleButton*) radiobutton_display_never)) {
		tracker_icon_config_set_visibility (icon_config, 0);
	} else {
		if (gtk_toggle_button_get_active ((GtkToggleButton*) radiobutton_display_active)) {
			tracker_icon_config_set_visibility (icon_config, 1);
		} else {
			tracker_icon_config_set_visibility (icon_config, 2);
		}
	}
}


void initialize_visibility_radiobutton (void) {
	if (tracker_icon_config_get_visibility (icon_config) == 0) {
		gtk_toggle_button_set_active ((GtkToggleButton*) radiobutton_display_never, TRUE);
	} else {
		if (tracker_icon_config_get_visibility (icon_config) == 1) {
			gtk_toggle_button_set_active ((GtkToggleButton*) radiobutton_display_active, TRUE);
		} else {
			gtk_toggle_button_set_active ((GtkToggleButton*) radiobutton_display_always, TRUE);
		}
	}
}


void spinbutton_delay_value_changed_cb (GtkSpinButton* source) {
	g_return_if_fail (source != NULL);
	tracker_config_set_initial_sleep (config, gtk_spin_button_get_value_as_int (source));
}


void checkbutton_enable_monitoring_toggled_cb (GtkCheckButton* source) {
	g_return_if_fail (source != NULL);
	tracker_config_set_enable_monitors (config, gtk_toggle_button_get_active ((GtkToggleButton*) source));
}


void checkbutton_enable_index_on_battery_toggled_cb (GtkCheckButton* source) {
	g_return_if_fail (source != NULL);
	tracker_config_set_index_on_battery (config, gtk_toggle_button_get_active ((GtkToggleButton*) source));
	gtk_widget_set_sensitive ((GtkWidget*) checkbutton_enable_index_on_battery_first_time, !gtk_toggle_button_get_active ((GtkToggleButton*) source));
}


void checkbutton_enable_index_on_battery_first_time_toggled_cb (GtkCheckButton* source) {
	g_return_if_fail (source != NULL);
	tracker_config_set_index_on_battery_first_time (config, gtk_toggle_button_get_active ((GtkToggleButton*) source));
}


void checkbutton_index_mounted_directories_toggled_cb (GtkCheckButton* source) {
	g_return_if_fail (source != NULL);
	tracker_config_set_index_mounted_directories (config, gtk_toggle_button_get_active ((GtkToggleButton*) source));
}


void checkbutton_index_removable_media_toggled_cb (GtkCheckButton* source) {
	g_return_if_fail (source != NULL);
	tracker_config_set_index_removable_devices (config, gtk_toggle_button_get_active ((GtkToggleButton*) source));
	gtk_widget_set_sensitive ((GtkWidget*) checkbutton_index_optical_discs, gtk_toggle_button_get_active ((GtkToggleButton*) source));
}


void checkbutton_index_optical_discs_toggled_cb (GtkCheckButton* source) {
	g_return_if_fail (source != NULL);
	tracker_config_set_index_optical_discs (config, gtk_toggle_button_get_active ((GtkToggleButton*) source));
}


char* hscale_disk_space_limit_format_value_cb (GtkScale* source, double value) {
	char* result = NULL;
	g_return_val_if_fail (source != NULL, NULL);
	if (((gint) value) == (-1)) {
		result = g_strdup (_ ("Disabled"));
		return result;
	}
	result = g_strdup_printf (_ ("%d%%"), (gint) value);
	return result;
}


char* hscale_throttle_format_value_cb (GtkScale* source, double value) {
	char* result = NULL;
	g_return_val_if_fail (source != NULL, NULL);
	result = g_strdup_printf (_ ("%d/20"), (gint) value);
	return result;
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


void add_freevalue (GtkListStore* model) {
	GtkDialog* dialog;
	GtkEntry* entry;
	GtkContainer* content_area;
	GtkDialog* _tmp0_;
	GtkContainer* _tmp1_;
	GtkEntry* _tmp2_;
	g_return_if_fail (model != NULL);
	dialog = NULL;
	entry = NULL;
	content_area = NULL;
	dialog = (_tmp0_ = g_object_ref_sink ((GtkDialog*) gtk_dialog_new_with_buttons (_ ("Enter value"), window, GTK_DIALOG_DESTROY_WITH_PARENT | GTK_DIALOG_NO_SEPARATOR, GTK_STOCK_CANCEL, GTK_RESPONSE_CANCEL, GTK_STOCK_OK, GTK_RESPONSE_ACCEPT, NULL)), _g_object_unref0 (dialog), _tmp0_);
	gtk_dialog_set_default_response (dialog, (gint) GTK_RESPONSE_ACCEPT);
	content_area = (_tmp1_ = _g_object_ref0 (GTK_CONTAINER (gtk_dialog_get_content_area (dialog))), _g_object_unref0 (content_area), _tmp1_);
	entry = (_tmp2_ = g_object_ref_sink ((GtkEntry*) gtk_entry_new ()), _g_object_unref0 (entry), _tmp2_);
	gtk_entry_set_activates_default (entry, TRUE);
	gtk_widget_show ((GtkWidget*) entry);
	gtk_container_add (content_area, (GtkWidget*) entry);
	if (gtk_dialog_run (dialog) == GTK_RESPONSE_ACCEPT) {
		char* text;
		gboolean _tmp3_ = FALSE;
		text = g_strdup (gtk_entry_get_text (entry));
		if (text != NULL) {
			_tmp3_ = _vala_strcmp0 (text, "") != 0;
		} else {
			_tmp3_ = FALSE;
		}
		if (_tmp3_) {
			GtkTreeIter iter = {0};
			GValue v = {0};
			gtk_list_store_append (model, &iter);
			g_value_init (&v, G_TYPE_STRING);
			g_value_set_string (&v, text);
			gtk_list_store_set_value (model, &iter, 0, &v);
			G_IS_VALUE (&v) ? (g_value_unset (&v), NULL) : NULL;
		}
		_g_free0 (text);
	}
	gtk_object_destroy ((GtkObject*) dialog);
	_g_object_unref0 (dialog);
	_g_object_unref0 (entry);
	_g_object_unref0 (content_area);
}


void add_dir (GtkListStore* model) {
	GtkFileChooserDialog* dialog;
	g_return_if_fail (model != NULL);
	dialog = g_object_ref_sink ((GtkFileChooserDialog*) gtk_file_chooser_dialog_new (_ ("Select directory"), window, GTK_FILE_CHOOSER_ACTION_SELECT_FOLDER, GTK_STOCK_CANCEL, GTK_RESPONSE_CANCEL, GTK_STOCK_OK, GTK_RESPONSE_ACCEPT, NULL));
	if (gtk_dialog_run ((GtkDialog*) dialog) == GTK_RESPONSE_ACCEPT) {
		GtkTreeIter iter = {0};
		GFile* dir;
		GFile* _tmp0_;
		GValue v = {0};
		char* _tmp1_;
		dir = NULL;
		dir = (_tmp0_ = _g_object_ref0 (gtk_file_chooser_get_file ((GtkFileChooser*) dialog)), _g_object_unref0 (dir), _tmp0_);
		gtk_list_store_append (model, &iter);
		g_value_init (&v, G_TYPE_STRING);
		g_value_set_string (&v, _tmp1_ = g_file_get_path (dir));
		_g_free0 (_tmp1_);
		gtk_list_store_set_value (model, &iter, 0, &v);
		_g_object_unref0 (dir);
		G_IS_VALUE (&v) ? (g_value_unset (&v), NULL) : NULL;
	}
	gtk_object_destroy ((GtkObject*) dialog);
	_g_object_unref0 (dialog);
}


static void _g_list_free_gtk_tree_path_free (GList* self) {
	g_list_foreach (self, (GFunc) gtk_tree_path_free, NULL);
	g_list_free (self);
}


static gpointer _gtk_tree_path_copy0 (gpointer self) {
	return self ? gtk_tree_path_copy (self) : NULL;
}


void del_dir (GtkTreeView* view) {
	GList* list;
	GtkListStore* store;
	GtkTreeModel* model;
	GtkTreeSelection* selection;
	GList* _tmp3_;
	GtkTreeModel* _tmp2_;
	GList* _tmp1_;
	GtkTreeModel* _tmp0_ = NULL;
	GtkListStore* _tmp4_;
	g_return_if_fail (view != NULL);
	list = NULL;
	store = NULL;
	model = NULL;
	selection = _g_object_ref0 (gtk_tree_view_get_selection (view));
	list = (_tmp3_ = (_tmp1_ = gtk_tree_selection_get_selected_rows (selection, &_tmp0_), model = (_tmp2_ = _g_object_ref0 (_tmp0_), _g_object_unref0 (model), _tmp2_), _tmp1_), __g_list_free_gtk_tree_path_free0 (list), _tmp3_);
	store = (_tmp4_ = _g_object_ref0 (GTK_LIST_STORE (model)), _g_object_unref0 (store), _tmp4_);
	{
		GList* path_collection;
		GList* path_it;
		path_collection = list;
		for (path_it = path_collection; path_it != NULL; path_it = path_it->next) {
			GtkTreePath* path;
			path = _gtk_tree_path_copy0 ((GtkTreePath*) path_it->data);
			{
				GtkTreeIter iter = {0};
				if (gtk_tree_model_get_iter (model, &iter, path)) {
					gtk_list_store_remove (store, &iter);
				}
				_gtk_tree_path_free0 (path);
			}
		}
	}
	__g_list_free_gtk_tree_path_free0 (list);
	_g_object_unref0 (store);
	_g_object_unref0 (model);
	_g_object_unref0 (selection);
}


void button_index_recursively_add_clicked_cb (GtkButton* source) {
	g_return_if_fail (source != NULL);
	add_dir (liststore_index_recursively);
}


void button_index_recursively_remove_clicked_cb (GtkButton* source) {
	g_return_if_fail (source != NULL);
	del_dir (treeview_index_recursively);
}


void button_index_single_remove_clicked_cb (GtkButton* source) {
	g_return_if_fail (source != NULL);
	del_dir (treeview_index_single);
}


void button_index_single_add_clicked_cb (GtkButton* source) {
	g_return_if_fail (source != NULL);
	add_dir (liststore_index_single);
}


void button_ignored_directories_globs_add_clicked_cb (GtkButton* source) {
	g_return_if_fail (source != NULL);
	add_freevalue (liststore_ignored_directories);
}


void button_ignored_directories_add_clicked_cb (GtkButton* source) {
	g_return_if_fail (source != NULL);
	add_dir (liststore_ignored_directories);
}


void button_ignored_directories_remove_clicked_cb (GtkButton* source) {
	g_return_if_fail (source != NULL);
	del_dir (treeview_ignored_directories);
}


void button_ignored_directories_with_content_add_clicked_cb (GtkButton* source) {
	g_return_if_fail (source != NULL);
	add_freevalue (liststore_gnored_directories_with_content);
}


void button_ignored_directories_with_content_remove_clicked_cb (GtkButton* source) {
	g_return_if_fail (source != NULL);
	del_dir (treeview_ignored_directories_with_content);
}


void button_ignored_files_add_clicked_cb (GtkButton* source) {
	g_return_if_fail (source != NULL);
	add_freevalue (liststore_ignored_files);
}


void button_ignored_files_remove_clicked_cb (GtkButton* source) {
	g_return_if_fail (source != NULL);
	del_dir (treeview_ignored_files);
}


static void _g_slist_free_g_free (GSList* self) {
	g_slist_foreach (self, (GFunc) g_free, NULL);
	g_slist_free (self);
}


GSList* model_to_slist (GtkListStore* model) {
	GSList* result = NULL;
	gboolean valid = FALSE;
	GSList* list;
	GtkTreeIter iter = {0};
	g_return_val_if_fail (model != NULL, NULL);
	list = NULL;
	valid = gtk_tree_model_get_iter_first ((GtkTreeModel*) model, &iter);
	while (TRUE) {
		GValue value = {0};
		GValue _tmp1_;
		GValue _tmp0_ = {0};
		if (!valid) {
			break;
		}
		gtk_tree_model_get_value ((GtkTreeModel*) model, &iter, 0, &_tmp0_);
		value = (_tmp1_ = _tmp0_, G_IS_VALUE (&value) ? (g_value_unset (&value), NULL) : NULL, _tmp1_);
		list = g_slist_append (list, g_strdup (g_value_get_string (&value)));
		valid = gtk_tree_model_iter_next ((GtkTreeModel*) model, &iter);
		G_IS_VALUE (&value) ? (g_value_unset (&value), NULL) : NULL;
	}
	result = list;
	return result;
}


gboolean model_contains (GtkTreeModel* model, const char* needle) {
	gboolean result = FALSE;
	gboolean valid = FALSE;
	GtkTreeIter iter = {0};
	g_return_val_if_fail (model != NULL, FALSE);
	g_return_val_if_fail (needle != NULL, FALSE);
	valid = gtk_tree_model_get_iter_first (model, &iter);
	while (TRUE) {
		GValue value = {0};
		GValue _tmp1_;
		GValue _tmp0_ = {0};
		if (!valid) {
			break;
		}
		gtk_tree_model_get_value (model, &iter, 0, &_tmp0_);
		value = (_tmp1_ = _tmp0_, G_IS_VALUE (&value) ? (g_value_unset (&value), NULL) : NULL, _tmp1_);
		if (_vala_strcmp0 (g_value_get_string (&value), needle) == 0) {
			result = TRUE;
			G_IS_VALUE (&value) ? (g_value_unset (&value), NULL) : NULL;
			return result;
		}
		valid = gtk_tree_model_iter_next (model, &iter);
		G_IS_VALUE (&value) ? (g_value_unset (&value), NULL) : NULL;
	}
	result = FALSE;
	return result;
}


void button_apply_clicked_cb (GtkButton* source) {
	GSList* _tmp0_;
	GSList* _tmp1_;
	GSList* _tmp2_;
	GSList* _tmp3_;
	GSList* _tmp4_;
	g_return_if_fail (source != NULL);
	tracker_config_set_index_single_directories (config, _tmp0_ = model_to_slist (liststore_index_single));
	__g_slist_free_g_free0 (_tmp0_);
	tracker_config_set_ignored_directories (config, _tmp1_ = model_to_slist (liststore_ignored_directories));
	__g_slist_free_g_free0 (_tmp1_);
	tracker_config_set_ignored_files (config, _tmp2_ = model_to_slist (liststore_ignored_files));
	__g_slist_free_g_free0 (_tmp2_);
	tracker_config_set_ignored_directories_with_content (config, _tmp3_ = model_to_slist (liststore_gnored_directories_with_content));
	__g_slist_free_g_free0 (_tmp3_);
	tracker_config_set_index_recursive_directories (config, _tmp4_ = model_to_slist (liststore_index_recursively));
	__g_slist_free_g_free0 (_tmp4_);
	tracker_config_set_low_disk_space_limit (config, (gint) gtk_range_get_value ((GtkRange*) hscale_disk_space_limit));
	tracker_config_set_throttle (config, (gint) gtk_range_get_value ((GtkRange*) hscale_throttle));
	tracker_config_save (config);
	tracker_icon_config_save (icon_config);
}


void button_close_clicked_cb (GtkButton* source) {
	g_return_if_fail (source != NULL);
	gtk_main_quit ();
}


void togglebutton_home_toggled_cb (GtkToggleButton* source) {
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
	g_return_if_fail (source != NULL);
	if (gtk_toggle_button_get_active (source)) {
		_tmp0_ = !model_contains ((GtkTreeModel*) liststore_index_recursively, HOME_STRING);
	} else {
		_tmp0_ = FALSE;
	}
	if (_tmp0_) {
		GtkTreeIter iter = {0};
		GValue v = {0};
		gtk_list_store_append (liststore_index_recursively, &iter);
		g_value_init (&v, G_TYPE_STRING);
		g_value_set_string (&v, HOME_STRING);
		gtk_list_store_set_value (liststore_index_recursively, &iter, 0, &v);
		G_IS_VALUE (&v) ? (g_value_unset (&v), NULL) : NULL;
	}
	if (!gtk_toggle_button_get_active (source)) {
		_tmp1_ = model_contains ((GtkTreeModel*) liststore_index_recursively, HOME_STRING);
	} else {
		_tmp1_ = FALSE;
	}
	if (_tmp1_) {
		gboolean valid = FALSE;
		GtkTreeIter iter = {0};
		valid = gtk_tree_model_get_iter_first ((GtkTreeModel*) liststore_index_recursively, &iter);
		while (TRUE) {
			GValue value = {0};
			GValue _tmp3_;
			GValue _tmp2_ = {0};
			if (!valid) {
				break;
			}
			gtk_tree_model_get_value ((GtkTreeModel*) liststore_index_recursively, &iter, 0, &_tmp2_);
			value = (_tmp3_ = _tmp2_, G_IS_VALUE (&value) ? (g_value_unset (&value), NULL) : NULL, _tmp3_);
			if (_vala_strcmp0 (g_value_get_string (&value), HOME_STRING) == 0) {
				gtk_list_store_remove (liststore_index_recursively, &iter);
				valid = gtk_tree_model_get_iter_first ((GtkTreeModel*) liststore_index_recursively, &iter);
			} else {
				valid = gtk_tree_model_iter_next ((GtkTreeModel*) liststore_index_recursively, &iter);
			}
			G_IS_VALUE (&value) ? (g_value_unset (&value), NULL) : NULL;
		}
	}
}


void fill_in_model (GtkListStore* model, GSList* list) {
	gint position;
	g_return_if_fail (model != NULL);
	position = 0;
	{
		GSList* str_collection;
		GSList* str_it;
		str_collection = list;
		for (str_it = str_collection; str_it != NULL; str_it = str_it->next) {
			char* str;
			str = g_strdup ((const char*) str_it->data);
			{
				gtk_list_store_insert_with_values (model, NULL, position++, 0, str, -1);
				_g_free0 (str);
			}
		}
	}
}


void setup_standard_treeview (GtkTreeView* view, const char* title) {
	GtkCellRendererText* _tmp0_;
	GtkTreeViewColumn* _tmp1_;
	GtkTreeViewColumn* column;
	g_return_if_fail (view != NULL);
	g_return_if_fail (title != NULL);
	column = (_tmp1_ = g_object_ref_sink (gtk_tree_view_column_new_with_attributes (title, (GtkCellRenderer*) (_tmp0_ = g_object_ref_sink ((GtkCellRendererText*) gtk_cell_renderer_text_new ())), "text", 0, NULL)), _g_object_unref0 (_tmp0_), _tmp1_);
	gtk_tree_view_append_column (view, column);
	_g_object_unref0 (column);
}


gint _vala_main (char** args, int args_length1) {
	gint result = 0;
	GError * _inner_error_;
	_inner_error_ = NULL;
	gtk_init (&args_length1, &args);
	{
		TrackerConfig* _tmp0_;
		TrackerIconConfig* _tmp1_;
		GtkBuilder* builder;
		GtkWindow* _tmp3_;
		GObject* _tmp2_;
		GtkCheckButton* _tmp5_;
		GObject* _tmp4_;
		GtkCheckButton* _tmp7_;
		GObject* _tmp6_;
		GtkSpinButton* _tmp9_;
		GObject* _tmp8_;
		GtkCheckButton* _tmp11_;
		GObject* _tmp10_;
		GtkCheckButton* _tmp13_;
		GObject* _tmp12_;
		GtkCheckButton* _tmp15_;
		GObject* _tmp14_;
		GtkCheckButton* _tmp17_;
		GObject* _tmp16_;
		GtkScale* _tmp19_;
		GObject* _tmp18_;
		GtkScale* _tmp21_;
		GObject* _tmp20_;
		GtkToggleButton* _tmp23_;
		GObject* _tmp22_;
		GtkRadioButton* _tmp25_;
		GObject* _tmp24_;
		GtkRadioButton* _tmp27_;
		GObject* _tmp26_;
		GtkRadioButton* _tmp29_;
		GObject* _tmp28_;
		GtkTreeView* _tmp31_;
		GObject* _tmp30_;
		GtkTreeView* _tmp33_;
		GObject* _tmp32_;
		GtkTreeView* _tmp35_;
		GObject* _tmp34_;
		GtkTreeView* _tmp37_;
		GObject* _tmp36_;
		GtkTreeView* _tmp39_;
		GObject* _tmp38_;
		GtkListStore* _tmp41_;
		GObject* _tmp40_;
		GtkListStore* _tmp43_;
		GObject* _tmp42_;
		GtkListStore* _tmp45_;
		GObject* _tmp44_;
		GtkListStore* _tmp47_;
		GObject* _tmp46_;
		GtkListStore* _tmp49_;
		GObject* _tmp48_;
		config = (_tmp0_ = tracker_config_new_with_domain ("tracker-miner-fs"), _g_object_unref0 (config), _tmp0_);
		icon_config = (_tmp1_ = tracker_icon_config_new_with_domain ("tracker-status-icon"), _g_object_unref0 (icon_config), _tmp1_);
		builder = gtk_builder_new ();
		gtk_builder_add_from_file (builder, TRACKER_DATADIR G_DIR_SEPARATOR_S "tracker-preferences.ui", &_inner_error_);
		if (_inner_error_ != NULL) {
			_g_object_unref0 (builder);
			goto __catch0_g_error;
		}
		window = (_tmp3_ = _g_object_ref0 ((_tmp2_ = gtk_builder_get_object (builder, "tracker-preferences"), GTK_IS_WINDOW (_tmp2_) ? ((GtkWindow*) _tmp2_) : NULL)), _g_object_unref0 (window), _tmp3_);
		checkbutton_enable_index_on_battery = (_tmp5_ = _g_object_ref0 ((_tmp4_ = gtk_builder_get_object (builder, "checkbutton_enable_index_on_battery"), GTK_IS_CHECK_BUTTON (_tmp4_) ? ((GtkCheckButton*) _tmp4_) : NULL)), _g_object_unref0 (checkbutton_enable_index_on_battery), _tmp5_);
		checkbutton_enable_index_on_battery_first_time = (_tmp7_ = _g_object_ref0 ((_tmp6_ = gtk_builder_get_object (builder, "checkbutton_enable_index_on_battery_first_time"), GTK_IS_CHECK_BUTTON (_tmp6_) ? ((GtkCheckButton*) _tmp6_) : NULL)), _g_object_unref0 (checkbutton_enable_index_on_battery_first_time), _tmp7_);
		gtk_toggle_button_set_active ((GtkToggleButton*) checkbutton_enable_index_on_battery, tracker_config_get_index_on_battery (config));
		gtk_widget_set_sensitive ((GtkWidget*) checkbutton_enable_index_on_battery_first_time, !gtk_toggle_button_get_active ((GtkToggleButton*) checkbutton_enable_index_on_battery));
		gtk_toggle_button_set_active ((GtkToggleButton*) checkbutton_enable_index_on_battery_first_time, tracker_config_get_index_on_battery_first_time (config));
		spinbutton_delay = (_tmp9_ = _g_object_ref0 ((_tmp8_ = gtk_builder_get_object (builder, "spinbutton_delay"), GTK_IS_SPIN_BUTTON (_tmp8_) ? ((GtkSpinButton*) _tmp8_) : NULL)), _g_object_unref0 (spinbutton_delay), _tmp9_);
		gtk_spin_button_set_increments (spinbutton_delay, (double) 1, (double) 1);
		gtk_spin_button_set_value (spinbutton_delay, (double) tracker_config_get_initial_sleep (config));
		checkbutton_enable_monitoring = (_tmp11_ = _g_object_ref0 ((_tmp10_ = gtk_builder_get_object (builder, "checkbutton_enable_monitoring"), GTK_IS_CHECK_BUTTON (_tmp10_) ? ((GtkCheckButton*) _tmp10_) : NULL)), _g_object_unref0 (checkbutton_enable_monitoring), _tmp11_);
		gtk_toggle_button_set_active ((GtkToggleButton*) checkbutton_enable_monitoring, tracker_config_get_enable_monitors (config));
		checkbutton_index_mounted_directories = (_tmp13_ = _g_object_ref0 ((_tmp12_ = gtk_builder_get_object (builder, "checkbutton_index_mounted_directories"), GTK_IS_CHECK_BUTTON (_tmp12_) ? ((GtkCheckButton*) _tmp12_) : NULL)), _g_object_unref0 (checkbutton_index_mounted_directories), _tmp13_);
		gtk_toggle_button_set_active ((GtkToggleButton*) checkbutton_index_mounted_directories, tracker_config_get_index_mounted_directories (config));
		checkbutton_index_removable_media = (_tmp15_ = _g_object_ref0 ((_tmp14_ = gtk_builder_get_object (builder, "checkbutton_index_removable_media"), GTK_IS_CHECK_BUTTON (_tmp14_) ? ((GtkCheckButton*) _tmp14_) : NULL)), _g_object_unref0 (checkbutton_index_removable_media), _tmp15_);
		gtk_toggle_button_set_active ((GtkToggleButton*) checkbutton_index_removable_media, tracker_config_get_index_removable_devices (config));
		checkbutton_index_optical_discs = (_tmp17_ = _g_object_ref0 ((_tmp16_ = gtk_builder_get_object (builder, "checkbutton_index_optical_discs"), GTK_IS_CHECK_BUTTON (_tmp16_) ? ((GtkCheckButton*) _tmp16_) : NULL)), _g_object_unref0 (checkbutton_index_optical_discs), _tmp17_);
		gtk_widget_set_sensitive ((GtkWidget*) checkbutton_index_optical_discs, gtk_toggle_button_get_active ((GtkToggleButton*) checkbutton_index_removable_media));
		gtk_toggle_button_set_active ((GtkToggleButton*) checkbutton_index_optical_discs, tracker_config_get_index_optical_discs (config));
		hscale_disk_space_limit = (_tmp19_ = _g_object_ref0 ((_tmp18_ = gtk_builder_get_object (builder, "hscale_disk_space_limit"), GTK_IS_SCALE (_tmp18_) ? ((GtkScale*) _tmp18_) : NULL)), _g_object_unref0 (hscale_disk_space_limit), _tmp19_);
		gtk_range_set_value ((GtkRange*) hscale_disk_space_limit, (double) tracker_config_get_low_disk_space_limit (config));
		hscale_throttle = (_tmp21_ = _g_object_ref0 ((_tmp20_ = gtk_builder_get_object (builder, "hscale_throttle"), GTK_IS_SCALE (_tmp20_) ? ((GtkScale*) _tmp20_) : NULL)), _g_object_unref0 (hscale_throttle), _tmp21_);
		gtk_range_set_value ((GtkRange*) hscale_throttle, (double) tracker_config_get_throttle (config));
		togglebutton_home = (_tmp23_ = _g_object_ref0 ((_tmp22_ = gtk_builder_get_object (builder, "togglebutton_home"), GTK_IS_TOGGLE_BUTTON (_tmp22_) ? ((GtkToggleButton*) _tmp22_) : NULL)), _g_object_unref0 (togglebutton_home), _tmp23_);
		radiobutton_display_never = (_tmp25_ = _g_object_ref0 ((_tmp24_ = gtk_builder_get_object (builder, "radiobutton_display_never"), GTK_IS_RADIO_BUTTON (_tmp24_) ? ((GtkRadioButton*) _tmp24_) : NULL)), _g_object_unref0 (radiobutton_display_never), _tmp25_);
		radiobutton_display_active = (_tmp27_ = _g_object_ref0 ((_tmp26_ = gtk_builder_get_object (builder, "radiobutton_display_active"), GTK_IS_RADIO_BUTTON (_tmp26_) ? ((GtkRadioButton*) _tmp26_) : NULL)), _g_object_unref0 (radiobutton_display_active), _tmp27_);
		radiobutton_display_always = (_tmp29_ = _g_object_ref0 ((_tmp28_ = gtk_builder_get_object (builder, "radiobutton_display_always"), GTK_IS_RADIO_BUTTON (_tmp28_) ? ((GtkRadioButton*) _tmp28_) : NULL)), _g_object_unref0 (radiobutton_display_always), _tmp29_);
		initialize_visibility_radiobutton ();
		treeview_index_recursively = (_tmp31_ = _g_object_ref0 ((_tmp30_ = gtk_builder_get_object (builder, "treeview_index_recursively"), GTK_IS_TREE_VIEW (_tmp30_) ? ((GtkTreeView*) _tmp30_) : NULL)), _g_object_unref0 (treeview_index_recursively), _tmp31_);
		treeview_index_single = (_tmp33_ = _g_object_ref0 ((_tmp32_ = gtk_builder_get_object (builder, "treeview_index_single"), GTK_IS_TREE_VIEW (_tmp32_) ? ((GtkTreeView*) _tmp32_) : NULL)), _g_object_unref0 (treeview_index_single), _tmp33_);
		treeview_ignored_directories = (_tmp35_ = _g_object_ref0 ((_tmp34_ = gtk_builder_get_object (builder, "treeview_ignored_directories"), GTK_IS_TREE_VIEW (_tmp34_) ? ((GtkTreeView*) _tmp34_) : NULL)), _g_object_unref0 (treeview_ignored_directories), _tmp35_);
		treeview_ignored_directories_with_content = (_tmp37_ = _g_object_ref0 ((_tmp36_ = gtk_builder_get_object (builder, "treeview_ignored_directories_with_content"), GTK_IS_TREE_VIEW (_tmp36_) ? ((GtkTreeView*) _tmp36_) : NULL)), _g_object_unref0 (treeview_ignored_directories_with_content), _tmp37_);
		treeview_ignored_files = (_tmp39_ = _g_object_ref0 ((_tmp38_ = gtk_builder_get_object (builder, "treeview_ignored_files"), GTK_IS_TREE_VIEW (_tmp38_) ? ((GtkTreeView*) _tmp38_) : NULL)), _g_object_unref0 (treeview_ignored_files), _tmp39_);
		setup_standard_treeview (treeview_index_recursively, _ ("Directory"));
		setup_standard_treeview (treeview_index_single, _ ("Directory"));
		setup_standard_treeview (treeview_ignored_directories, _ ("Directory"));
		setup_standard_treeview (treeview_ignored_directories_with_content, _ ("Directory"));
		setup_standard_treeview (treeview_ignored_files, _ ("File"));
		liststore_index_recursively = (_tmp41_ = _g_object_ref0 ((_tmp40_ = gtk_builder_get_object (builder, "liststore_index_recursively"), GTK_IS_LIST_STORE (_tmp40_) ? ((GtkListStore*) _tmp40_) : NULL)), _g_object_unref0 (liststore_index_recursively), _tmp41_);
		fill_in_model (liststore_index_recursively, tracker_config_get_index_recursive_directories (config));
		gtk_toggle_button_set_active (togglebutton_home, model_contains ((GtkTreeModel*) liststore_index_recursively, HOME_STRING));
		liststore_index_single = (_tmp43_ = _g_object_ref0 ((_tmp42_ = gtk_builder_get_object (builder, "liststore_index_single"), GTK_IS_LIST_STORE (_tmp42_) ? ((GtkListStore*) _tmp42_) : NULL)), _g_object_unref0 (liststore_index_single), _tmp43_);
		fill_in_model (liststore_index_single, tracker_config_get_index_single_directories (config));
		liststore_ignored_directories = (_tmp45_ = _g_object_ref0 ((_tmp44_ = gtk_builder_get_object (builder, "liststore_ignored_directories"), GTK_IS_LIST_STORE (_tmp44_) ? ((GtkListStore*) _tmp44_) : NULL)), _g_object_unref0 (liststore_ignored_directories), _tmp45_);
		fill_in_model (liststore_ignored_directories, tracker_config_get_ignored_directories (config));
		liststore_ignored_files = (_tmp47_ = _g_object_ref0 ((_tmp46_ = gtk_builder_get_object (builder, "liststore_ignored_files"), GTK_IS_LIST_STORE (_tmp46_) ? ((GtkListStore*) _tmp46_) : NULL)), _g_object_unref0 (liststore_ignored_files), _tmp47_);
		fill_in_model (liststore_ignored_files, tracker_config_get_ignored_files (config));
		liststore_gnored_directories_with_content = (_tmp49_ = _g_object_ref0 ((_tmp48_ = gtk_builder_get_object (builder, "liststore_gnored_directories_with_content"), GTK_IS_LIST_STORE (_tmp48_) ? ((GtkListStore*) _tmp48_) : NULL)), _g_object_unref0 (liststore_gnored_directories_with_content), _tmp49_);
		fill_in_model (liststore_gnored_directories_with_content, tracker_config_get_ignored_directories_with_content (config));
		gtk_builder_connect_signals (builder, NULL);
		gtk_widget_show_all ((GtkWidget*) window);
		gtk_main ();
		_g_object_unref0 (builder);
	}
	goto __finally0;
	__catch0_g_error:
	{
		GError * e;
		e = _inner_error_;
		_inner_error_ = NULL;
		{
			fprintf (stderr, "Could not load UI: %s\n", e->message);
			result = 1;
			_g_error_free0 (e);
			return result;
		}
	}
	__finally0:
	if (_inner_error_ != NULL) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return 0;
	}
	result = 0;
	return result;
}


int main (int argc, char ** argv) {
	g_type_init ();
	return _vala_main (argv, argc);
}


static int _vala_strcmp0 (const char * str1, const char * str2) {
	if (str1 == NULL) {
		return -(str1 != str2);
	}
	if (str2 == NULL) {
		return str1 != str2;
	}
	return strcmp (str1, str2);
}




