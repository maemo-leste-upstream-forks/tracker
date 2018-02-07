/* test-direct-query.c generated by valac 0.38.4, the Vala compiler
 * generated from test-direct-query.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include "libtracker-sparql/tracker-sparql.h"
#include <gio/gio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _Block1Data Block1Data;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_main_loop_unref0(var) ((var == NULL) ? NULL : (var = (g_main_loop_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))

#define TYPE_TEST_APP (test_app_get_type ())
#define TEST_APP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_TEST_APP, TestApp))
#define TEST_APP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_TEST_APP, TestAppClass))
#define IS_TEST_APP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_TEST_APP))
#define IS_TEST_APP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_TEST_APP))
#define TEST_APP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_TEST_APP, TestAppClass))

typedef struct _TestApp TestApp;
typedef struct _TestAppClass TestAppClass;

struct _Block1Data {
	int _ref_count_;
	TrackerSparqlConnection* c;
};


extern gint res;
gint res = 0;
extern GMainLoop* loop;
GMainLoop* loop = NULL;

void test_async (void);
static Block1Data* block1_data_ref (Block1Data* _data1_);
static void block1_data_unref (void * _userdata_);
static void __lambda4_ (Block1Data* _data1_, GObject* o, GAsyncResult* res);
static void ___lambda4__gasync_ready_callback (GObject* source_object, GAsyncResult* res, gpointer self);
GType test_app_get_type (void) G_GNUC_CONST;
TestApp* test_app_new (TrackerSparqlConnection* connection);
TestApp* test_app_construct (GType object_type, TrackerSparqlConnection* connection);
gint test_app_run (TestApp* self);
void test_sync (void);
gint _vala_main (gchar** args, int args_length1);


static Block1Data* block1_data_ref (Block1Data* _data1_) {
#line 7 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	g_atomic_int_inc (&_data1_->_ref_count_);
#line 7 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	return _data1_;
#line 57 "test-direct-query.c"
}


static void block1_data_unref (void * _userdata_) {
	Block1Data* _data1_;
	_data1_ = (Block1Data*) _userdata_;
#line 7 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	if (g_atomic_int_dec_and_test (&_data1_->_ref_count_)) {
#line 7 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		_g_object_unref0 (_data1_->c);
#line 7 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		g_slice_free (Block1Data, _data1_);
#line 70 "test-direct-query.c"
	}
}


static void __lambda4_ (Block1Data* _data1_, GObject* o, GAsyncResult* res) {
	GMainLoop* _tmp6_;
	GError * _inner_error_ = NULL;
#line 13 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	g_return_if_fail (res != NULL);
#line 80 "test-direct-query.c"
	{
		TrackerSparqlConnection* _tmp0_ = NULL;
		GAsyncResult* _tmp1_;
		TrackerSparqlConnection* _tmp2_;
		TrackerSparqlConnection* _tmp3_;
#line 15 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		_tmp1_ = res;
#line 15 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		_tmp2_ = tracker_sparql_connection_get_finish (_tmp1_, &_inner_error_);
#line 15 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		_tmp0_ = _tmp2_;
#line 15 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 94 "test-direct-query.c"
			goto __catch3_g_error;
		}
#line 15 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		_tmp3_ = _tmp0_;
#line 15 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		_tmp0_ = NULL;
#line 15 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		_g_object_unref0 (_data1_->c);
#line 15 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		_data1_->c = _tmp3_;
#line 14 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		_g_object_unref0 (_tmp0_);
#line 107 "test-direct-query.c"
	}
	goto __finally3;
	__catch3_g_error:
	{
		GError* e = NULL;
		GError* _tmp4_;
		const gchar* _tmp5_;
#line 14 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		e = _inner_error_;
#line 14 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		_inner_error_ = NULL;
#line 17 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		_tmp4_ = e;
#line 17 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		_tmp5_ = _tmp4_->message;
#line 17 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		g_warning ("test-direct-query.vala:17: Couldn't perform test: %s", _tmp5_);
#line 14 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		_g_error_free0 (e);
#line 127 "test-direct-query.c"
	}
	__finally3:
#line 14 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 14 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 14 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		g_clear_error (&_inner_error_);
#line 14 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		return;
#line 138 "test-direct-query.c"
	}
#line 19 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	_tmp6_ = loop;
#line 19 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	g_main_loop_quit (_tmp6_);
#line 144 "test-direct-query.c"
}


static void ___lambda4__gasync_ready_callback (GObject* source_object, GAsyncResult* res, gpointer self) {
#line 13 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	__lambda4_ (self, source_object, res);
#line 13 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	block1_data_unref (self);
#line 153 "test-direct-query.c"
}


void test_async (void) {
	Block1Data* _data1_;
	GMainLoop* _tmp0_;
	GMainLoop* _tmp1_;
	TestApp* app = NULL;
	TestApp* _tmp2_;
	gint _tmp3_;
#line 7 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	_data1_ = g_slice_new0 (Block1Data);
#line 7 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	_data1_->_ref_count_ = 1;
#line 8 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	_data1_->c = NULL;
#line 11 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	g_print ("Getting connection asynchronously\n");
#line 12 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	_tmp0_ = g_main_loop_new (NULL, FALSE);
#line 12 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	_g_main_loop_unref0 (loop);
#line 12 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	loop = _tmp0_;
#line 13 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	tracker_sparql_connection_get_async (NULL, ___lambda4__gasync_ready_callback, block1_data_ref (_data1_));
#line 21 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	_tmp1_ = loop;
#line 21 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	g_main_loop_run (_tmp1_);
#line 23 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	g_print ("Got it %p\n", _data1_->c);
#line 25 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	g_print ("Creating app with connection\n");
#line 26 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	_tmp2_ = test_app_new (_data1_->c);
#line 26 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	app = _tmp2_;
#line 28 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	g_print ("Running app\n");
#line 29 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	_tmp3_ = test_app_run (app);
#line 29 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	res = _tmp3_;
#line 31 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	g_print ("\n");
#line 7 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	_g_object_unref0 (app);
#line 7 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	block1_data_unref (_data1_);
#line 7 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	_data1_ = NULL;
#line 206 "test-direct-query.c"
}


void test_sync (void) {
	GError * _inner_error_ = NULL;
	{
		TrackerSparqlConnection* c = NULL;
		TrackerSparqlConnection* _tmp0_ = NULL;
		TrackerSparqlConnection* _tmp1_;
		TrackerSparqlConnection* _tmp2_;
		TrackerSparqlConnection* _tmp3_;
		TestApp* app = NULL;
		TrackerSparqlConnection* _tmp4_;
		TestApp* _tmp5_;
		TestApp* _tmp6_;
		gint _tmp7_;
#line 39 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		g_print ("Getting connection synchronously\n");
#line 40 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		_tmp1_ = tracker_sparql_connection_get (NULL, &_inner_error_);
#line 40 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		_tmp0_ = _tmp1_;
#line 40 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 40 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
			_g_object_unref0 (c);
#line 233 "test-direct-query.c"
			goto __catch4_g_error;
		}
#line 40 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		_tmp2_ = _tmp0_;
#line 40 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		_tmp0_ = NULL;
#line 40 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		_g_object_unref0 (c);
#line 40 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		c = _tmp2_;
#line 42 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		_tmp3_ = c;
#line 42 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		g_print ("Got it %p\n", _tmp3_);
#line 44 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		g_print ("Creating app with connection\n");
#line 45 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		_tmp4_ = c;
#line 45 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		_tmp5_ = test_app_new (_tmp4_);
#line 45 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		app = _tmp5_;
#line 47 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		g_print ("Running app\n");
#line 48 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		_tmp6_ = app;
#line 48 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		_tmp7_ = test_app_run (_tmp6_);
#line 48 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		res = _tmp7_;
#line 35 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		_g_object_unref0 (app);
#line 35 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		_g_object_unref0 (_tmp0_);
#line 35 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		_g_object_unref0 (c);
#line 270 "test-direct-query.c"
	}
	goto __finally4;
	__catch4_g_error:
	{
		GError* e = NULL;
		GError* _tmp8_;
		const gchar* _tmp9_;
#line 35 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		e = _inner_error_;
#line 35 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		_inner_error_ = NULL;
#line 50 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		_tmp8_ = e;
#line 50 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		_tmp9_ = _tmp8_->message;
#line 50 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		g_warning ("test-direct-query.vala:50: Couldn't perform test: %s", _tmp9_);
#line 35 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		_g_error_free0 (e);
#line 290 "test-direct-query.c"
	}
	__finally4:
#line 35 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 35 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 35 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		g_clear_error (&_inner_error_);
#line 35 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		return;
#line 301 "test-direct-query.c"
	}
#line 53 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	g_print ("\n");
#line 305 "test-direct-query.c"
}


gint _vala_main (gchar** args, int args_length1) {
	gint result = 0;
	gint _tmp0_;
	gint _tmp2_;
#line 59 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	g_print ("Starting...\n");
#line 61 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	test_sync ();
#line 63 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	_tmp0_ = res;
#line 63 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	if (_tmp0_ < 0) {
#line 321 "test-direct-query.c"
		gint _tmp1_;
#line 64 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		_tmp1_ = res;
#line 64 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		result = _tmp1_;
#line 64 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
		return result;
#line 329 "test-direct-query.c"
	}
#line 67 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	test_async ();
#line 69 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	_tmp2_ = res;
#line 69 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	result = _tmp2_;
#line 69 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	return result;
#line 339 "test-direct-query.c"
}


int main (int argc, char ** argv) {
#line 56 "/home/carlos/Source/gnome/tracker/tests/functional-tests/ipc/test-direct-query.vala"
	return _vala_main (argv, argc);
#line 346 "test-direct-query.c"
}



