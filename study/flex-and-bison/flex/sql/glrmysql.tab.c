/* A Bison parser, made by GNU Bison 3.7.3.  */

/* Skeleton implementation for Bison GLR parsers in C

   Copyright (C) 2002-2015, 2018-2020 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C GLR parser skeleton written by Paul Hilfinger.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "glr.c"

/* Pure parsers.  */
#define YYPURE 0






/* First part of user prologue.  */
#line 17 "glrmysql.y"

#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

void yyerror(const char *s, ...);
void emit(char *s, ...);

#line 67 "glrmysql.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "glrmysql.tab.h"

/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NAME = 3,                       /* NAME  */
  YYSYMBOL_STRING = 4,                     /* STRING  */
  YYSYMBOL_INTNUM = 5,                     /* INTNUM  */
  YYSYMBOL_BOOL = 6,                       /* BOOL  */
  YYSYMBOL_APPROXNUM = 7,                  /* APPROXNUM  */
  YYSYMBOL_USERVAR = 8,                    /* USERVAR  */
  YYSYMBOL_ASSIGN = 9,                     /* ASSIGN  */
  YYSYMBOL_ANDOP = 10,                     /* ANDOP  */
  YYSYMBOL_IS = 11,                        /* IS  */
  YYSYMBOL_12_ = 12,                       /* '!'  */
  YYSYMBOL_COMPARISON = 13,                /* COMPARISON  */
  YYSYMBOL_14_ = 14,                       /* '|'  */
  YYSYMBOL_15_ = 15,                       /* '&'  */
  YYSYMBOL_SHIFT = 16,                     /* SHIFT  */
  YYSYMBOL_17_ = 17,                       /* '+'  */
  YYSYMBOL_18_ = 18,                       /* '-'  */
  YYSYMBOL_19_ = 19,                       /* '*'  */
  YYSYMBOL_20_ = 20,                       /* '/'  */
  YYSYMBOL_21_ = 21,                       /* '%'  */
  YYSYMBOL_22_ = 22,                       /* '^'  */
  YYSYMBOL_UMINUS = 23,                    /* UMINUS  */
  YYSYMBOL_ADD = 24,                       /* ADD  */
  YYSYMBOL_ALL = 25,                       /* ALL  */
  YYSYMBOL_ALTER = 26,                     /* ALTER  */
  YYSYMBOL_ANALYZE = 27,                   /* ANALYZE  */
  YYSYMBOL_AND = 28,                       /* AND  */
  YYSYMBOL_ANY = 29,                       /* ANY  */
  YYSYMBOL_AS = 30,                        /* AS  */
  YYSYMBOL_ASC = 31,                       /* ASC  */
  YYSYMBOL_AUTO_INCREMENT = 32,            /* AUTO_INCREMENT  */
  YYSYMBOL_BEFORE = 33,                    /* BEFORE  */
  YYSYMBOL_BETWEEN = 34,                   /* BETWEEN  */
  YYSYMBOL_BIGINT = 35,                    /* BIGINT  */
  YYSYMBOL_BINARY = 36,                    /* BINARY  */
  YYSYMBOL_BIT = 37,                       /* BIT  */
  YYSYMBOL_BLOB = 38,                      /* BLOB  */
  YYSYMBOL_BOTH = 39,                      /* BOTH  */
  YYSYMBOL_BY = 40,                        /* BY  */
  YYSYMBOL_CALL = 41,                      /* CALL  */
  YYSYMBOL_CASCADE = 42,                   /* CASCADE  */
  YYSYMBOL_CASE = 43,                      /* CASE  */
  YYSYMBOL_CHANGE = 44,                    /* CHANGE  */
  YYSYMBOL_CHAR = 45,                      /* CHAR  */
  YYSYMBOL_CHECK = 46,                     /* CHECK  */
  YYSYMBOL_COLLATE = 47,                   /* COLLATE  */
  YYSYMBOL_COLUMN = 48,                    /* COLUMN  */
  YYSYMBOL_COMMENT = 49,                   /* COMMENT  */
  YYSYMBOL_CONDITION = 50,                 /* CONDITION  */
  YYSYMBOL_CONSTRAINT = 51,                /* CONSTRAINT  */
  YYSYMBOL_CONTINUE = 52,                  /* CONTINUE  */
  YYSYMBOL_CONVERT = 53,                   /* CONVERT  */
  YYSYMBOL_CREATE = 54,                    /* CREATE  */
  YYSYMBOL_CROSS = 55,                     /* CROSS  */
  YYSYMBOL_CURRENT_DATE = 56,              /* CURRENT_DATE  */
  YYSYMBOL_CURRENT_TIME = 57,              /* CURRENT_TIME  */
  YYSYMBOL_CURRENT_TIMESTAMP = 58,         /* CURRENT_TIMESTAMP  */
  YYSYMBOL_CURRENT_USER = 59,              /* CURRENT_USER  */
  YYSYMBOL_CURSOR = 60,                    /* CURSOR  */
  YYSYMBOL_DATABASE = 61,                  /* DATABASE  */
  YYSYMBOL_DATABASES = 62,                 /* DATABASES  */
  YYSYMBOL_DATE = 63,                      /* DATE  */
  YYSYMBOL_DATETIME = 64,                  /* DATETIME  */
  YYSYMBOL_DAY_HOUR = 65,                  /* DAY_HOUR  */
  YYSYMBOL_DAY_MICROSECOND = 66,           /* DAY_MICROSECOND  */
  YYSYMBOL_DAY_MINUTE = 67,                /* DAY_MINUTE  */
  YYSYMBOL_DAY_SECOND = 68,                /* DAY_SECOND  */
  YYSYMBOL_DECIMAL = 69,                   /* DECIMAL  */
  YYSYMBOL_DECLARE = 70,                   /* DECLARE  */
  YYSYMBOL_DEFAULT = 71,                   /* DEFAULT  */
  YYSYMBOL_DELAYED = 72,                   /* DELAYED  */
  YYSYMBOL_DELETE = 73,                    /* DELETE  */
  YYSYMBOL_DESC = 74,                      /* DESC  */
  YYSYMBOL_DESCRIBE = 75,                  /* DESCRIBE  */
  YYSYMBOL_DETERMINISTIC = 76,             /* DETERMINISTIC  */
  YYSYMBOL_DISTINCT = 77,                  /* DISTINCT  */
  YYSYMBOL_DISTINCTROW = 78,               /* DISTINCTROW  */
  YYSYMBOL_DIV = 79,                       /* DIV  */
  YYSYMBOL_DOUBLE = 80,                    /* DOUBLE  */
  YYSYMBOL_DROP = 81,                      /* DROP  */
  YYSYMBOL_DUAL = 82,                      /* DUAL  */
  YYSYMBOL_EACH = 83,                      /* EACH  */
  YYSYMBOL_ELSE = 84,                      /* ELSE  */
  YYSYMBOL_ELSEIF = 85,                    /* ELSEIF  */
  YYSYMBOL_ENCLOSED = 86,                  /* ENCLOSED  */
  YYSYMBOL_END = 87,                       /* END  */
  YYSYMBOL_ENUM = 88,                      /* ENUM  */
  YYSYMBOL_ESCAPED = 89,                   /* ESCAPED  */
  YYSYMBOL_EXISTS = 90,                    /* EXISTS  */
  YYSYMBOL_EXIT = 91,                      /* EXIT  */
  YYSYMBOL_EXPLAIN = 92,                   /* EXPLAIN  */
  YYSYMBOL_FETCH = 93,                     /* FETCH  */
  YYSYMBOL_FLOAT = 94,                     /* FLOAT  */
  YYSYMBOL_FOR = 95,                       /* FOR  */
  YYSYMBOL_FORCE = 96,                     /* FORCE  */
  YYSYMBOL_FOREIGN = 97,                   /* FOREIGN  */
  YYSYMBOL_FROM = 98,                      /* FROM  */
  YYSYMBOL_FULLTEXT = 99,                  /* FULLTEXT  */
  YYSYMBOL_GRANT = 100,                    /* GRANT  */
  YYSYMBOL_GROUP = 101,                    /* GROUP  */
  YYSYMBOL_HAVING = 102,                   /* HAVING  */
  YYSYMBOL_HIGH_PRIORITY = 103,            /* HIGH_PRIORITY  */
  YYSYMBOL_HOUR_MICROSECOND = 104,         /* HOUR_MICROSECOND  */
  YYSYMBOL_HOUR_MINUTE = 105,              /* HOUR_MINUTE  */
  YYSYMBOL_HOUR_SECOND = 106,              /* HOUR_SECOND  */
  YYSYMBOL_IF = 107,                       /* IF  */
  YYSYMBOL_IGNORE = 108,                   /* IGNORE  */
  YYSYMBOL_IN = 109,                       /* IN  */
  YYSYMBOL_INDEX = 110,                    /* INDEX  */
  YYSYMBOL_INFILE = 111,                   /* INFILE  */
  YYSYMBOL_INNER = 112,                    /* INNER  */
  YYSYMBOL_INOUT = 113,                    /* INOUT  */
  YYSYMBOL_INSENSITIVE = 114,              /* INSENSITIVE  */
  YYSYMBOL_INSERT = 115,                   /* INSERT  */
  YYSYMBOL_INT = 116,                      /* INT  */
  YYSYMBOL_INTEGER = 117,                  /* INTEGER  */
  YYSYMBOL_INTERVAL = 118,                 /* INTERVAL  */
  YYSYMBOL_INTO = 119,                     /* INTO  */
  YYSYMBOL_ITERATE = 120,                  /* ITERATE  */
  YYSYMBOL_JOIN = 121,                     /* JOIN  */
  YYSYMBOL_KEY = 122,                      /* KEY  */
  YYSYMBOL_KEYS = 123,                     /* KEYS  */
  YYSYMBOL_KILL = 124,                     /* KILL  */
  YYSYMBOL_LEADING = 125,                  /* LEADING  */
  YYSYMBOL_LEAVE = 126,                    /* LEAVE  */
  YYSYMBOL_LEFT = 127,                     /* LEFT  */
  YYSYMBOL_LIKE = 128,                     /* LIKE  */
  YYSYMBOL_LIMIT = 129,                    /* LIMIT  */
  YYSYMBOL_LINES = 130,                    /* LINES  */
  YYSYMBOL_LOAD = 131,                     /* LOAD  */
  YYSYMBOL_LOCALTIME = 132,                /* LOCALTIME  */
  YYSYMBOL_LOCALTIMESTAMP = 133,           /* LOCALTIMESTAMP  */
  YYSYMBOL_LOCK = 134,                     /* LOCK  */
  YYSYMBOL_LONG = 135,                     /* LONG  */
  YYSYMBOL_LONGBLOB = 136,                 /* LONGBLOB  */
  YYSYMBOL_LONGTEXT = 137,                 /* LONGTEXT  */
  YYSYMBOL_LOOP = 138,                     /* LOOP  */
  YYSYMBOL_LOW_PRIORITY = 139,             /* LOW_PRIORITY  */
  YYSYMBOL_MATCH = 140,                    /* MATCH  */
  YYSYMBOL_MEDIUMBLOB = 141,               /* MEDIUMBLOB  */
  YYSYMBOL_MEDIUMINT = 142,                /* MEDIUMINT  */
  YYSYMBOL_MEDIUMTEXT = 143,               /* MEDIUMTEXT  */
  YYSYMBOL_MINUTE_MICROSECOND = 144,       /* MINUTE_MICROSECOND  */
  YYSYMBOL_MINUTE_SECOND = 145,            /* MINUTE_SECOND  */
  YYSYMBOL_MOD = 146,                      /* MOD  */
  YYSYMBOL_MODIFIES = 147,                 /* MODIFIES  */
  YYSYMBOL_NATURAL = 148,                  /* NATURAL  */
  YYSYMBOL_NOT = 149,                      /* NOT  */
  YYSYMBOL_NO_WRITE_TO_BINLOG = 150,       /* NO_WRITE_TO_BINLOG  */
  YYSYMBOL_NULLX = 151,                    /* NULLX  */
  YYSYMBOL_NUMBER = 152,                   /* NUMBER  */
  YYSYMBOL_ON = 153,                       /* ON  */
  YYSYMBOL_DUPLICATE = 154,                /* DUPLICATE  */
  YYSYMBOL_OPTIMIZE = 155,                 /* OPTIMIZE  */
  YYSYMBOL_OPTION = 156,                   /* OPTION  */
  YYSYMBOL_OPTIONALLY = 157,               /* OPTIONALLY  */
  YYSYMBOL_OR = 158,                       /* OR  */
  YYSYMBOL_ORDER = 159,                    /* ORDER  */
  YYSYMBOL_OUT = 160,                      /* OUT  */
  YYSYMBOL_OUTER = 161,                    /* OUTER  */
  YYSYMBOL_OUTFILE = 162,                  /* OUTFILE  */
  YYSYMBOL_PRECISION = 163,                /* PRECISION  */
  YYSYMBOL_PRIMARY = 164,                  /* PRIMARY  */
  YYSYMBOL_PROCEDURE = 165,                /* PROCEDURE  */
  YYSYMBOL_PURGE = 166,                    /* PURGE  */
  YYSYMBOL_QUICK = 167,                    /* QUICK  */
  YYSYMBOL_READ = 168,                     /* READ  */
  YYSYMBOL_READS = 169,                    /* READS  */
  YYSYMBOL_REAL = 170,                     /* REAL  */
  YYSYMBOL_REFERENCES = 171,               /* REFERENCES  */
  YYSYMBOL_REGEXP = 172,                   /* REGEXP  */
  YYSYMBOL_RELEASE = 173,                  /* RELEASE  */
  YYSYMBOL_RENAME = 174,                   /* RENAME  */
  YYSYMBOL_REPEAT = 175,                   /* REPEAT  */
  YYSYMBOL_REPLACE = 176,                  /* REPLACE  */
  YYSYMBOL_REQUIRE = 177,                  /* REQUIRE  */
  YYSYMBOL_RESTRICT = 178,                 /* RESTRICT  */
  YYSYMBOL_RETURN = 179,                   /* RETURN  */
  YYSYMBOL_REVOKE = 180,                   /* REVOKE  */
  YYSYMBOL_RIGHT = 181,                    /* RIGHT  */
  YYSYMBOL_ROLLUP = 182,                   /* ROLLUP  */
  YYSYMBOL_SCHEMA = 183,                   /* SCHEMA  */
  YYSYMBOL_SCHEMAS = 184,                  /* SCHEMAS  */
  YYSYMBOL_SECOND_MICROSECOND = 185,       /* SECOND_MICROSECOND  */
  YYSYMBOL_SELECT = 186,                   /* SELECT  */
  YYSYMBOL_SENSITIVE = 187,                /* SENSITIVE  */
  YYSYMBOL_SEPARATOR = 188,                /* SEPARATOR  */
  YYSYMBOL_SET = 189,                      /* SET  */
  YYSYMBOL_SHOW = 190,                     /* SHOW  */
  YYSYMBOL_SMALLINT = 191,                 /* SMALLINT  */
  YYSYMBOL_SOME = 192,                     /* SOME  */
  YYSYMBOL_SONAME = 193,                   /* SONAME  */
  YYSYMBOL_SPATIAL = 194,                  /* SPATIAL  */
  YYSYMBOL_SPECIFIC = 195,                 /* SPECIFIC  */
  YYSYMBOL_SQL = 196,                      /* SQL  */
  YYSYMBOL_SQLEXCEPTION = 197,             /* SQLEXCEPTION  */
  YYSYMBOL_SQLSTATE = 198,                 /* SQLSTATE  */
  YYSYMBOL_SQLWARNING = 199,               /* SQLWARNING  */
  YYSYMBOL_SQL_BIG_RESULT = 200,           /* SQL_BIG_RESULT  */
  YYSYMBOL_SQL_CALC_FOUND_ROWS = 201,      /* SQL_CALC_FOUND_ROWS  */
  YYSYMBOL_SQL_SMALL_RESULT = 202,         /* SQL_SMALL_RESULT  */
  YYSYMBOL_SSL = 203,                      /* SSL  */
  YYSYMBOL_STARTING = 204,                 /* STARTING  */
  YYSYMBOL_STRAIGHT_JOIN = 205,            /* STRAIGHT_JOIN  */
  YYSYMBOL_TABLE = 206,                    /* TABLE  */
  YYSYMBOL_TEMPORARY = 207,                /* TEMPORARY  */
  YYSYMBOL_TEXT = 208,                     /* TEXT  */
  YYSYMBOL_TERMINATED = 209,               /* TERMINATED  */
  YYSYMBOL_THEN = 210,                     /* THEN  */
  YYSYMBOL_TIME = 211,                     /* TIME  */
  YYSYMBOL_TIMESTAMP = 212,                /* TIMESTAMP  */
  YYSYMBOL_TINYBLOB = 213,                 /* TINYBLOB  */
  YYSYMBOL_TINYINT = 214,                  /* TINYINT  */
  YYSYMBOL_TINYTEXT = 215,                 /* TINYTEXT  */
  YYSYMBOL_TO = 216,                       /* TO  */
  YYSYMBOL_TRAILING = 217,                 /* TRAILING  */
  YYSYMBOL_TRIGGER = 218,                  /* TRIGGER  */
  YYSYMBOL_UNDO = 219,                     /* UNDO  */
  YYSYMBOL_UNION = 220,                    /* UNION  */
  YYSYMBOL_UNIQUE = 221,                   /* UNIQUE  */
  YYSYMBOL_UNLOCK = 222,                   /* UNLOCK  */
  YYSYMBOL_UNSIGNED = 223,                 /* UNSIGNED  */
  YYSYMBOL_UPDATE = 224,                   /* UPDATE  */
  YYSYMBOL_USAGE = 225,                    /* USAGE  */
  YYSYMBOL_USE = 226,                      /* USE  */
  YYSYMBOL_USING = 227,                    /* USING  */
  YYSYMBOL_UTC_DATE = 228,                 /* UTC_DATE  */
  YYSYMBOL_UTC_TIME = 229,                 /* UTC_TIME  */
  YYSYMBOL_UTC_TIMESTAMP = 230,            /* UTC_TIMESTAMP  */
  YYSYMBOL_VALUES = 231,                   /* VALUES  */
  YYSYMBOL_VARBINARY = 232,                /* VARBINARY  */
  YYSYMBOL_VARCHAR = 233,                  /* VARCHAR  */
  YYSYMBOL_VARYING = 234,                  /* VARYING  */
  YYSYMBOL_WHEN = 235,                     /* WHEN  */
  YYSYMBOL_WHERE = 236,                    /* WHERE  */
  YYSYMBOL_WHILE = 237,                    /* WHILE  */
  YYSYMBOL_WITH = 238,                     /* WITH  */
  YYSYMBOL_WRITE = 239,                    /* WRITE  */
  YYSYMBOL_XOR = 240,                      /* XOR  */
  YYSYMBOL_YEAR = 241,                     /* YEAR  */
  YYSYMBOL_YEAR_MONTH = 242,               /* YEAR_MONTH  */
  YYSYMBOL_ZEROFILL = 243,                 /* ZEROFILL  */
  YYSYMBOL_FSUBSTRING = 244,               /* FSUBSTRING  */
  YYSYMBOL_FTRIM = 245,                    /* FTRIM  */
  YYSYMBOL_FDATE_ADD = 246,                /* FDATE_ADD  */
  YYSYMBOL_FDATE_SUB = 247,                /* FDATE_SUB  */
  YYSYMBOL_FCOUNT = 248,                   /* FCOUNT  */
  YYSYMBOL_249_ = 249,                     /* ';'  */
  YYSYMBOL_250_ = 250,                     /* ','  */
  YYSYMBOL_251_ = 251,                     /* '.'  */
  YYSYMBOL_252_ = 252,                     /* '('  */
  YYSYMBOL_253_ = 253,                     /* ')'  */
  YYSYMBOL_YYACCEPT = 254,                 /* $accept  */
  YYSYMBOL_stmt_list = 255,                /* stmt_list  */
  YYSYMBOL_stmt = 256,                     /* stmt  */
  YYSYMBOL_select_stmt = 257,              /* select_stmt  */
  YYSYMBOL_opt_where = 258,                /* opt_where  */
  YYSYMBOL_opt_groupby = 259,              /* opt_groupby  */
  YYSYMBOL_groupby_list = 260,             /* groupby_list  */
  YYSYMBOL_opt_asc_desc = 261,             /* opt_asc_desc  */
  YYSYMBOL_opt_with_rollup = 262,          /* opt_with_rollup  */
  YYSYMBOL_opt_having = 263,               /* opt_having  */
  YYSYMBOL_opt_orderby = 264,              /* opt_orderby  */
  YYSYMBOL_opt_limit = 265,                /* opt_limit  */
  YYSYMBOL_opt_into_list = 266,            /* opt_into_list  */
  YYSYMBOL_column_list = 267,              /* column_list  */
  YYSYMBOL_select_opts = 268,              /* select_opts  */
  YYSYMBOL_select_expr_list = 269,         /* select_expr_list  */
  YYSYMBOL_select_expr = 270,              /* select_expr  */
  YYSYMBOL_table_references = 271,         /* table_references  */
  YYSYMBOL_table_reference = 272,          /* table_reference  */
  YYSYMBOL_table_factor = 273,             /* table_factor  */
  YYSYMBOL_opt_as = 274,                   /* opt_as  */
  YYSYMBOL_opt_as_alias = 275,             /* opt_as_alias  */
  YYSYMBOL_join_table = 276,               /* join_table  */
  YYSYMBOL_opt_inner_cross = 277,          /* opt_inner_cross  */
  YYSYMBOL_opt_outer = 278,                /* opt_outer  */
  YYSYMBOL_left_or_right = 279,            /* left_or_right  */
  YYSYMBOL_opt_left_or_right_outer = 280,  /* opt_left_or_right_outer  */
  YYSYMBOL_opt_join_condition = 281,       /* opt_join_condition  */
  YYSYMBOL_join_condition = 282,           /* join_condition  */
  YYSYMBOL_index_hint = 283,               /* index_hint  */
  YYSYMBOL_opt_for_join = 284,             /* opt_for_join  */
  YYSYMBOL_index_list = 285,               /* index_list  */
  YYSYMBOL_table_subquery = 286,           /* table_subquery  */
  YYSYMBOL_delete_stmt = 287,              /* delete_stmt  */
  YYSYMBOL_delete_opts = 288,              /* delete_opts  */
  YYSYMBOL_delete_list = 289,              /* delete_list  */
  YYSYMBOL_opt_dot_star = 290,             /* opt_dot_star  */
  YYSYMBOL_insert_stmt = 291,              /* insert_stmt  */
  YYSYMBOL_opt_ondupupdate = 292,          /* opt_ondupupdate  */
  YYSYMBOL_insert_opts = 293,              /* insert_opts  */
  YYSYMBOL_opt_into = 294,                 /* opt_into  */
  YYSYMBOL_opt_col_names = 295,            /* opt_col_names  */
  YYSYMBOL_insert_vals_list = 296,         /* insert_vals_list  */
  YYSYMBOL_insert_vals = 297,              /* insert_vals  */
  YYSYMBOL_insert_asgn_list = 298,         /* insert_asgn_list  */
  YYSYMBOL_replace_stmt = 299,             /* replace_stmt  */
  YYSYMBOL_update_stmt = 300,              /* update_stmt  */
  YYSYMBOL_update_opts = 301,              /* update_opts  */
  YYSYMBOL_update_asgn_list = 302,         /* update_asgn_list  */
  YYSYMBOL_create_database_stmt = 303,     /* create_database_stmt  */
  YYSYMBOL_opt_if_not_exists = 304,        /* opt_if_not_exists  */
  YYSYMBOL_create_table_stmt = 305,        /* create_table_stmt  */
  YYSYMBOL_create_col_list = 306,          /* create_col_list  */
  YYSYMBOL_create_definition = 307,        /* create_definition  */
  YYSYMBOL_308_1 = 308,                    /* $@1  */
  YYSYMBOL_column_atts = 309,              /* column_atts  */
  YYSYMBOL_opt_length = 310,               /* opt_length  */
  YYSYMBOL_opt_binary = 311,               /* opt_binary  */
  YYSYMBOL_opt_uz = 312,                   /* opt_uz  */
  YYSYMBOL_opt_csc = 313,                  /* opt_csc  */
  YYSYMBOL_data_type = 314,                /* data_type  */
  YYSYMBOL_enum_list = 315,                /* enum_list  */
  YYSYMBOL_create_select_statement = 316,  /* create_select_statement  */
  YYSYMBOL_opt_ignore_replace = 317,       /* opt_ignore_replace  */
  YYSYMBOL_opt_temporary = 318,            /* opt_temporary  */
  YYSYMBOL_set_stmt = 319,                 /* set_stmt  */
  YYSYMBOL_set_list = 320,                 /* set_list  */
  YYSYMBOL_set_expr = 321,                 /* set_expr  */
  YYSYMBOL_expr = 322,                     /* expr  */
  YYSYMBOL_val_list = 323,                 /* val_list  */
  YYSYMBOL_opt_val_list = 324,             /* opt_val_list  */
  YYSYMBOL_trim_ltb = 325,                 /* trim_ltb  */
  YYSYMBOL_interval_exp = 326,             /* interval_exp  */
  YYSYMBOL_case_list = 327                 /* case_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Default (constant) value used for initialization for null
   right-hand sides.  Unlike the standard yacc.c template, here we set
   the default value of $$ to a zeroed-out value.  Since the default
   value is undefined, this behavior is technically correct.  */
static YYSTYPE yyval_default;



#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif
#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YYFREE
# define YYFREE free
#endif
#ifndef YYMALLOC
# define YYMALLOC malloc
#endif
#ifndef YYREALLOC
# define YYREALLOC realloc
#endif

#ifdef __cplusplus
  typedef bool yybool;
# define yytrue true
# define yyfalse false
#else
  /* When we move to stdbool, get rid of the various casts to yybool.  */
  typedef signed char yybool;
# define yytrue 1
# define yyfalse 0
#endif

#ifndef YYSETJMP
# include <setjmp.h>
# define YYJMP_BUF jmp_buf
# define YYSETJMP(Env) setjmp (Env)
/* Pacify Clang and ICC.  */
# define YYLONGJMP(Env, Val)                    \
 do {                                           \
   longjmp (Env, Val);                          \
   YY_ASSERT (0);                               \
 } while (yyfalse)
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* The _Noreturn keyword of C11.  */
#ifndef _Noreturn
# if (defined __cplusplus \
      && ((201103 <= __cplusplus && !(__GNUC__ == 4 && __GNUC_MINOR__ == 7)) \
          || (defined _MSC_VER && 1900 <= _MSC_VER)))
#  define _Noreturn [[noreturn]]
# elif (!defined __cplusplus                     \
        && (201112 <= (defined __STDC_VERSION__ ? __STDC_VERSION__ : 0)  \
            || 4 < __GNUC__ + (7 <= __GNUC_MINOR__) \
            || (defined __apple_build_version__ \
                ? 6000000 <= __apple_build_version__ \
                : 3 < __clang_major__ + (5 <= __clang_minor__))))
   /* _Noreturn works as-is.  */
# elif 2 < __GNUC__ + (8 <= __GNUC_MINOR__) || 0x5110 <= __SUNPRO_C
#  define _Noreturn __attribute__ ((__noreturn__))
# elif 1200 <= (defined _MSC_VER ? _MSC_VER : 0)
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2329

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  254
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  301
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  626
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 11
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   494

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    12,     2,     2,     2,    21,    15,     2,
     252,   253,    19,    17,   250,    18,   251,    20,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   249,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    22,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    14,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    13,    16,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248
};

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   308,   308,   309,   314,   317,   319,   325,   326,   328,
     329,   333,   335,   339,   340,   341,   344,   345,   348,   348,
     350,   350,   353,   353,   354,   357,   358,   361,   362,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   376,   377,
     378,   381,   383,   384,   387,   388,   392,   393,   395,   396,
     399,   400,   403,   404,   405,   409,   411,   413,   415,   417,
     421,   422,   423,   426,   427,   430,   431,   434,   435,   436,
     439,   439,   442,   443,   447,   449,   451,   453,   456,   457,
     460,   461,   464,   469,   472,   477,   478,   479,   480,   483,
     488,   489,   493,   493,   495,   503,   506,   512,   513,   516,
     517,   518,   519,   520,   523,   523,   526,   527,   530,   531,
     534,   535,   536,   537,   540,   546,   552,   555,   558,   561,
     567,   570,   576,   582,   588,   591,   598,   599,   600,   604,
     607,   610,   613,   621,   625,   626,   629,   630,   634,   637,
     641,   646,   651,   655,   661,   666,   667,   670,   670,   673,
     674,   675,   676,   677,   680,   681,   682,   683,   684,   685,
     686,   687,   688,   689,   690,   691,   692,   695,   696,   697,
     700,   701,   704,   705,   706,   709,   710,   711,   715,   716,
     717,   718,   719,   720,   721,   722,   723,   724,   725,   726,
     727,   728,   729,   730,   731,   732,   733,   734,   735,   736,
     737,   738,   739,   740,   741,   742,   743,   744,   747,   748,
     751,   754,   755,   756,   759,   760,   765,   768,   770,   770,
     773,   775,   780,   781,   782,   783,   784,   785,   786,   789,
     790,   791,   792,   793,   794,   795,   796,   797,   798,   799,
     800,   801,   802,   803,   804,   805,   806,   807,   808,   809,
     810,   813,   814,   815,   816,   819,   823,   824,   827,   828,
     831,   832,   833,   834,   835,   836,   839,   843,   844,   846,
     847,   848,   849,   850,   853,   854,   855,   858,   859,   862,
     863,   864,   865,   866,   867,   868,   869,   870,   873,   874,
     875,   876,   879,   880,   883,   884,   887,   888,   891,   892,
     893,   896
};
#endif

#define YYPACT_NINF (-345)
#define YYTABLE_NINF (-265)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -50,   -34,  -345,  -345,  -345,  -345,    86,     2,   154,  -205,
    -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,   143,   143,
    -345,   -15,    19,   279,   279,   467,   277,   -51,  -345,   289,
       4,  -345,    40,  -345,   150,   307,   309,   143,    75,   346,
    -345,  -345,  -345,   -95,  -345,  -345,  -345,  -345,  -345,   350,
     359,  -200,  -345,  -345,  -345,  -345,   355,   764,   764,  -345,
    -345,   764,   510,  -345,  -345,  -345,  -345,  -345,   117,  -345,
     897,  -345,  -345,  -345,  -345,   122,   148,   155,   161,   163,
     -82,  -345,  1290,   764,   764,    86,     8,    10,    12,    -1,
    -107,    29,  -345,  -345,   376,  -345,   334,  -345,  -345,   422,
     415,  -345,   145,   -14,     4,   438,  -150,  -132,   448,   764,
     764,   709,  -345,  -345,   764,  1554,   -66,   273,   193,   709,
     764,   493,   764,   764,   568,     4,   764,  -345,   764,    43,
     175,   764,   764,   764,   764,   764,   764,   764,   764,   764,
     457,   764,   212,   764,   764,    44,   764,   764,   764,  -345,
    1968,  1968,  -345,   463,   -84,   229,  -115,   480,     4,  -345,
    -345,  -345,   -98,  -345,     4,   368,   329,  -345,   490,  -345,
      36,  -345,   764,   335,     4,   -41,    75,   492,   499,  -138,
     492,  -131,  -345,   981,  -345,   251,  1968,  1620,   -46,   764,
    -345,   764,   253,   273,  1023,   254,  -345,  -345,  -345,   255,
     764,  1190,  1219,   256,   907,   -41,  -345,  1338,  -345,    11,
    -345,   260,   268,   269,   273,   929,   204,   259,   298,    42,
      42,   497,   497,   497,  -345,  -345,  1700,   587,  2157,   497,
     275,   764,   764,  2020,  2157,  2052,   168,   408,   409,   411,
    -345,  -345,  -345,    13,   -35,    29,   329,   329,   413,   382,
       4,  -345,   416,  -345,  -345,  -345,   535,   267,  -345,   376,
    1968,   500,   410,   -41,  -345,  -345,   528,  -113,  -345,  -105,
     290,   390,  -113,   290,   390,   764,  -345,   764,   764,  -345,
    1725,  1766,  -345,   294,   764,  -345,  -345,  1805,   430,   430,
    -345,  -345,   451,  -345,  -345,   273,   273,   273,   301,   764,
     302,   303,   587,  2157,  2157,   -84,   464,   464,   464,   764,
     555,   557,   335,  -345,  -345,     4,   764,   -93,     4,   -17,
     -75,   310,   311,   439,    55,  -345,   561,   273,   764,   764,
    -345,  -345,   628,   423,   562,  -345,   566,  -345,   645,  -110,
    -345,  -345,  -110,  -345,  -345,  1968,  1871,  -345,   764,   227,
      56,   764,   764,   325,   326,   541,   482,   332,   336,   343,
    -345,   847,  -345,  -345,   344,   345,  -345,   461,   349,   351,
     354,  1968,   575,    15,   410,  -345,  1968,   764,   356,  -345,
    -345,   -57,   267,  -345,   357,   358,   499,   499,   360,   267,
     -88,  2015,  -345,   352,  1518,  1261,  -345,  1968,   485,   600,
    -345,  -345,    84,  1968,   362,  -345,  -345,  -345,  1968,   764,
    -345,   364,  1457,  -345,  -345,   764,   764,   335,  -345,  -345,
    -345,  -345,  -345,  -345,   612,   612,   612,   764,   764,   616,
    -345,  1968,   499,  -345,    92,   499,   499,    94,   118,   499,
    -345,  -345,   369,   369,   369,  -345,   369,  -345,  -345,   369,
     369,   370,   369,   369,   369,  -345,   584,  -345,   369,   584,
     369,   375,   369,   584,  -345,  -345,  -345,   369,   584,   377,
     385,  -345,  -345,   764,  -345,  -345,  -345,   764,   404,   781,
     841,  -345,   645,   946,  -345,  -345,  -345,  -345,  -345,  -345,
    -345,  -345,  -345,  -345,   -21,  1968,   410,  -345,   151,   164,
     176,  1968,  1968,   625,   180,   -52,   189,   190,  -345,  -345,
     197,   634,  -345,  -345,  -345,  -345,  -345,  -345,   637,  -345,
    -345,  -345,  -345,  -345,  -345,  -345,  -345,   637,  -345,  -345,
    -345,  -345,   642,   649,   -18,  1518,  1968,   492,  -345,  1968,
    -345,  1968,   203,  -345,   473,  -345,   537,   657,  -345,  -345,
    -345,   764,  -345,  -345,  -345,  -345,  -345,   208,  -189,   226,
    -189,  -189,  -345,   228,  -189,  -189,  -189,   226,  -189,   226,
    -189,   234,  -189,   226,  -189,   226,   412,   417,  -345,   658,
     405,  -345,   515,  -345,   539,   -76,  -345,   424,  -345,  -345,
     499,  -345,  -345,  1968,   668,  -345,  -345,  -345,   486,   672,
     674,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,
    -345,  -345,  -345,   499,   429,   427,   678,  -345,  -345,   226,
     226,   226,   238,  -345,  -345,  -345
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,   214,    88,    99,    99,    29,     0,    99,     0,     0,
       4,    83,    95,   120,   124,   133,   138,   216,   136,   136,
     215,     0,     0,   105,   105,     0,     0,   217,   218,     0,
       0,     1,     0,     2,     0,     0,     0,   136,    92,     0,
      87,    85,    86,     0,   101,   102,   103,   104,   100,     0,
       0,   222,   225,   226,   228,   227,   223,     0,     0,    40,
      30,     0,     0,   299,   300,   298,    31,    32,     0,    33,
       0,    36,    37,    35,    34,     0,     0,     0,     0,     0,
       5,    38,    54,     0,     0,     0,   103,   100,    54,     0,
       0,    42,    44,    45,    51,     3,     0,   134,   135,     0,
       0,    90,     7,     0,     0,     0,   106,   106,     0,   258,
       0,   249,   235,   301,     0,     0,     0,     0,     0,   248,
       0,     0,     0,     0,     0,     0,     0,    53,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    41,
     221,   220,   219,     0,    77,     0,     0,     0,     0,    62,
      61,    65,    69,    66,     0,     0,    63,    50,     0,   137,
     211,    93,     0,    20,     0,     7,    92,     0,     0,     0,
       0,     0,   224,   256,   259,     0,   250,     0,     0,     0,
     290,     0,     0,     0,   256,     0,   276,   274,   275,     0,
       0,     0,     0,     0,     0,     7,    39,   236,   253,     0,
     251,     0,     0,     0,     0,   239,   244,   245,   247,   229,
     230,   231,   232,   233,   246,    52,     0,     0,   294,   234,
       0,     0,     0,   237,   296,   238,    54,     0,     0,     0,
      46,    82,    49,     0,     7,    43,    63,    63,     0,    56,
       0,    64,     0,    48,   212,   213,     0,   147,   142,    51,
       8,     0,    22,     7,    89,    91,     0,    97,    27,     0,
       0,    97,    97,     0,    97,     0,   266,     0,     0,   288,
       0,     0,   264,     0,     0,   269,   272,     0,     0,     0,
     267,   268,     9,   254,   252,     0,     0,     0,     0,     0,
       0,     0,     0,   295,   297,    77,    79,    79,    79,     0,
       0,     0,    20,    67,    68,     0,     0,    71,     0,   211,
       0,     0,     0,     0,     0,   145,     0,     0,     0,     0,
      84,    94,     0,     0,     0,   114,     0,   107,     0,    97,
     115,   122,    97,   123,   257,   292,     0,   291,     0,   264,
       0,     0,     0,     0,     0,     0,    18,     0,     0,     0,
     240,   255,   262,   260,     0,     0,    47,     0,     0,     0,
       0,   129,     0,     0,    22,    59,    57,     0,     0,    55,
      70,     0,   147,   144,     0,     0,     0,     0,     0,   147,
     211,     0,   210,    21,    13,    23,   117,   116,     0,     0,
      28,   111,     0,   110,     0,    96,   121,   289,   293,     0,
     270,     0,     0,   277,   278,     0,     0,    20,   243,   241,
     242,   263,   261,    78,     0,     0,     0,     0,     0,     0,
     125,    72,     0,    58,     0,     0,     0,     0,     0,     0,
     146,   141,   167,   167,   167,   199,   167,   189,   192,   167,
     167,     0,   167,   167,   167,   201,   170,   200,   167,   170,
     167,     0,   167,   170,   190,   191,   198,   167,   170,     0,
       0,   193,   154,     0,    14,    15,    11,     0,     0,     0,
       0,   108,     0,     0,   273,   279,   280,   281,   282,   285,
     286,   287,   284,   283,    16,    19,    22,    80,     0,     0,
       0,   130,   131,     0,     0,   211,     0,     0,   151,   150,
       0,     0,   172,   196,   178,   175,   172,   172,     0,   172,
     172,   172,   171,   175,   172,   175,   172,     0,   172,   175,
     172,   175,     0,     0,   148,    13,    24,     0,   119,   118,
     113,   112,     0,   271,     0,    10,    25,     0,    76,    75,
      74,     0,    73,   143,   152,   153,   149,     0,   184,   194,
     188,   186,   208,     0,   187,   182,   183,   205,   181,   204,
     185,     0,   180,   203,   179,   202,     0,     0,   161,     0,
       0,   165,     0,   156,     0,     0,    12,    98,   109,    17,
       0,     6,    81,   132,     0,   168,   173,   174,     0,     0,
       0,   175,   175,   197,   175,   166,   157,   158,   160,   159,
     155,   164,   163,     0,    26,     0,     0,   177,   209,   206,
     207,   195,     0,   169,   176,   162
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -345,  -345,   675,   869,    97,  -345,   272,   156,  -345,  -345,
    -287,  -344,  -345,  -307,  -345,  -345,   563,   196,   532,  -158,
     433,   -69,  -345,  -345,  -160,  -345,  -345,  -345,   312,   389,
     -10,   -32,  -345,  -345,  -345,   656,   520,  -345,    -4,   442,
     673,   591,   431,   218,  -179,  -345,  -345,  -345,  -345,  -345,
      31,  -345,   323,   317,  -345,  -345,   662,   -80,   453,  -166,
    -345,   181,  -309,  -345,  -345,  -345,  -345,   622,   -25,  -112,
    -345,  -345,   420,   604
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,     9,    10,   173,   356,   393,   476,   545,   417,
     262,   330,   591,   269,    25,    80,    81,    90,    91,    92,
     168,   149,    93,   165,   252,   166,   248,   379,   380,   240,
     368,   498,    94,    11,    22,    43,   101,    12,   335,    23,
      49,   179,   339,   402,   267,    13,    14,    30,   244,    15,
      35,    16,   324,   325,   326,   534,   512,   523,   558,   559,
     472,   563,   258,   259,    21,    17,    27,    28,   183,   184,
     185,   200,   353,   116
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      82,   272,    88,   104,     1,  -126,   249,    88,   195,   199,
     383,  -128,   237,  -127,   578,   127,   125,   293,   189,   154,
     254,   190,    38,     2,   238,   374,   309,    18,   428,   246,
     430,   579,   111,   112,   596,   384,   113,   115,   278,   177,
     333,   279,   140,   333,    33,   119,   612,   385,     5,   208,
      36,   108,   109,   580,   597,     5,   254,   180,   150,   151,
     377,   136,   137,   138,   139,     3,   128,   129,    99,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   437,
     438,   441,   157,   247,   159,   186,   313,   314,   255,   187,
     141,   254,   317,   270,    26,   194,   377,   201,   202,   204,
     273,    82,   178,   207,   581,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   301,   226,    39,   228,   229,
     178,   233,   234,   235,   255,   504,     4,    40,   506,   507,
     496,   582,   510,   583,   378,   158,     5,   334,   242,     6,
     404,   160,   239,   158,   254,   336,   584,   260,   337,    19,
     -60,   409,   546,   230,    31,   105,   161,   375,    41,   255,
     381,  -139,   294,   344,   280,   142,   281,   305,   126,   191,
     378,   127,   231,    20,     7,   287,   613,   162,    51,    52,
      53,    54,    55,    56,   143,     5,    42,    57,   144,   191,
     365,    37,   209,    58,   210,   172,   553,  -140,   140,    85,
     211,   172,   144,   585,   212,   145,   303,   304,     1,   158,
     163,    61,   255,   174,   146,   311,   232,   544,    62,   132,
     133,   134,   135,   136,   137,   138,   139,     2,   147,   473,
    -264,    63,    64,    65,   164,   382,   105,  -264,  -264,   411,
    -264,  -264,  -264,  -264,  -264,  -264,  -264,  -264,  -264,  -264,
      34,    89,   345,   346,  -126,  -264,    89,  -264,  -264,   350,
    -128,  -264,  -127,   153,   310,    68,   429,   340,   341,     3,
     343,   598,   264,   599,   361,   133,   134,   135,   136,   137,
     138,   139,  -264,   614,   371,   156,    83,   256,   257,    95,
      84,   376,  -264,  -264,  -264,  -264,   148,   369,   370,    96,
     175,  -264,   292,   394,   395,   389,   622,   397,   390,   410,
      97,  -264,    98,   403,  -264,   134,   135,   136,   137,   138,
     139,   205,  -264,   408,    70,  -264,   100,   412,  -264,  -264,
       4,  -264,  -264,  -264,   480,   405,  -264,   481,   406,  -264,
       5,   312,   389,     6,   336,   505,  -264,   508,  -264,   102,
     144,    44,   431,   106,  -264,  -264,  -264,   567,   587,   569,
     331,    44,   107,   573,   110,   575,   320,   213,   336,   117,
     263,   509,   -92,  -264,   120,  -264,  -264,   321,     7,   525,
    -264,   172,    45,   529,   483,  -264,  -264,    46,   531,   322,
     394,   495,    45,   499,   500,   -92,   100,    86,    47,  -264,
     121,   547,   501,   502,   548,   144,   167,   122,  -264,   606,
     607,   608,   609,   123,   547,   124,  -264,   549,    48,    75,
      76,    77,    78,    79,   169,   170,   547,   214,    87,   550,
     336,   323,  -264,   552,   171,   619,   620,  -264,   621,   336,
     336,   176,   554,   555,   144,   193,    24,   336,   535,    29,
     556,   182,   536,   480,   539,   541,   588,   403,   594,     5,
     225,   595,  -264,  -264,   227,  -264,   236,  -264,  -264,  -264,
      51,    52,    53,    54,    55,    56,  -264,  -264,   600,    57,
    -264,   601,   241,   243,   600,    58,    59,   602,   336,   250,
     251,   625,    60,   253,   261,   266,    51,    52,    53,    54,
      55,    56,   268,    61,   276,    57,   282,   285,   286,   290,
      62,    58,   295,    51,    52,    53,    54,    55,    56,   139,
     296,   297,    57,    63,    64,    65,   593,   302,    58,    61,
     306,   307,   196,   308,   315,   316,    62,   318,   319,   329,
     328,   332,   338,   333,    66,    67,    61,   349,   352,    63,
      64,    65,   355,    62,   360,   362,   363,    68,   372,   367,
     373,   388,   386,   387,   391,   399,    63,    64,    65,   400,
      69,    51,    52,    53,    54,    55,    56,   398,   413,   414,
      57,   415,   423,    68,   416,   418,    58,   203,   427,   419,
      51,    52,    53,    54,    55,    56,   420,   421,   422,    57,
      68,   424,   473,   425,    61,    58,   426,   478,   432,   435,
     436,    62,   439,   479,   482,   497,    70,   484,   197,   503,
     522,   511,   518,    61,    63,    64,    65,   527,   537,   532,
      62,    51,    52,    53,    54,    55,    56,   533,   551,   557,
      57,   562,    70,    63,    64,    65,    58,   576,    51,    52,
      53,    54,    55,    56,   577,   589,   590,    57,    68,    70,
     592,   611,   605,    58,    61,   603,   610,    71,    72,    73,
     604,    62,    74,   615,   334,   616,   617,    68,   618,   336,
     623,    61,   624,    32,    63,    64,    65,   494,    62,   206,
     245,   586,   327,   433,   366,   103,   265,    50,   181,   396,
     542,    63,    64,    65,   342,   434,   440,   152,   571,   354,
     198,    75,    76,    77,    78,    79,   401,    70,    68,   188,
       0,     0,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,     0,     0,     0,    68,    70,    75,    76,    77,
      78,    79,     0,   141,     0,   114,     0,     0,     0,     0,
       0,     0,     0,     0,    75,    76,    77,    78,    79,     0,
       0,     0,     0,     0,     0,     0,     0,    51,    52,    53,
      54,    55,    56,     5,     0,     0,    57,    70,     0,     0,
       0,     0,    58,     0,    51,    52,    53,    54,    55,    56,
       0,     0,     0,    57,    70,     0,     0,     0,     0,    58,
      61,     0,     0,     0,     0,     0,     0,    62,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    61,     0,     0,
      63,    64,    65,     0,    62,     0,     0,     0,     0,     0,
       0,    75,    76,    77,    78,    79,     0,    63,    64,    65,
       0,     0,     0,     0,    51,    52,    53,    54,    55,    56,
       0,     0,   538,    57,    68,   144,     0,     0,     0,    58,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
       0,    68,    75,    76,    77,    78,    79,    61,     0,     0,
       0,     0,     0,     0,    62,     0,     0,     0,     0,    75,
      76,    77,    78,    79,     0,     0,     0,    63,    64,    65,
      51,    52,    53,    54,    55,    56,     0,     0,     0,    57,
       0,     0,   540,    70,     0,    58,     0,   128,   129,     0,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
      70,    68,     0,    61,     0,     0,     0,     0,     0,     0,
      62,   141,     0,   131,   132,   133,   134,   135,   136,   137,
     138,   139,     0,    63,    64,    65,   128,   129,   155,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   560,
     561,     0,   564,   565,   566,     0,     0,   568,     0,   570,
     141,   572,     0,   574,     0,     0,   192,   118,     0,     0,
      70,   128,   129,   144,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,     0,     0,     0,     0,    75,    76,
      77,    78,    79,     0,     0,   141,   142,     0,     0,     0,
       0,     0,     0,     0,     0,    75,    76,    77,    78,    79,
       0,     0,     0,   128,   129,   143,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,    70,     0,   271,     0,
     274,     0,     0,   144,     0,   142,   145,   141,     0,     0,
       0,     0,   283,     0,     0,   146,     0,     0,     0,     0,
       0,     0,     0,     0,   143,   144,     0,     0,     0,   147,
       0,     0,     0,   298,     0,    75,    76,    77,    78,    79,
     142,     0,   144,     0,     0,   145,   300,     0,     0,     0,
       0,     0,     0,     0,   146,   513,   514,     0,   515,   143,
       0,   516,   517,     0,   519,   520,   521,     0,   147,     0,
     524,   284,   526,     0,   528,     0,     0,   144,     0,   530,
     145,     0,   142,     0,     0,     0,     0,     0,     0,   146,
       0,    75,    76,    77,    78,    79,     0,   148,     0,     0,
       0,   143,     0,   147,     0,     0,     0,     0,     0,     0,
     291,     0,     0,     0,   357,   358,   359,     0,     0,   144,
       0,   364,   145,     0,     0,     0,     0,     0,     0,     0,
       0,   146,     0,     0,     0,     0,   148,     0,     0,     0,
       0,     0,     0,     0,     0,   147,   392,     0,     0,   543,
     128,   129,     0,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,     0,     0,     0,     0,     0,     0,     0,
       0,   148,     0,     0,   141,     0,     0,     0,     0,   128,
     129,   275,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   141,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   148,     0,     0,     0,     0,     0,     0,
       0,   128,   129,   275,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   127,     0,   141,     0,     0,     0,   142,
     128,   129,     0,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,     0,     0,     0,     0,     0,   143,     0,
     140,     0,     0,     0,   141,     0,     0,     0,   142,     0,
       0,     0,     0,     0,     0,     0,   144,     0,     0,   145,
       0,     0,     0,     0,     0,     0,     0,   143,   146,   129,
       0,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,     0,   147,     0,     0,   144,     0,     0,   145,     0,
     142,     0,   141,     0,     0,     0,     0,   146,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   143,
       0,   147,     0,     0,     0,     0,     0,     0,     0,   142,
       0,     0,     0,     0,     0,     0,     0,   144,     0,     0,
     145,     0,     0,     0,     0,     0,     0,     0,   143,   146,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     148,     0,     0,   147,     0,     0,   144,     0,     0,   145,
     288,     0,     0,     0,     0,     0,     0,   142,   146,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   148,
       0,     0,   147,     0,     0,     0,   143,   128,   129,   289,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
       0,     0,     0,     0,   144,     0,     0,   145,     0,     0,
       0,   141,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   148,     0,     0,     0,     0,     0,     0,     0,     0,
     147,   477,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   485,   486,   487,   488,     0,     0,   128,   129,
     148,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,     0,     0,     0,     0,     0,     0,     0,     0,   474,
       0,     0,   141,     0,     0,     0,     0,     0,     0,     0,
       0,   489,   490,   491,   128,   129,   142,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,     0,     0,     0,
       0,     0,     0,     0,     0,   143,     0,     0,   141,     0,
       0,     0,   475,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   144,     0,     0,   145,     0,     0,     0,
       0,     0,     0,     0,     0,   146,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   142,     0,   147,
     128,   129,     0,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,     0,     0,     0,   143,     0,     0,     0,
       0,     0,     0,     0,   141,     0,     0,     0,     0,     0,
       0,     0,     0,   142,   144,     0,     0,   145,     0,     0,
       0,     0,     0,     0,     0,     0,   146,     0,     0,     0,
       0,     0,   143,     0,     0,     0,     0,     0,     0,     0,
     147,     0,     0,     0,     0,     0,     0,   148,   492,   493,
     144,     0,     0,   145,     0,     0,     0,     0,     0,     0,
     128,   129,   146,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,     0,     0,     0,   147,     0,   299,   142,
       0,     0,     0,     0,   141,   128,   129,     0,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   143,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   148,   141,
       0,     0,     0,     0,     0,     0,   144,     0,     0,   145,
       0,     0,     0,     0,     0,     0,   128,   129,   146,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   114,
       0,     0,   147,     0,   148,     0,     0,     0,     0,     0,
     141,     0,     0,     0,     0,     0,     0,     0,     0,   142,
       0,     0,   347,     0,     0,   128,   129,     0,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   143,     0,
     277,     0,     0,     0,   142,     0,     0,     0,     0,   141,
       0,     0,     0,     0,     0,     0,   144,     0,     0,   145,
       0,     0,     0,   143,     0,     0,     0,     0,   146,     0,
     148,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   144,   147,     0,   145,   142,     0,     0,     0,     0,
       0,   128,   129,   146,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   143,     0,     0,   147,     0,     0,
       0,     0,     0,   351,     0,   141,     0,     0,     0,     0,
       0,     0,   144,     0,   142,   145,     0,     0,     0,     0,
       0,     0,     0,     0,   146,     0,     0,     0,     0,     0,
       0,     0,     0,   143,     0,     0,     0,     0,   147,     0,
     148,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   144,     0,     0,   145,     0,     0,     0,   407,     0,
       0,     0,     0,   146,     0,   148,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   348,   147,   128,   129,
     142,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,     0,     0,     0,     0,     0,     0,     0,     0,   143,
       0,     0,   141,     0,     0,     0,   148,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   144,     0,     0,
     145,     0,     0,     0,     0,     0,     0,     0,     0,   146,
     128,   129,     0,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   147,     0,   148,     0,     0,     0,     0,
     442,   443,   444,   445,   141,     0,     0,     0,     0,     0,
     446,     0,   128,   129,     0,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,     0,     0,   142,   447,   448,
       0,     0,     0,     0,   449,     0,   141,     0,     0,     0,
       0,     0,     0,     0,     0,   450,   143,     0,     0,     0,
       0,     0,     0,   451,     0,     0,     0,     0,     0,   452,
       0,   148,     0,     0,   144,     0,     0,   145,     0,     0,
       0,     0,     0,     0,     0,     0,   146,     0,     0,   142,
       0,   453,   454,     0,     0,     0,     0,     0,     0,     0,
     147,     0,     0,     0,     0,     0,     0,     0,   143,     0,
       0,   455,   456,     0,     0,     0,   457,   458,   459,     0,
       0,   142,     0,     0,     0,     0,   144,     0,  -265,   145,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     143,     0,     0,     0,     0,   460,     0,     0,     0,     0,
       0,   141,   147,     0,     0,     0,     0,     0,   144,     0,
       0,   145,     0,     0,   461,     0,   462,     0,   148,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   463,   147,     0,   464,   465,   466,   467,
     468,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   469,   470,     0,
       0,     0,     0,     0,     0,     0,   471,     0,     0,     0,
     148,     0,     0,     0,     0,     0,  -265,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -265,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   144,     0,     0,   145,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -265
};

static const yytype_int16 yycheck[] =
{
      25,   180,     3,    98,    54,     3,   164,     3,   120,   121,
     319,     3,    96,     3,    32,     3,    98,     6,    84,    88,
     108,    87,     3,    73,   108,   312,    13,    61,    13,   127,
     374,    49,    57,    58,   223,   110,    61,    62,    84,   189,
     153,    87,    30,   153,   249,    70,   122,   122,   186,     6,
      19,   251,   252,    71,   243,   186,   108,   189,    83,    84,
     153,    19,    20,    21,    22,   115,    10,    11,    37,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,   386,
     387,   390,   189,   181,    55,   110,   246,   247,   176,   114,
      34,   108,   250,   231,     8,   120,   153,   122,   123,   124,
     231,   126,   252,   128,   122,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   227,   141,    98,   143,   144,
     252,   146,   147,   148,   176,   432,   176,   108,   435,   436,
     417,   149,   439,   151,   227,   250,   186,   250,   253,   189,
     250,   112,   226,   250,   108,   250,   164,   172,   253,   183,
     121,    95,   496,   109,     0,   250,   127,   315,   139,   176,
     318,   249,   151,   275,   189,   109,   191,   236,   250,   235,
     227,     3,   128,   207,   224,   200,   252,   148,     3,     4,
       5,     6,     7,     8,   128,   186,   167,    12,   146,   235,
     302,   206,   149,    18,   151,   236,   505,   249,    30,   250,
      25,   236,   146,   221,    29,   149,   231,   232,    54,   250,
     181,    36,   176,   227,   158,   250,   172,   238,    43,    15,
      16,    17,    18,    19,    20,    21,    22,    73,   172,   250,
       3,    56,    57,    58,   205,   252,   250,    10,    11,   351,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
     107,   252,   277,   278,   252,    28,   252,    30,    31,   284,
     252,    34,   252,   251,   251,    90,   251,   271,   272,   115,
     274,    45,   175,    47,   299,    16,    17,    18,    19,    20,
      21,    22,    55,   590,   309,    89,     9,   251,   252,   249,
      13,   316,    65,    66,    67,    68,   240,   307,   308,   149,
     104,    74,   205,   328,   329,   250,   613,   332,   253,   253,
       3,    84,     3,   338,    87,    17,    18,    19,    20,    21,
      22,   125,    95,   348,   149,    98,   251,   352,   101,   102,
     176,   104,   105,   106,   250,   339,   109,   253,   342,   112,
     186,   244,   250,   189,   250,   253,   119,   253,   121,     3,
     146,    72,   377,     3,   127,   128,   129,   523,   537,   525,
     263,    72,     3,   529,     9,   531,    99,   192,   250,   252,
     174,   253,   227,   146,   252,   148,   149,   110,   224,   459,
     153,   236,   103,   463,   409,   158,   159,   108,   468,   122,
     415,   416,   103,   425,   426,   250,   251,   108,   119,   172,
     252,   250,   427,   428,   253,   146,    30,   252,   181,     4,
       5,     6,     7,   252,   250,   252,   189,   253,   139,   244,
     245,   246,   247,   248,    90,     3,   250,   252,   139,   253,
     250,   164,   205,   253,    19,   601,   602,   210,   604,   250,
     250,     3,   253,   253,   146,   252,     4,   250,   473,     7,
     253,     3,   477,   250,   479,   480,   253,   482,   250,   186,
       3,   253,   235,   236,   252,   238,     3,   240,   241,   242,
       3,     4,     5,     6,     7,     8,   249,   250,   250,    12,
     253,   253,   253,     3,   250,    18,    19,   253,   250,   121,
     161,   253,    25,     3,   159,     3,     3,     4,     5,     6,
       7,     8,     3,    36,   253,    12,   253,   253,   253,   253,
      43,    18,   252,     3,     4,     5,     6,     7,     8,    22,
     252,   252,    12,    56,    57,    58,   551,   252,    18,    36,
     122,   122,    39,   122,   121,   153,    43,   121,     3,   129,
      40,    13,   252,   153,    77,    78,    36,   253,   118,    56,
      57,    58,   101,    43,   253,   253,   253,    90,     3,    95,
       3,   122,   252,   252,     3,     3,    56,    57,    58,     3,
     103,     3,     4,     5,     6,     7,     8,   154,   253,   253,
      12,    40,   121,    90,   102,   253,    18,    19,    13,   253,
       3,     4,     5,     6,     7,     8,   253,   253,   253,    12,
      90,   252,   250,   252,    36,    18,   252,   122,   252,   252,
     252,    43,   252,    13,   252,     3,   149,   253,   125,     3,
      36,   252,   252,    36,    56,    57,    58,   252,   224,   252,
      43,     3,     4,     5,     6,     7,     8,   252,    13,     5,
      12,     4,   149,    56,    57,    58,    18,     5,     3,     4,
       5,     6,     7,     8,     5,   182,   119,    12,    90,   149,
       3,   122,     4,    18,    36,   253,   151,   200,   201,   202,
     253,    43,   205,     5,   250,   189,     4,    90,     4,   250,
     253,    36,     4,     8,    56,    57,    58,   415,    43,   126,
     158,   535,   259,   381,   305,    39,   176,    24,   107,    71,
     482,    56,    57,    58,   273,   382,   389,    85,   527,   289,
     217,   244,   245,   246,   247,   248,    71,   149,    90,   115,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    90,   149,   244,   245,   246,
     247,   248,    -1,    34,    -1,   235,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   244,   245,   246,   247,   248,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,   186,    -1,    -1,    12,   149,    -1,    -1,
      -1,    -1,    18,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    12,   149,    -1,    -1,    -1,    -1,    18,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    -1,   244,   245,   246,   247,   248,    36,    -1,    -1,
      56,    57,    58,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,   244,   245,   246,   247,   248,    -1,    56,    57,    58,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    71,    12,    90,   146,    -1,    -1,    -1,    18,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    90,   244,   245,   246,   247,   248,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,   244,
     245,   246,   247,   248,    -1,    -1,    -1,    56,    57,    58,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    12,
      -1,    -1,    71,   149,    -1,    18,    -1,    10,    11,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
     149,    90,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    34,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    56,    57,    58,    10,    11,    89,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,   516,
     517,    -1,   519,   520,   521,    -1,    -1,   524,    -1,   526,
      34,   528,    -1,   530,    -1,    -1,   117,    90,    -1,    -1,
     149,    10,    11,   146,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,   244,   245,
     246,   247,   248,    -1,    -1,    34,   109,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   244,   245,   246,   247,   248,
      -1,    -1,    -1,    10,    11,   128,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,   149,    -1,   179,    -1,
     181,    -1,    -1,   146,    -1,   109,   149,    34,    -1,    -1,
      -1,    -1,   193,    -1,    -1,   158,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   128,   146,    -1,    -1,    -1,   172,
      -1,    -1,    -1,   214,    -1,   244,   245,   246,   247,   248,
     109,    -1,   146,    -1,    -1,   149,   227,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   158,   443,   444,    -1,   446,   128,
      -1,   449,   450,    -1,   452,   453,   454,    -1,   172,    -1,
     458,    98,   460,    -1,   462,    -1,    -1,   146,    -1,   467,
     149,    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,   158,
      -1,   244,   245,   246,   247,   248,    -1,   240,    -1,    -1,
      -1,   128,    -1,   172,    -1,    -1,    -1,    -1,    -1,    -1,
     253,    -1,    -1,    -1,   295,   296,   297,    -1,    -1,   146,
      -1,   302,   149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   158,    -1,    -1,    -1,    -1,   240,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   172,   327,    -1,    -1,   253,
      10,    11,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   240,    -1,    -1,    34,    -1,    -1,    -1,    -1,    10,
      11,   250,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   240,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,   250,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    34,    -1,    -1,    -1,   109,
      10,    11,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,   128,    -1,
      30,    -1,    -1,    -1,    34,    -1,    -1,    -1,   109,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   146,    -1,    -1,   149,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   128,   158,    11,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,   172,    -1,    -1,   146,    -1,    -1,   149,    -1,
     109,    -1,    34,    -1,    -1,    -1,    -1,   158,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   128,
      -1,   172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   146,    -1,    -1,
     149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   128,   158,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     240,    -1,    -1,   172,    -1,    -1,   146,    -1,    -1,   149,
     250,    -1,    -1,    -1,    -1,    -1,    -1,   109,   158,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   240,
      -1,    -1,   172,    -1,    -1,    -1,   128,    10,    11,   250,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,   146,    -1,    -1,   149,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   240,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     172,   250,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    66,    67,    68,    -1,    -1,    10,    11,
     240,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   104,   105,   106,    10,    11,   109,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   128,    -1,    -1,    34,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   146,    -1,    -1,   149,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,   172,
      10,    11,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,   128,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   109,   146,    -1,    -1,   149,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,    -1,
      -1,    -1,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     172,    -1,    -1,    -1,    -1,    -1,    -1,   240,   241,   242,
     146,    -1,    -1,   149,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,   158,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,   172,    -1,    28,   109,
      -1,    -1,    -1,    -1,    34,    10,    11,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,   128,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   240,    34,
      -1,    -1,    -1,    -1,    -1,    -1,   146,    -1,    -1,   149,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,   158,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,   235,
      -1,    -1,   172,    -1,   240,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,
      -1,    -1,    87,    -1,    -1,    10,    11,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,   128,    -1,
     210,    -1,    -1,    -1,   109,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,   146,    -1,    -1,   149,
      -1,    -1,    -1,   128,    -1,    -1,    -1,    -1,   158,    -1,
     240,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   146,   172,    -1,   149,   109,    -1,    -1,    -1,    -1,
      -1,    10,    11,   158,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,   128,    -1,    -1,   172,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,   146,    -1,   109,   149,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   158,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   128,    -1,    -1,    -1,    -1,   172,    -1,
     240,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   146,    -1,    -1,   149,    -1,    -1,    -1,    87,    -1,
      -1,    -1,    -1,   158,    -1,   240,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   210,   172,    10,    11,
     109,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   128,
      -1,    -1,    34,    -1,    -1,    -1,   240,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   146,    -1,    -1,
     149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,
      10,    11,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,   172,    -1,   240,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    34,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    10,    11,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,   109,    63,    64,
      -1,    -1,    -1,    -1,    69,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,   128,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,    94,
      -1,   240,    -1,    -1,   146,    -1,    -1,   149,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,   109,
      -1,   116,   117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   128,    -1,
      -1,   136,   137,    -1,    -1,    -1,   141,   142,   143,    -1,
      -1,   109,    -1,    -1,    -1,    -1,   146,    -1,    11,   149,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
     128,    -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,    -1,
      -1,    34,   172,    -1,    -1,    -1,    -1,    -1,   146,    -1,
      -1,   149,    -1,    -1,   189,    -1,   191,    -1,   240,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   208,   172,    -1,   211,   212,   213,   214,
     215,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   232,   233,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   241,    -1,    -1,    -1,
     240,    -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   128,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   146,    -1,    -1,   149,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   172
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,    54,    73,   115,   176,   186,   189,   224,   255,   256,
     257,   287,   291,   299,   300,   303,   305,   319,    61,   183,
     207,   318,   288,   293,   293,   268,     8,   320,   321,   293,
     301,     0,   256,   249,   107,   304,   304,   206,     3,    98,
     108,   139,   167,   289,    72,   103,   108,   119,   139,   294,
     294,     3,     4,     5,     6,     7,     8,    12,    18,    19,
      25,    36,    43,    56,    57,    58,    77,    78,    90,   103,
     149,   200,   201,   202,   205,   244,   245,   246,   247,   248,
     269,   270,   322,     9,    13,   250,   108,   139,     3,   252,
     271,   272,   273,   276,   286,   249,   149,     3,     3,   304,
     251,   290,     3,   289,    98,   250,     3,     3,   251,   252,
       9,   322,   322,   322,   235,   322,   327,   252,    90,   322,
     252,   252,   252,   252,   252,    98,   250,     3,    10,    11,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      30,    34,   109,   128,   146,   149,   158,   172,   240,   275,
     322,   322,   321,   251,   275,   257,   271,   189,   250,    55,
     112,   127,   148,   181,   205,   277,   279,    30,   274,    90,
       3,    19,   236,   258,   227,   271,     3,   189,   252,   295,
     189,   295,     3,   322,   323,   324,   322,   322,   327,    84,
      87,   235,   257,   252,   322,   323,    39,   125,   217,   323,
     325,   322,   322,    19,   322,   271,   270,   322,     6,   149,
     151,    25,    29,   192,   252,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   322,     3,   322,   252,   322,   322,
     109,   128,   172,   322,   322,   322,     3,    96,   108,   226,
     283,   253,   253,     3,   302,   272,   127,   181,   280,   273,
     121,   161,   278,     3,   108,   176,   251,   252,   316,   317,
     322,   159,   264,   271,   258,   290,     3,   298,     3,   267,
     231,   257,   298,   231,   257,   250,   253,   210,    84,    87,
     322,   322,   253,   257,    98,   253,   253,   322,   250,   250,
     253,   253,   258,     6,   151,   252,   252,   252,   257,    28,
     257,   323,   252,   322,   322,   275,   122,   122,   122,    13,
     251,   250,   258,   278,   278,   121,   153,   273,   121,     3,
      99,   110,   122,   164,   306,   307,   308,   274,    40,   129,
     265,   258,    13,   153,   250,   292,   250,   253,   252,   296,
     292,   292,   296,   292,   323,   322,   322,    87,   210,   253,
     322,    98,   118,   326,   326,   101,   259,   257,   257,   257,
     253,   322,   253,   253,   257,   323,   283,    95,   284,   284,
     284,   322,     3,     3,   264,   273,   322,   153,   227,   281,
     282,   273,   252,   316,   110,   122,   252,   252,   122,   250,
     253,     3,   257,   260,   322,   322,    71,   322,   154,     3,
       3,    71,   297,   322,   250,   292,   292,    87,   322,    95,
     253,   323,   322,   253,   253,    40,   102,   263,   253,   253,
     253,   253,   253,   121,   252,   252,   252,    13,    13,   251,
     265,   322,   252,   282,   306,   252,   252,   267,   267,   252,
     307,   316,    35,    36,    37,    38,    45,    63,    64,    69,
      80,    88,    94,   116,   117,   136,   137,   141,   142,   143,
     170,   189,   191,   208,   211,   212,   213,   214,   215,   232,
     233,   241,   314,   250,    31,    74,   261,   250,   122,    13,
     250,   253,   252,   322,   253,    65,    66,    67,    68,   104,
     105,   106,   241,   242,   260,   322,   264,     3,   285,   285,
     285,   322,   322,     3,   267,   253,   267,   267,   253,   253,
     267,   252,   310,   310,   310,   310,   310,   310,   252,   310,
     310,   310,    36,   311,   310,   311,   310,   252,   310,   311,
     310,   311,   252,   252,   309,   322,   322,   224,    71,   322,
      71,   322,   297,   253,   238,   262,   265,   250,   253,   253,
     253,    13,   253,   316,   253,   253,   253,     5,   312,   313,
     312,   312,     4,   315,   312,   312,   312,   313,   312,   313,
     312,   315,   312,   313,   312,   313,     5,     5,    32,    49,
      71,   122,   149,   151,   164,   221,   261,   298,   253,   182,
     119,   266,     3,   322,   250,   253,   223,   243,    45,    47,
     250,   253,   253,   253,   253,     4,     4,     5,     6,     7,
     151,   122,   122,   252,   267,     5,   189,     4,     4,   313,
     313,   313,   267,   253,     4,   253
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   254,   255,   255,   256,   257,   257,   258,   258,   259,
     259,   260,   260,   261,   261,   261,   262,   262,   263,   263,
     264,   264,   265,   265,   265,   266,   266,   267,   267,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   269,   269,
     269,   270,   271,   271,   272,   272,   273,   273,   273,   273,
     274,   274,   275,   275,   275,   276,   276,   276,   276,   276,
     277,   277,   277,   278,   278,   279,   279,   280,   280,   280,
     281,   281,   282,   282,   283,   283,   283,   283,   284,   284,
     285,   285,   286,   256,   287,   288,   288,   288,   288,   287,
     289,   289,   290,   290,   287,   256,   291,   292,   292,   293,
     293,   293,   293,   293,   294,   294,   295,   295,   296,   296,
     297,   297,   297,   297,   291,   291,   298,   298,   298,   298,
     256,   299,   299,   299,   256,   300,   301,   301,   301,   302,
     302,   302,   302,   256,   303,   303,   304,   304,   256,   305,
     305,   305,   305,   305,   305,   306,   306,   308,   307,   307,
     307,   307,   307,   307,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   310,   310,   310,
     311,   311,   312,   312,   312,   313,   313,   313,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   315,   315,
     316,   317,   317,   317,   318,   318,   256,   319,   320,   320,
     321,   321,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   322,   322,   323,   323,   324,   324,
     322,   322,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   325,   325,   325,   322,   322,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   322,   322,
     322,   322,   327,   327,   322,   322,   322,   322,   322,   322,
     322,   322
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     3,     1,     3,    11,     0,     2,     0,
       4,     2,     4,     0,     1,     1,     0,     2,     0,     2,
       0,     3,     0,     2,     4,     0,     2,     1,     3,     0,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     3,
       1,     2,     1,     3,     1,     1,     3,     5,     3,     3,
       1,     0,     2,     1,     0,     5,     3,     5,     6,     5,
       0,     1,     1,     0,     1,     1,     1,     2,     2,     0,
       1,     0,     2,     4,     6,     6,     6,     0,     2,     0,
       1,     3,     3,     1,     7,     2,     2,     2,     0,     6,
       2,     4,     0,     2,     7,     1,     8,     0,     5,     0,
       2,     2,     2,     2,     1,     0,     0,     3,     3,     5,
       1,     1,     3,     3,     7,     7,     3,     3,     5,     5,
       1,     8,     7,     7,     1,     8,     0,     2,     2,     3,
       5,     5,     7,     1,     4,     4,     0,     3,     1,     8,
      10,     9,     6,    11,     8,     1,     3,     0,     4,     5,
       4,     4,     5,     5,     0,     3,     2,     3,     3,     3,
       3,     2,     5,     3,     3,     2,     3,     0,     3,     5,
       0,     1,     0,     2,     2,     0,     4,     3,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     3,     5,     2,     4,     1,     1,
       1,     1,     3,     3,     3,     3,     5,     5,     1,     3,
       3,     0,     1,     1,     0,     1,     1,     2,     1,     3,
       3,     3,     1,     1,     3,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     2,     3,     3,     3,     3,
       5,     6,     6,     6,     3,     3,     3,     3,     2,     2,
       3,     3,     4,     3,     4,     5,     1,     3,     0,     1,
       5,     6,     5,     6,     4,     5,     4,     4,     4,     4,
       6,     8,     4,     7,     1,     1,     1,     6,     6,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     6,
       3,     5,     4,     5,     3,     4,     3,     4,     1,     1,
       1,     2
};


/* YYDPREC[RULE-NUM] -- Dynamic precedence of rule #RULE-NUM (0 if none).  */
static const yytype_int8 yydprec[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0
};

/* YYMERGER[RULE-NUM] -- Index of merging function for rule #RULE-NUM.  */
static const yytype_int8 yymerger[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0
};

/* YYIMMEDIATE[RULE-NUM] -- True iff rule #RULE-NUM is not to be deferred, as
   in the case of predicates.  */
static const yybool yyimmediate[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0
};

/* YYCONFLP[YYPACT[STATE-NUM]] -- Pointer into YYCONFL of start of
   list of conflicting reductions corresponding to action entry for
   state STATE-NUM in yytable.  0 means no conflicts.  The list in
   yyconfl is terminated by a rule number of 0.  */
static const yytype_int8 yyconflp[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     0,     0,     0,     0,     0,     0,     7,     9,     0,
      11,    13,    15,    17,    19,    21,    23,    25,    27,    29,
       0,     0,     0,     0,     0,    31,     0,    33,    35,     0,
       0,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    39,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    41,    43,    45,    47,     0,     0,     0,     0,
       0,    49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    51,     0,     0,    53,     0,     0,     0,     0,     0,
       0,     0,    55,     0,     0,    57,     0,     0,    59,    61,
       0,    63,    65,    67,     0,     0,    69,     0,     0,    71,
       0,     0,     0,     0,     0,     0,    73,     0,    75,     0,
       0,     0,     0,     0,    77,    79,    81,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    83,     0,    85,    87,     0,     0,     0,
      89,     0,     0,     0,     0,    91,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    95,
       0,     0,     0,     0,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   101,     0,     0,     0,     0,   103,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   105,   107,     0,   109,     0,   111,   113,   115,
       0,     0,     0,     0,     0,     0,   117,   119,     0,     0,
     121,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short yyconfl[] =
{
       0,    56,     0,    71,     0,   265,     0,   265,     0,   265,
       0,   265,     0,   265,     0,   265,     0,   265,     0,   265,
       0,   265,     0,   265,     0,   265,     0,   265,     0,   265,
       0,   265,     0,   265,     0,   265,     0,   265,     0,   265,
       0,   265,     0,   265,     0,   265,     0,   265,     0,   265,
       0,   265,     0,   265,     0,   265,     0,   265,     0,   265,
       0,   265,     0,   265,     0,   265,     0,   265,     0,   265,
       0,   265,     0,   265,     0,   265,     0,   265,     0,   265,
       0,   265,     0,   265,     0,   265,     0,   265,     0,   265,
       0,   265,     0,   265,     0,   265,     0,   265,     0,   265,
       0,   265,     0,   265,     0,   265,     0,   265,     0,   265,
       0,   265,     0,   265,     0,   265,     0,   265,     0,   265,
       0,   265,     0
};



YYSTYPE yylval;

int yynerrs;
int yychar;

enum { YYENOMEM = -2 };

typedef enum { yyok, yyaccept, yyabort, yyerr } YYRESULTTAG;

#define YYCHK(YYE)                              \
  do {                                          \
    YYRESULTTAG yychk_flag = YYE;               \
    if (yychk_flag != yyok)                     \
      return yychk_flag;                        \
  } while (0)

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYMAXDEPTH * sizeof (GLRStackItem)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

/* Minimum number of free items on the stack allowed after an
   allocation.  This is to allow allocation and initialization
   to be completed by functions that call yyexpandGLRStack before the
   stack is expanded, thus insuring that all necessary pointers get
   properly redirected to new data.  */
#define YYHEADROOM 2

#ifndef YYSTACKEXPANDABLE
#  define YYSTACKEXPANDABLE 1
#endif

#if YYSTACKEXPANDABLE
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyexpandGLRStack (Yystack);                       \
  } while (0)
#else
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyMemoryExhausted (Yystack);                      \
  } while (0)
#endif

/** State numbers. */
typedef int yy_state_t;

/** Rule numbers. */
typedef int yyRuleNum;

/** Item references. */
typedef short yyItemNum;

typedef struct yyGLRState yyGLRState;
typedef struct yyGLRStateSet yyGLRStateSet;
typedef struct yySemanticOption yySemanticOption;
typedef union yyGLRStackItem yyGLRStackItem;
typedef struct yyGLRStack yyGLRStack;

struct yyGLRState {
  /** Type tag: always true.  */
  yybool yyisState;
  /** Type tag for yysemantics.  If true, yysval applies, otherwise
   *  yyfirstVal applies.  */
  yybool yyresolved;
  /** Number of corresponding LALR(1) machine state.  */
  yy_state_t yylrState;
  /** Preceding state in this stack */
  yyGLRState* yypred;
  /** Source position of the last token produced by my symbol */
  YYPTRDIFF_T yyposn;
  union {
    /** First in a chain of alternative reductions producing the
     *  nonterminal corresponding to this state, threaded through
     *  yynext.  */
    yySemanticOption* yyfirstVal;
    /** Semantic value for this state.  */
    YYSTYPE yysval;
  } yysemantics;
};

struct yyGLRStateSet {
  yyGLRState** yystates;
  /** During nondeterministic operation, yylookaheadNeeds tracks which
   *  stacks have actually needed the current lookahead.  During deterministic
   *  operation, yylookaheadNeeds[0] is not maintained since it would merely
   *  duplicate yychar != YYEMPTY.  */
  yybool* yylookaheadNeeds;
  YYPTRDIFF_T yysize;
  YYPTRDIFF_T yycapacity;
};

struct yySemanticOption {
  /** Type tag: always false.  */
  yybool yyisState;
  /** Rule number for this reduction */
  yyRuleNum yyrule;
  /** The last RHS state in the list of states to be reduced.  */
  yyGLRState* yystate;
  /** The lookahead for this reduction.  */
  int yyrawchar;
  YYSTYPE yyval;
  /** Next sibling in chain of options.  To facilitate merging,
   *  options are chained in decreasing order by address.  */
  yySemanticOption* yynext;
};

/** Type of the items in the GLR stack.  The yyisState field
 *  indicates which item of the union is valid.  */
union yyGLRStackItem {
  yyGLRState yystate;
  yySemanticOption yyoption;
};

struct yyGLRStack {
  int yyerrState;


  YYJMP_BUF yyexception_buffer;
  yyGLRStackItem* yyitems;
  yyGLRStackItem* yynextFree;
  YYPTRDIFF_T yyspaceLeft;
  yyGLRState* yysplitPoint;
  yyGLRState* yylastDeleted;
  yyGLRStateSet yytops;
};

#if YYSTACKEXPANDABLE
static void yyexpandGLRStack (yyGLRStack* yystackp);
#endif

_Noreturn static void
yyFail (yyGLRStack* yystackp, const char* yymsg)
{
  if (yymsg != YY_NULLPTR)
    yyerror (yymsg);
  YYLONGJMP (yystackp->yyexception_buffer, 1);
}

_Noreturn static void
yyMemoryExhausted (yyGLRStack* yystackp)
{
  YYLONGJMP (yystackp->yyexception_buffer, 2);
}

/** Accessing symbol of state YYSTATE.  */
static inline yysymbol_kind_t
yy_accessing_symbol (yy_state_t yystate)
{
  return YY_CAST (yysymbol_kind_t, yystos[yystate]);
}

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NAME", "STRING",
  "INTNUM", "BOOL", "APPROXNUM", "USERVAR", "ASSIGN", "ANDOP", "IS", "'!'",
  "COMPARISON", "'|'", "'&'", "SHIFT", "'+'", "'-'", "'*'", "'/'", "'%'",
  "'^'", "UMINUS", "ADD", "ALL", "ALTER", "ANALYZE", "AND", "ANY", "AS",
  "ASC", "AUTO_INCREMENT", "BEFORE", "BETWEEN", "BIGINT", "BINARY", "BIT",
  "BLOB", "BOTH", "BY", "CALL", "CASCADE", "CASE", "CHANGE", "CHAR",
  "CHECK", "COLLATE", "COLUMN", "COMMENT", "CONDITION", "CONSTRAINT",
  "CONTINUE", "CONVERT", "CREATE", "CROSS", "CURRENT_DATE", "CURRENT_TIME",
  "CURRENT_TIMESTAMP", "CURRENT_USER", "CURSOR", "DATABASE", "DATABASES",
  "DATE", "DATETIME", "DAY_HOUR", "DAY_MICROSECOND", "DAY_MINUTE",
  "DAY_SECOND", "DECIMAL", "DECLARE", "DEFAULT", "DELAYED", "DELETE",
  "DESC", "DESCRIBE", "DETERMINISTIC", "DISTINCT", "DISTINCTROW", "DIV",
  "DOUBLE", "DROP", "DUAL", "EACH", "ELSE", "ELSEIF", "ENCLOSED", "END",
  "ENUM", "ESCAPED", "EXISTS", "EXIT", "EXPLAIN", "FETCH", "FLOAT", "FOR",
  "FORCE", "FOREIGN", "FROM", "FULLTEXT", "GRANT", "GROUP", "HAVING",
  "HIGH_PRIORITY", "HOUR_MICROSECOND", "HOUR_MINUTE", "HOUR_SECOND", "IF",
  "IGNORE", "IN", "INDEX", "INFILE", "INNER", "INOUT", "INSENSITIVE",
  "INSERT", "INT", "INTEGER", "INTERVAL", "INTO", "ITERATE", "JOIN", "KEY",
  "KEYS", "KILL", "LEADING", "LEAVE", "LEFT", "LIKE", "LIMIT", "LINES",
  "LOAD", "LOCALTIME", "LOCALTIMESTAMP", "LOCK", "LONG", "LONGBLOB",
  "LONGTEXT", "LOOP", "LOW_PRIORITY", "MATCH", "MEDIUMBLOB", "MEDIUMINT",
  "MEDIUMTEXT", "MINUTE_MICROSECOND", "MINUTE_SECOND", "MOD", "MODIFIES",
  "NATURAL", "NOT", "NO_WRITE_TO_BINLOG", "NULLX", "NUMBER", "ON",
  "DUPLICATE", "OPTIMIZE", "OPTION", "OPTIONALLY", "OR", "ORDER", "OUT",
  "OUTER", "OUTFILE", "PRECISION", "PRIMARY", "PROCEDURE", "PURGE",
  "QUICK", "READ", "READS", "REAL", "REFERENCES", "REGEXP", "RELEASE",
  "RENAME", "REPEAT", "REPLACE", "REQUIRE", "RESTRICT", "RETURN", "REVOKE",
  "RIGHT", "ROLLUP", "SCHEMA", "SCHEMAS", "SECOND_MICROSECOND", "SELECT",
  "SENSITIVE", "SEPARATOR", "SET", "SHOW", "SMALLINT", "SOME", "SONAME",
  "SPATIAL", "SPECIFIC", "SQL", "SQLEXCEPTION", "SQLSTATE", "SQLWARNING",
  "SQL_BIG_RESULT", "SQL_CALC_FOUND_ROWS", "SQL_SMALL_RESULT", "SSL",
  "STARTING", "STRAIGHT_JOIN", "TABLE", "TEMPORARY", "TEXT", "TERMINATED",
  "THEN", "TIME", "TIMESTAMP", "TINYBLOB", "TINYINT", "TINYTEXT", "TO",
  "TRAILING", "TRIGGER", "UNDO", "UNION", "UNIQUE", "UNLOCK", "UNSIGNED",
  "UPDATE", "USAGE", "USE", "USING", "UTC_DATE", "UTC_TIME",
  "UTC_TIMESTAMP", "VALUES", "VARBINARY", "VARCHAR", "VARYING", "WHEN",
  "WHERE", "WHILE", "WITH", "WRITE", "XOR", "YEAR", "YEAR_MONTH",
  "ZEROFILL", "FSUBSTRING", "FTRIM", "FDATE_ADD", "FDATE_SUB", "FCOUNT",
  "';'", "','", "'.'", "'('", "')'", "$accept", "stmt_list", "stmt",
  "select_stmt", "opt_where", "opt_groupby", "groupby_list",
  "opt_asc_desc", "opt_with_rollup", "opt_having", "opt_orderby",
  "opt_limit", "opt_into_list", "column_list", "select_opts",
  "select_expr_list", "select_expr", "table_references", "table_reference",
  "table_factor", "opt_as", "opt_as_alias", "join_table",
  "opt_inner_cross", "opt_outer", "left_or_right",
  "opt_left_or_right_outer", "opt_join_condition", "join_condition",
  "index_hint", "opt_for_join", "index_list", "table_subquery",
  "delete_stmt", "delete_opts", "delete_list", "opt_dot_star",
  "insert_stmt", "opt_ondupupdate", "insert_opts", "opt_into",
  "opt_col_names", "insert_vals_list", "insert_vals", "insert_asgn_list",
  "replace_stmt", "update_stmt", "update_opts", "update_asgn_list",
  "create_database_stmt", "opt_if_not_exists", "create_table_stmt",
  "create_col_list", "create_definition", "$@1", "column_atts",
  "opt_length", "opt_binary", "opt_uz", "opt_csc", "data_type",
  "enum_list", "create_select_statement", "opt_ignore_replace",
  "opt_temporary", "set_stmt", "set_list", "set_expr", "expr", "val_list",
  "opt_val_list", "trim_ltb", "interval_exp", "case_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#if YYDEBUG

# ifndef YYFPRINTF
#  define YYFPRINTF fprintf
# endif

# define YY_FPRINTF                             \
  YY_IGNORE_USELESS_CAST_BEGIN YY_FPRINTF_

# define YY_FPRINTF_(Args)                      \
  do {                                          \
    YYFPRINTF Args;                             \
    YY_IGNORE_USELESS_CAST_END                  \
  } while (0)

# define YY_DPRINTF                             \
  YY_IGNORE_USELESS_CAST_BEGIN YY_DPRINTF_

# define YY_DPRINTF_(Args)                      \
  do {                                          \
    if (yydebug)                                \
      YYFPRINTF Args;                           \
    YY_IGNORE_USELESS_CAST_END                  \
  } while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif



/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                  \
  do {                                                                  \
    if (yydebug)                                                        \
      {                                                                 \
        YY_FPRINTF ((stderr, "%s ", Title));                            \
        yy_symbol_print (stderr, Kind, Value);        \
        YY_FPRINTF ((stderr, "\n"));                                    \
      }                                                                 \
  } while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;

static void yypstack (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
  YY_ATTRIBUTE_UNUSED;
static void yypdumpstack (yyGLRStack* yystackp)
  YY_ATTRIBUTE_UNUSED;

#else /* !YYDEBUG */

# define YY_DPRINTF(Args) do {} while (yyfalse)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)

#endif /* !YYDEBUG */



/** Fill in YYVSP[YYLOW1 .. YYLOW0-1] from the chain of states starting
 *  at YYVSP[YYLOW0].yystate.yypred.  Leaves YYVSP[YYLOW1].yystate.yypred
 *  containing the pointer to the next state in the chain.  */
static void yyfillin (yyGLRStackItem *, int, int) YY_ATTRIBUTE_UNUSED;
static void
yyfillin (yyGLRStackItem *yyvsp, int yylow0, int yylow1)
{
  int i;
  yyGLRState *s = yyvsp[yylow0].yystate.yypred;
  for (i = yylow0-1; i >= yylow1; i -= 1)
    {
#if YYDEBUG
      yyvsp[i].yystate.yylrState = s->yylrState;
#endif
      yyvsp[i].yystate.yyresolved = s->yyresolved;
      if (s->yyresolved)
        yyvsp[i].yystate.yysemantics.yysval = s->yysemantics.yysval;
      else
        /* The effect of using yysval or yyloc (in an immediate rule) is
         * undefined.  */
        yyvsp[i].yystate.yysemantics.yyfirstVal = YY_NULLPTR;
      s = yyvsp[i].yystate.yypred = s->yypred;
    }
}


/** If yychar is empty, fetch the next token.  */
static inline yysymbol_kind_t
yygetToken (int *yycharp)
{
  yysymbol_kind_t yytoken;
  if (*yycharp == YYEMPTY)
    {
      YY_DPRINTF ((stderr, "Reading a token\n"));
      *yycharp = yylex ();
    }
  if (*yycharp <= YYEOF)
    {
      *yycharp = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YY_DPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (*yycharp);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }
  return yytoken;
}

/* Do nothing if YYNORMAL or if *YYLOW <= YYLOW1.  Otherwise, fill in
 * YYVSP[YYLOW1 .. *YYLOW-1] as in yyfillin and set *YYLOW = YYLOW1.
 * For convenience, always return YYLOW1.  */
static inline int yyfill (yyGLRStackItem *, int *, int, yybool)
     YY_ATTRIBUTE_UNUSED;
static inline int
yyfill (yyGLRStackItem *yyvsp, int *yylow, int yylow1, yybool yynormal)
{
  if (!yynormal && yylow1 < *yylow)
    {
      yyfillin (yyvsp, *yylow, yylow1);
      *yylow = yylow1;
    }
  return yylow1;
}

/** Perform user action for rule number YYN, with RHS length YYRHSLEN,
 *  and top stack item YYVSP.  YYLVALP points to place to put semantic
 *  value ($$), and yylocp points to place for location information
 *  (@$).  Returns yyok for normal return, yyaccept for YYACCEPT,
 *  yyerr for YYERROR, yyabort for YYABORT.  */
static YYRESULTTAG
yyuserAction (yyRuleNum yyn, int yyrhslen, yyGLRStackItem* yyvsp,
              yyGLRStack* yystackp,
              YYSTYPE* yyvalp)
{
  yybool yynormal YY_ATTRIBUTE_UNUSED = yystackp->yysplitPoint == YY_NULLPTR;
  int yylow;
  YYUSE (yyvalp);
  YYUSE (yyrhslen);
# undef yyerrok
# define yyerrok (yystackp->yyerrState = 0)
# undef YYACCEPT
# define YYACCEPT return yyaccept
# undef YYABORT
# define YYABORT return yyabort
# undef YYERROR
# define YYERROR return yyerrok, yyerr
# undef YYRECOVERING
# define YYRECOVERING() (yystackp->yyerrState != 0)
# undef yyclearin
# define yyclearin (yychar = YYEMPTY)
# undef YYFILL
# define YYFILL(N) yyfill (yyvsp, &yylow, (N), yynormal)
# undef YYBACKUP
# define YYBACKUP(Token, Value)                                              \
  return yyerror (YY_("syntax error: cannot back up")),     \
         yyerrok, yyerr

  yylow = 1;
  if (yyrhslen == 0)
    *yyvalp = yyval_default;
  else
    *yyvalp = yyvsp[YYFILL (1-yyrhslen)].yystate.yysemantics.yysval;
  switch (yyn)
    {
  case 4: /* stmt: select_stmt  */
#line 314 "glrmysql.y"
                  { emit("STMT"); }
#line 2386 "glrmysql.tab.c"
    break;

  case 5: /* select_stmt: SELECT select_opts select_expr_list  */
#line 318 "glrmysql.y"
                        { emit("SELECTNODATA %d %d", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval)); }
#line 2392 "glrmysql.tab.c"
    break;

  case 6: /* select_stmt: SELECT select_opts select_expr_list FROM table_references opt_where opt_groupby opt_having opt_orderby opt_limit opt_into_list  */
#line 322 "glrmysql.y"
                   { emit("SELECT %d %d %d", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yysval.intval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yysval.intval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.intval)); }
#line 2398 "glrmysql.tab.c"
    break;

  case 8: /* opt_where: WHERE expr  */
#line 326 "glrmysql.y"
                { emit("WHERE"); }
#line 2404 "glrmysql.tab.c"
    break;

  case 10: /* opt_groupby: GROUP BY groupby_list opt_with_rollup  */
#line 330 "glrmysql.y"
                             { emit("GROUPBYLIST %d %d", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval)); }
#line 2410 "glrmysql.tab.c"
    break;

  case 11: /* groupby_list: expr opt_asc_desc  */
#line 334 "glrmysql.y"
                             { emit("GROUPBY %d",  (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval)); ((*yyvalp).intval) = 1; }
#line 2416 "glrmysql.tab.c"
    break;

  case 12: /* groupby_list: groupby_list ',' expr opt_asc_desc  */
#line 336 "glrmysql.y"
                             { emit("GROUPBY %d",  (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval)); ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.intval) + 1; }
#line 2422 "glrmysql.tab.c"
    break;

  case 13: /* opt_asc_desc: %empty  */
#line 339 "glrmysql.y"
                        { ((*yyvalp).intval) = 0; }
#line 2428 "glrmysql.tab.c"
    break;

  case 14: /* opt_asc_desc: ASC  */
#line 340 "glrmysql.y"
                        { ((*yyvalp).intval) = 0; }
#line 2434 "glrmysql.tab.c"
    break;

  case 15: /* opt_asc_desc: DESC  */
#line 341 "glrmysql.y"
                        { ((*yyvalp).intval) = 1; }
#line 2440 "glrmysql.tab.c"
    break;

  case 16: /* opt_with_rollup: %empty  */
#line 344 "glrmysql.y"
                            { ((*yyvalp).intval) = 0; }
#line 2446 "glrmysql.tab.c"
    break;

  case 17: /* opt_with_rollup: WITH ROLLUP  */
#line 345 "glrmysql.y"
                  { ((*yyvalp).intval) = 1; }
#line 2452 "glrmysql.tab.c"
    break;

  case 19: /* opt_having: HAVING expr  */
#line 348 "glrmysql.y"
                                    { emit("HAVING"); }
#line 2458 "glrmysql.tab.c"
    break;

  case 21: /* opt_orderby: ORDER BY groupby_list  */
#line 350 "glrmysql.y"
                                               { emit("ORDERBY %d", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval)); }
#line 2464 "glrmysql.tab.c"
    break;

  case 23: /* opt_limit: LIMIT expr  */
#line 353 "glrmysql.y"
                                  { emit("LIMIT 1"); }
#line 2470 "glrmysql.tab.c"
    break;

  case 24: /* opt_limit: LIMIT expr ',' expr  */
#line 354 "glrmysql.y"
                                    { emit("LIMIT 2"); }
#line 2476 "glrmysql.tab.c"
    break;

  case 26: /* opt_into_list: INTO column_list  */
#line 358 "glrmysql.y"
                      { emit("INTO %d", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval)); }
#line 2482 "glrmysql.tab.c"
    break;

  case 27: /* column_list: NAME  */
#line 361 "glrmysql.y"
                  { emit("COLUMN %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); ((*yyvalp).intval) = 1; }
#line 2488 "glrmysql.tab.c"
    break;

  case 28: /* column_list: column_list ',' NAME  */
#line 362 "glrmysql.y"
                          { emit("COLUMN %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval) + 1; }
#line 2494 "glrmysql.tab.c"
    break;

  case 29: /* select_opts: %empty  */
#line 365 "glrmysql.y"
                                      { ((*yyvalp).intval) = 0; }
#line 2500 "glrmysql.tab.c"
    break;

  case 30: /* select_opts: select_opts ALL  */
#line 366 "glrmysql.y"
                                  { if(((*yyvalp).intval) & 01) yyerror("duplicate ALL option"); ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) | 01; }
#line 2506 "glrmysql.tab.c"
    break;

  case 31: /* select_opts: select_opts DISTINCT  */
#line 367 "glrmysql.y"
                                  { if(((*yyvalp).intval) & 02) yyerror("duplicate DISTINCT option"); ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) | 02; }
#line 2512 "glrmysql.tab.c"
    break;

  case 32: /* select_opts: select_opts DISTINCTROW  */
#line 368 "glrmysql.y"
                                  { if(((*yyvalp).intval) & 04) yyerror("duplicate DISTINCTROW option"); ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) | 04; }
#line 2518 "glrmysql.tab.c"
    break;

  case 33: /* select_opts: select_opts HIGH_PRIORITY  */
#line 369 "glrmysql.y"
                                  { if(((*yyvalp).intval) & 010) yyerror("duplicate HIGH_PRIORITY option"); ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) | 010; }
#line 2524 "glrmysql.tab.c"
    break;

  case 34: /* select_opts: select_opts STRAIGHT_JOIN  */
#line 370 "glrmysql.y"
                                  { if(((*yyvalp).intval) & 020) yyerror("duplicate STRAIGHT_JOIN option"); ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) | 020; }
#line 2530 "glrmysql.tab.c"
    break;

  case 35: /* select_opts: select_opts SQL_SMALL_RESULT  */
#line 371 "glrmysql.y"
                                  { if(((*yyvalp).intval) & 040) yyerror("duplicate SQL_SMALL_RESULT option"); ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) | 040; }
#line 2536 "glrmysql.tab.c"
    break;

  case 36: /* select_opts: select_opts SQL_BIG_RESULT  */
#line 372 "glrmysql.y"
                                  { if(((*yyvalp).intval) & 0100) yyerror("duplicate SQL_BIG_RESULT option"); ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) | 0100; }
#line 2542 "glrmysql.tab.c"
    break;

  case 37: /* select_opts: select_opts SQL_CALC_FOUND_ROWS  */
#line 373 "glrmysql.y"
                                  { if(((*yyvalp).intval) & 0200) yyerror("duplicate SQL_CALC_FOUND_ROWS option"); ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) | 0200; }
#line 2548 "glrmysql.tab.c"
    break;

  case 38: /* select_expr_list: select_expr  */
#line 376 "glrmysql.y"
                              { ((*yyvalp).intval) = 1; }
#line 2554 "glrmysql.tab.c"
    break;

  case 39: /* select_expr_list: select_expr_list ',' select_expr  */
#line 377 "glrmysql.y"
                                       {((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval) + 1; }
#line 2560 "glrmysql.tab.c"
    break;

  case 40: /* select_expr_list: '*'  */
#line 378 "glrmysql.y"
          { emit("SELECTALL"); ((*yyvalp).intval) = 1; }
#line 2566 "glrmysql.tab.c"
    break;

  case 42: /* table_references: table_reference  */
#line 383 "glrmysql.y"
                                     { ((*yyvalp).intval) = 1; }
#line 2572 "glrmysql.tab.c"
    break;

  case 43: /* table_references: table_references ',' table_reference  */
#line 384 "glrmysql.y"
                                           { ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval) + 1; }
#line 2578 "glrmysql.tab.c"
    break;

  case 46: /* table_factor: NAME opt_as_alias index_hint  */
#line 392 "glrmysql.y"
                                 { emit("TABLE %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); }
#line 2584 "glrmysql.tab.c"
    break;

  case 47: /* table_factor: NAME '.' NAME opt_as_alias index_hint  */
#line 393 "glrmysql.y"
                                          { emit("TABLE %s.%s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.strval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval));
                               free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); }
#line 2591 "glrmysql.tab.c"
    break;

  case 48: /* table_factor: table_subquery opt_as NAME  */
#line 395 "glrmysql.y"
                               { emit("SUBQUERYAS %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); }
#line 2597 "glrmysql.tab.c"
    break;

  case 49: /* table_factor: '(' table_references ')'  */
#line 396 "glrmysql.y"
                             { emit("TABLEREFERENCES %d", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval)); }
#line 2603 "glrmysql.tab.c"
    break;

  case 52: /* opt_as_alias: AS NAME  */
#line 403 "glrmysql.y"
                      { emit ("ALIAS %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); }
#line 2609 "glrmysql.tab.c"
    break;

  case 53: /* opt_as_alias: NAME  */
#line 404 "glrmysql.y"
                      { emit ("ALIAS %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); }
#line 2615 "glrmysql.tab.c"
    break;

  case 55: /* join_table: table_reference opt_inner_cross JOIN table_factor opt_join_condition  */
#line 410 "glrmysql.y"
                  { emit("JOIN %d", 0100+(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.intval)); }
#line 2621 "glrmysql.tab.c"
    break;

  case 56: /* join_table: table_reference STRAIGHT_JOIN table_factor  */
#line 412 "glrmysql.y"
                  { emit("JOIN %d", 0200); }
#line 2627 "glrmysql.tab.c"
    break;

  case 57: /* join_table: table_reference STRAIGHT_JOIN table_factor ON expr  */
#line 414 "glrmysql.y"
                  { emit("JOIN %d", 0200); }
#line 2633 "glrmysql.tab.c"
    break;

  case 58: /* join_table: table_reference left_or_right opt_outer JOIN table_factor join_condition  */
#line 416 "glrmysql.y"
                  { emit("JOIN %d", 0300+(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.intval)+(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.intval)); }
#line 2639 "glrmysql.tab.c"
    break;

  case 59: /* join_table: table_reference NATURAL opt_left_or_right_outer JOIN table_factor  */
#line 418 "glrmysql.y"
                  { emit("JOIN %d", 0400+(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval)); }
#line 2645 "glrmysql.tab.c"
    break;

  case 60: /* opt_inner_cross: %empty  */
#line 421 "glrmysql.y"
                           { ((*yyvalp).intval) = 0; }
#line 2651 "glrmysql.tab.c"
    break;

  case 61: /* opt_inner_cross: INNER  */
#line 422 "glrmysql.y"
           { ((*yyvalp).intval) = 1; }
#line 2657 "glrmysql.tab.c"
    break;

  case 62: /* opt_inner_cross: CROSS  */
#line 423 "glrmysql.y"
            { ((*yyvalp).intval) = 2; }
#line 2663 "glrmysql.tab.c"
    break;

  case 63: /* opt_outer: %empty  */
#line 426 "glrmysql.y"
                      { ((*yyvalp).intval) = 0; }
#line 2669 "glrmysql.tab.c"
    break;

  case 64: /* opt_outer: OUTER  */
#line 427 "glrmysql.y"
           {((*yyvalp).intval) = 4; }
#line 2675 "glrmysql.tab.c"
    break;

  case 65: /* left_or_right: LEFT  */
#line 430 "glrmysql.y"
                    { ((*yyvalp).intval) = 1; }
#line 2681 "glrmysql.tab.c"
    break;

  case 66: /* left_or_right: RIGHT  */
#line 431 "glrmysql.y"
            { ((*yyvalp).intval) = 2; }
#line 2687 "glrmysql.tab.c"
    break;

  case 67: /* opt_left_or_right_outer: LEFT opt_outer  */
#line 434 "glrmysql.y"
                                        { ((*yyvalp).intval) = 1 + (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval); }
#line 2693 "glrmysql.tab.c"
    break;

  case 68: /* opt_left_or_right_outer: RIGHT opt_outer  */
#line 435 "glrmysql.y"
                      { ((*yyvalp).intval) = 2 + (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval); }
#line 2699 "glrmysql.tab.c"
    break;

  case 69: /* opt_left_or_right_outer: %empty  */
#line 436 "glrmysql.y"
               { ((*yyvalp).intval) = 0; }
#line 2705 "glrmysql.tab.c"
    break;

  case 72: /* join_condition: ON expr  */
#line 442 "glrmysql.y"
            { emit("ONEXPR"); }
#line 2711 "glrmysql.tab.c"
    break;

  case 73: /* join_condition: USING '(' column_list ')'  */
#line 443 "glrmysql.y"
                                { emit("USING %d", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval)); }
#line 2717 "glrmysql.tab.c"
    break;

  case 74: /* index_hint: USE KEY opt_for_join '(' index_list ')'  */
#line 448 "glrmysql.y"
                  { emit("INDEXHINT %d %d", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval), 010+(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.intval)); }
#line 2723 "glrmysql.tab.c"
    break;

  case 75: /* index_hint: IGNORE KEY opt_for_join '(' index_list ')'  */
#line 450 "glrmysql.y"
                  { emit("INDEXHINT %d %d", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval), 020+(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.intval)); }
#line 2729 "glrmysql.tab.c"
    break;

  case 76: /* index_hint: FORCE KEY opt_for_join '(' index_list ')'  */
#line 452 "glrmysql.y"
                  { emit("INDEXHINT %d %d", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval), 030+(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.intval)); }
#line 2735 "glrmysql.tab.c"
    break;

  case 78: /* opt_for_join: FOR JOIN  */
#line 456 "glrmysql.y"
                       { ((*yyvalp).intval) = 1; }
#line 2741 "glrmysql.tab.c"
    break;

  case 79: /* opt_for_join: %empty  */
#line 457 "glrmysql.y"
               { ((*yyvalp).intval) = 0; }
#line 2747 "glrmysql.tab.c"
    break;

  case 80: /* index_list: NAME  */
#line 460 "glrmysql.y"
                  { emit("INDEX %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); ((*yyvalp).intval) = 1; }
#line 2753 "glrmysql.tab.c"
    break;

  case 81: /* index_list: index_list ',' NAME  */
#line 461 "glrmysql.y"
                         { emit("INDEX %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval) + 1; }
#line 2759 "glrmysql.tab.c"
    break;

  case 82: /* table_subquery: '(' select_stmt ')'  */
#line 464 "glrmysql.y"
                                    { emit("SUBQUERY"); }
#line 2765 "glrmysql.tab.c"
    break;

  case 83: /* stmt: delete_stmt  */
#line 469 "glrmysql.y"
                  { emit("STMT"); }
#line 2771 "glrmysql.tab.c"
    break;

  case 84: /* delete_stmt: DELETE delete_opts FROM NAME opt_where opt_orderby opt_limit  */
#line 474 "glrmysql.y"
                  { emit("DELETEONE %d %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.intval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.strval)); }
#line 2777 "glrmysql.tab.c"
    break;

  case 85: /* delete_opts: delete_opts LOW_PRIORITY  */
#line 477 "glrmysql.y"
                                      { ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) + 01; }
#line 2783 "glrmysql.tab.c"
    break;

  case 86: /* delete_opts: delete_opts QUICK  */
#line 478 "glrmysql.y"
                       { ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) + 02; }
#line 2789 "glrmysql.tab.c"
    break;

  case 87: /* delete_opts: delete_opts IGNORE  */
#line 479 "glrmysql.y"
                        { ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) + 04; }
#line 2795 "glrmysql.tab.c"
    break;

  case 88: /* delete_opts: %empty  */
#line 480 "glrmysql.y"
               { ((*yyvalp).intval) = 0; }
#line 2801 "glrmysql.tab.c"
    break;

  case 89: /* delete_stmt: DELETE delete_opts delete_list FROM table_references opt_where  */
#line 486 "glrmysql.y"
            { emit("DELETEMULTI %d %d %d", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.intval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.intval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval)); }
#line 2807 "glrmysql.tab.c"
    break;

  case 90: /* delete_list: NAME opt_dot_star  */
#line 488 "glrmysql.y"
                               { emit("TABLE %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.strval)); ((*yyvalp).intval) = 1; }
#line 2813 "glrmysql.tab.c"
    break;

  case 91: /* delete_list: delete_list ',' NAME opt_dot_star  */
#line 490 "glrmysql.y"
            { emit("TABLE %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.strval)); ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.intval) + 1; }
#line 2819 "glrmysql.tab.c"
    break;

  case 94: /* delete_stmt: DELETE delete_opts FROM delete_list USING table_references opt_where  */
#line 498 "glrmysql.y"
            { emit("DELETEMULTI %d %d %d", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.intval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.intval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval)); }
#line 2825 "glrmysql.tab.c"
    break;

  case 95: /* stmt: insert_stmt  */
#line 503 "glrmysql.y"
                  { emit("STMT"); }
#line 2831 "glrmysql.tab.c"
    break;

  case 96: /* insert_stmt: INSERT insert_opts opt_into NAME opt_col_names VALUES insert_vals_list opt_ondupupdate  */
#line 509 "glrmysql.y"
                     { emit("INSERTVALS %d %d %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.intval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.strval)); }
#line 2837 "glrmysql.tab.c"
    break;

  case 98: /* opt_ondupupdate: ON DUPLICATE KEY UPDATE insert_asgn_list  */
#line 513 "glrmysql.y"
                                              { emit("DUPUPDATE %d", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval)); }
#line 2843 "glrmysql.tab.c"
    break;

  case 99: /* insert_opts: %empty  */
#line 516 "glrmysql.y"
                       { ((*yyvalp).intval) = 0; }
#line 2849 "glrmysql.tab.c"
    break;

  case 100: /* insert_opts: insert_opts LOW_PRIORITY  */
#line 517 "glrmysql.y"
                              { ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) | 01 ; }
#line 2855 "glrmysql.tab.c"
    break;

  case 101: /* insert_opts: insert_opts DELAYED  */
#line 518 "glrmysql.y"
                         { ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) | 02 ; }
#line 2861 "glrmysql.tab.c"
    break;

  case 102: /* insert_opts: insert_opts HIGH_PRIORITY  */
#line 519 "glrmysql.y"
                               { ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) | 04 ; }
#line 2867 "glrmysql.tab.c"
    break;

  case 103: /* insert_opts: insert_opts IGNORE  */
#line 520 "glrmysql.y"
                        { ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) | 010 ; }
#line 2873 "glrmysql.tab.c"
    break;

  case 107: /* opt_col_names: '(' column_list ')'  */
#line 527 "glrmysql.y"
                         { emit("INSERTCOLS %d", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval)); }
#line 2879 "glrmysql.tab.c"
    break;

  case 108: /* insert_vals_list: '(' insert_vals ')'  */
#line 530 "glrmysql.y"
                                      { emit("VALUES %d", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval)); ((*yyvalp).intval) = 1; }
#line 2885 "glrmysql.tab.c"
    break;

  case 109: /* insert_vals_list: insert_vals_list ',' '(' insert_vals ')'  */
#line 531 "glrmysql.y"
                                              { emit("VALUES %d", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval)); ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.intval) + 1; }
#line 2891 "glrmysql.tab.c"
    break;

  case 110: /* insert_vals: expr  */
#line 534 "glrmysql.y"
          { ((*yyvalp).intval) = 1; }
#line 2897 "glrmysql.tab.c"
    break;

  case 111: /* insert_vals: DEFAULT  */
#line 535 "glrmysql.y"
             { emit("DEFAULT"); ((*yyvalp).intval) = 1; }
#line 2903 "glrmysql.tab.c"
    break;

  case 112: /* insert_vals: insert_vals ',' expr  */
#line 536 "glrmysql.y"
                          { ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval) + 1; }
#line 2909 "glrmysql.tab.c"
    break;

  case 113: /* insert_vals: insert_vals ',' DEFAULT  */
#line 537 "glrmysql.y"
                             { emit("DEFAULT"); ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval) + 1; }
#line 2915 "glrmysql.tab.c"
    break;

  case 114: /* insert_stmt: INSERT insert_opts opt_into NAME SET insert_asgn_list opt_ondupupdate  */
#line 543 "glrmysql.y"
     { emit("INSERTASGN %d %d %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.intval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.strval)); }
#line 2921 "glrmysql.tab.c"
    break;

  case 115: /* insert_stmt: INSERT insert_opts opt_into NAME opt_col_names select_stmt opt_ondupupdate  */
#line 548 "glrmysql.y"
                    { emit("INSERTSELECT %d %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.intval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.strval)); }
#line 2927 "glrmysql.tab.c"
    break;

  case 116: /* insert_asgn_list: NAME COMPARISON expr  */
#line 553 "glrmysql.y"
     { if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.subtok) != 4) yyerror("bad insert assignment to %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval));
       emit("ASSIGN %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); ((*yyvalp).intval) = 1; }
#line 2934 "glrmysql.tab.c"
    break;

  case 117: /* insert_asgn_list: NAME COMPARISON DEFAULT  */
#line 556 "glrmysql.y"
               { if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.subtok) != 4) yyerror("bad insert assignment to %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval));
                 emit("DEFAULT"); emit("ASSIGN %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); ((*yyvalp).intval) = 1; }
#line 2941 "glrmysql.tab.c"
    break;

  case 118: /* insert_asgn_list: insert_asgn_list ',' NAME COMPARISON expr  */
#line 559 "glrmysql.y"
               { if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.subtok) != 4) yyerror("bad insert assignment to %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.intval));
                 emit("ASSIGN %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.intval) + 1; }
#line 2948 "glrmysql.tab.c"
    break;

  case 119: /* insert_asgn_list: insert_asgn_list ',' NAME COMPARISON DEFAULT  */
#line 562 "glrmysql.y"
               { if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.subtok) != 4) yyerror("bad insert assignment to %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.intval));
                 emit("DEFAULT"); emit("ASSIGN %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.intval) + 1; }
#line 2955 "glrmysql.tab.c"
    break;

  case 120: /* stmt: replace_stmt  */
#line 567 "glrmysql.y"
                   { emit("STMT"); }
#line 2961 "glrmysql.tab.c"
    break;

  case 121: /* replace_stmt: REPLACE insert_opts opt_into NAME opt_col_names VALUES insert_vals_list opt_ondupupdate  */
#line 573 "glrmysql.y"
                     { emit("REPLACEVALS %d %d %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.intval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.strval)); }
#line 2967 "glrmysql.tab.c"
    break;

  case 122: /* replace_stmt: REPLACE insert_opts opt_into NAME SET insert_asgn_list opt_ondupupdate  */
#line 579 "glrmysql.y"
     { emit("REPLACEASGN %d %d %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.intval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.strval)); }
#line 2973 "glrmysql.tab.c"
    break;

  case 123: /* replace_stmt: REPLACE insert_opts opt_into NAME opt_col_names select_stmt opt_ondupupdate  */
#line 584 "glrmysql.y"
                    { emit("REPLACESELECT %d %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.intval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.strval)); }
#line 2979 "glrmysql.tab.c"
    break;

  case 124: /* stmt: update_stmt  */
#line 588 "glrmysql.y"
                  { emit("STMT"); }
#line 2985 "glrmysql.tab.c"
    break;

  case 125: /* update_stmt: UPDATE update_opts table_references SET update_asgn_list opt_where opt_orderby opt_limit  */
#line 595 "glrmysql.y"
          { emit("UPDATE %d %d %d", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.intval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.intval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.intval)); }
#line 2991 "glrmysql.tab.c"
    break;

  case 126: /* update_opts: %empty  */
#line 598 "glrmysql.y"
                       { ((*yyvalp).intval) = 0; }
#line 2997 "glrmysql.tab.c"
    break;

  case 127: /* update_opts: insert_opts LOW_PRIORITY  */
#line 599 "glrmysql.y"
                              { ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) | 01 ; }
#line 3003 "glrmysql.tab.c"
    break;

  case 128: /* update_opts: insert_opts IGNORE  */
#line 600 "glrmysql.y"
                        { ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) | 010 ; }
#line 3009 "glrmysql.tab.c"
    break;

  case 129: /* update_asgn_list: NAME COMPARISON expr  */
#line 605 "glrmysql.y"
       { if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.subtok) != 4) yyerror("bad insert assignment to %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval));
	 emit("ASSIGN %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); ((*yyvalp).intval) = 1; }
#line 3016 "glrmysql.tab.c"
    break;

  case 130: /* update_asgn_list: NAME '.' NAME COMPARISON expr  */
#line 608 "glrmysql.y"
       { if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.subtok) != 4) yyerror("bad insert assignment to %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.strval));
	 emit("ASSIGN %s.%s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.strval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); ((*yyvalp).intval) = 1; }
#line 3023 "glrmysql.tab.c"
    break;

  case 131: /* update_asgn_list: update_asgn_list ',' NAME COMPARISON expr  */
#line 611 "glrmysql.y"
       { if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.subtok) != 4) yyerror("bad insert assignment to %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval));
	 emit("ASSIGN %s.%s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.intval) + 1; }
#line 3030 "glrmysql.tab.c"
    break;

  case 132: /* update_asgn_list: update_asgn_list ',' NAME '.' NAME COMPARISON expr  */
#line 614 "glrmysql.y"
       { if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.subtok) != 4) yyerror("bad insert assignment to %s.$s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.strval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval));
	 emit("ASSIGN %s.%s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.strval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); ((*yyvalp).intval) = 1; }
#line 3037 "glrmysql.tab.c"
    break;

  case 133: /* stmt: create_database_stmt  */
#line 621 "glrmysql.y"
                           { emit("STMT"); }
#line 3043 "glrmysql.tab.c"
    break;

  case 134: /* create_database_stmt: CREATE DATABASE opt_if_not_exists NAME  */
#line 625 "glrmysql.y"
                                            { emit("CREATEDATABASE %d %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); }
#line 3049 "glrmysql.tab.c"
    break;

  case 135: /* create_database_stmt: CREATE SCHEMA opt_if_not_exists NAME  */
#line 626 "glrmysql.y"
                                          { emit("CREATEDATABASE %d %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); }
#line 3055 "glrmysql.tab.c"
    break;

  case 136: /* opt_if_not_exists: %empty  */
#line 629 "glrmysql.y"
                              { ((*yyvalp).intval) = 0; }
#line 3061 "glrmysql.tab.c"
    break;

  case 137: /* opt_if_not_exists: IF NOT EXISTS  */
#line 630 "glrmysql.y"
                              { ((*yyvalp).intval) = 1; }
#line 3067 "glrmysql.tab.c"
    break;

  case 138: /* stmt: create_table_stmt  */
#line 634 "glrmysql.y"
                        { emit("STMT"); }
#line 3073 "glrmysql.tab.c"
    break;

  case 139: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '(' create_col_list ')'  */
#line 638 "glrmysql.y"
                           { emit("CREATE %d %d %d %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.intval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.intval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.strval)); }
#line 3079 "glrmysql.tab.c"
    break;

  case 140: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME '(' create_col_list ')'  */
#line 642 "glrmysql.y"
                           { emit("CREATE %d %d %d %s.%s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yysval.intval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.intval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.strval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.strval));
                          free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.strval)); }
#line 3086 "glrmysql.tab.c"
    break;

  case 141: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '(' create_col_list ')' create_select_statement  */
#line 648 "glrmysql.y"
                        { emit("CREATESELECT %d %d %d %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval.intval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.intval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.strval)); }
#line 3092 "glrmysql.tab.c"
    break;

  case 142: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME create_select_statement  */
#line 652 "glrmysql.y"
                           { emit("CREATESELECT %d %d 0 %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.intval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.strval)); }
#line 3098 "glrmysql.tab.c"
    break;

  case 143: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME '(' create_col_list ')' create_select_statement  */
#line 657 "glrmysql.y"
                            { emit("CREATESELECT %d %d 0 %s.%s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yysval.intval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval.intval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.strval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.strval));
                              free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.strval)); }
#line 3105 "glrmysql.tab.c"
    break;

  case 144: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME create_select_statement  */
#line 662 "glrmysql.y"
                           { emit("CREATESELECT %d %d 0 %s.%s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.intval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.intval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.strval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.strval));
                          free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.strval)); }
#line 3112 "glrmysql.tab.c"
    break;

  case 145: /* create_col_list: create_definition  */
#line 666 "glrmysql.y"
                                   { ((*yyvalp).intval) = 1; }
#line 3118 "glrmysql.tab.c"
    break;

  case 146: /* create_col_list: create_col_list ',' create_definition  */
#line 667 "glrmysql.y"
                                            { ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval) + 1; }
#line 3124 "glrmysql.tab.c"
    break;

  case 147: /* $@1: %empty  */
#line 670 "glrmysql.y"
                   { emit("STARTCOL"); }
#line 3130 "glrmysql.tab.c"
    break;

  case 148: /* create_definition: $@1 NAME data_type column_atts  */
#line 671 "glrmysql.y"
                   { emit("COLUMNDEF %d %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); }
#line 3136 "glrmysql.tab.c"
    break;

  case 149: /* create_definition: PRIMARY KEY '(' column_list ')'  */
#line 673 "glrmysql.y"
                                         { emit("PRIKEY %d", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval)); }
#line 3142 "glrmysql.tab.c"
    break;

  case 150: /* create_definition: KEY '(' column_list ')'  */
#line 674 "glrmysql.y"
                                         { emit("KEY %d", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval)); }
#line 3148 "glrmysql.tab.c"
    break;

  case 151: /* create_definition: INDEX '(' column_list ')'  */
#line 675 "glrmysql.y"
                                         { emit("KEY %d", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval)); }
#line 3154 "glrmysql.tab.c"
    break;

  case 152: /* create_definition: FULLTEXT INDEX '(' column_list ')'  */
#line 676 "glrmysql.y"
                                         { emit("TEXTINDEX %d", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval)); }
#line 3160 "glrmysql.tab.c"
    break;

  case 153: /* create_definition: FULLTEXT KEY '(' column_list ')'  */
#line 677 "glrmysql.y"
                                         { emit("TEXTINDEX %d", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval)); }
#line 3166 "glrmysql.tab.c"
    break;

  case 154: /* column_atts: %empty  */
#line 680 "glrmysql.y"
                       { ((*yyvalp).intval) = 0; }
#line 3172 "glrmysql.tab.c"
    break;

  case 155: /* column_atts: column_atts NOT NULLX  */
#line 681 "glrmysql.y"
                                        { emit("ATTR NOTNULL"); ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval) + 1; }
#line 3178 "glrmysql.tab.c"
    break;

  case 157: /* column_atts: column_atts DEFAULT STRING  */
#line 683 "glrmysql.y"
                                        { emit("ATTR DEFAULT STRING %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval) + 1; }
#line 3184 "glrmysql.tab.c"
    break;

  case 158: /* column_atts: column_atts DEFAULT INTNUM  */
#line 684 "glrmysql.y"
                                        { emit("ATTR DEFAULT NUMBER %d", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval)); ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval) + 1; }
#line 3190 "glrmysql.tab.c"
    break;

  case 159: /* column_atts: column_atts DEFAULT APPROXNUM  */
#line 685 "glrmysql.y"
                                        { emit("ATTR DEFAULT FLOAT %g", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.floatval)); ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval) + 1; }
#line 3196 "glrmysql.tab.c"
    break;

  case 160: /* column_atts: column_atts DEFAULT BOOL  */
#line 686 "glrmysql.y"
                                        { emit("ATTR DEFAULT BOOL %d", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval)); ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval) + 1; }
#line 3202 "glrmysql.tab.c"
    break;

  case 161: /* column_atts: column_atts AUTO_INCREMENT  */
#line 687 "glrmysql.y"
                                        { emit("ATTR AUTOINC"); ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) + 1; }
#line 3208 "glrmysql.tab.c"
    break;

  case 162: /* column_atts: column_atts UNIQUE '(' column_list ')'  */
#line 688 "glrmysql.y"
                                             { emit("ATTR UNIQUEKEY %d", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval)); ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.intval) + 1; }
#line 3214 "glrmysql.tab.c"
    break;

  case 163: /* column_atts: column_atts UNIQUE KEY  */
#line 689 "glrmysql.y"
                             { emit("ATTR UNIQUEKEY"); ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval) + 1; }
#line 3220 "glrmysql.tab.c"
    break;

  case 164: /* column_atts: column_atts PRIMARY KEY  */
#line 690 "glrmysql.y"
                              { emit("ATTR PRIKEY"); ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval) + 1; }
#line 3226 "glrmysql.tab.c"
    break;

  case 165: /* column_atts: column_atts KEY  */
#line 691 "glrmysql.y"
                      { emit("ATTR PRIKEY"); ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) + 1; }
#line 3232 "glrmysql.tab.c"
    break;

  case 166: /* column_atts: column_atts COMMENT STRING  */
#line 692 "glrmysql.y"
                                 { emit("ATTR COMMENT %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval) + 1; }
#line 3238 "glrmysql.tab.c"
    break;

  case 167: /* opt_length: %empty  */
#line 695 "glrmysql.y"
                      { ((*yyvalp).intval) = 0; }
#line 3244 "glrmysql.tab.c"
    break;

  case 168: /* opt_length: '(' INTNUM ')'  */
#line 696 "glrmysql.y"
                    { ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval); }
#line 3250 "glrmysql.tab.c"
    break;

  case 169: /* opt_length: '(' INTNUM ',' INTNUM ')'  */
#line 697 "glrmysql.y"
                               { ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.intval) + 1000*(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval); }
#line 3256 "glrmysql.tab.c"
    break;

  case 170: /* opt_binary: %empty  */
#line 700 "glrmysql.y"
                      { ((*yyvalp).intval) = 0; }
#line 3262 "glrmysql.tab.c"
    break;

  case 171: /* opt_binary: BINARY  */
#line 701 "glrmysql.y"
            { ((*yyvalp).intval) = 4000; }
#line 3268 "glrmysql.tab.c"
    break;

  case 172: /* opt_uz: %empty  */
#line 704 "glrmysql.y"
                  { ((*yyvalp).intval) = 0; }
#line 3274 "glrmysql.tab.c"
    break;

  case 173: /* opt_uz: opt_uz UNSIGNED  */
#line 705 "glrmysql.y"
                     { ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) | 1000; }
#line 3280 "glrmysql.tab.c"
    break;

  case 174: /* opt_uz: opt_uz ZEROFILL  */
#line 706 "glrmysql.y"
                     { ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) | 2000; }
#line 3286 "glrmysql.tab.c"
    break;

  case 176: /* opt_csc: opt_csc CHAR SET STRING  */
#line 710 "glrmysql.y"
                             { emit("COLCHARSET %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); }
#line 3292 "glrmysql.tab.c"
    break;

  case 177: /* opt_csc: opt_csc COLLATE STRING  */
#line 711 "glrmysql.y"
                            { emit("COLCOLLATE %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); }
#line 3298 "glrmysql.tab.c"
    break;

  case 178: /* data_type: BIT opt_length  */
#line 715 "glrmysql.y"
                    { ((*yyvalp).intval) = 10000 + (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval); }
#line 3304 "glrmysql.tab.c"
    break;

  case 179: /* data_type: TINYINT opt_length opt_uz  */
#line 716 "glrmysql.y"
                               { ((*yyvalp).intval) = 10000 + (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval); }
#line 3310 "glrmysql.tab.c"
    break;

  case 180: /* data_type: SMALLINT opt_length opt_uz  */
#line 717 "glrmysql.y"
                                { ((*yyvalp).intval) = 20000 + (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) + (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval); }
#line 3316 "glrmysql.tab.c"
    break;

  case 181: /* data_type: MEDIUMINT opt_length opt_uz  */
#line 718 "glrmysql.y"
                                 { ((*yyvalp).intval) = 30000 + (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) + (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval); }
#line 3322 "glrmysql.tab.c"
    break;

  case 182: /* data_type: INT opt_length opt_uz  */
#line 719 "glrmysql.y"
                           { ((*yyvalp).intval) = 40000 + (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) + (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval); }
#line 3328 "glrmysql.tab.c"
    break;

  case 183: /* data_type: INTEGER opt_length opt_uz  */
#line 720 "glrmysql.y"
                               { ((*yyvalp).intval) = 50000 + (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) + (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval); }
#line 3334 "glrmysql.tab.c"
    break;

  case 184: /* data_type: BIGINT opt_length opt_uz  */
#line 721 "glrmysql.y"
                              { ((*yyvalp).intval) = 60000 + (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) + (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval); }
#line 3340 "glrmysql.tab.c"
    break;

  case 185: /* data_type: REAL opt_length opt_uz  */
#line 722 "glrmysql.y"
                            { ((*yyvalp).intval) = 70000 + (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) + (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval); }
#line 3346 "glrmysql.tab.c"
    break;

  case 186: /* data_type: DOUBLE opt_length opt_uz  */
#line 723 "glrmysql.y"
                              { ((*yyvalp).intval) = 80000 + (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) + (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval); }
#line 3352 "glrmysql.tab.c"
    break;

  case 187: /* data_type: FLOAT opt_length opt_uz  */
#line 724 "glrmysql.y"
                             { ((*yyvalp).intval) = 90000 + (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) + (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval); }
#line 3358 "glrmysql.tab.c"
    break;

  case 188: /* data_type: DECIMAL opt_length opt_uz  */
#line 725 "glrmysql.y"
                               { ((*yyvalp).intval) = 110000 + (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval) + (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval); }
#line 3364 "glrmysql.tab.c"
    break;

  case 189: /* data_type: DATE  */
#line 726 "glrmysql.y"
          { ((*yyvalp).intval) = 100001; }
#line 3370 "glrmysql.tab.c"
    break;

  case 190: /* data_type: TIME  */
#line 727 "glrmysql.y"
          { ((*yyvalp).intval) = 100002; }
#line 3376 "glrmysql.tab.c"
    break;

  case 191: /* data_type: TIMESTAMP  */
#line 728 "glrmysql.y"
               { ((*yyvalp).intval) = 100003; }
#line 3382 "glrmysql.tab.c"
    break;

  case 192: /* data_type: DATETIME  */
#line 729 "glrmysql.y"
              { ((*yyvalp).intval) = 100004; }
#line 3388 "glrmysql.tab.c"
    break;

  case 193: /* data_type: YEAR  */
#line 730 "glrmysql.y"
          { ((*yyvalp).intval) = 100005; }
#line 3394 "glrmysql.tab.c"
    break;

  case 194: /* data_type: CHAR opt_length opt_csc  */
#line 731 "glrmysql.y"
                             { ((*yyvalp).intval) = 120000 + (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval); }
#line 3400 "glrmysql.tab.c"
    break;

  case 195: /* data_type: VARCHAR '(' INTNUM ')' opt_csc  */
#line 732 "glrmysql.y"
                                    { ((*yyvalp).intval) = 130000 + (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval); }
#line 3406 "glrmysql.tab.c"
    break;

  case 196: /* data_type: BINARY opt_length  */
#line 733 "glrmysql.y"
                       { ((*yyvalp).intval) = 140000 + (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval); }
#line 3412 "glrmysql.tab.c"
    break;

  case 197: /* data_type: VARBINARY '(' INTNUM ')'  */
#line 734 "glrmysql.y"
                              { ((*yyvalp).intval) = 150000 + (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval); }
#line 3418 "glrmysql.tab.c"
    break;

  case 198: /* data_type: TINYBLOB  */
#line 735 "glrmysql.y"
              { ((*yyvalp).intval) = 160001; }
#line 3424 "glrmysql.tab.c"
    break;

  case 199: /* data_type: BLOB  */
#line 736 "glrmysql.y"
          { ((*yyvalp).intval) = 160002; }
#line 3430 "glrmysql.tab.c"
    break;

  case 200: /* data_type: MEDIUMBLOB  */
#line 737 "glrmysql.y"
                { ((*yyvalp).intval) = 160003; }
#line 3436 "glrmysql.tab.c"
    break;

  case 201: /* data_type: LONGBLOB  */
#line 738 "glrmysql.y"
              { ((*yyvalp).intval) = 160004; }
#line 3442 "glrmysql.tab.c"
    break;

  case 202: /* data_type: TINYTEXT opt_binary opt_csc  */
#line 739 "glrmysql.y"
                                 { ((*yyvalp).intval) = 170000 + (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval); }
#line 3448 "glrmysql.tab.c"
    break;

  case 203: /* data_type: TEXT opt_binary opt_csc  */
#line 740 "glrmysql.y"
                             { ((*yyvalp).intval) = 171000 + (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval); }
#line 3454 "glrmysql.tab.c"
    break;

  case 204: /* data_type: MEDIUMTEXT opt_binary opt_csc  */
#line 741 "glrmysql.y"
                                   { ((*yyvalp).intval) = 172000 + (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval); }
#line 3460 "glrmysql.tab.c"
    break;

  case 205: /* data_type: LONGTEXT opt_binary opt_csc  */
#line 742 "glrmysql.y"
                                 { ((*yyvalp).intval) = 173000 + (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval); }
#line 3466 "glrmysql.tab.c"
    break;

  case 206: /* data_type: ENUM '(' enum_list ')' opt_csc  */
#line 743 "glrmysql.y"
                                    { ((*yyvalp).intval) = 200000 + (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval); }
#line 3472 "glrmysql.tab.c"
    break;

  case 207: /* data_type: SET '(' enum_list ')' opt_csc  */
#line 744 "glrmysql.y"
                                   { ((*yyvalp).intval) = 210000 + (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval); }
#line 3478 "glrmysql.tab.c"
    break;

  case 208: /* enum_list: STRING  */
#line 747 "glrmysql.y"
                  { emit("ENUMVAL %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); ((*yyvalp).intval) = 1; }
#line 3484 "glrmysql.tab.c"
    break;

  case 209: /* enum_list: enum_list ',' STRING  */
#line 748 "glrmysql.y"
                          { emit("ENUMVAL %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval) + 1; }
#line 3490 "glrmysql.tab.c"
    break;

  case 210: /* create_select_statement: opt_ignore_replace opt_as select_stmt  */
#line 751 "glrmysql.y"
                                                               { emit("CREATESELECT %d", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.intval)); }
#line 3496 "glrmysql.tab.c"
    break;

  case 211: /* opt_ignore_replace: %empty  */
#line 754 "glrmysql.y"
                              { ((*yyvalp).intval) = 0; }
#line 3502 "glrmysql.tab.c"
    break;

  case 212: /* opt_ignore_replace: IGNORE  */
#line 755 "glrmysql.y"
            { ((*yyvalp).intval) = 1; }
#line 3508 "glrmysql.tab.c"
    break;

  case 213: /* opt_ignore_replace: REPLACE  */
#line 756 "glrmysql.y"
             { ((*yyvalp).intval) = 2; }
#line 3514 "glrmysql.tab.c"
    break;

  case 214: /* opt_temporary: %empty  */
#line 759 "glrmysql.y"
                           { ((*yyvalp).intval) = 0; }
#line 3520 "glrmysql.tab.c"
    break;

  case 215: /* opt_temporary: TEMPORARY  */
#line 760 "glrmysql.y"
               { ((*yyvalp).intval) = 1;}
#line 3526 "glrmysql.tab.c"
    break;

  case 216: /* stmt: set_stmt  */
#line 765 "glrmysql.y"
               { emit("STMT"); }
#line 3532 "glrmysql.tab.c"
    break;

  case 220: /* set_expr: USERVAR COMPARISON expr  */
#line 773 "glrmysql.y"
                              { if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.subtok) != 4) yyerror("bad set to @%s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval));
		 emit("SET %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); }
#line 3539 "glrmysql.tab.c"
    break;

  case 221: /* set_expr: USERVAR ASSIGN expr  */
#line 775 "glrmysql.y"
                          { emit("SET %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); }
#line 3545 "glrmysql.tab.c"
    break;

  case 222: /* expr: NAME  */
#line 780 "glrmysql.y"
                    { emit("NAME %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); }
#line 3551 "glrmysql.tab.c"
    break;

  case 223: /* expr: USERVAR  */
#line 781 "glrmysql.y"
                     { emit("USERVAR %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); }
#line 3557 "glrmysql.tab.c"
    break;

  case 224: /* expr: NAME '.' NAME  */
#line 782 "glrmysql.y"
                   { emit("FIELDNAME %s.%s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); }
#line 3563 "glrmysql.tab.c"
    break;

  case 225: /* expr: STRING  */
#line 783 "glrmysql.y"
                   { emit("STRING %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.strval)); }
#line 3569 "glrmysql.tab.c"
    break;

  case 226: /* expr: INTNUM  */
#line 784 "glrmysql.y"
                   { emit("NUMBER %d", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval)); }
#line 3575 "glrmysql.tab.c"
    break;

  case 227: /* expr: APPROXNUM  */
#line 785 "glrmysql.y"
                   { emit("FLOAT %g", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.floatval)); }
#line 3581 "glrmysql.tab.c"
    break;

  case 228: /* expr: BOOL  */
#line 786 "glrmysql.y"
                   { emit("BOOL %d", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval)); }
#line 3587 "glrmysql.tab.c"
    break;

  case 229: /* expr: expr '+' expr  */
#line 789 "glrmysql.y"
                    { emit("ADD"); }
#line 3593 "glrmysql.tab.c"
    break;

  case 230: /* expr: expr '-' expr  */
#line 790 "glrmysql.y"
                   { emit("SUB"); }
#line 3599 "glrmysql.tab.c"
    break;

  case 231: /* expr: expr '*' expr  */
#line 791 "glrmysql.y"
                   { emit("MUL"); }
#line 3605 "glrmysql.tab.c"
    break;

  case 232: /* expr: expr '/' expr  */
#line 792 "glrmysql.y"
                   { emit("DIV"); }
#line 3611 "glrmysql.tab.c"
    break;

  case 233: /* expr: expr '%' expr  */
#line 793 "glrmysql.y"
                   { emit("MOD"); }
#line 3617 "glrmysql.tab.c"
    break;

  case 234: /* expr: expr MOD expr  */
#line 794 "glrmysql.y"
                   { emit("MOD"); }
#line 3623 "glrmysql.tab.c"
    break;

  case 235: /* expr: '-' expr  */
#line 795 "glrmysql.y"
                           { emit("NEG"); }
#line 3629 "glrmysql.tab.c"
    break;

  case 236: /* expr: expr ANDOP expr  */
#line 796 "glrmysql.y"
                     { emit("AND"); }
#line 3635 "glrmysql.tab.c"
    break;

  case 237: /* expr: expr OR expr  */
#line 797 "glrmysql.y"
                  { emit("OR"); }
#line 3641 "glrmysql.tab.c"
    break;

  case 238: /* expr: expr XOR expr  */
#line 798 "glrmysql.y"
                   { emit("XOR"); }
#line 3647 "glrmysql.tab.c"
    break;

  case 239: /* expr: expr COMPARISON expr  */
#line 799 "glrmysql.y"
                          { emit("CMP %d", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.subtok)); }
#line 3653 "glrmysql.tab.c"
    break;

  case 240: /* expr: expr COMPARISON '(' select_stmt ')'  */
#line 800 "glrmysql.y"
                                         { emit("CMPSELECT %d", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.subtok)); }
#line 3659 "glrmysql.tab.c"
    break;

  case 241: /* expr: expr COMPARISON ANY '(' select_stmt ')'  */
#line 801 "glrmysql.y"
                                             { emit("CMPANYSELECT %d", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.subtok)); }
#line 3665 "glrmysql.tab.c"
    break;

  case 242: /* expr: expr COMPARISON SOME '(' select_stmt ')'  */
#line 802 "glrmysql.y"
                                              { emit("CMPANYSELECT %d", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.subtok)); }
#line 3671 "glrmysql.tab.c"
    break;

  case 243: /* expr: expr COMPARISON ALL '(' select_stmt ')'  */
#line 803 "glrmysql.y"
                                             { emit("CMPALLSELECT %d", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.subtok)); }
#line 3677 "glrmysql.tab.c"
    break;

  case 244: /* expr: expr '|' expr  */
#line 804 "glrmysql.y"
                   { emit("BITOR"); }
#line 3683 "glrmysql.tab.c"
    break;

  case 245: /* expr: expr '&' expr  */
#line 805 "glrmysql.y"
                   { emit("BITAND"); }
#line 3689 "glrmysql.tab.c"
    break;

  case 246: /* expr: expr '^' expr  */
#line 806 "glrmysql.y"
                   { emit("BITXOR"); }
#line 3695 "glrmysql.tab.c"
    break;

  case 247: /* expr: expr SHIFT expr  */
#line 807 "glrmysql.y"
                     { emit("SHIFT %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.subtok)==1?"left":"right"); }
#line 3701 "glrmysql.tab.c"
    break;

  case 248: /* expr: NOT expr  */
#line 808 "glrmysql.y"
              { emit("NOT"); }
#line 3707 "glrmysql.tab.c"
    break;

  case 249: /* expr: '!' expr  */
#line 809 "glrmysql.y"
              { emit("NOT"); }
#line 3713 "glrmysql.tab.c"
    break;

  case 250: /* expr: USERVAR ASSIGN expr  */
#line 810 "glrmysql.y"
                         { emit("ASSIGN @%s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.strval)); }
#line 3719 "glrmysql.tab.c"
    break;

  case 251: /* expr: expr IS NULLX  */
#line 813 "glrmysql.y"
                         { emit("ISNULL"); }
#line 3725 "glrmysql.tab.c"
    break;

  case 252: /* expr: expr IS NOT NULLX  */
#line 814 "glrmysql.y"
                         { emit("ISNULL"); emit("NOT"); }
#line 3731 "glrmysql.tab.c"
    break;

  case 253: /* expr: expr IS BOOL  */
#line 815 "glrmysql.y"
                         { emit("ISBOOL %d", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval)); }
#line 3737 "glrmysql.tab.c"
    break;

  case 254: /* expr: expr IS NOT BOOL  */
#line 816 "glrmysql.y"
                         { emit("ISBOOL %d", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval)); emit("NOT"); }
#line 3743 "glrmysql.tab.c"
    break;

  case 255: /* expr: expr BETWEEN expr AND expr  */
#line 819 "glrmysql.y"
                                               { emit("BETWEEN"); }
#line 3749 "glrmysql.tab.c"
    break;

  case 256: /* val_list: expr  */
#line 823 "glrmysql.y"
               { ((*yyvalp).intval) = 1; }
#line 3755 "glrmysql.tab.c"
    break;

  case 257: /* val_list: expr ',' val_list  */
#line 824 "glrmysql.y"
                       { ((*yyvalp).intval) = 1 + (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.intval); }
#line 3761 "glrmysql.tab.c"
    break;

  case 258: /* opt_val_list: %empty  */
#line 827 "glrmysql.y"
                        { ((*yyvalp).intval) = 0; }
#line 3767 "glrmysql.tab.c"
    break;

  case 260: /* expr: expr IN '(' val_list ')'  */
#line 831 "glrmysql.y"
                                     { emit("ISIN %d", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval)); }
#line 3773 "glrmysql.tab.c"
    break;

  case 261: /* expr: expr NOT IN '(' val_list ')'  */
#line 832 "glrmysql.y"
                                     { emit("ISIN %d", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval)); emit("NOT"); }
#line 3779 "glrmysql.tab.c"
    break;

  case 262: /* expr: expr IN '(' select_stmt ')'  */
#line 833 "glrmysql.y"
                                     { emit("INSELECT"); }
#line 3785 "glrmysql.tab.c"
    break;

  case 263: /* expr: expr NOT IN '(' select_stmt ')'  */
#line 834 "glrmysql.y"
                                     { emit("INSELECT"); emit("NOT"); }
#line 3791 "glrmysql.tab.c"
    break;

  case 264: /* expr: EXISTS '(' select_stmt ')'  */
#line 835 "glrmysql.y"
                                     { emit("EXISTS 1"); }
#line 3797 "glrmysql.tab.c"
    break;

  case 265: /* expr: NOT EXISTS '(' select_stmt ')'  */
#line 836 "glrmysql.y"
                                     { emit("EXISTS 0"); }
#line 3803 "glrmysql.tab.c"
    break;

  case 266: /* expr: NAME '(' opt_val_list ')'  */
#line 839 "glrmysql.y"
                                {  emit("CALL %d %s", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.strval)); free((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.strval)); }
#line 3809 "glrmysql.tab.c"
    break;

  case 267: /* expr: FCOUNT '(' '*' ')'  */
#line 843 "glrmysql.y"
                         { emit("COUNTALL"); }
#line 3815 "glrmysql.tab.c"
    break;

  case 268: /* expr: FCOUNT '(' expr ')'  */
#line 844 "glrmysql.y"
                         { emit(" CALL 1 COUNT"); }
#line 3821 "glrmysql.tab.c"
    break;

  case 269: /* expr: FSUBSTRING '(' val_list ')'  */
#line 846 "glrmysql.y"
                                  {  emit("CALL %d SUBSTR", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval));}
#line 3827 "glrmysql.tab.c"
    break;

  case 270: /* expr: FSUBSTRING '(' expr FROM expr ')'  */
#line 847 "glrmysql.y"
                                       {  emit("CALL 2 SUBSTR"); }
#line 3833 "glrmysql.tab.c"
    break;

  case 271: /* expr: FSUBSTRING '(' expr FROM expr FOR expr ')'  */
#line 848 "glrmysql.y"
                                                {  emit("CALL 3 SUBSTR"); }
#line 3839 "glrmysql.tab.c"
    break;

  case 272: /* expr: FTRIM '(' val_list ')'  */
#line 849 "glrmysql.y"
                         { emit("CALL %d TRIM", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval)); }
#line 3845 "glrmysql.tab.c"
    break;

  case 273: /* expr: FTRIM '(' trim_ltb expr FROM val_list ')'  */
#line 850 "glrmysql.y"
                                               { emit("CALL 3 TRIM"); }
#line 3851 "glrmysql.tab.c"
    break;

  case 274: /* trim_ltb: LEADING  */
#line 853 "glrmysql.y"
                  { emit("INT 1"); }
#line 3857 "glrmysql.tab.c"
    break;

  case 275: /* trim_ltb: TRAILING  */
#line 854 "glrmysql.y"
              { emit("INT 2"); }
#line 3863 "glrmysql.tab.c"
    break;

  case 276: /* trim_ltb: BOTH  */
#line 855 "glrmysql.y"
          { emit("INT 3"); }
#line 3869 "glrmysql.tab.c"
    break;

  case 277: /* expr: FDATE_ADD '(' expr ',' interval_exp ')'  */
#line 858 "glrmysql.y"
                                              { emit("CALL 3 DATE_ADD"); }
#line 3875 "glrmysql.tab.c"
    break;

  case 278: /* expr: FDATE_SUB '(' expr ',' interval_exp ')'  */
#line 859 "glrmysql.y"
                                              { emit("CALL 3 DATE_SUB"); }
#line 3881 "glrmysql.tab.c"
    break;

  case 279: /* interval_exp: INTERVAL expr DAY_HOUR  */
#line 862 "glrmysql.y"
                                     { emit("NUMBER 1"); }
#line 3887 "glrmysql.tab.c"
    break;

  case 280: /* interval_exp: INTERVAL expr DAY_MICROSECOND  */
#line 863 "glrmysql.y"
                                   { emit("NUMBER 2"); }
#line 3893 "glrmysql.tab.c"
    break;

  case 281: /* interval_exp: INTERVAL expr DAY_MINUTE  */
#line 864 "glrmysql.y"
                              { emit("NUMBER 3"); }
#line 3899 "glrmysql.tab.c"
    break;

  case 282: /* interval_exp: INTERVAL expr DAY_SECOND  */
#line 865 "glrmysql.y"
                              { emit("NUMBER 4"); }
#line 3905 "glrmysql.tab.c"
    break;

  case 283: /* interval_exp: INTERVAL expr YEAR_MONTH  */
#line 866 "glrmysql.y"
                              { emit("NUMBER 5"); }
#line 3911 "glrmysql.tab.c"
    break;

  case 284: /* interval_exp: INTERVAL expr YEAR  */
#line 867 "glrmysql.y"
                              { emit("NUMBER 6"); }
#line 3917 "glrmysql.tab.c"
    break;

  case 285: /* interval_exp: INTERVAL expr HOUR_MICROSECOND  */
#line 868 "glrmysql.y"
                                    { emit("NUMBER 7"); }
#line 3923 "glrmysql.tab.c"
    break;

  case 286: /* interval_exp: INTERVAL expr HOUR_MINUTE  */
#line 869 "glrmysql.y"
                               { emit("NUMBER 8"); }
#line 3929 "glrmysql.tab.c"
    break;

  case 287: /* interval_exp: INTERVAL expr HOUR_SECOND  */
#line 870 "glrmysql.y"
                               { emit("NUMBER 9"); }
#line 3935 "glrmysql.tab.c"
    break;

  case 288: /* expr: CASE expr case_list END  */
#line 873 "glrmysql.y"
                                        { emit("CASEVAL %d 0", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval)); }
#line 3941 "glrmysql.tab.c"
    break;

  case 289: /* expr: CASE expr case_list ELSE expr END  */
#line 874 "glrmysql.y"
                                        { emit("CASEVAL %d 1", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.intval)); }
#line 3947 "glrmysql.tab.c"
    break;

  case 290: /* expr: CASE case_list END  */
#line 875 "glrmysql.y"
                                        { emit("CASE %d 0", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.intval)); }
#line 3953 "glrmysql.tab.c"
    break;

  case 291: /* expr: CASE case_list ELSE expr END  */
#line 876 "glrmysql.y"
                                        { emit("CASE %d 1", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.intval)); }
#line 3959 "glrmysql.tab.c"
    break;

  case 292: /* case_list: WHEN expr THEN expr  */
#line 879 "glrmysql.y"
                                   { ((*yyvalp).intval) = 1; }
#line 3965 "glrmysql.tab.c"
    break;

  case 293: /* case_list: case_list WHEN expr THEN expr  */
#line 880 "glrmysql.y"
                                         { ((*yyvalp).intval) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.intval)+1; }
#line 3971 "glrmysql.tab.c"
    break;

  case 294: /* expr: expr LIKE expr  */
#line 883 "glrmysql.y"
                     { emit("LIKE"); }
#line 3977 "glrmysql.tab.c"
    break;

  case 295: /* expr: expr NOT LIKE expr  */
#line 884 "glrmysql.y"
                        { emit("LIKE"); emit("NOT"); }
#line 3983 "glrmysql.tab.c"
    break;

  case 296: /* expr: expr REGEXP expr  */
#line 887 "glrmysql.y"
                       { emit("REGEXP"); }
#line 3989 "glrmysql.tab.c"
    break;

  case 297: /* expr: expr NOT REGEXP expr  */
#line 888 "glrmysql.y"
                          { emit("REGEXP"); emit("NOT"); }
#line 3995 "glrmysql.tab.c"
    break;

  case 298: /* expr: CURRENT_TIMESTAMP  */
#line 891 "glrmysql.y"
                        { emit("NOW"); }
#line 4001 "glrmysql.tab.c"
    break;

  case 299: /* expr: CURRENT_DATE  */
#line 892 "glrmysql.y"
                        { emit("NOW"); }
#line 4007 "glrmysql.tab.c"
    break;

  case 300: /* expr: CURRENT_TIME  */
#line 893 "glrmysql.y"
                        { emit("NOW"); }
#line 4013 "glrmysql.tab.c"
    break;

  case 301: /* expr: BINARY expr  */
#line 896 "glrmysql.y"
                               { emit("STRTOBIN"); }
#line 4019 "glrmysql.tab.c"
    break;


#line 4023 "glrmysql.tab.c"

      default: break;
    }

  return yyok;
# undef yyerrok
# undef YYABORT
# undef YYACCEPT
# undef YYERROR
# undef YYBACKUP
# undef yyclearin
# undef YYRECOVERING
}


static void
yyuserMerge (int yyn, YYSTYPE* yy0, YYSTYPE* yy1)
{
  YYUSE (yy0);
  YYUSE (yy1);

  switch (yyn)
    {

      default: break;
    }
}

                              /* Bison grammar-table manipulation.  */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}

/** Number of symbols composing the right hand side of rule #RULE.  */
static inline int
yyrhsLength (yyRuleNum yyrule)
{
  return yyr2[yyrule];
}

static void
yydestroyGLRState (char const *yymsg, yyGLRState *yys)
{
  if (yys->yyresolved)
    yydestruct (yymsg, yy_accessing_symbol (yys->yylrState),
                &yys->yysemantics.yysval);
  else
    {
#if YYDEBUG
      if (yydebug)
        {
          if (yys->yysemantics.yyfirstVal)
            YY_FPRINTF ((stderr, "%s unresolved", yymsg));
          else
            YY_FPRINTF ((stderr, "%s incomplete", yymsg));
          YY_SYMBOL_PRINT ("", yy_accessing_symbol (yys->yylrState), YY_NULLPTR, &yys->yyloc);
        }
#endif

      if (yys->yysemantics.yyfirstVal)
        {
          yySemanticOption *yyoption = yys->yysemantics.yyfirstVal;
          yyGLRState *yyrh;
          int yyn;
          for (yyrh = yyoption->yystate, yyn = yyrhsLength (yyoption->yyrule);
               yyn > 0;
               yyrh = yyrh->yypred, yyn -= 1)
            yydestroyGLRState (yymsg, yyrh);
        }
    }
}

/** Left-hand-side symbol for rule #YYRULE.  */
static inline yysymbol_kind_t
yylhsNonterm (yyRuleNum yyrule)
{
  return YY_CAST (yysymbol_kind_t, yyr1[yyrule]);
}

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

/** True iff LR state YYSTATE has only a default reduction (regardless
 *  of token).  */
static inline yybool
yyisDefaultedState (yy_state_t yystate)
{
  return yypact_value_is_default (yypact[yystate]);
}

/** The default reduction for YYSTATE, assuming it has one.  */
static inline yyRuleNum
yydefaultAction (yy_state_t yystate)
{
  return yydefact[yystate];
}

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/** The action to take in YYSTATE on seeing YYTOKEN.
 *  Result R means
 *    R < 0:  Reduce on rule -R.
 *    R = 0:  Error.
 *    R > 0:  Shift to state R.
 *  Set *YYCONFLICTS to a pointer into yyconfl to a 0-terminated list
 *  of conflicting reductions.
 */
static inline int
yygetLRActions (yy_state_t yystate, yysymbol_kind_t yytoken, const short** yyconflicts)
{
  int yyindex = yypact[yystate] + yytoken;
  if (yytoken == YYSYMBOL_YYerror)
    {
      // This is the error token.
      *yyconflicts = yyconfl;
      return 0;
    }
  else if (yyisDefaultedState (yystate)
           || yyindex < 0 || YYLAST < yyindex || yycheck[yyindex] != yytoken)
    {
      *yyconflicts = yyconfl;
      return -yydefact[yystate];
    }
  else if (! yytable_value_is_error (yytable[yyindex]))
    {
      *yyconflicts = yyconfl + yyconflp[yyindex];
      return yytable[yyindex];
    }
  else
    {
      *yyconflicts = yyconfl + yyconflp[yyindex];
      return 0;
    }
}

/** Compute post-reduction state.
 * \param yystate   the current state
 * \param yysym     the nonterminal to push on the stack
 */
static inline yy_state_t
yyLRgotoState (yy_state_t yystate, yysymbol_kind_t yysym)
{
  int yyr = yypgoto[yysym - YYNTOKENS] + yystate;
  if (0 <= yyr && yyr <= YYLAST && yycheck[yyr] == yystate)
    return yytable[yyr];
  else
    return yydefgoto[yysym - YYNTOKENS];
}

static inline yybool
yyisShiftAction (int yyaction)
{
  return 0 < yyaction;
}

static inline yybool
yyisErrorAction (int yyaction)
{
  return yyaction == 0;
}

                                /* GLRStates */

/** Return a fresh GLRStackItem in YYSTACKP.  The item is an LR state
 *  if YYISSTATE, and otherwise a semantic option.  Callers should call
 *  YY_RESERVE_GLRSTACK afterwards to make sure there is sufficient
 *  headroom.  */

static inline yyGLRStackItem*
yynewGLRStackItem (yyGLRStack* yystackp, yybool yyisState)
{
  yyGLRStackItem* yynewItem = yystackp->yynextFree;
  yystackp->yyspaceLeft -= 1;
  yystackp->yynextFree += 1;
  yynewItem->yystate.yyisState = yyisState;
  return yynewItem;
}

/** Add a new semantic action that will execute the action for rule
 *  YYRULE on the semantic values in YYRHS to the list of
 *  alternative actions for YYSTATE.  Assumes that YYRHS comes from
 *  stack #YYK of *YYSTACKP. */
static void
yyaddDeferredAction (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yyGLRState* yystate,
                     yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yySemanticOption* yynewOption =
    &yynewGLRStackItem (yystackp, yyfalse)->yyoption;
  YY_ASSERT (!yynewOption->yyisState);
  yynewOption->yystate = yyrhs;
  yynewOption->yyrule = yyrule;
  if (yystackp->yytops.yylookaheadNeeds[yyk])
    {
      yynewOption->yyrawchar = yychar;
      yynewOption->yyval = yylval;
    }
  else
    yynewOption->yyrawchar = YYEMPTY;
  yynewOption->yynext = yystate->yysemantics.yyfirstVal;
  yystate->yysemantics.yyfirstVal = yynewOption;

  YY_RESERVE_GLRSTACK (yystackp);
}

                                /* GLRStacks */

/** Initialize YYSET to a singleton set containing an empty stack.  */
static yybool
yyinitStateSet (yyGLRStateSet* yyset)
{
  yyset->yysize = 1;
  yyset->yycapacity = 16;
  yyset->yystates
    = YY_CAST (yyGLRState**,
               YYMALLOC (YY_CAST (YYSIZE_T, yyset->yycapacity)
                         * sizeof yyset->yystates[0]));
  if (! yyset->yystates)
    return yyfalse;
  yyset->yystates[0] = YY_NULLPTR;
  yyset->yylookaheadNeeds
    = YY_CAST (yybool*,
               YYMALLOC (YY_CAST (YYSIZE_T, yyset->yycapacity)
                         * sizeof yyset->yylookaheadNeeds[0]));
  if (! yyset->yylookaheadNeeds)
    {
      YYFREE (yyset->yystates);
      return yyfalse;
    }
  memset (yyset->yylookaheadNeeds,
          0,
          YY_CAST (YYSIZE_T, yyset->yycapacity) * sizeof yyset->yylookaheadNeeds[0]);
  return yytrue;
}

static void yyfreeStateSet (yyGLRStateSet* yyset)
{
  YYFREE (yyset->yystates);
  YYFREE (yyset->yylookaheadNeeds);
}

/** Initialize *YYSTACKP to a single empty stack, with total maximum
 *  capacity for all stacks of YYSIZE.  */
static yybool
yyinitGLRStack (yyGLRStack* yystackp, YYPTRDIFF_T yysize)
{
  yystackp->yyerrState = 0;
  yynerrs = 0;
  yystackp->yyspaceLeft = yysize;
  yystackp->yyitems
    = YY_CAST (yyGLRStackItem*,
               YYMALLOC (YY_CAST (YYSIZE_T, yysize)
                         * sizeof yystackp->yynextFree[0]));
  if (!yystackp->yyitems)
    return yyfalse;
  yystackp->yynextFree = yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;
  return yyinitStateSet (&yystackp->yytops);
}


#if YYSTACKEXPANDABLE
# define YYRELOC(YYFROMITEMS, YYTOITEMS, YYX, YYTYPE)                   \
  &((YYTOITEMS)                                                         \
    - ((YYFROMITEMS) - YY_REINTERPRET_CAST (yyGLRStackItem*, (YYX))))->YYTYPE

/** If *YYSTACKP is expandable, extend it.  WARNING: Pointers into the
    stack from outside should be considered invalid after this call.
    We always expand when there are 1 or fewer items left AFTER an
    allocation, so that we can avoid having external pointers exist
    across an allocation.  */
static void
yyexpandGLRStack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yynewItems;
  yyGLRStackItem* yyp0, *yyp1;
  YYPTRDIFF_T yynewSize;
  YYPTRDIFF_T yyn;
  YYPTRDIFF_T yysize = yystackp->yynextFree - yystackp->yyitems;
  if (YYMAXDEPTH - YYHEADROOM < yysize)
    yyMemoryExhausted (yystackp);
  yynewSize = 2*yysize;
  if (YYMAXDEPTH < yynewSize)
    yynewSize = YYMAXDEPTH;
  yynewItems
    = YY_CAST (yyGLRStackItem*,
               YYMALLOC (YY_CAST (YYSIZE_T, yynewSize)
                         * sizeof yynewItems[0]));
  if (! yynewItems)
    yyMemoryExhausted (yystackp);
  for (yyp0 = yystackp->yyitems, yyp1 = yynewItems, yyn = yysize;
       0 < yyn;
       yyn -= 1, yyp0 += 1, yyp1 += 1)
    {
      *yyp1 = *yyp0;
      if (*YY_REINTERPRET_CAST (yybool *, yyp0))
        {
          yyGLRState* yys0 = &yyp0->yystate;
          yyGLRState* yys1 = &yyp1->yystate;
          if (yys0->yypred != YY_NULLPTR)
            yys1->yypred =
              YYRELOC (yyp0, yyp1, yys0->yypred, yystate);
          if (! yys0->yyresolved && yys0->yysemantics.yyfirstVal != YY_NULLPTR)
            yys1->yysemantics.yyfirstVal =
              YYRELOC (yyp0, yyp1, yys0->yysemantics.yyfirstVal, yyoption);
        }
      else
        {
          yySemanticOption* yyv0 = &yyp0->yyoption;
          yySemanticOption* yyv1 = &yyp1->yyoption;
          if (yyv0->yystate != YY_NULLPTR)
            yyv1->yystate = YYRELOC (yyp0, yyp1, yyv0->yystate, yystate);
          if (yyv0->yynext != YY_NULLPTR)
            yyv1->yynext = YYRELOC (yyp0, yyp1, yyv0->yynext, yyoption);
        }
    }
  if (yystackp->yysplitPoint != YY_NULLPTR)
    yystackp->yysplitPoint = YYRELOC (yystackp->yyitems, yynewItems,
                                      yystackp->yysplitPoint, yystate);

  for (yyn = 0; yyn < yystackp->yytops.yysize; yyn += 1)
    if (yystackp->yytops.yystates[yyn] != YY_NULLPTR)
      yystackp->yytops.yystates[yyn] =
        YYRELOC (yystackp->yyitems, yynewItems,
                 yystackp->yytops.yystates[yyn], yystate);
  YYFREE (yystackp->yyitems);
  yystackp->yyitems = yynewItems;
  yystackp->yynextFree = yynewItems + yysize;
  yystackp->yyspaceLeft = yynewSize - yysize;
}
#endif

static void
yyfreeGLRStack (yyGLRStack* yystackp)
{
  YYFREE (yystackp->yyitems);
  yyfreeStateSet (&yystackp->yytops);
}

/** Assuming that YYS is a GLRState somewhere on *YYSTACKP, update the
 *  splitpoint of *YYSTACKP, if needed, so that it is at least as deep as
 *  YYS.  */
static inline void
yyupdateSplit (yyGLRStack* yystackp, yyGLRState* yys)
{
  if (yystackp->yysplitPoint != YY_NULLPTR && yystackp->yysplitPoint > yys)
    yystackp->yysplitPoint = yys;
}

/** Invalidate stack #YYK in *YYSTACKP.  */
static inline void
yymarkStackDeleted (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
{
  if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    yystackp->yylastDeleted = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yystates[yyk] = YY_NULLPTR;
}

/** Undelete the last stack in *YYSTACKP that was marked as deleted.  Can
    only be done once after a deletion, and only when all other stacks have
    been deleted.  */
static void
yyundeleteLastStack (yyGLRStack* yystackp)
{
  if (yystackp->yylastDeleted == YY_NULLPTR || yystackp->yytops.yysize != 0)
    return;
  yystackp->yytops.yystates[0] = yystackp->yylastDeleted;
  yystackp->yytops.yysize = 1;
  YY_DPRINTF ((stderr, "Restoring last deleted stack as stack #0.\n"));
  yystackp->yylastDeleted = YY_NULLPTR;
}

static inline void
yyremoveDeletes (yyGLRStack* yystackp)
{
  YYPTRDIFF_T yyi, yyj;
  yyi = yyj = 0;
  while (yyj < yystackp->yytops.yysize)
    {
      if (yystackp->yytops.yystates[yyi] == YY_NULLPTR)
        {
          if (yyi == yyj)
            YY_DPRINTF ((stderr, "Removing dead stacks.\n"));
          yystackp->yytops.yysize -= 1;
        }
      else
        {
          yystackp->yytops.yystates[yyj] = yystackp->yytops.yystates[yyi];
          /* In the current implementation, it's unnecessary to copy
             yystackp->yytops.yylookaheadNeeds[yyi] since, after
             yyremoveDeletes returns, the parser immediately either enters
             deterministic operation or shifts a token.  However, it doesn't
             hurt, and the code might evolve to need it.  */
          yystackp->yytops.yylookaheadNeeds[yyj] =
            yystackp->yytops.yylookaheadNeeds[yyi];
          if (yyj != yyi)
            YY_DPRINTF ((stderr, "Rename stack %ld -> %ld.\n",
                        YY_CAST (long, yyi), YY_CAST (long, yyj)));
          yyj += 1;
        }
      yyi += 1;
    }
}

/** Shift to a new state on stack #YYK of *YYSTACKP, corresponding to LR
 * state YYLRSTATE, at input position YYPOSN, with (resolved) semantic
 * value *YYVALP and source location *YYLOCP.  */
static inline void
yyglrShift (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yy_state_t yylrState,
            YYPTRDIFF_T yyposn,
            YYSTYPE* yyvalp)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yytrue;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yysval = *yyvalp;
  yystackp->yytops.yystates[yyk] = yynewState;

  YY_RESERVE_GLRSTACK (yystackp);
}

/** Shift stack #YYK of *YYSTACKP, to a new state corresponding to LR
 *  state YYLRSTATE, at input position YYPOSN, with the (unresolved)
 *  semantic value of YYRHS under the action for YYRULE.  */
static inline void
yyglrShiftDefer (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yy_state_t yylrState,
                 YYPTRDIFF_T yyposn, yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;
  YY_ASSERT (yynewState->yyisState);

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yyfalse;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyfirstVal = YY_NULLPTR;
  yystackp->yytops.yystates[yyk] = yynewState;

  /* Invokes YY_RESERVE_GLRSTACK.  */
  yyaddDeferredAction (yystackp, yyk, yynewState, yyrhs, yyrule);
}

#if !YYDEBUG
# define YY_REDUCE_PRINT(Args)
#else
# define YY_REDUCE_PRINT(Args)          \
  do {                                  \
    if (yydebug)                        \
      yy_reduce_print Args;             \
  } while (0)

/*----------------------------------------------------------------------.
| Report that stack #YYK of *YYSTACKP is going to be reduced by YYRULE. |
`----------------------------------------------------------------------*/

static inline void
yy_reduce_print (yybool yynormal, yyGLRStackItem* yyvsp, YYPTRDIFF_T yyk,
                 yyRuleNum yyrule)
{
  int yynrhs = yyrhsLength (yyrule);
  int yyi;
  YY_FPRINTF ((stderr, "Reducing stack %ld by rule %d (line %d):\n",
               YY_CAST (long, yyk), yyrule - 1, yyrline[yyrule]));
  if (! yynormal)
    yyfillin (yyvsp, 1, -yynrhs);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YY_FPRINTF ((stderr, "   $%d = ", yyi + 1));
      yy_symbol_print (stderr,
                       yy_accessing_symbol (yyvsp[yyi - yynrhs + 1].yystate.yylrState),
                       &yyvsp[yyi - yynrhs + 1].yystate.yysemantics.yysval                       );
      if (!yyvsp[yyi - yynrhs + 1].yystate.yyresolved)
        YY_FPRINTF ((stderr, " (unresolved)"));
      YY_FPRINTF ((stderr, "\n"));
    }
}
#endif

/** Pop the symbols consumed by reduction #YYRULE from the top of stack
 *  #YYK of *YYSTACKP, and perform the appropriate semantic action on their
 *  semantic values.  Assumes that all ambiguities in semantic values
 *  have been previously resolved.  Set *YYVALP to the resulting value,
 *  and *YYLOCP to the computed location (if any).  Return value is as
 *  for userAction.  */
static inline YYRESULTTAG
yydoAction (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yyRuleNum yyrule,
            YYSTYPE* yyvalp)
{
  int yynrhs = yyrhsLength (yyrule);

  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      /* Standard special case: single stack.  */
      yyGLRStackItem* yyrhs
        = YY_REINTERPRET_CAST (yyGLRStackItem*, yystackp->yytops.yystates[yyk]);
      YY_ASSERT (yyk == 0);
      yystackp->yynextFree -= yynrhs;
      yystackp->yyspaceLeft += yynrhs;
      yystackp->yytops.yystates[0] = & yystackp->yynextFree[-1].yystate;
      YY_REDUCE_PRINT ((yytrue, yyrhs, yyk, yyrule));
      return yyuserAction (yyrule, yynrhs, yyrhs, yystackp,
                           yyvalp);
    }
  else
    {
      yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
      yyGLRState* yys = yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred
        = yystackp->yytops.yystates[yyk];
      int yyi;
      for (yyi = 0; yyi < yynrhs; yyi += 1)
        {
          yys = yys->yypred;
          YY_ASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yystackp->yytops.yystates[yyk] = yys;
      YY_REDUCE_PRINT ((yyfalse, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1, yyk, yyrule));
      return yyuserAction (yyrule, yynrhs, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyvalp);
    }
}

/** Pop items off stack #YYK of *YYSTACKP according to grammar rule YYRULE,
 *  and push back on the resulting nonterminal symbol.  Perform the
 *  semantic action associated with YYRULE and store its value with the
 *  newly pushed state, if YYFORCEEVAL or if *YYSTACKP is currently
 *  unambiguous.  Otherwise, store the deferred semantic action with
 *  the new state.  If the new state would have an identical input
 *  position, LR state, and predecessor to an existing state on the stack,
 *  it is identified with that existing state, eliminating stack #YYK from
 *  *YYSTACKP.  In this case, the semantic value is
 *  added to the options for the existing state's semantic value.
 */
static inline YYRESULTTAG
yyglrReduce (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yyRuleNum yyrule,
             yybool yyforceEval)
{
  YYPTRDIFF_T yyposn = yystackp->yytops.yystates[yyk]->yyposn;

  if (yyforceEval || yystackp->yysplitPoint == YY_NULLPTR)
    {
      YYSTYPE yysval;

      YYRESULTTAG yyflag = yydoAction (yystackp, yyk, yyrule, &yysval);
      if (yyflag == yyerr && yystackp->yysplitPoint != YY_NULLPTR)
        YY_DPRINTF ((stderr,
                     "Parse on stack %ld rejected by rule %d (line %d).\n",
                     YY_CAST (long, yyk), yyrule - 1, yyrline[yyrule - 1]));
      if (yyflag != yyok)
        return yyflag;
      YY_SYMBOL_PRINT ("-> $$ =", yylhsNonterm (yyrule), &yysval, &yyloc);
      yyglrShift (yystackp, yyk,
                  yyLRgotoState (yystackp->yytops.yystates[yyk]->yylrState,
                                 yylhsNonterm (yyrule)),
                  yyposn, &yysval);
    }
  else
    {
      YYPTRDIFF_T yyi;
      int yyn;
      yyGLRState* yys, *yys0 = yystackp->yytops.yystates[yyk];
      yy_state_t yynewLRState;

      for (yys = yystackp->yytops.yystates[yyk], yyn = yyrhsLength (yyrule);
           0 < yyn; yyn -= 1)
        {
          yys = yys->yypred;
          YY_ASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yynewLRState = yyLRgotoState (yys->yylrState, yylhsNonterm (yyrule));
      YY_DPRINTF ((stderr,
                   "Reduced stack %ld by rule %d (line %d); action deferred.  "
                   "Now in state %d.\n",
                   YY_CAST (long, yyk), yyrule - 1, yyrline[yyrule - 1],
                   yynewLRState));
      for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
        if (yyi != yyk && yystackp->yytops.yystates[yyi] != YY_NULLPTR)
          {
            yyGLRState *yysplit = yystackp->yysplitPoint;
            yyGLRState *yyp = yystackp->yytops.yystates[yyi];
            while (yyp != yys && yyp != yysplit && yyp->yyposn >= yyposn)
              {
                if (yyp->yylrState == yynewLRState && yyp->yypred == yys)
                  {
                    yyaddDeferredAction (yystackp, yyk, yyp, yys0, yyrule);
                    yymarkStackDeleted (yystackp, yyk);
                    YY_DPRINTF ((stderr, "Merging stack %ld into stack %ld.\n",
                                 YY_CAST (long, yyk), YY_CAST (long, yyi)));
                    return yyok;
                  }
                yyp = yyp->yypred;
              }
          }
      yystackp->yytops.yystates[yyk] = yys;
      yyglrShiftDefer (yystackp, yyk, yynewLRState, yyposn, yys0, yyrule);
    }
  return yyok;
}

static YYPTRDIFF_T
yysplitStack (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
{
  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      YY_ASSERT (yyk == 0);
      yystackp->yysplitPoint = yystackp->yytops.yystates[yyk];
    }
  if (yystackp->yytops.yycapacity <= yystackp->yytops.yysize)
    {
      YYPTRDIFF_T state_size = YYSIZEOF (yystackp->yytops.yystates[0]);
      YYPTRDIFF_T half_max_capacity = YYSIZE_MAXIMUM / 2 / state_size;
      if (half_max_capacity < yystackp->yytops.yycapacity)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yycapacity *= 2;

      {
        yyGLRState** yynewStates
          = YY_CAST (yyGLRState**,
                     YYREALLOC (yystackp->yytops.yystates,
                                (YY_CAST (YYSIZE_T, yystackp->yytops.yycapacity)
                                 * sizeof yynewStates[0])));
        if (yynewStates == YY_NULLPTR)
          yyMemoryExhausted (yystackp);
        yystackp->yytops.yystates = yynewStates;
      }

      {
        yybool* yynewLookaheadNeeds
          = YY_CAST (yybool*,
                     YYREALLOC (yystackp->yytops.yylookaheadNeeds,
                                (YY_CAST (YYSIZE_T, yystackp->yytops.yycapacity)
                                 * sizeof yynewLookaheadNeeds[0])));
        if (yynewLookaheadNeeds == YY_NULLPTR)
          yyMemoryExhausted (yystackp);
        yystackp->yytops.yylookaheadNeeds = yynewLookaheadNeeds;
      }
    }
  yystackp->yytops.yystates[yystackp->yytops.yysize]
    = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yylookaheadNeeds[yystackp->yytops.yysize]
    = yystackp->yytops.yylookaheadNeeds[yyk];
  yystackp->yytops.yysize += 1;
  return yystackp->yytops.yysize - 1;
}

/** True iff YYY0 and YYY1 represent identical options at the top level.
 *  That is, they represent the same rule applied to RHS symbols
 *  that produce the same terminal symbols.  */
static yybool
yyidenticalOptions (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  if (yyy0->yyrule == yyy1->yyrule)
    {
      yyGLRState *yys0, *yys1;
      int yyn;
      for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
           yyn = yyrhsLength (yyy0->yyrule);
           yyn > 0;
           yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
        if (yys0->yyposn != yys1->yyposn)
          return yyfalse;
      return yytrue;
    }
  else
    return yyfalse;
}

/** Assuming identicalOptions (YYY0,YYY1), destructively merge the
 *  alternative semantic values for the RHS-symbols of YYY1 and YYY0.  */
static void
yymergeOptionSets (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  yyGLRState *yys0, *yys1;
  int yyn;
  for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
       yyn = yyrhsLength (yyy0->yyrule);
       0 < yyn;
       yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
    {
      if (yys0 == yys1)
        break;
      else if (yys0->yyresolved)
        {
          yys1->yyresolved = yytrue;
          yys1->yysemantics.yysval = yys0->yysemantics.yysval;
        }
      else if (yys1->yyresolved)
        {
          yys0->yyresolved = yytrue;
          yys0->yysemantics.yysval = yys1->yysemantics.yysval;
        }
      else
        {
          yySemanticOption** yyz0p = &yys0->yysemantics.yyfirstVal;
          yySemanticOption* yyz1 = yys1->yysemantics.yyfirstVal;
          while (yytrue)
            {
              if (yyz1 == *yyz0p || yyz1 == YY_NULLPTR)
                break;
              else if (*yyz0p == YY_NULLPTR)
                {
                  *yyz0p = yyz1;
                  break;
                }
              else if (*yyz0p < yyz1)
                {
                  yySemanticOption* yyz = *yyz0p;
                  *yyz0p = yyz1;
                  yyz1 = yyz1->yynext;
                  (*yyz0p)->yynext = yyz;
                }
              yyz0p = &(*yyz0p)->yynext;
            }
          yys1->yysemantics.yyfirstVal = yys0->yysemantics.yyfirstVal;
        }
    }
}

/** Y0 and Y1 represent two possible actions to take in a given
 *  parsing state; return 0 if no combination is possible,
 *  1 if user-mergeable, 2 if Y0 is preferred, 3 if Y1 is preferred.  */
static int
yypreference (yySemanticOption* y0, yySemanticOption* y1)
{
  yyRuleNum r0 = y0->yyrule, r1 = y1->yyrule;
  int p0 = yydprec[r0], p1 = yydprec[r1];

  if (p0 == p1)
    {
      if (yymerger[r0] == 0 || yymerger[r0] != yymerger[r1])
        return 0;
      else
        return 1;
    }
  if (p0 == 0 || p1 == 0)
    return 0;
  if (p0 < p1)
    return 3;
  if (p1 < p0)
    return 2;
  return 0;
}

static YYRESULTTAG yyresolveValue (yyGLRState* yys,
                                   yyGLRStack* yystackp);


/** Resolve the previous YYN states starting at and including state YYS
 *  on *YYSTACKP. If result != yyok, some states may have been left
 *  unresolved possibly with empty semantic option chains.  Regardless
 *  of whether result = yyok, each state has been left with consistent
 *  data so that yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveStates (yyGLRState* yys, int yyn,
                 yyGLRStack* yystackp)
{
  if (0 < yyn)
    {
      YY_ASSERT (yys->yypred);
      YYCHK (yyresolveStates (yys->yypred, yyn-1, yystackp));
      if (! yys->yyresolved)
        YYCHK (yyresolveValue (yys, yystackp));
    }
  return yyok;
}

/** Resolve the states for the RHS of YYOPT on *YYSTACKP, perform its
 *  user action, and return the semantic value and location in *YYVALP
 *  and *YYLOCP.  Regardless of whether result = yyok, all RHS states
 *  have been destroyed (assuming the user action destroys all RHS
 *  semantic values if invoked).  */
static YYRESULTTAG
yyresolveAction (yySemanticOption* yyopt, yyGLRStack* yystackp,
                 YYSTYPE* yyvalp)
{
  yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
  int yynrhs = yyrhsLength (yyopt->yyrule);
  YYRESULTTAG yyflag =
    yyresolveStates (yyopt->yystate, yynrhs, yystackp);
  if (yyflag != yyok)
    {
      yyGLRState *yys;
      for (yys = yyopt->yystate; yynrhs > 0; yys = yys->yypred, yynrhs -= 1)
        yydestroyGLRState ("Cleanup: popping", yys);
      return yyflag;
    }

  yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred = yyopt->yystate;
  {
    int yychar_current = yychar;
    YYSTYPE yylval_current = yylval;
    yychar = yyopt->yyrawchar;
    yylval = yyopt->yyval;
    yyflag = yyuserAction (yyopt->yyrule, yynrhs,
                           yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyvalp);
    yychar = yychar_current;
    yylval = yylval_current;
  }
  return yyflag;
}

#if YYDEBUG
static void
yyreportTree (yySemanticOption* yyx, int yyindent)
{
  int yynrhs = yyrhsLength (yyx->yyrule);
  int yyi;
  yyGLRState* yys;
  yyGLRState* yystates[1 + YYMAXRHS];
  yyGLRState yyleftmost_state;

  for (yyi = yynrhs, yys = yyx->yystate; 0 < yyi; yyi -= 1, yys = yys->yypred)
    yystates[yyi] = yys;
  if (yys == YY_NULLPTR)
    {
      yyleftmost_state.yyposn = 0;
      yystates[0] = &yyleftmost_state;
    }
  else
    yystates[0] = yys;

  if (yyx->yystate->yyposn < yys->yyposn + 1)
    YY_FPRINTF ((stderr, "%*s%s -> <Rule %d, empty>\n",
                 yyindent, "", yysymbol_name (yylhsNonterm (yyx->yyrule)),
                 yyx->yyrule - 1));
  else
    YY_FPRINTF ((stderr, "%*s%s -> <Rule %d, tokens %ld .. %ld>\n",
                 yyindent, "", yysymbol_name (yylhsNonterm (yyx->yyrule)),
                 yyx->yyrule - 1, YY_CAST (long, yys->yyposn + 1),
                 YY_CAST (long, yyx->yystate->yyposn)));
  for (yyi = 1; yyi <= yynrhs; yyi += 1)
    {
      if (yystates[yyi]->yyresolved)
        {
          if (yystates[yyi-1]->yyposn+1 > yystates[yyi]->yyposn)
            YY_FPRINTF ((stderr, "%*s%s <empty>\n", yyindent+2, "",
                         yysymbol_name (yy_accessing_symbol (yystates[yyi]->yylrState))));
          else
            YY_FPRINTF ((stderr, "%*s%s <tokens %ld .. %ld>\n", yyindent+2, "",
                         yysymbol_name (yy_accessing_symbol (yystates[yyi]->yylrState)),
                         YY_CAST (long, yystates[yyi-1]->yyposn + 1),
                         YY_CAST (long, yystates[yyi]->yyposn)));
        }
      else
        yyreportTree (yystates[yyi]->yysemantics.yyfirstVal, yyindent+2);
    }
}
#endif

static YYRESULTTAG
yyreportAmbiguity (yySemanticOption* yyx0,
                   yySemanticOption* yyx1)
{
  YYUSE (yyx0);
  YYUSE (yyx1);

#if YYDEBUG
  YY_FPRINTF ((stderr, "Ambiguity detected.\n"));
  YY_FPRINTF ((stderr, "Option 1,\n"));
  yyreportTree (yyx0, 2);
  YY_FPRINTF ((stderr, "\nOption 2,\n"));
  yyreportTree (yyx1, 2);
  YY_FPRINTF ((stderr, "\n"));
#endif

  yyerror (YY_("syntax is ambiguous"));
  return yyabort;
}

/** Resolve the ambiguity represented in state YYS in *YYSTACKP,
 *  perform the indicated actions, and set the semantic value of YYS.
 *  If result != yyok, the chain of semantic options in YYS has been
 *  cleared instead or it has been left unmodified except that
 *  redundant options may have been removed.  Regardless of whether
 *  result = yyok, YYS has been left with consistent data so that
 *  yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp)
{
  yySemanticOption* yyoptionList = yys->yysemantics.yyfirstVal;
  yySemanticOption* yybest = yyoptionList;
  yySemanticOption** yypp;
  yybool yymerge = yyfalse;
  YYSTYPE yysval;
  YYRESULTTAG yyflag;

  for (yypp = &yyoptionList->yynext; *yypp != YY_NULLPTR; )
    {
      yySemanticOption* yyp = *yypp;

      if (yyidenticalOptions (yybest, yyp))
        {
          yymergeOptionSets (yybest, yyp);
          *yypp = yyp->yynext;
        }
      else
        {
          switch (yypreference (yybest, yyp))
            {
            case 0:
              return yyreportAmbiguity (yybest, yyp);
              break;
            case 1:
              yymerge = yytrue;
              break;
            case 2:
              break;
            case 3:
              yybest = yyp;
              yymerge = yyfalse;
              break;
            default:
              /* This cannot happen so it is not worth a YY_ASSERT (yyfalse),
                 but some compilers complain if the default case is
                 omitted.  */
              break;
            }
          yypp = &yyp->yynext;
        }
    }

  if (yymerge)
    {
      yySemanticOption* yyp;
      int yyprec = yydprec[yybest->yyrule];
      yyflag = yyresolveAction (yybest, yystackp, &yysval);
      if (yyflag == yyok)
        for (yyp = yybest->yynext; yyp != YY_NULLPTR; yyp = yyp->yynext)
          {
            if (yyprec == yydprec[yyp->yyrule])
              {
                YYSTYPE yysval_other;
                yyflag = yyresolveAction (yyp, yystackp, &yysval_other);
                if (yyflag != yyok)
                  {
                    yydestruct ("Cleanup: discarding incompletely merged value for",
                                yy_accessing_symbol (yys->yylrState),
                                &yysval);
                    break;
                  }
                yyuserMerge (yymerger[yyp->yyrule], &yysval, &yysval_other);
              }
          }
    }
  else
    yyflag = yyresolveAction (yybest, yystackp, &yysval);

  if (yyflag == yyok)
    {
      yys->yyresolved = yytrue;
      yys->yysemantics.yysval = yysval;
    }
  else
    yys->yysemantics.yyfirstVal = YY_NULLPTR;
  return yyflag;
}

static YYRESULTTAG
yyresolveStack (yyGLRStack* yystackp)
{
  if (yystackp->yysplitPoint != YY_NULLPTR)
    {
      yyGLRState* yys;
      int yyn;

      for (yyn = 0, yys = yystackp->yytops.yystates[0];
           yys != yystackp->yysplitPoint;
           yys = yys->yypred, yyn += 1)
        continue;
      YYCHK (yyresolveStates (yystackp->yytops.yystates[0], yyn, yystackp
                             ));
    }
  return yyok;
}

static void
yycompressStack (yyGLRStack* yystackp)
{
  yyGLRState* yyp, *yyq, *yyr;

  if (yystackp->yytops.yysize != 1 || yystackp->yysplitPoint == YY_NULLPTR)
    return;

  for (yyp = yystackp->yytops.yystates[0], yyq = yyp->yypred, yyr = YY_NULLPTR;
       yyp != yystackp->yysplitPoint;
       yyr = yyp, yyp = yyq, yyq = yyp->yypred)
    yyp->yypred = yyr;

  yystackp->yyspaceLeft += yystackp->yynextFree - yystackp->yyitems;
  yystackp->yynextFree = YY_REINTERPRET_CAST (yyGLRStackItem*, yystackp->yysplitPoint) + 1;
  yystackp->yyspaceLeft -= yystackp->yynextFree - yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;

  while (yyr != YY_NULLPTR)
    {
      yystackp->yynextFree->yystate = *yyr;
      yyr = yyr->yypred;
      yystackp->yynextFree->yystate.yypred = &yystackp->yynextFree[-1].yystate;
      yystackp->yytops.yystates[0] = &yystackp->yynextFree->yystate;
      yystackp->yynextFree += 1;
      yystackp->yyspaceLeft -= 1;
    }
}

static YYRESULTTAG
yyprocessOneStack (yyGLRStack* yystackp, YYPTRDIFF_T yyk,
                   YYPTRDIFF_T yyposn)
{
  while (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    {
      yy_state_t yystate = yystackp->yytops.yystates[yyk]->yylrState;
      YY_DPRINTF ((stderr, "Stack %ld Entering state %d\n",
                   YY_CAST (long, yyk), yystate));

      YY_ASSERT (yystate != YYFINAL);

      if (yyisDefaultedState (yystate))
        {
          YYRESULTTAG yyflag;
          yyRuleNum yyrule = yydefaultAction (yystate);
          if (yyrule == 0)
            {
              YY_DPRINTF ((stderr, "Stack %ld dies.\n", YY_CAST (long, yyk)));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          yyflag = yyglrReduce (yystackp, yyk, yyrule, yyimmediate[yyrule]);
          if (yyflag == yyerr)
            {
              YY_DPRINTF ((stderr,
                           "Stack %ld dies "
                           "(predicate failure or explicit user error).\n",
                           YY_CAST (long, yyk)));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          if (yyflag != yyok)
            return yyflag;
        }
      else
        {
          yysymbol_kind_t yytoken = yygetToken (&yychar);
          const short* yyconflicts;
          const int yyaction = yygetLRActions (yystate, yytoken, &yyconflicts);
          yystackp->yytops.yylookaheadNeeds[yyk] = yytrue;

          for (/* nothing */; *yyconflicts; yyconflicts += 1)
            {
              YYRESULTTAG yyflag;
              YYPTRDIFF_T yynewStack = yysplitStack (yystackp, yyk);
              YY_DPRINTF ((stderr, "Splitting off stack %ld from %ld.\n",
                           YY_CAST (long, yynewStack), YY_CAST (long, yyk)));
              yyflag = yyglrReduce (yystackp, yynewStack,
                                    *yyconflicts,
                                    yyimmediate[*yyconflicts]);
              if (yyflag == yyok)
                YYCHK (yyprocessOneStack (yystackp, yynewStack,
                                          yyposn));
              else if (yyflag == yyerr)
                {
                  YY_DPRINTF ((stderr, "Stack %ld dies.\n", YY_CAST (long, yynewStack)));
                  yymarkStackDeleted (yystackp, yynewStack);
                }
              else
                return yyflag;
            }

          if (yyisShiftAction (yyaction))
            break;
          else if (yyisErrorAction (yyaction))
            {
              YY_DPRINTF ((stderr, "Stack %ld dies.\n", YY_CAST (long, yyk)));
              yymarkStackDeleted (yystackp, yyk);
              break;
            }
          else
            {
              YYRESULTTAG yyflag = yyglrReduce (yystackp, yyk, -yyaction,
                                                yyimmediate[-yyaction]);
              if (yyflag == yyerr)
                {
                  YY_DPRINTF ((stderr,
                               "Stack %ld dies "
                               "(predicate failure or explicit user error).\n",
                               YY_CAST (long, yyk)));
                  yymarkStackDeleted (yystackp, yyk);
                  break;
                }
              else if (yyflag != yyok)
                return yyflag;
            }
        }
    }
  return yyok;
}






static void
yyreportSyntaxError (yyGLRStack* yystackp)
{
  if (yystackp->yyerrState != 0)
    return;
  yyerror (YY_("syntax error"));
  yynerrs += 1;
}

/* Recover from a syntax error on *YYSTACKP, assuming that *YYSTACKP->YYTOKENP,
   yylval, and yylloc are the syntactic category, semantic value, and location
   of the lookahead.  */
static void
yyrecoverSyntaxError (yyGLRStack* yystackp)
{
  if (yystackp->yyerrState == 3)
    /* We just shifted the error token and (perhaps) took some
       reductions.  Skip tokens until we can proceed.  */
    while (yytrue)
      {
        yysymbol_kind_t yytoken;
        int yyj;
        if (yychar == YYEOF)
          yyFail (yystackp, YY_NULLPTR);
        if (yychar != YYEMPTY)
          {
            yytoken = YYTRANSLATE (yychar);
            yydestruct ("Error: discarding",
                        yytoken, &yylval);
            yychar = YYEMPTY;
          }
        yytoken = yygetToken (&yychar);
        yyj = yypact[yystackp->yytops.yystates[0]->yylrState];
        if (yypact_value_is_default (yyj))
          return;
        yyj += yytoken;
        if (yyj < 0 || YYLAST < yyj || yycheck[yyj] != yytoken)
          {
            if (yydefact[yystackp->yytops.yystates[0]->yylrState] != 0)
              return;
          }
        else if (! yytable_value_is_error (yytable[yyj]))
          return;
      }

  /* Reduce to one stack.  */
  {
    YYPTRDIFF_T yyk;
    for (yyk = 0; yyk < yystackp->yytops.yysize; yyk += 1)
      if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
        break;
    if (yyk >= yystackp->yytops.yysize)
      yyFail (yystackp, YY_NULLPTR);
    for (yyk += 1; yyk < yystackp->yytops.yysize; yyk += 1)
      yymarkStackDeleted (yystackp, yyk);
    yyremoveDeletes (yystackp);
    yycompressStack (yystackp);
  }

  /* Pop stack until we find a state that shifts the error token.  */
  yystackp->yyerrState = 3;
  while (yystackp->yytops.yystates[0] != YY_NULLPTR)
    {
      yyGLRState *yys = yystackp->yytops.yystates[0];
      int yyj = yypact[yys->yylrState];
      if (! yypact_value_is_default (yyj))
        {
          yyj += YYSYMBOL_YYerror;
          if (0 <= yyj && yyj <= YYLAST && yycheck[yyj] == YYSYMBOL_YYerror
              && yyisShiftAction (yytable[yyj]))
            {
              /* Shift the error token.  */
              int yyaction = yytable[yyj];
              YY_SYMBOL_PRINT ("Shifting", yy_accessing_symbol (yyaction),
                               &yylval, &yyerrloc);
              yyglrShift (yystackp, 0, yyaction,
                          yys->yyposn, &yylval);
              yys = yystackp->yytops.yystates[0];
              break;
            }
        }
      if (yys->yypred != YY_NULLPTR)
        yydestroyGLRState ("Error: popping", yys);
      yystackp->yytops.yystates[0] = yys->yypred;
      yystackp->yynextFree -= 1;
      yystackp->yyspaceLeft += 1;
    }
  if (yystackp->yytops.yystates[0] == YY_NULLPTR)
    yyFail (yystackp, YY_NULLPTR);
}

#define YYCHK1(YYE)                                                          \
  do {                                                                       \
    switch (YYE) {                                                           \
    case yyok:                                                               \
      break;                                                                 \
    case yyabort:                                                            \
      goto yyabortlab;                                                       \
    case yyaccept:                                                           \
      goto yyacceptlab;                                                      \
    case yyerr:                                                              \
      goto yyuser_error;                                                     \
    default:                                                                 \
      goto yybuglab;                                                         \
    }                                                                        \
  } while (0)

/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
  int yyresult;
  yyGLRStack yystack;
  yyGLRStack* const yystackp = &yystack;
  YYPTRDIFF_T yyposn;

  YY_DPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY;
  yylval = yyval_default;

  if (! yyinitGLRStack (yystackp, YYINITDEPTH))
    goto yyexhaustedlab;
  switch (YYSETJMP (yystack.yyexception_buffer))
    {
    case 0: break;
    case 1: goto yyabortlab;
    case 2: goto yyexhaustedlab;
    default: goto yybuglab;
    }
  yyglrShift (&yystack, 0, 0, 0, &yylval);
  yyposn = 0;

  while (yytrue)
    {
      /* For efficiency, we have two loops, the first of which is
         specialized to deterministic operation (single stack, no
         potential ambiguity).  */
      /* Standard mode. */
      while (yytrue)
        {
          yy_state_t yystate = yystack.yytops.yystates[0]->yylrState;
          YY_DPRINTF ((stderr, "Entering state %d\n", yystate));
          if (yystate == YYFINAL)
            goto yyacceptlab;
          if (yyisDefaultedState (yystate))
            {
              yyRuleNum yyrule = yydefaultAction (yystate);
              if (yyrule == 0)
                {
                  yyreportSyntaxError (&yystack);
                  goto yyuser_error;
                }
              YYCHK1 (yyglrReduce (&yystack, 0, yyrule, yytrue));
            }
          else
            {
              yysymbol_kind_t yytoken = yygetToken (&yychar);
              const short* yyconflicts;
              int yyaction = yygetLRActions (yystate, yytoken, &yyconflicts);
              if (*yyconflicts)
                /* Enter nondeterministic mode.  */
                break;
              if (yyisShiftAction (yyaction))
                {
                  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
                  yychar = YYEMPTY;
                  yyposn += 1;
                  yyglrShift (&yystack, 0, yyaction, yyposn, &yylval);
                  if (0 < yystack.yyerrState)
                    yystack.yyerrState -= 1;
                }
              else if (yyisErrorAction (yyaction))
                {
                  /* Issue an error message unless the scanner already
                     did. */
                  if (yychar != YYerror)
                    yyreportSyntaxError (&yystack);
                  goto yyuser_error;
                }
              else
                YYCHK1 (yyglrReduce (&yystack, 0, -yyaction, yytrue));
            }
        }

      /* Nondeterministic mode. */
      while (yytrue)
        {
          yysymbol_kind_t yytoken_to_shift;
          YYPTRDIFF_T yys;

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            yystackp->yytops.yylookaheadNeeds[yys] = yychar != YYEMPTY;

          /* yyprocessOneStack returns one of three things:

              - An error flag.  If the caller is yyprocessOneStack, it
                immediately returns as well.  When the caller is finally
                yyparse, it jumps to an error label via YYCHK1.

              - yyok, but yyprocessOneStack has invoked yymarkStackDeleted
                (&yystack, yys), which sets the top state of yys to NULL.  Thus,
                yyparse's following invocation of yyremoveDeletes will remove
                the stack.

              - yyok, when ready to shift a token.

             Except in the first case, yyparse will invoke yyremoveDeletes and
             then shift the next token onto all remaining stacks.  This
             synchronization of the shift (that is, after all preceding
             reductions on all stacks) helps prevent double destructor calls
             on yylval in the event of memory exhaustion.  */

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            YYCHK1 (yyprocessOneStack (&yystack, yys, yyposn));
          yyremoveDeletes (&yystack);
          if (yystack.yytops.yysize == 0)
            {
              yyundeleteLastStack (&yystack);
              if (yystack.yytops.yysize == 0)
                yyFail (&yystack, YY_("syntax error"));
              YYCHK1 (yyresolveStack (&yystack));
              YY_DPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yyreportSyntaxError (&yystack);
              goto yyuser_error;
            }

          /* If any yyglrShift call fails, it will fail after shifting.  Thus,
             a copy of yylval will already be on stack 0 in the event of a
             failure in the following loop.  Thus, yychar is set to YYEMPTY
             before the loop to make sure the user destructor for yylval isn't
             called twice.  */
          yytoken_to_shift = YYTRANSLATE (yychar);
          yychar = YYEMPTY;
          yyposn += 1;
          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            {
              yy_state_t yystate = yystack.yytops.yystates[yys]->yylrState;
              const short* yyconflicts;
              int yyaction = yygetLRActions (yystate, yytoken_to_shift,
                              &yyconflicts);
              /* Note that yyconflicts were handled by yyprocessOneStack.  */
              YY_DPRINTF ((stderr, "On stack %ld, ", YY_CAST (long, yys)));
              YY_SYMBOL_PRINT ("shifting", yytoken_to_shift, &yylval, &yylloc);
              yyglrShift (&yystack, yys, yyaction, yyposn,
                          &yylval);
              YY_DPRINTF ((stderr, "Stack %ld now in state #%d\n",
                           YY_CAST (long, yys),
                           yystack.yytops.yystates[yys]->yylrState));
            }

          if (yystack.yytops.yysize == 1)
            {
              YYCHK1 (yyresolveStack (&yystack));
              YY_DPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yycompressStack (&yystack);
              break;
            }
        }
      continue;
    yyuser_error:
      yyrecoverSyntaxError (&yystack);
      yyposn = yystack.yytops.yystates[0]->yyposn;
    }

 yyacceptlab:
  yyresult = 0;
  goto yyreturn;

 yybuglab:
  YY_ASSERT (yyfalse);
  goto yyabortlab;

 yyabortlab:
  yyresult = 1;
  goto yyreturn;

 yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;

 yyreturn:
  if (yychar != YYEMPTY)
    yydestruct ("Cleanup: discarding lookahead",
                YYTRANSLATE (yychar), &yylval);

  /* If the stack is well-formed, pop the stack until it is empty,
     destroying its entries as we go.  But free the stack regardless
     of whether it is well-formed.  */
  if (yystack.yyitems)
    {
      yyGLRState** yystates = yystack.yytops.yystates;
      if (yystates)
        {
          YYPTRDIFF_T yysize = yystack.yytops.yysize;
          YYPTRDIFF_T yyk;
          for (yyk = 0; yyk < yysize; yyk += 1)
            if (yystates[yyk])
              {
                while (yystates[yyk])
                  {
                    yyGLRState *yys = yystates[yyk];
                    if (yys->yypred != YY_NULLPTR)
                      yydestroyGLRState ("Cleanup: popping", yys);
                    yystates[yyk] = yys->yypred;
                    yystack.yynextFree -= 1;
                    yystack.yyspaceLeft += 1;
                  }
                break;
              }
        }
      yyfreeGLRStack (&yystack);
    }

  return yyresult;
}

/* DEBUGGING ONLY */
#if YYDEBUG
static void
yy_yypstack (yyGLRState* yys)
{
  if (yys->yypred)
    {
      yy_yypstack (yys->yypred);
      YY_FPRINTF ((stderr, " -> "));
    }
  YY_FPRINTF ((stderr, "%d@%ld", yys->yylrState, YY_CAST (long, yys->yyposn)));
}

static void
yypstates (yyGLRState* yyst)
{
  if (yyst == YY_NULLPTR)
    YY_FPRINTF ((stderr, "<null>"));
  else
    yy_yypstack (yyst);
  YY_FPRINTF ((stderr, "\n"));
}

static void
yypstack (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
{
  yypstates (yystackp->yytops.yystates[yyk]);
}

static void
yypdumpstack (yyGLRStack* yystackp)
{
#define YYINDEX(YYX)                                                    \
  YY_CAST (long,                                                        \
           ((YYX)                                                       \
            ? YY_REINTERPRET_CAST (yyGLRStackItem*, (YYX)) - yystackp->yyitems \
            : -1))

  yyGLRStackItem* yyp;
  for (yyp = yystackp->yyitems; yyp < yystackp->yynextFree; yyp += 1)
    {
      YY_FPRINTF ((stderr, "%3ld. ",
                   YY_CAST (long, yyp - yystackp->yyitems)));
      if (*YY_REINTERPRET_CAST (yybool *, yyp))
        {
          YY_ASSERT (yyp->yystate.yyisState);
          YY_ASSERT (yyp->yyoption.yyisState);
          YY_FPRINTF ((stderr, "Res: %d, LR State: %d, posn: %ld, pred: %ld",
                       yyp->yystate.yyresolved, yyp->yystate.yylrState,
                       YY_CAST (long, yyp->yystate.yyposn),
                       YYINDEX (yyp->yystate.yypred)));
          if (! yyp->yystate.yyresolved)
            YY_FPRINTF ((stderr, ", firstVal: %ld",
                         YYINDEX (yyp->yystate.yysemantics.yyfirstVal)));
        }
      else
        {
          YY_ASSERT (!yyp->yystate.yyisState);
          YY_ASSERT (!yyp->yyoption.yyisState);
          YY_FPRINTF ((stderr, "Option. rule: %d, state: %ld, next: %ld",
                       yyp->yyoption.yyrule - 1,
                       YYINDEX (yyp->yyoption.yystate),
                       YYINDEX (yyp->yyoption.yynext)));
        }
      YY_FPRINTF ((stderr, "\n"));
    }

  YY_FPRINTF ((stderr, "Tops:"));
  {
    YYPTRDIFF_T yyi;
    for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
      YY_FPRINTF ((stderr, "%ld: %ld; ", YY_CAST (long, yyi),
                   YYINDEX (yystackp->yytops.yystates[yyi])));
    YY_FPRINTF ((stderr, "\n"));
  }
#undef YYINDEX
}
#endif

#undef yylval
#undef yychar
#undef yynerrs




#line 899 "glrmysql.y"


void
emit(char *s, ...)
{
  extern yylineno;

  va_list ap;
  va_start(ap, s);

  printf("rpn: ");
  vfprintf(stdout, s, ap);
  printf("\n");
}

void
yyerror(const char *s, ...)
{
  extern yylineno;

  va_list ap;
  va_start(ap, s);

  fprintf(stderr, "%d: error: ", yylineno);
  vfprintf(stderr, s, ap);
  fprintf(stderr, "\n");
}

main(int ac, char **av)
{
  extern FILE *yyin;

  if(ac > 1 && !strcmp(av[1], "-d")) {
    yydebug = 1; ac--; av++;
  }

  if(ac > 1 && (yyin = fopen(av[1], "r")) == NULL) {
    perror(av[1]);
    exit(1);
  }

  if(!yyparse())
    printf("SQL parse worked\n");
  else
    printf("SQL parse failed\n");
} /* main */
