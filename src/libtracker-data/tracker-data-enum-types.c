
/* Generated data (by glib-mkenums) */

#include <config.h>

#include "tracker-data-enum-types.h"

/* enumerations from "tracker-db-interface-sqlite.h" */
#include "tracker-db-interface-sqlite.h"
GType
tracker_db_interface_flags_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;
 
  if (g_once_init_enter (&g_define_type_id__volatile)) {
    static const GFlagsValue values[] = {
      { TRACKER_DB_INTERFACE_READONLY, "TRACKER_DB_INTERFACE_READONLY", "readonly" },
      { TRACKER_DB_INTERFACE_USE_MUTEX, "TRACKER_DB_INTERFACE_USE_MUTEX", "use-mutex" },
      { 0, NULL, NULL }
    };
    GType g_define_type_id = 
       g_flags_register_static (g_intern_static_string ("TrackerDBInterfaceFlags"), values);
      
    g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
  }
    
  return g_define_type_id__volatile;
}



/* Generated data ends here */

