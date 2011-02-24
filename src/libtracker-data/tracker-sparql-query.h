/* tracker-sparql-query.h generated by valac 0.11.4, the Vala compiler, do not modify */


#ifndef __TRACKER_SPARQL_QUERY_H__
#define __TRACKER_SPARQL_QUERY_H__

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <libtracker-data/tracker-db-interface.h>
#include <libtracker-sparql/tracker-sparql.h>
#include <libtracker-common/tracker-date-time.h>

G_BEGIN_DECLS


#define TRACKER_SPARQL_TYPE_QUERY (tracker_sparql_query_get_type ())
#define TRACKER_SPARQL_QUERY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRACKER_SPARQL_TYPE_QUERY, TrackerSparqlQuery))
#define TRACKER_SPARQL_QUERY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRACKER_SPARQL_TYPE_QUERY, TrackerSparqlQueryClass))
#define TRACKER_SPARQL_IS_QUERY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRACKER_SPARQL_TYPE_QUERY))
#define TRACKER_SPARQL_IS_QUERY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRACKER_SPARQL_TYPE_QUERY))
#define TRACKER_SPARQL_QUERY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRACKER_SPARQL_TYPE_QUERY, TrackerSparqlQueryClass))

typedef struct _TrackerSparqlQuery TrackerSparqlQuery;
typedef struct _TrackerSparqlQueryClass TrackerSparqlQueryClass;
typedef struct _TrackerSparqlQueryPrivate TrackerSparqlQueryPrivate;

#define TRACKER_SPARQL_TYPE_EXPRESSION (tracker_sparql_expression_get_type ())
#define TRACKER_SPARQL_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRACKER_SPARQL_TYPE_EXPRESSION, TrackerSparqlExpression))
#define TRACKER_SPARQL_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRACKER_SPARQL_TYPE_EXPRESSION, TrackerSparqlExpressionClass))
#define TRACKER_SPARQL_IS_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRACKER_SPARQL_TYPE_EXPRESSION))
#define TRACKER_SPARQL_IS_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRACKER_SPARQL_TYPE_EXPRESSION))
#define TRACKER_SPARQL_EXPRESSION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRACKER_SPARQL_TYPE_EXPRESSION, TrackerSparqlExpressionClass))

typedef struct _TrackerSparqlExpression TrackerSparqlExpression;
typedef struct _TrackerSparqlExpressionClass TrackerSparqlExpressionClass;

#define TRACKER_SPARQL_TYPE_PATTERN (tracker_sparql_pattern_get_type ())
#define TRACKER_SPARQL_PATTERN(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRACKER_SPARQL_TYPE_PATTERN, TrackerSparqlPattern))
#define TRACKER_SPARQL_PATTERN_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRACKER_SPARQL_TYPE_PATTERN, TrackerSparqlPatternClass))
#define TRACKER_SPARQL_IS_PATTERN(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRACKER_SPARQL_TYPE_PATTERN))
#define TRACKER_SPARQL_IS_PATTERN_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRACKER_SPARQL_TYPE_PATTERN))
#define TRACKER_SPARQL_PATTERN_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRACKER_SPARQL_TYPE_PATTERN, TrackerSparqlPatternClass))

typedef struct _TrackerSparqlPattern TrackerSparqlPattern;
typedef struct _TrackerSparqlPatternClass TrackerSparqlPatternClass;

#define TRACKER_SPARQL_TYPE_DATA_BINDING (tracker_sparql_data_binding_get_type ())
#define TRACKER_SPARQL_DATA_BINDING(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRACKER_SPARQL_TYPE_DATA_BINDING, TrackerSparqlDataBinding))
#define TRACKER_SPARQL_DATA_BINDING_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRACKER_SPARQL_TYPE_DATA_BINDING, TrackerSparqlDataBindingClass))
#define TRACKER_SPARQL_IS_DATA_BINDING(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRACKER_SPARQL_TYPE_DATA_BINDING))
#define TRACKER_SPARQL_IS_DATA_BINDING_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRACKER_SPARQL_TYPE_DATA_BINDING))
#define TRACKER_SPARQL_DATA_BINDING_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRACKER_SPARQL_TYPE_DATA_BINDING, TrackerSparqlDataBindingClass))

typedef struct _TrackerSparqlDataBinding TrackerSparqlDataBinding;
typedef struct _TrackerSparqlDataBindingClass TrackerSparqlDataBindingClass;

#define TRACKER_SPARQL_TYPE_LITERAL_BINDING (tracker_sparql_literal_binding_get_type ())
#define TRACKER_SPARQL_LITERAL_BINDING(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRACKER_SPARQL_TYPE_LITERAL_BINDING, TrackerSparqlLiteralBinding))
#define TRACKER_SPARQL_LITERAL_BINDING_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRACKER_SPARQL_TYPE_LITERAL_BINDING, TrackerSparqlLiteralBindingClass))
#define TRACKER_SPARQL_IS_LITERAL_BINDING(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRACKER_SPARQL_TYPE_LITERAL_BINDING))
#define TRACKER_SPARQL_IS_LITERAL_BINDING_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRACKER_SPARQL_TYPE_LITERAL_BINDING))
#define TRACKER_SPARQL_LITERAL_BINDING_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRACKER_SPARQL_TYPE_LITERAL_BINDING, TrackerSparqlLiteralBindingClass))

typedef struct _TrackerSparqlLiteralBinding TrackerSparqlLiteralBinding;
typedef struct _TrackerSparqlLiteralBindingClass TrackerSparqlLiteralBindingClass;

#define TRACKER_SPARQL_TYPE_CONTEXT (tracker_sparql_context_get_type ())
#define TRACKER_SPARQL_CONTEXT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRACKER_SPARQL_TYPE_CONTEXT, TrackerSparqlContext))
#define TRACKER_SPARQL_CONTEXT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRACKER_SPARQL_TYPE_CONTEXT, TrackerSparqlContextClass))
#define TRACKER_SPARQL_IS_CONTEXT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRACKER_SPARQL_TYPE_CONTEXT))
#define TRACKER_SPARQL_IS_CONTEXT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRACKER_SPARQL_TYPE_CONTEXT))
#define TRACKER_SPARQL_CONTEXT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRACKER_SPARQL_TYPE_CONTEXT, TrackerSparqlContextClass))

typedef struct _TrackerSparqlContext TrackerSparqlContext;
typedef struct _TrackerSparqlContextClass TrackerSparqlContextClass;

#define TRACKER_TYPE_SPARQL_SCANNER (tracker_sparql_scanner_get_type ())
#define TRACKER_SPARQL_SCANNER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRACKER_TYPE_SPARQL_SCANNER, TrackerSparqlScanner))
#define TRACKER_SPARQL_SCANNER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRACKER_TYPE_SPARQL_SCANNER, TrackerSparqlScannerClass))
#define TRACKER_IS_SPARQL_SCANNER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRACKER_TYPE_SPARQL_SCANNER))
#define TRACKER_IS_SPARQL_SCANNER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRACKER_TYPE_SPARQL_SCANNER))
#define TRACKER_SPARQL_SCANNER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRACKER_TYPE_SPARQL_SCANNER, TrackerSparqlScannerClass))

typedef struct _TrackerSparqlScanner TrackerSparqlScanner;
typedef struct _TrackerSparqlScannerClass TrackerSparqlScannerClass;
typedef struct _TrackerSparqlScannerPrivate TrackerSparqlScannerPrivate;

#define TRACKER_TYPE_SOURCE_LOCATION (tracker_source_location_get_type ())
typedef struct _TrackerSourceLocation TrackerSourceLocation;

#define TRACKER_TYPE_SPARQL_TOKEN_TYPE (tracker_sparql_token_type_get_type ())

#define TRACKER_TYPE_TURTLE_READER (tracker_turtle_reader_get_type ())
#define TRACKER_TURTLE_READER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRACKER_TYPE_TURTLE_READER, TrackerTurtleReader))
#define TRACKER_TURTLE_READER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRACKER_TYPE_TURTLE_READER, TrackerTurtleReaderClass))
#define TRACKER_IS_TURTLE_READER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRACKER_TYPE_TURTLE_READER))
#define TRACKER_IS_TURTLE_READER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRACKER_TYPE_TURTLE_READER))
#define TRACKER_TURTLE_READER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRACKER_TYPE_TURTLE_READER, TrackerTurtleReaderClass))

typedef struct _TrackerTurtleReader TrackerTurtleReader;
typedef struct _TrackerTurtleReaderClass TrackerTurtleReaderClass;
typedef struct _TrackerTurtleReaderPrivate TrackerTurtleReaderPrivate;

struct _TrackerSparqlQuery {
	GObject parent_instance;
	TrackerSparqlQueryPrivate * priv;
	TrackerSparqlExpression* expression;
	TrackerSparqlPattern* pattern;
	GList* bindings;
	TrackerSparqlContext* context;
	gint last_var_index;
};

struct _TrackerSparqlQueryClass {
	GObjectClass parent_class;
};

struct _TrackerSparqlScanner {
	GObject parent_instance;
	TrackerSparqlScannerPrivate * priv;
};

struct _TrackerSparqlScannerClass {
	GObjectClass parent_class;
};

struct _TrackerSourceLocation {
	gchar* pos;
	gint line;
	gint column;
};

typedef enum  {
	TRACKER_SPARQL_TOKEN_TYPE_NONE,
	TRACKER_SPARQL_TOKEN_TYPE_A,
	TRACKER_SPARQL_TOKEN_TYPE_AS,
	TRACKER_SPARQL_TOKEN_TYPE_ASC,
	TRACKER_SPARQL_TOKEN_TYPE_ASK,
	TRACKER_SPARQL_TOKEN_TYPE_ATBASE,
	TRACKER_SPARQL_TOKEN_TYPE_ATPREFIX,
	TRACKER_SPARQL_TOKEN_TYPE_AVG,
	TRACKER_SPARQL_TOKEN_TYPE_BASE,
	TRACKER_SPARQL_TOKEN_TYPE_BLANK_NODE,
	TRACKER_SPARQL_TOKEN_TYPE_BOUND,
	TRACKER_SPARQL_TOKEN_TYPE_BY,
	TRACKER_SPARQL_TOKEN_TYPE_CLOSE_BRACE,
	TRACKER_SPARQL_TOKEN_TYPE_CLOSE_BRACKET,
	TRACKER_SPARQL_TOKEN_TYPE_CLOSE_PARENS,
	TRACKER_SPARQL_TOKEN_TYPE_COLON,
	TRACKER_SPARQL_TOKEN_TYPE_COMMA,
	TRACKER_SPARQL_TOKEN_TYPE_CONSTRUCT,
	TRACKER_SPARQL_TOKEN_TYPE_COUNT,
	TRACKER_SPARQL_TOKEN_TYPE_DATA,
	TRACKER_SPARQL_TOKEN_TYPE_DATATYPE,
	TRACKER_SPARQL_TOKEN_TYPE_DECIMAL,
	TRACKER_SPARQL_TOKEN_TYPE_DELETE,
	TRACKER_SPARQL_TOKEN_TYPE_DESC,
	TRACKER_SPARQL_TOKEN_TYPE_DESCRIBE,
	TRACKER_SPARQL_TOKEN_TYPE_DISTINCT,
	TRACKER_SPARQL_TOKEN_TYPE_DIV,
	TRACKER_SPARQL_TOKEN_TYPE_DOT,
	TRACKER_SPARQL_TOKEN_TYPE_DOUBLE,
	TRACKER_SPARQL_TOKEN_TYPE_DOUBLE_CIRCUMFLEX,
	TRACKER_SPARQL_TOKEN_TYPE_DROP,
	TRACKER_SPARQL_TOKEN_TYPE_EOF,
	TRACKER_SPARQL_TOKEN_TYPE_EXISTS,
	TRACKER_SPARQL_TOKEN_TYPE_FALSE,
	TRACKER_SPARQL_TOKEN_TYPE_FILTER,
	TRACKER_SPARQL_TOKEN_TYPE_FROM,
	TRACKER_SPARQL_TOKEN_TYPE_GRAPH,
	TRACKER_SPARQL_TOKEN_TYPE_GROUP,
	TRACKER_SPARQL_TOKEN_TYPE_GROUP_CONCAT,
	TRACKER_SPARQL_TOKEN_TYPE_IF,
	TRACKER_SPARQL_TOKEN_TYPE_INSERT,
	TRACKER_SPARQL_TOKEN_TYPE_INTEGER,
	TRACKER_SPARQL_TOKEN_TYPE_INTO,
	TRACKER_SPARQL_TOKEN_TYPE_IRI_REF,
	TRACKER_SPARQL_TOKEN_TYPE_ISBLANK,
	TRACKER_SPARQL_TOKEN_TYPE_ISIRI,
	TRACKER_SPARQL_TOKEN_TYPE_ISLITERAL,
	TRACKER_SPARQL_TOKEN_TYPE_ISURI,
	TRACKER_SPARQL_TOKEN_TYPE_LANG,
	TRACKER_SPARQL_TOKEN_TYPE_LANGMATCHES,
	TRACKER_SPARQL_TOKEN_TYPE_LIMIT,
	TRACKER_SPARQL_TOKEN_TYPE_MAX,
	TRACKER_SPARQL_TOKEN_TYPE_MIN,
	TRACKER_SPARQL_TOKEN_TYPE_MINUS,
	TRACKER_SPARQL_TOKEN_TYPE_NAMED,
	TRACKER_SPARQL_TOKEN_TYPE_NOT,
	TRACKER_SPARQL_TOKEN_TYPE_OFFSET,
	TRACKER_SPARQL_TOKEN_TYPE_OP_AND,
	TRACKER_SPARQL_TOKEN_TYPE_OP_EQ,
	TRACKER_SPARQL_TOKEN_TYPE_OP_GE,
	TRACKER_SPARQL_TOKEN_TYPE_OP_GT,
	TRACKER_SPARQL_TOKEN_TYPE_OP_LE,
	TRACKER_SPARQL_TOKEN_TYPE_OP_LT,
	TRACKER_SPARQL_TOKEN_TYPE_OP_NE,
	TRACKER_SPARQL_TOKEN_TYPE_OP_NEG,
	TRACKER_SPARQL_TOKEN_TYPE_OP_OR,
	TRACKER_SPARQL_TOKEN_TYPE_OP_IN,
	TRACKER_SPARQL_TOKEN_TYPE_OPEN_BRACE,
	TRACKER_SPARQL_TOKEN_TYPE_OPEN_BRACKET,
	TRACKER_SPARQL_TOKEN_TYPE_OPEN_PARENS,
	TRACKER_SPARQL_TOKEN_TYPE_OPTIONAL,
	TRACKER_SPARQL_TOKEN_TYPE_ORDER,
	TRACKER_SPARQL_TOKEN_TYPE_PLUS,
	TRACKER_SPARQL_TOKEN_TYPE_PN_PREFIX,
	TRACKER_SPARQL_TOKEN_TYPE_PREFIX,
	TRACKER_SPARQL_TOKEN_TYPE_REDUCED,
	TRACKER_SPARQL_TOKEN_TYPE_REGEX,
	TRACKER_SPARQL_TOKEN_TYPE_SAMETERM,
	TRACKER_SPARQL_TOKEN_TYPE_SELECT,
	TRACKER_SPARQL_TOKEN_TYPE_SEMICOLON,
	TRACKER_SPARQL_TOKEN_TYPE_SILENT,
	TRACKER_SPARQL_TOKEN_TYPE_STAR,
	TRACKER_SPARQL_TOKEN_TYPE_STR,
	TRACKER_SPARQL_TOKEN_TYPE_STRING_LITERAL1,
	TRACKER_SPARQL_TOKEN_TYPE_STRING_LITERAL2,
	TRACKER_SPARQL_TOKEN_TYPE_STRING_LITERAL_LONG1,
	TRACKER_SPARQL_TOKEN_TYPE_STRING_LITERAL_LONG2,
	TRACKER_SPARQL_TOKEN_TYPE_SUM,
	TRACKER_SPARQL_TOKEN_TYPE_TRUE,
	TRACKER_SPARQL_TOKEN_TYPE_UNION,
	TRACKER_SPARQL_TOKEN_TYPE_VAR,
	TRACKER_SPARQL_TOKEN_TYPE_WHERE,
	TRACKER_SPARQL_TOKEN_TYPE_WITH
} TrackerSparqlTokenType;

struct _TrackerTurtleReader {
	GObject parent_instance;
	TrackerTurtleReaderPrivate * priv;
};

struct _TrackerTurtleReaderClass {
	GObjectClass parent_class;
};


GType tracker_sparql_query_get_type (void) G_GNUC_CONST;
GType tracker_sparql_expression_get_type (void) G_GNUC_CONST;
GType tracker_sparql_pattern_get_type (void) G_GNUC_CONST;
GType tracker_sparql_data_binding_get_type (void) G_GNUC_CONST;
GType tracker_sparql_literal_binding_get_type (void) G_GNUC_CONST;
gpointer tracker_sparql_context_ref (gpointer instance);
void tracker_sparql_context_unref (gpointer instance);
GParamSpec* tracker_sparql_param_spec_context (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void tracker_sparql_value_set_context (GValue* value, gpointer v_object);
void tracker_sparql_value_take_context (GValue* value, gpointer v_object);
gpointer tracker_sparql_value_get_context (const GValue* value);
GType tracker_sparql_context_get_type (void) G_GNUC_CONST;
TrackerSparqlQuery* tracker_sparql_query_new (const gchar* query);
TrackerSparqlQuery* tracker_sparql_query_construct (GType object_type, const gchar* query);
TrackerSparqlQuery* tracker_sparql_query_new_update (const gchar* query);
TrackerSparqlQuery* tracker_sparql_query_construct_update (GType object_type, const gchar* query);
TrackerDBCursor* tracker_sparql_query_execute_cursor (TrackerSparqlQuery* self, gboolean threadsafe, GError** error);
GVariant* tracker_sparql_query_execute_update (TrackerSparqlQuery* self, gboolean blank, GError** error);
void uuid_generate (guchar* uuid);
gboolean tracker_sparql_query_get_no_cache (TrackerSparqlQuery* self);
void tracker_sparql_query_set_no_cache (TrackerSparqlQuery* self, gboolean value);
GType tracker_sparql_scanner_get_type (void) G_GNUC_CONST;
TrackerSparqlScanner* tracker_sparql_scanner_new (gchar* input, gsize len);
TrackerSparqlScanner* tracker_sparql_scanner_construct (GType object_type, gchar* input, gsize len);
GType tracker_source_location_get_type (void) G_GNUC_CONST;
TrackerSourceLocation* tracker_source_location_dup (const TrackerSourceLocation* self);
void tracker_source_location_free (TrackerSourceLocation* self);
void tracker_sparql_scanner_seek (TrackerSparqlScanner* self, TrackerSourceLocation* location);
GType tracker_sparql_token_type_get_type (void) G_GNUC_CONST;
TrackerSparqlTokenType tracker_sparql_scanner_read_token (TrackerSparqlScanner* self, TrackerSourceLocation* token_begin, TrackerSourceLocation* token_end, GError** error);
const gchar* tracker_sparql_token_type_to_string (TrackerSparqlTokenType self);
GType tracker_turtle_reader_get_type (void) G_GNUC_CONST;
TrackerTurtleReader* tracker_turtle_reader_new (const gchar* path, GError** error);
TrackerTurtleReader* tracker_turtle_reader_construct (GType object_type, const gchar* path, GError** error);
gboolean tracker_turtle_reader_next (TrackerTurtleReader* self, GError** error);
void tracker_turtle_reader_load (const gchar* path, GError** error);
const gchar* tracker_turtle_reader_get_graph (TrackerTurtleReader* self);
const gchar* tracker_turtle_reader_get_subject (TrackerTurtleReader* self);
const gchar* tracker_turtle_reader_get_predicate (TrackerTurtleReader* self);
const gchar* tracker_turtle_reader_get_object (TrackerTurtleReader* self);
gboolean tracker_turtle_reader_get_object_is_uri (TrackerTurtleReader* self);


G_END_DECLS

#endif
