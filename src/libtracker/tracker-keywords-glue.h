/* Generated by dbus-binding-tool; do not edit! */

#include <glib.h>
#include <dbus/dbus-glib.h>

G_BEGIN_DECLS

#ifndef DBUS_GLIB_CLIENT_WRAPPERS_org_freedesktop_Tracker_Keywords
#define DBUS_GLIB_CLIENT_WRAPPERS_org_freedesktop_Tracker_Keywords

static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_freedesktop_Tracker_Keywords_get_list (DBusGProxy *proxy, const char * IN_service_type, GPtrArray** OUT_keywords, GError **error)

{
  return dbus_g_proxy_call (proxy, "GetList", error, G_TYPE_STRING, IN_service_type, G_TYPE_INVALID, dbus_g_type_get_collection ("GPtrArray", G_TYPE_STRV), OUT_keywords, G_TYPE_INVALID);
}

typedef void (*org_freedesktop_Tracker_Keywords_get_list_reply) (DBusGProxy *proxy, GPtrArray *OUT_keywords, GError *error, gpointer userdata);

static void
org_freedesktop_Tracker_Keywords_get_list_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  GPtrArray* OUT_keywords;
  dbus_g_proxy_end_call (proxy, call, &error, dbus_g_type_get_collection ("GPtrArray", G_TYPE_STRV), &OUT_keywords, G_TYPE_INVALID);
  (*(org_freedesktop_Tracker_Keywords_get_list_reply)data->cb) (proxy, OUT_keywords, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_freedesktop_Tracker_Keywords_get_list_async (DBusGProxy *proxy, const char * IN_service_type, org_freedesktop_Tracker_Keywords_get_list_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_new (DBusGAsyncData, 1);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "GetList", org_freedesktop_Tracker_Keywords_get_list_async_callback, stuff, g_free, G_TYPE_STRING, IN_service_type, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_freedesktop_Tracker_Keywords_get (DBusGProxy *proxy, const char * IN_service_type, const char * IN_uri, char *** OUT_keywords, GError **error)

{
  return dbus_g_proxy_call (proxy, "Get", error, G_TYPE_STRING, IN_service_type, G_TYPE_STRING, IN_uri, G_TYPE_INVALID, G_TYPE_STRV, OUT_keywords, G_TYPE_INVALID);
}

typedef void (*org_freedesktop_Tracker_Keywords_get_reply) (DBusGProxy *proxy, char * *OUT_keywords, GError *error, gpointer userdata);

static void
org_freedesktop_Tracker_Keywords_get_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  char ** OUT_keywords;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_STRV, &OUT_keywords, G_TYPE_INVALID);
  (*(org_freedesktop_Tracker_Keywords_get_reply)data->cb) (proxy, OUT_keywords, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_freedesktop_Tracker_Keywords_get_async (DBusGProxy *proxy, const char * IN_service_type, const char * IN_uri, org_freedesktop_Tracker_Keywords_get_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_new (DBusGAsyncData, 1);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "Get", org_freedesktop_Tracker_Keywords_get_async_callback, stuff, g_free, G_TYPE_STRING, IN_service_type, G_TYPE_STRING, IN_uri, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_freedesktop_Tracker_Keywords_add (DBusGProxy *proxy, const char * IN_service_type, const char * IN_uri, const char ** IN_keywords, GError **error)

{
  return dbus_g_proxy_call (proxy, "Add", error, G_TYPE_STRING, IN_service_type, G_TYPE_STRING, IN_uri, G_TYPE_STRV, IN_keywords, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*org_freedesktop_Tracker_Keywords_add_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
org_freedesktop_Tracker_Keywords_add_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(org_freedesktop_Tracker_Keywords_add_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_freedesktop_Tracker_Keywords_add_async (DBusGProxy *proxy, const char * IN_service_type, const char * IN_uri, const char ** IN_keywords, org_freedesktop_Tracker_Keywords_add_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_new (DBusGAsyncData, 1);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "Add", org_freedesktop_Tracker_Keywords_add_async_callback, stuff, g_free, G_TYPE_STRING, IN_service_type, G_TYPE_STRING, IN_uri, G_TYPE_STRV, IN_keywords, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_freedesktop_Tracker_Keywords_remove (DBusGProxy *proxy, const char * IN_service_type, const char * IN_uri, const char ** IN_keywords, GError **error)

{
  return dbus_g_proxy_call (proxy, "Remove", error, G_TYPE_STRING, IN_service_type, G_TYPE_STRING, IN_uri, G_TYPE_STRV, IN_keywords, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*org_freedesktop_Tracker_Keywords_remove_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
org_freedesktop_Tracker_Keywords_remove_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(org_freedesktop_Tracker_Keywords_remove_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_freedesktop_Tracker_Keywords_remove_async (DBusGProxy *proxy, const char * IN_service_type, const char * IN_uri, const char ** IN_keywords, org_freedesktop_Tracker_Keywords_remove_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_new (DBusGAsyncData, 1);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "Remove", org_freedesktop_Tracker_Keywords_remove_async_callback, stuff, g_free, G_TYPE_STRING, IN_service_type, G_TYPE_STRING, IN_uri, G_TYPE_STRV, IN_keywords, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_freedesktop_Tracker_Keywords_remove_all (DBusGProxy *proxy, const char * IN_service_type, const char * IN_uri, GError **error)

{
  return dbus_g_proxy_call (proxy, "RemoveAll", error, G_TYPE_STRING, IN_service_type, G_TYPE_STRING, IN_uri, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*org_freedesktop_Tracker_Keywords_remove_all_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
org_freedesktop_Tracker_Keywords_remove_all_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(org_freedesktop_Tracker_Keywords_remove_all_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_freedesktop_Tracker_Keywords_remove_all_async (DBusGProxy *proxy, const char * IN_service_type, const char * IN_uri, org_freedesktop_Tracker_Keywords_remove_all_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_new (DBusGAsyncData, 1);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "RemoveAll", org_freedesktop_Tracker_Keywords_remove_all_async_callback, stuff, g_free, G_TYPE_STRING, IN_service_type, G_TYPE_STRING, IN_uri, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
org_freedesktop_Tracker_Keywords_search (DBusGProxy *proxy, const gint IN_live_query_id, const char * IN_service_type, const char ** IN_keywords, const gint IN_offset, const gint IN_max_hits, char *** OUT_result, GError **error)

{
  return dbus_g_proxy_call (proxy, "Search", error, G_TYPE_INT, IN_live_query_id, G_TYPE_STRING, IN_service_type, G_TYPE_STRV, IN_keywords, G_TYPE_INT, IN_offset, G_TYPE_INT, IN_max_hits, G_TYPE_INVALID, G_TYPE_STRV, OUT_result, G_TYPE_INVALID);
}

typedef void (*org_freedesktop_Tracker_Keywords_search_reply) (DBusGProxy *proxy, char * *OUT_result, GError *error, gpointer userdata);

static void
org_freedesktop_Tracker_Keywords_search_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  char ** OUT_result;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_STRV, &OUT_result, G_TYPE_INVALID);
  (*(org_freedesktop_Tracker_Keywords_search_reply)data->cb) (proxy, OUT_result, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
org_freedesktop_Tracker_Keywords_search_async (DBusGProxy *proxy, const gint IN_live_query_id, const char * IN_service_type, const char ** IN_keywords, const gint IN_offset, const gint IN_max_hits, org_freedesktop_Tracker_Keywords_search_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_new (DBusGAsyncData, 1);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "Search", org_freedesktop_Tracker_Keywords_search_async_callback, stuff, g_free, G_TYPE_INT, IN_live_query_id, G_TYPE_STRING, IN_service_type, G_TYPE_STRV, IN_keywords, G_TYPE_INT, IN_offset, G_TYPE_INT, IN_max_hits, G_TYPE_INVALID);
}
#endif /* defined DBUS_GLIB_CLIENT_WRAPPERS_org_freedesktop_Tracker_Keywords */

G_END_DECLS