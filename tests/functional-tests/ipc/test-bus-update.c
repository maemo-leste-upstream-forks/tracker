/* test-bus-update.c generated by valac 0.36.4, the Vala compiler
 * generated from test-bus-update.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include "libtracker-bus/tracker-bus.h"
#include "libtracker-sparql/tracker-sparql.h"


#define TYPE_TEST_APP (test_app_get_type ())
#define TEST_APP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_TEST_APP, TestApp))
#define TEST_APP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_TEST_APP, TestAppClass))
#define IS_TEST_APP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_TEST_APP))
#define IS_TEST_APP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_TEST_APP))
#define TEST_APP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_TEST_APP, TestAppClass))

typedef struct _TestApp TestApp;
typedef struct _TestAppClass TestAppClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))



gint _vala_main (gchar** args, int args_length1);
GType test_app_get_type (void) G_GNUC_CONST;
TestApp* test_app_new (TrackerSparqlConnection* connection);
TestApp* test_app_construct (GType object_type, TrackerSparqlConnection* connection);
gint test_app_run (TestApp* self);


gint _vala_main (gchar** args, int args_length1) {
	gint result = 0;
	gint _tmp7_ = 0;
	GError * _inner_error_ = NULL;
	{
		TrackerBusConnection* _tmp0_ = NULL;
		TrackerBusConnection* _tmp1_;
		TestApp* app = NULL;
		TestApp* _tmp2_;
		TestApp* _tmp3_;
		gint _tmp4_;
#line 8 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-bus-update.vala"
		_tmp1_ = tracker_bus_connection_new ("org.freedesktop.Tracker1", &_inner_error_);
#line 8 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-bus-update.vala"
		_tmp0_ = _tmp1_;
#line 8 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-bus-update.vala"
		if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 52 "test-bus-update.c"
			goto __catch7_g_error;
		}
#line 8 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-bus-update.vala"
		_tmp2_ = test_app_new ((TrackerSparqlConnection*) _tmp0_);
#line 8 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-bus-update.vala"
		app = _tmp2_;
#line 10 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-bus-update.vala"
		_tmp3_ = app;
#line 10 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-bus-update.vala"
		_tmp4_ = test_app_run (_tmp3_);
#line 10 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-bus-update.vala"
		result = _tmp4_;
#line 10 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-bus-update.vala"
		_g_object_unref0 (app);
#line 10 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-bus-update.vala"
		_g_object_unref0 (_tmp0_);
#line 10 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-bus-update.vala"
		return result;
#line 71 "test-bus-update.c"
	}
	goto __finally7;
	__catch7_g_error:
	{
		GError* e = NULL;
		GError* _tmp5_;
		const gchar* _tmp6_;
#line 7 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-bus-update.vala"
		e = _inner_error_;
#line 7 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-bus-update.vala"
		_inner_error_ = NULL;
#line 12 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-bus-update.vala"
		_tmp5_ = e;
#line 12 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-bus-update.vala"
		_tmp6_ = _tmp5_->message;
#line 12 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-bus-update.vala"
		g_warning ("test-bus-update.vala:12: Couldn't perform test: %s", _tmp6_);
#line 13 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-bus-update.vala"
		result = 1;
#line 13 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-bus-update.vala"
		_g_error_free0 (e);
#line 13 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-bus-update.vala"
		return result;
#line 95 "test-bus-update.c"
	}
	__finally7:
#line 7 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-bus-update.vala"
	g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 7 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-bus-update.vala"
	g_clear_error (&_inner_error_);
#line 7 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-bus-update.vala"
	return _tmp7_;
#line 104 "test-bus-update.c"
}


int main (int argc, char ** argv) {
#if !GLIB_CHECK_VERSION (2,35,0)
	g_type_init ();
#endif
#line 4 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-bus-update.vala"
	return _vala_main (argv, argc);
#line 114 "test-bus-update.c"
}



