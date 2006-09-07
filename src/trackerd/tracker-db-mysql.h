/* Tracker
 * Copyright (C) 2005, Mr Jamie McCracken
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef _TRACKER_MYSQL_DB_H_
#define _TRACKER_MYSQL_DB_H_

#include <mysql/mysql.h>
#include <glib.h>

#include "tracker-utils.h"

/* Paramterised queries : */

#define INSERT_CONTENTS		"INSERT INTO ServiceMetaData (ServiceID, MetaDataID, MetaDataIndexValue) VALUES (?,?,?)"



typedef struct {
	MYSQL 		*db;
	MYSQL_STMT  	*insert_contents_stmt;
	char		*thread;

} DBConnection;


char **		tracker_db_get_row 		(char ***result, int num);
void		tracker_db_free_result 		(char ***result);
void		tracker_db_log_result 		(char ***result);
int		tracker_get_row_count 		(char ***result);
int		tracker_get_field_count		(char ***result);

gboolean	tracker_db_initialize		(const char *data_dir);
void		tracker_db_thread_init 		(void);
void		tracker_db_thread_end 		(void);
void		tracker_db_close 		(DBConnection *db_con);
void		tracker_db_finalize 		(void);
DBConnection * 	tracker_db_connect 		(void);
gboolean	tracker_update_db 		(DBConnection *db_con);
char *		tracker_escape_string 		(DBConnection *db_con, const char *in);
void		tracker_db_prepare_queries 	(DBConnection *db_con);
char ***	tracker_exec_proc 		(DBConnection *db_con, const char *procedure, int param_count, ...);
char ***	tracker_exec_sql   		(DBConnection *db_con, const char *query);
void		tracker_log_sql	   		(DBConnection *db_con, const char *query);
void		tracker_create_db  		(void);
void		tracker_db_load_stored_procs 	(DBConnection *db_con);
void		tracker_db_save_file_contents	(DBConnection *db_con, const char *file_name, long file_id);
void		tracker_db_clear_temp 		(DBConnection *db_con);
void		tracker_db_check_tables 	(DBConnection *db_con);

char ***	tracker_db_search_text 		(DBConnection *db_con, const char *service, const char *search_string, int offset, int limit, gboolean sort);
char ***	tracker_db_search_files_by_text (DBConnection *db_con, const char *text, int offset, int limit, gboolean sort);
char ***	tracker_db_search_metadata 	(DBConnection *db_con, const char *service, const char *field, const char *text, int offset, int limit);
char ***	tracker_db_search_matching_metadata (DBConnection *db_con, const char *service, const char *id, const char *text);

char ***	tracker_db_get_metadata 	(DBConnection *db_con, const char *service, const char *id, const char *key);
void 		tracker_db_set_metadata 	(DBConnection *db_con, const char *service, const char *id, const char *key, const char *value, gboolean overwrite);

void 		tracker_db_create_service 	(DBConnection *db_con, const char *path, const char *name, const char *service, gboolean is_dir, gboolean is_link,
					   	 gboolean is_source, int offset, long mtime);

void		tracker_db_delete_file 		(DBConnection *db_con, long file_id);
void		tracker_db_delete_directory 	(DBConnection *db_con, long file_id, const char *uri);
void		tracker_db_update_file 		(DBConnection *db_con, long file_id, long mtime);
void		tracker_db_update_file_move	(DBConnection *db_con, long file_id, const char *path, const char *name, long mtime);

gboolean 	tracker_db_has_pending_files 	(DBConnection *db_con);
gboolean 	tracker_db_has_pending_metadata (DBConnection *db_con);
char ***	tracker_db_get_pending_files 	(DBConnection *db_con);
void		tracker_db_remove_pending_files (DBConnection *db_con);
char ***	tracker_db_get_pending_metadata (DBConnection *db_con);
void		tracker_db_remove_pending_metadata (DBConnection *db_con);
void		tracker_db_insert_pending	(DBConnection *db_con, const char *id, const char *action, const char *counter, const char *uri, const char *mime, gboolean is_dir);
void		tracker_db_update_pending 	(DBConnection *db_con, const char *counter, const char *action, const char *uri);

char ***	tracker_db_get_files_by_service (DBConnection *db_con, const char *service, int offset, int limit);
char ***	tracker_db_get_files_by_mime 	(DBConnection *db_con, char **mimes, int n, int offset, int limit, gboolean vfs);
char ***	tracker_db_search_text_mime  	(DBConnection *db_con, const char *text , char **mime_array, int n);
char ***	tracker_db_search_text_location	(DBConnection *db_con, const char *text ,const char *location);
char ***	tracker_db_search_text_mime_location (DBConnection *db_con, const char *text , char **mime_array, int n, const char *location);

char ***	tracker_db_get_file_subfolders 	(DBConnection *db_con, const char *uri);

#endif
