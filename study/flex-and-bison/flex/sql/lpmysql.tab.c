/* A Bison parser, made by GNU Bison 3.7.3.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 10 "lpmysql.y"

#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

 

#line 79 "lpmysql.tab.c"

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

#include "lpmysql.tab.h"
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
  YYSYMBOL_ONDUPLICATE = 154,              /* ONDUPLICATE  */
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


/* Second part of user prologue.  */
#line 330 "lpmysql.y"

void yyerror(char *s, ...);
void lyyerror(YYLTYPE, char *s, ...);
void emit(char *s, ...);
 

#line 447 "lpmysql.tab.c"


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


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  33
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2161

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  254
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  304
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  626

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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   340,   340,   341,   344,   345,   349,   352,   354,   360,
     361,   363,   364,   368,   370,   374,   375,   376,   379,   380,
     383,   383,   385,   385,   388,   388,   389,   392,   393,   396,
     397,   399,   400,   404,   405,   406,   407,   408,   409,   410,
     411,   412,   415,   416,   417,   420,   422,   423,   426,   427,
     431,   432,   434,   435,   438,   439,   442,   443,   444,   448,
     450,   452,   454,   456,   460,   461,   462,   465,   466,   469,
     470,   473,   474,   475,   478,   478,   481,   482,   486,   488,
     490,   492,   495,   496,   499,   500,   503,   508,   511,   516,
     517,   518,   519,   522,   527,   528,   532,   532,   534,   542,
     545,   551,   552,   555,   556,   557,   558,   559,   562,   562,
     565,   566,   569,   570,   573,   574,   575,   576,   579,   585,
     591,   594,   597,   600,   606,   609,   615,   621,   627,   630,
     637,   638,   639,   643,   646,   649,   652,   660,   664,   665,
     668,   669,   675,   678,   682,   687,   692,   696,   702,   707,
     708,   711,   711,   714,   715,   716,   717,   718,   721,   722,
     723,   724,   725,   726,   727,   728,   729,   730,   731,   732,
     733,   736,   737,   738,   741,   742,   745,   746,   747,   750,
     751,   752,   756,   757,   758,   759,   760,   761,   762,   763,
     764,   765,   766,   767,   768,   769,   770,   771,   772,   773,
     774,   775,   776,   777,   778,   779,   780,   781,   782,   783,
     784,   785,   788,   789,   792,   795,   796,   797,   800,   801,
     806,   809,   811,   811,   814,   816,   821,   822,   823,   824,
     825,   826,   827,   830,   831,   832,   833,   834,   835,   836,
     837,   838,   839,   840,   841,   842,   843,   844,   845,   846,
     847,   848,   849,   850,   851,   854,   855,   856,   857,   860,
     864,   865,   868,   869,   872,   873,   874,   875,   876,   879,
     883,   884,   886,   887,   888,   889,   890,   893,   894,   895,
     898,   899,   902,   903,   904,   905,   906,   907,   908,   909,
     910,   913,   914,   915,   916,   919,   920,   923,   924,   927,
     928,   931,   932,   933,   935
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

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
  "ONDUPLICATE", "OPTIMIZE", "OPTION", "OPTIONALLY", "OR", "ORDER", "OUT",
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

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,    33,   267,   124,    38,   268,    43,    45,    42,
      47,    37,    94,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
     416,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     426,   427,   428,   429,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,    59,
      44,    46,    40,    41
};
#endif

#define YYPACT_NINF (-355)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-145)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     276,  -195,   -31,  -355,  -355,  -355,  -355,    72,     5,   135,
    -161,  -355,  -355,  -355,  -355,  -355,  -355,  -355,  -355,  -355,
      -6,    -6,  -355,   -16,    20,   309,   309,   126,   211,   -28,
    -355,   202,     9,  -355,    -8,    17,  -355,   164,   257,   265,
      -6,    33,   268,  -355,  -355,  -355,   -83,  -355,  -355,  -355,
    -355,  -355,   277,   286,   -37,  -355,  -355,  -355,  -355,   247,
     703,   703,  -355,  -355,   703,   401,  -355,  -355,  -355,  -355,
    -355,    45,  -355,   703,  -355,  -355,  -355,  -355,    47,    49,
      88,    96,   100,   -80,  -355,  1196,   703,   703,    72,    10,
      11,    13,     7,  -108,    29,  -355,  -355,   326,  -355,  -355,
    -355,  -355,  -355,   366,   357,  -355,  -111,   -64,     9,   383,
     -24,    -4,   385,   703,   703,   458,  -355,  -355,   703,  1293,
     -43,   206,   458,   703,   339,   703,   703,   427,     9,   703,
    -355,   703,    68,    -1,   703,   703,   703,   703,   703,   703,
     703,   703,   703,   390,   703,   142,   703,   703,    98,   703,
     703,   703,  -355,  1708,  1708,  -355,   395,   -14,   146,    26,
     397,     9,  -355,  -355,  -355,    46,  -355,     9,   282,   249,
    -355,   413,   -15,  -355,   703,   283,     9,   -11,    33,   433,
     292,  -136,   433,  -134,  -355,   866,  -355,   187,  1708,  1396,
     -39,   703,  -355,   703,   196,   844,   197,  -355,  -355,  -355,
     207,   703,  1015,  1047,   228,   765,   -11,  -355,  1925,  -355,
      30,  -355,   203,   230,   234,   206,   827,   405,   297,   315,
      56,    56,   465,   465,   465,  -355,  -355,  1439,   490,  1989,
     465,   255,   703,   703,  1746,  1989,  1788,   150,   377,   393,
     399,  -355,  -355,  -355,    14,    19,    29,   249,   249,   384,
     369,     9,  -355,   416,  -355,  -355,  -355,   541,   -59,  -355,
     326,  1708,   505,   424,   -11,  -355,  -355,   546,  -123,  -355,
    -355,    70,   308,   407,  -123,   308,   407,   703,  -355,   703,
     703,  -355,  1474,  1496,  -355,   703,  -355,  -355,  1642,   447,
     447,  -355,  -355,   471,  -355,  -355,   206,   206,   206,   320,
     703,   325,   336,   490,  1989,  1989,   -14,   495,   495,   495,
     703,   589,   590,   283,  -355,  -355,     9,   703,   -70,     9,
     -22,    89,   343,   346,   478,   108,  -355,   598,   206,   703,
     703,  -355,  -355,   506,   480,   600,  -355,   335,  -355,   563,
     -62,  -355,  -355,   -62,  -355,  -355,  1708,  1667,  -355,   703,
      51,   703,   703,   352,   354,   568,   507,   358,   359,   360,
    -355,   749,  -355,  -355,   361,   362,  -355,   489,   364,   365,
     370,  1708,   605,    16,   424,  -355,  1708,   703,   371,  -355,
    -355,   -70,   -59,  -355,   372,   380,   292,   292,   386,   -59,
     -55,  1783,  -355,   387,  1374,  1112,  -355,  1708,   409,   627,
    -355,  -355,  -355,   112,  1708,   391,  -355,  -355,  -355,  1708,
     703,  -355,   389,  1228,  -355,  -355,   703,   703,   283,  -355,
    -355,  -355,  -355,  -355,  -355,   641,   641,   641,   703,   703,
     647,  -355,  1708,   292,  -355,   134,   292,   292,   161,   165,
     292,  -355,  -355,   404,   404,   404,  -355,   404,  -355,  -355,
     404,   404,   406,   404,   404,   404,  -355,   615,  -355,   404,
     615,   404,   408,   404,   615,  -355,  -355,  -355,   404,   615,
     410,   411,  -355,  -355,   703,  -355,  -355,  -355,   703,   433,
     623,   684,  -355,   563,   806,  -355,  -355,  -355,  -355,  -355,
    -355,  -355,  -355,  -355,  -355,   -17,  1708,   424,  -355,   188,
     251,   253,  1708,  1708,   644,   266,   -18,   270,   279,  -355,
    -355,   281,   656,  -355,  -355,  -355,  -355,  -355,  -355,   660,
    -355,  -355,  -355,  -355,  -355,  -355,  -355,  -355,   660,  -355,
    -355,  -355,  -355,   663,   664,   503,  1374,  1708,   415,  -355,
    1708,  -355,  1708,   288,  -355,   488,  -355,   558,   675,  -355,
    -355,  -355,   703,  -355,  -355,  -355,  -355,  -355,   304,   -25,
       2,   -25,   -25,  -355,   305,   -25,   -25,   -25,     2,   -25,
       2,   -25,   329,   -25,     2,   -25,     2,   429,   430,  -355,
     680,   462,  -355,   534,  -355,   564,   -97,  -355,  -355,  -355,
     292,  -355,  -355,  1708,   690,  -355,  -355,  -355,   508,   694,
     695,  -355,  -355,  -355,  -355,  -355,  -355,  -355,  -355,  -355,
    -355,  -355,  -355,   292,   450,   448,   699,  -355,  -355,     2,
       2,     2,   338,  -355,  -355,  -355
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,   218,    92,   103,   103,    33,     0,   103,     0,
       0,     6,    87,    99,   124,   128,   137,   142,   220,     4,
     140,   140,   219,     0,     0,   109,   109,     0,     0,   221,
     222,     0,     0,     1,     0,     0,     2,     0,     0,     0,
     140,    96,     0,    91,    89,    90,     0,   105,   106,   107,
     108,   104,     0,     0,   226,   229,   230,   232,   231,   227,
       0,     0,    44,    34,     0,     0,   302,   303,   301,    35,
      36,     0,    37,     0,    40,    41,    39,    38,     0,     0,
       0,     0,     0,     7,    42,    58,     0,     0,     0,   107,
     104,    58,     0,     0,    46,    48,    49,    55,     5,     3,
     141,   138,   139,     0,     0,    94,     9,     0,     0,     0,
     110,   110,     0,   262,     0,   253,   239,   304,     0,     0,
       0,     0,   252,     0,     0,     0,     0,     0,     0,     0,
      57,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    45,   225,   224,   223,     0,    81,     0,     0,
       0,     0,    66,    65,    69,    73,    70,     0,     0,    67,
      54,     0,   215,    97,     0,    22,     0,     9,    96,     0,
       0,     0,     0,     0,   228,   260,   263,     0,   254,     0,
       0,     0,   293,     0,     0,   260,     0,   279,   277,   278,
       0,     0,     0,     0,     0,     0,     9,    43,   240,   257,
       0,   255,     0,     0,     0,     0,   243,   248,   249,   251,
     233,   234,   235,   236,   237,   250,    56,     0,     0,   297,
     238,     0,     0,     0,   241,   299,   242,    58,     0,     0,
       0,    50,    86,    53,     0,     9,    47,    67,    67,     0,
      60,     0,    68,     0,    52,   216,   217,     0,   151,   146,
      55,    10,     0,    24,     9,    93,    95,     0,   101,    29,
      30,     0,     0,   101,   101,     0,   101,     0,   269,     0,
       0,   291,     0,     0,   268,     0,   272,   275,     0,     0,
       0,   270,   271,    11,   258,   256,     0,     0,     0,     0,
       0,     0,     0,     0,   298,   300,    81,    83,    83,    83,
       0,     0,     0,    22,    71,    72,     0,     0,    75,     0,
     215,     0,     0,     0,     0,     0,   149,     0,     0,     0,
       0,    88,    98,     0,     0,     0,   118,     0,   111,     0,
     101,   119,   126,   101,   127,   261,   295,     0,   294,     0,
       0,     0,     0,     0,     0,     0,    20,     0,     0,     0,
     244,   259,   266,   264,     0,     0,    51,     0,     0,     0,
       0,   133,     0,     0,    24,    63,    61,     0,     0,    59,
      74,     0,   151,   148,     0,     0,     0,     0,     0,   151,
     215,     0,   214,    23,    15,    25,   121,   120,     0,     0,
      31,    32,   115,     0,   114,     0,   100,   125,   292,   296,
       0,   273,     0,     0,   280,   281,     0,     0,    22,   247,
     245,   246,   267,   265,    82,     0,     0,     0,     0,     0,
       0,   129,    76,     0,    62,     0,     0,     0,     0,     0,
       0,   150,   145,   171,   171,   171,   203,   171,   193,   196,
     171,   171,     0,   171,   171,   171,   205,   174,   204,   171,
     174,   171,     0,   171,   174,   194,   195,   202,   171,   174,
       0,     0,   197,   158,     0,    16,    17,    13,     0,     0,
       0,     0,   112,     0,     0,   276,   282,   283,   284,   285,
     288,   289,   290,   287,   286,    18,    21,    24,    84,     0,
       0,     0,   134,   135,     0,     0,   215,     0,     0,   155,
     154,     0,     0,   176,   200,   182,   179,   176,   176,     0,
     176,   176,   176,   175,   179,   176,   179,   176,     0,   176,
     179,   176,   179,     0,     0,   152,    15,    26,   102,   123,
     122,   117,   116,     0,   274,     0,    12,    27,     0,    80,
      79,    78,     0,    77,   147,   156,   157,   153,     0,   188,
     198,   192,   190,   212,     0,   191,   186,   187,   209,   185,
     208,   189,     0,   184,   207,   183,   206,     0,     0,   165,
       0,     0,   169,     0,   160,     0,     0,    14,   113,    19,
       0,     8,    85,   136,     0,   172,   177,   178,     0,     0,
       0,   179,   179,   201,   179,   170,   161,   162,   164,   163,
     159,   168,   167,     0,    28,     0,     0,   181,   213,   210,
     211,   199,     0,   173,   180,   166
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -355,  -355,   696,    57,    36,  -355,   298,   168,  -355,  -355,
    -281,  -354,  -355,   103,  -355,  -355,   588,   201,   557,  -148,
     459,   -65,  -355,  -355,    60,  -355,  -355,  -355,   341,   417,
      59,   -47,  -355,  -355,  -355,   683,   548,  -355,   254,   227,
     702,   618,   455,   248,  -181,  -355,  -355,  -355,  -355,  -355,
      18,  -355,   350,   344,  -355,  -355,   632,  -182,   381,  -238,
    -355,   215,  -311,  -355,  -355,  -355,  -355,   657,   -27,  -102,
    -355,  -355,   454,   628
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,   175,   356,   393,   477,   546,   418,
     263,   331,   591,   271,    27,    83,    84,    93,    94,    95,
     171,   152,    96,   168,   253,   169,   249,   379,   380,   241,
     368,   499,    97,    12,    24,    46,   105,    13,   336,    25,
      52,   181,   340,   403,   268,    14,    15,    32,   245,    16,
      38,    17,   325,   326,   327,   535,   513,   524,   559,   560,
     473,   564,   259,   260,    23,    18,    29,    30,   185,   186,
     187,   201,   353,   120
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      85,   274,    54,    55,    56,    57,    58,    59,  -130,   383,
      91,    60,    91,  -132,  -131,   108,   130,    61,   128,   250,
     431,   196,   200,    41,   212,   612,   157,   310,   213,   429,
      20,   334,   374,   115,   116,    64,   294,   117,   119,    39,
     321,   191,    65,   143,   192,   280,   122,   598,   281,   599,
       6,   322,     6,   255,    19,    66,    67,    68,   103,   153,
     154,   131,   132,   323,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   209,   139,   140,   141,   142,   442,
      28,   160,   238,   377,   162,   144,   255,   188,    36,    71,
     255,   189,   334,   255,   239,   272,   195,   275,   202,   203,
     205,    37,    85,   318,   208,   324,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   -96,   227,    42,   229,
     230,   256,   234,   235,   236,   174,   302,   335,    43,    54,
      55,    56,    57,    58,    59,    33,    34,   497,    60,   -96,
     104,   163,   161,   547,    61,    62,   410,   261,    73,   158,
     -64,    63,    21,   130,   256,   613,   164,   378,   256,    44,
     145,   256,    64,   176,   282,   179,   283,   109,   375,    65,
     129,   381,   306,   247,   288,   345,    22,   165,   194,   146,
     143,   295,    66,    67,    68,   182,   109,    45,   405,     2,
      40,   214,   193,     6,  -143,   554,   193,   147,   596,   384,
     148,   365,   147,    69,    70,   304,   305,   231,     3,   149,
     166,   385,   240,   265,   112,   113,    71,   210,   597,   211,
      86,   545,    88,   150,    87,   174,   232,   248,   180,    72,
     382,  -144,    26,   474,   167,    31,   257,   258,   273,   161,
     276,    98,   293,    78,    79,    80,    81,    82,   180,   412,
       4,   215,   346,   347,   100,   174,   114,  -130,   350,    92,
     101,    92,  -132,  -131,   156,   311,    99,   430,   102,   312,
     233,   106,   299,   361,    47,    73,   161,     1,   526,   243,
     110,   313,   530,   371,   104,   301,   568,   532,   570,   111,
     376,   151,   574,   159,   576,   269,   270,   121,   538,   123,
     332,   124,   394,   395,   411,    48,   397,   314,   315,   177,
      89,     5,   404,   136,   137,   138,   139,   140,   141,   142,
     337,     6,   409,   338,     7,   413,    74,    75,    76,   206,
       2,    77,   137,   138,   139,   140,   141,   142,   400,   401,
     125,    90,    54,    55,    56,    57,    58,    59,   126,     3,
     432,    60,   127,   357,   358,   359,   170,    61,   389,     8,
     364,   390,   481,   619,   620,   482,   621,   369,   370,   172,
      78,    79,    80,    81,    82,    64,   173,   264,   197,   500,
     501,    47,    65,   484,   389,   392,   178,   506,   184,   394,
     496,     4,     6,   226,   228,    66,    67,    68,   237,   242,
     244,   502,   503,   251,    54,    55,    56,    57,    58,    59,
     252,   337,    48,    60,   509,   337,   254,    49,   510,    61,
     135,   136,   137,   138,   139,   140,   141,   142,    50,    71,
      54,    55,    56,    57,    58,    59,   267,    64,   548,    60,
     278,   549,   262,   147,    65,    61,   204,   536,    51,   284,
     286,   537,     5,   540,   542,   296,   404,    66,    67,    68,
     287,   147,     6,    64,   198,     7,   606,   607,   608,   609,
      65,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   291,   297,    66,    67,    68,   298,   142,    73,   438,
     439,    71,   144,    54,    55,    56,    57,    58,    59,   307,
       8,   548,    60,   548,   550,   316,   551,   303,    61,    54,
      55,    56,    57,    58,    59,   308,   337,    71,    60,   553,
     337,   309,   317,   555,    61,   593,    64,   341,   342,   337,
     344,   337,   556,    65,   557,   579,   505,   319,   481,   507,
     508,   588,    64,   511,   320,   329,    66,    67,    68,    65,
      73,   147,   580,   330,   594,   600,   199,   595,   601,   333,
     339,   334,    66,    67,    68,   352,    54,    55,    56,    57,
      58,    59,   355,   360,   581,    60,    73,   396,   362,   600,
      71,    61,   602,    78,    79,    80,    81,    82,   337,   363,
     367,   625,   372,   373,   406,   386,    71,   407,   387,    64,
     388,   391,   398,   399,   147,   414,    65,   415,   416,   417,
     424,   419,   420,   421,   422,   423,   425,   426,   428,    66,
      67,    68,   427,   433,   436,   582,    54,    55,    56,    57,
      58,    59,   437,   479,   402,    60,   118,   474,   440,    73,
     480,    61,   485,   483,   498,    78,    79,    80,    81,    82,
     504,   523,   583,    71,   584,    73,   512,   552,   519,    64,
     528,   558,   533,   534,   563,   335,    65,   585,   577,   578,
     589,    78,    79,    80,    81,    82,     6,   590,   592,    66,
      67,    68,   603,   604,   605,   610,   611,    54,    55,    56,
      57,    58,    59,   614,   539,   615,    60,   616,   617,   618,
     337,   623,    61,   624,   587,    35,    54,    55,    56,    57,
      58,    59,    73,    71,   495,    60,   622,   207,   246,   328,
      64,    61,   434,   366,   586,   107,   266,    65,    53,   183,
     343,   543,   435,   441,    78,    79,    80,    81,    82,    64,
      66,    67,    68,   572,   354,   155,    65,   190,     0,     0,
      78,    79,    80,    81,    82,   541,     0,     0,     0,    66,
      67,    68,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,    73,     0,    71,   131,   132,     0,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,     0,     0,
       0,     0,     0,    71,     0,     0,     0,     0,     0,   144,
       0,     0,     0,     0,     0,     0,     0,    78,    79,    80,
      81,    82,     0,     0,     0,     0,   131,   132,     0,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,     0,
       0,     0,     0,    73,     0,     0,     0,     0,     0,     0,
     144,   134,   135,   136,   137,   138,   139,   140,   141,   142,
       0,     0,    73,     0,   131,   132,     0,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,    78,    79,    80,
      81,    82,     0,     0,   145,     0,   131,   132,   144,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,     0,
       0,     0,     0,   146,     0,   147,     0,     0,   561,   562,
     144,   565,   566,   567,     0,     0,   569,     0,   571,     0,
     573,   147,   575,     0,   148,   145,     0,     0,     0,     0,
       0,     0,     0,   149,     0,     0,     0,     0,    78,    79,
      80,    81,    82,     0,   146,     0,     0,   150,     0,     0,
       0,     0,   285,     0,     0,     0,     0,    78,    79,    80,
      81,    82,   147,   145,     0,   148,     0,     0,     0,     0,
       0,     0,     0,     0,   149,     0,     0,     0,     0,     0,
       0,     0,   146,   147,     0,   145,     0,     0,   150,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     147,     0,     0,   148,   146,     0,     0,     0,     0,     0,
       0,     0,   149,     0,     0,   151,     0,     0,     0,     0,
       0,     0,   147,     0,     0,   148,   150,     0,   292,     0,
       0,     0,     0,     0,   149,   131,   132,     0,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   150,     0,
       0,     0,     0,     0,     0,     0,   151,     0,     0,   144,
       0,     0,     0,     0,     0,     0,     0,   131,   132,   544,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
       0,     0,     0,     0,     0,     0,   514,   515,     0,   516,
       0,   144,   517,   518,   151,   520,   521,   522,     0,     0,
       0,   525,     0,   527,   277,   529,     0,     0,     0,     0,
     531,     0,     0,     0,     0,     0,   151,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   277,     0,     0,     0,
       0,     0,   131,   132,   145,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,     0,     0,     0,     0,     0,
       0,     0,     0,   146,     0,     0,   144,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   145,     0,     0,     0,
       0,   147,     0,     0,   148,     0,     0,     0,     0,     0,
       0,     0,     0,   149,     0,   146,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   150,     0,     0,
       0,     0,     0,   147,     0,     0,   148,     0,     0,   130,
       0,     0,     0,     0,     0,   149,   131,   132,     0,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   150,
       0,   145,     0,     0,     0,     0,   143,     0,     0,     0,
     144,     0,     0,     0,     0,     0,     0,     0,   131,   132,
     146,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,     0,     0,     0,     0,   151,     0,     0,   147,     0,
       0,   148,   144,     0,     0,   289,     0,     0,     0,     0,
     149,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   150,     0,     0,   151,     0,     0,
       0,     0,     0,   486,   487,   488,   489,   290,     0,     0,
       0,     0,     0,   131,   132,   145,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,     0,     0,     0,     0,
       0,     0,     0,     0,   146,     0,     0,   144,     0,     0,
       0,     0,   490,   491,   492,     0,     0,   145,     0,     0,
       0,     0,   147,     0,     0,   148,     0,     0,     0,     0,
       0,     0,   151,     0,   149,     0,   146,     0,     0,     0,
       0,     0,   478,     0,     0,     0,     0,     0,   150,     0,
       0,     0,     0,     0,   147,     0,     0,   148,     0,     0,
       0,     0,     0,     0,   131,   132,   149,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,     0,     0,     0,
     150,     0,   145,     0,     0,   475,   131,   132,   144,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,     0,
       0,   146,     0,     0,     0,     0,     0,     0,     0,     0,
     144,     0,     0,     0,     0,     0,   151,     0,     0,   147,
       0,     0,   148,     0,     0,     0,     0,     0,   476,   131,
     132,   149,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,     0,     0,     0,   150,     0,   300,   151,   493,
     494,     0,     0,   144,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   145,   131,   132,     0,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,     0,     0,     0,
       0,     0,   146,     0,     0,   145,   131,   132,   144,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,     0,
     147,     0,     0,   148,   146,     0,     0,     0,   118,     0,
     144,     0,   149,   151,     0,     0,     0,     0,     0,     0,
       0,     0,   147,     0,     0,   148,   150,     0,   145,     0,
       0,     0,     0,     0,   149,     0,     0,     0,     0,     0,
       0,   348,     0,     0,     0,     0,     0,   146,   150,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   145,     0,   147,     0,     0,   148,     0,
       0,     0,     0,     0,     0,     0,     0,   149,     0,     0,
       0,     0,   146,     0,     0,   145,   279,     0,     0,     0,
       0,   150,     0,     0,   151,     0,     0,     0,     0,     0,
     147,     0,     0,   148,   146,     0,     0,     0,     0,     0,
       0,     0,   149,     0,     0,     0,   151,     0,     0,     0,
       0,     0,   147,     0,     0,   148,   150,     0,     0,     0,
       0,     0,   131,   132,   149,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,     0,     0,     0,   150,     0,
       0,     0,     0,     0,     0,     0,   144,   131,   132,   151,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   144,     0,     0,     0,     0,   349,     0,     0,     0,
       0,     0,     0,     0,   151,     0,     0,     0,   131,   132,
       0,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,     0,     0,     0,     0,     0,   151,     0,     0,     0,
     351,     0,   144,     0,     0,     0,     0,     0,     0,     0,
       0,   145,     0,     0,   408,     0,   131,   132,     0,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,     0,
     146,     0,     0,     0,     0,     0,   145,     0,     0,     0,
     144,     0,     0,     0,     0,     0,     0,     0,   147,     0,
       0,   148,     0,     0,     0,   146,     0,     0,   131,   132,
     149,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,     0,     0,   147,   150,     0,   148,   145,   443,   444,
     445,   446,   144,     0,     0,   149,     0,     0,   447,     0,
       0,     0,     0,     0,     0,     0,   146,     0,     0,   150,
       0,     0,     0,     0,     0,     0,   448,   449,     0,     0,
       0,     0,   450,     0,   147,   145,     0,   148,     0,     0,
       0,     0,     0,   451,     0,     0,   149,     0,     0,     0,
       0,   452,     0,     0,   146,     0,     0,   453,     0,     0,
     150,     0,   151,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   147,     0,     0,   148,     0,   145,     0,   454,
     455,     0,     0,     0,     0,     0,     0,   151,     0,     0,
       0,     0,     0,     0,     0,     0,   146,     0,   150,   456,
     457,     0,     0,     0,   458,   459,   460,     0,     0,     0,
       0,     0,     0,     0,   147,     0,   132,   148,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   151,     0,
       0,     0,     0,   461,     0,     0,     0,     0,     0,   144,
     150,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   462,     0,   463,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   151,     0,     0,     0,
       0,   464,     0,     0,   465,   466,   467,   468,   469,     0,
    -145,     0,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,     0,     0,     0,   470,   471,     0,     0,     0,
       0,     0,     0,   144,   472,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   145,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   146,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   147,     0,     0,   148,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   150,  -145,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -145,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   147,     0,     0,   148,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -145
};

static const yytype_int16 yycheck[] =
{
      27,   182,     3,     4,     5,     6,     7,     8,     3,   320,
       3,    12,     3,     3,     3,    98,     3,    18,    98,   167,
     374,   123,   124,     3,    25,   122,    91,    13,    29,    13,
      61,   154,   313,    60,    61,    36,     6,    64,    65,    21,
      99,    84,    43,    30,    87,    84,    73,    45,    87,    47,
     186,   110,   186,   108,   249,    56,    57,    58,    40,    86,
      87,    10,    11,   122,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,     6,    19,    20,    21,    22,   390,
       8,   189,    96,   153,    55,    34,   108,   114,   249,    90,
     108,   118,   154,   108,   108,   231,   123,   231,   125,   126,
     127,   107,   129,   251,   131,   164,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   227,   144,    98,   146,
     147,   176,   149,   150,   151,   236,   228,   250,   108,     3,
       4,     5,     6,     7,     8,     0,     1,   418,    12,   250,
     251,   112,   250,   497,    18,    19,    95,   174,   149,    92,
     121,    25,   183,     3,   176,   252,   127,   227,   176,   139,
     109,   176,    36,   227,   191,   189,   193,   250,   316,    43,
     250,   319,   237,   127,   201,   277,   207,   148,   121,   128,
      30,   151,    56,    57,    58,   189,   250,   167,   250,    54,
     206,   192,   235,   186,   249,   506,   235,   146,   223,   110,
     149,   303,   146,    77,    78,   232,   233,   109,    73,   158,
     181,   122,   226,   177,   251,   252,    90,   149,   243,   151,
       9,   238,   250,   172,    13,   236,   128,   181,   252,   103,
     252,   249,     5,   250,   205,     8,   251,   252,   181,   250,
     183,   249,   206,   244,   245,   246,   247,   248,   252,   351,
     115,   252,   279,   280,    90,   236,     9,   252,   285,   252,
       3,   252,   252,   252,   251,   251,   249,   251,     3,   250,
     172,     3,   215,   300,    72,   149,   250,     1,   460,   253,
       3,   245,   464,   310,   251,   228,   524,   469,   526,     3,
     317,   240,   530,    92,   532,     3,     4,   252,   479,   252,
     264,   252,   329,   330,   253,   103,   333,   247,   248,   108,
     108,   176,   339,    16,    17,    18,    19,    20,    21,    22,
     250,   186,   349,   253,   189,   352,   200,   201,   202,   128,
      54,   205,    17,    18,    19,    20,    21,    22,     3,     4,
     252,   139,     3,     4,     5,     6,     7,     8,   252,    73,
     377,    12,   252,   296,   297,   298,    30,    18,   250,   224,
     303,   253,   250,   601,   602,   253,   604,   308,   309,     3,
     244,   245,   246,   247,   248,    36,    19,   176,    39,   426,
     427,    72,    43,   410,   250,   328,     3,   253,     3,   416,
     417,   115,   186,     3,   252,    56,    57,    58,     3,   253,
       3,   428,   429,   121,     3,     4,     5,     6,     7,     8,
     161,   250,   103,    12,   253,   250,     3,   108,   253,    18,
      15,    16,    17,    18,    19,    20,    21,    22,   119,    90,
       3,     4,     5,     6,     7,     8,     3,    36,   250,    12,
     253,   253,   159,   146,    43,    18,    19,   474,   139,   253,
     253,   478,   176,   480,   481,   252,   483,    56,    57,    58,
     253,   146,   186,    36,   125,   189,     4,     5,     6,     7,
      43,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,   253,   252,    56,    57,    58,   252,    22,   149,   386,
     387,    90,    34,     3,     4,     5,     6,     7,     8,   122,
     224,   250,    12,   250,   253,   121,   253,   252,    18,     3,
       4,     5,     6,     7,     8,   122,   250,    90,    12,   253,
     250,   122,   153,   253,    18,   552,    36,   273,   274,   250,
     276,   250,   253,    43,   253,    32,   433,   121,   250,   436,
     437,   253,    36,   440,     3,    40,    56,    57,    58,    43,
     149,   146,    49,   129,   250,   250,   217,   253,   253,    13,
     252,   154,    56,    57,    58,   118,     3,     4,     5,     6,
       7,     8,   101,   253,    71,    12,   149,    71,   253,   250,
      90,    18,   253,   244,   245,   246,   247,   248,   250,   253,
      95,   253,     3,     3,   340,   252,    90,   343,   252,    36,
     122,     3,   122,     3,   146,   253,    43,   253,    40,   102,
     121,   253,   253,   253,   253,   253,   252,   252,    13,    56,
      57,    58,   252,   252,   252,   122,     3,     4,     5,     6,
       7,     8,   252,   224,    71,    12,   235,   250,   252,   149,
      13,    18,   253,   252,     3,   244,   245,   246,   247,   248,
       3,    36,   149,    90,   151,   149,   252,    13,   252,    36,
     252,     5,   252,   252,     4,   250,    43,   164,     5,     5,
     182,   244,   245,   246,   247,   248,   186,   119,     3,    56,
      57,    58,   253,   253,     4,   151,   122,     3,     4,     5,
       6,     7,     8,   590,    71,     5,    12,   189,     4,     4,
     250,   253,    18,     4,   536,     9,     3,     4,     5,     6,
       7,     8,   149,    90,   416,    12,   613,   129,   161,   260,
      36,    18,   381,   306,   221,    42,   178,    43,    26,   111,
     275,   483,   382,   389,   244,   245,   246,   247,   248,    36,
      56,    57,    58,   528,   290,    88,    43,   119,    -1,    -1,
     244,   245,   246,   247,   248,    71,    -1,    -1,    -1,    56,
      57,    58,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,   149,    -1,    90,    10,    11,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   244,   245,   246,
     247,   248,    -1,    -1,    -1,    -1,    10,    11,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,   149,    -1,    10,    11,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,   244,   245,   246,
     247,   248,    -1,    -1,   109,    -1,    10,    11,    34,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,   128,    -1,   146,    -1,    -1,   517,   518,
      34,   520,   521,   522,    -1,    -1,   525,    -1,   527,    -1,
     529,   146,   531,    -1,   149,   109,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   158,    -1,    -1,    -1,    -1,   244,   245,
     246,   247,   248,    -1,   128,    -1,    -1,   172,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,    -1,   244,   245,   246,
     247,   248,   146,   109,    -1,   149,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   158,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   128,   146,    -1,   109,    -1,    -1,   172,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     146,    -1,    -1,   149,   128,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   158,    -1,    -1,   240,    -1,    -1,    -1,    -1,
      -1,    -1,   146,    -1,    -1,   149,   172,    -1,   253,    -1,
      -1,    -1,    -1,    -1,   158,    10,    11,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,   172,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,   253,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    -1,   444,   445,    -1,   447,
      -1,    34,   450,   451,   240,   453,   454,   455,    -1,    -1,
      -1,   459,    -1,   461,   250,   463,    -1,    -1,    -1,    -1,
     468,    -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   250,    -1,    -1,    -1,
      -1,    -1,    10,    11,   109,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   128,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,
      -1,   146,    -1,    -1,   149,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   158,    -1,   128,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,    -1,
      -1,    -1,    -1,   146,    -1,    -1,   149,    -1,    -1,     3,
      -1,    -1,    -1,    -1,    -1,   158,    10,    11,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,   172,
      -1,   109,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
     128,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,   240,    -1,    -1,   146,    -1,
      -1,   149,    34,    -1,    -1,   250,    -1,    -1,    -1,    -1,
     158,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   172,    -1,    -1,   240,    -1,    -1,
      -1,    -1,    -1,    65,    66,    67,    68,   250,    -1,    -1,
      -1,    -1,    -1,    10,    11,   109,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   128,    -1,    -1,    34,    -1,    -1,
      -1,    -1,   104,   105,   106,    -1,    -1,   109,    -1,    -1,
      -1,    -1,   146,    -1,    -1,   149,    -1,    -1,    -1,    -1,
      -1,    -1,   240,    -1,   158,    -1,   128,    -1,    -1,    -1,
      -1,    -1,   250,    -1,    -1,    -1,    -1,    -1,   172,    -1,
      -1,    -1,    -1,    -1,   146,    -1,    -1,   149,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,   158,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
     172,    -1,   109,    -1,    -1,    31,    10,    11,    34,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,   146,
      -1,    -1,   149,    -1,    -1,    -1,    -1,    -1,    74,    10,
      11,   158,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,   172,    -1,    28,   240,   241,
     242,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   109,    10,    11,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,   128,    -1,    -1,   109,    10,    11,    34,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
     146,    -1,    -1,   149,   128,    -1,    -1,    -1,   235,    -1,
      34,    -1,   158,   240,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   146,    -1,    -1,   149,   172,    -1,   109,    -1,
      -1,    -1,    -1,    -1,   158,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,   128,   172,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   109,    -1,   146,    -1,    -1,   149,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,
      -1,    -1,   128,    -1,    -1,   109,   210,    -1,    -1,    -1,
      -1,   172,    -1,    -1,   240,    -1,    -1,    -1,    -1,    -1,
     146,    -1,    -1,   149,   128,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   158,    -1,    -1,    -1,   240,    -1,    -1,    -1,
      -1,    -1,   146,    -1,    -1,   149,   172,    -1,    -1,    -1,
      -1,    -1,    10,    11,   158,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,   172,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    10,    11,   240,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    -1,   210,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   240,    -1,    -1,    -1,    10,    11,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,    -1,
      98,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   109,    -1,    -1,    87,    -1,    10,    11,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
     128,    -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   146,    -1,
      -1,   149,    -1,    -1,    -1,   128,    -1,    -1,    10,    11,
     158,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,   146,   172,    -1,   149,   109,    35,    36,
      37,    38,    34,    -1,    -1,   158,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   128,    -1,    -1,   172,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    -1,    -1,
      -1,    -1,    69,    -1,   146,   109,    -1,   149,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    -1,   158,    -1,    -1,    -1,
      -1,    88,    -1,    -1,   128,    -1,    -1,    94,    -1,    -1,
     172,    -1,   240,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   146,    -1,    -1,   149,    -1,   109,    -1,   116,
     117,    -1,    -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   128,    -1,   172,   136,
     137,    -1,    -1,    -1,   141,   142,   143,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   146,    -1,    11,   149,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,   240,    -1,
      -1,    -1,    -1,   170,    -1,    -1,    -1,    -1,    -1,    34,
     172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   189,    -1,   191,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,    -1,
      -1,   208,    -1,    -1,   211,   212,   213,   214,   215,    -1,
      11,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,   232,   233,    -1,    -1,    -1,
      -1,    -1,    -1,    34,   241,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   128,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   146,    -1,    -1,   149,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   172,   109,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   128,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   146,    -1,    -1,   149,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   172
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     1,    54,    73,   115,   176,   186,   189,   224,   255,
     256,   257,   287,   291,   299,   300,   303,   305,   319,   249,
      61,   183,   207,   318,   288,   293,   293,   268,     8,   320,
     321,   293,   301,     0,     1,   256,   249,   107,   304,   304,
     206,     3,    98,   108,   139,   167,   289,    72,   103,   108,
     119,   139,   294,   294,     3,     4,     5,     6,     7,     8,
      12,    18,    19,    25,    36,    43,    56,    57,    58,    77,
      78,    90,   103,   149,   200,   201,   202,   205,   244,   245,
     246,   247,   248,   269,   270,   322,     9,    13,   250,   108,
     139,     3,   252,   271,   272,   273,   276,   286,   249,   249,
      90,     3,     3,   304,   251,   290,     3,   289,    98,   250,
       3,     3,   251,   252,     9,   322,   322,   322,   235,   322,
     327,   252,   322,   252,   252,   252,   252,   252,    98,   250,
       3,    10,    11,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    30,    34,   109,   128,   146,   149,   158,
     172,   240,   275,   322,   322,   321,   251,   275,   257,   271,
     189,   250,    55,   112,   127,   148,   181,   205,   277,   279,
      30,   274,     3,    19,   236,   258,   227,   271,     3,   189,
     252,   295,   189,   295,     3,   322,   323,   324,   322,   322,
     327,    84,    87,   235,   257,   322,   323,    39,   125,   217,
     323,   325,   322,   322,    19,   322,   271,   270,   322,     6,
     149,   151,    25,    29,   192,   252,   322,   322,   322,   322,
     322,   322,   322,   322,   322,   322,     3,   322,   252,   322,
     322,   109,   128,   172,   322,   322,   322,     3,    96,   108,
     226,   283,   253,   253,     3,   302,   272,   127,   181,   280,
     273,   121,   161,   278,     3,   108,   176,   251,   252,   316,
     317,   322,   159,   264,   271,   258,   290,     3,   298,     3,
       4,   267,   231,   257,   298,   231,   257,   250,   253,   210,
      84,    87,   322,   322,   253,    98,   253,   253,   322,   250,
     250,   253,   253,   258,     6,   151,   252,   252,   252,   257,
      28,   257,   323,   252,   322,   322,   275,   122,   122,   122,
      13,   251,   250,   258,   278,   278,   121,   153,   273,   121,
       3,    99,   110,   122,   164,   306,   307,   308,   274,    40,
     129,   265,   258,    13,   154,   250,   292,   250,   253,   252,
     296,   292,   292,   296,   292,   323,   322,   322,    87,   210,
     322,    98,   118,   326,   326,   101,   259,   257,   257,   257,
     253,   322,   253,   253,   257,   323,   283,    95,   284,   284,
     284,   322,     3,     3,   264,   273,   322,   153,   227,   281,
     282,   273,   252,   316,   110,   122,   252,   252,   122,   250,
     253,     3,   257,   260,   322,   322,    71,   322,   122,     3,
       3,     4,    71,   297,   322,   250,   292,   292,    87,   322,
      95,   253,   323,   322,   253,   253,    40,   102,   263,   253,
     253,   253,   253,   253,   121,   252,   252,   252,    13,    13,
     251,   265,   322,   252,   282,   306,   252,   252,   267,   267,
     252,   307,   316,    35,    36,    37,    38,    45,    63,    64,
      69,    80,    88,    94,   116,   117,   136,   137,   141,   142,
     143,   170,   189,   191,   208,   211,   212,   213,   214,   215,
     232,   233,   241,   314,   250,    31,    74,   261,   250,   224,
      13,   250,   253,   252,   322,   253,    65,    66,    67,    68,
     104,   105,   106,   241,   242,   260,   322,   264,     3,   285,
     285,   285,   322,   322,     3,   267,   253,   267,   267,   253,
     253,   267,   252,   310,   310,   310,   310,   310,   310,   252,
     310,   310,   310,    36,   311,   310,   311,   310,   252,   310,
     311,   310,   311,   252,   252,   309,   322,   322,   298,    71,
     322,    71,   322,   297,   253,   238,   262,   265,   250,   253,
     253,   253,    13,   253,   316,   253,   253,   253,     5,   312,
     313,   312,   312,     4,   315,   312,   312,   312,   313,   312,
     313,   312,   315,   312,   313,   312,   313,     5,     5,    32,
      49,    71,   122,   149,   151,   164,   221,   261,   253,   182,
     119,   266,     3,   322,   250,   253,   223,   243,    45,    47,
     250,   253,   253,   253,   253,     4,     4,     5,     6,     7,
     151,   122,   122,   252,   267,     5,   189,     4,     4,   313,
     313,   313,   267,   253,     4,   253
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   254,   255,   255,   255,   255,   256,   257,   257,   258,
     258,   259,   259,   260,   260,   261,   261,   261,   262,   262,
     263,   263,   264,   264,   265,   265,   265,   266,   266,   267,
     267,   267,   267,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   269,   269,   269,   270,   271,   271,   272,   272,
     273,   273,   273,   273,   274,   274,   275,   275,   275,   276,
     276,   276,   276,   276,   277,   277,   277,   278,   278,   279,
     279,   280,   280,   280,   281,   281,   282,   282,   283,   283,
     283,   283,   284,   284,   285,   285,   286,   256,   287,   288,
     288,   288,   288,   287,   289,   289,   290,   290,   287,   256,
     291,   292,   292,   293,   293,   293,   293,   293,   294,   294,
     295,   295,   296,   296,   297,   297,   297,   297,   291,   291,
     298,   298,   298,   298,   256,   299,   299,   299,   256,   300,
     301,   301,   301,   302,   302,   302,   302,   256,   303,   303,
     304,   304,   256,   305,   305,   305,   305,   305,   305,   306,
     306,   308,   307,   307,   307,   307,   307,   307,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     309,   310,   310,   310,   311,   311,   312,   312,   312,   313,
     313,   313,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   315,   315,   316,   317,   317,   317,   318,   318,
     256,   319,   320,   320,   321,   321,   322,   322,   322,   322,
     322,   322,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   322,   322,   322,   322,   322,   322,
     323,   323,   324,   324,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   322,   322,   322,   325,   325,   325,
     322,   322,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   322,   322,   322,   322,   327,   327,   322,   322,   322,
     322,   322,   322,   322,   322
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     3,     2,     3,     1,     3,    11,     0,
       2,     0,     4,     2,     4,     0,     1,     1,     0,     2,
       0,     2,     0,     3,     0,     2,     4,     0,     2,     1,
       1,     3,     3,     0,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     3,     1,     2,     1,     3,     1,     1,
       3,     5,     3,     3,     1,     0,     2,     1,     0,     5,
       3,     5,     6,     5,     0,     1,     1,     0,     1,     1,
       1,     2,     2,     0,     1,     0,     2,     4,     6,     6,
       6,     0,     2,     0,     1,     3,     3,     1,     7,     2,
       2,     2,     0,     6,     2,     4,     0,     2,     7,     1,
       8,     0,     4,     0,     2,     2,     2,     2,     1,     0,
       0,     3,     3,     5,     1,     1,     3,     3,     7,     7,
       3,     3,     5,     5,     1,     8,     7,     7,     1,     8,
       0,     2,     2,     3,     5,     5,     7,     1,     4,     4,
       0,     2,     1,     8,    10,     9,     6,    11,     8,     1,
       3,     0,     4,     5,     4,     4,     5,     5,     0,     3,
       2,     3,     3,     3,     3,     2,     5,     3,     3,     2,
       3,     0,     3,     5,     0,     1,     0,     2,     2,     0,
       4,     3,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     1,     1,     3,     5,
       2,     4,     1,     1,     1,     1,     3,     3,     3,     3,
       5,     5,     1,     3,     3,     0,     1,     1,     0,     1,
       1,     2,     1,     3,     3,     3,     1,     1,     3,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     2,
       3,     3,     3,     3,     5,     6,     6,     6,     3,     3,
       3,     3,     2,     2,     3,     3,     4,     3,     4,     5,
       1,     3,     0,     1,     5,     6,     5,     6,     4,     4,
       4,     4,     4,     6,     8,     4,     7,     1,     1,     1,
       6,     6,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     4,     6,     3,     5,     4,     5,     3,     4,     3,
       4,     1,     1,     1,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YY_LOCATION_PRINT
#  if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#   define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

#  else
#   define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#  endif
# endif /* !defined YY_LOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_NAME: /* NAME  */
#line 336 "lpmysql.y"
            { printf ("free at %d %s\n",(*yylocationp).first_line, ((*yyvaluep).strval)); free(((*yyvaluep).strval)); }
#line 2024 "lpmysql.tab.c"
        break;

    case YYSYMBOL_STRING: /* STRING  */
#line 336 "lpmysql.y"
            { printf ("free at %d %s\n",(*yylocationp).first_line, ((*yyvaluep).strval)); free(((*yyvaluep).strval)); }
#line 2030 "lpmysql.tab.c"
        break;

    case YYSYMBOL_USERVAR: /* USERVAR  */
#line 336 "lpmysql.y"
            { printf ("free at %d %s\n",(*yylocationp).first_line, ((*yyvaluep).strval)); free(((*yyvaluep).strval)); }
#line 2036 "lpmysql.tab.c"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 6: /* stmt: select_stmt  */
#line 349 "lpmysql.y"
                  { emit("STMT"); }
#line 2329 "lpmysql.tab.c"
    break;

  case 7: /* select_stmt: SELECT select_opts select_expr_list  */
#line 353 "lpmysql.y"
                        { emit("SELECTNODATA %d %d", (yyvsp[-1].intval), (yyvsp[0].intval)); }
#line 2335 "lpmysql.tab.c"
    break;

  case 8: /* select_stmt: SELECT select_opts select_expr_list FROM table_references opt_where opt_groupby opt_having opt_orderby opt_limit opt_into_list  */
#line 357 "lpmysql.y"
                   { emit("SELECT %d %d %d", (yyvsp[-9].intval), (yyvsp[-8].intval), (yyvsp[-6].intval)); }
#line 2341 "lpmysql.tab.c"
    break;

  case 10: /* opt_where: WHERE expr  */
#line 361 "lpmysql.y"
                { emit("WHERE"); }
#line 2347 "lpmysql.tab.c"
    break;

  case 12: /* opt_groupby: GROUP BY groupby_list opt_with_rollup  */
#line 365 "lpmysql.y"
                             { emit("GROUPBYLIST %d %d", (yyvsp[-1].intval), (yyvsp[0].intval)); }
#line 2353 "lpmysql.tab.c"
    break;

  case 13: /* groupby_list: expr opt_asc_desc  */
#line 369 "lpmysql.y"
                             { emit("GROUPBY %d",  (yyvsp[0].intval)); (yyval.intval) = 1; }
#line 2359 "lpmysql.tab.c"
    break;

  case 14: /* groupby_list: groupby_list ',' expr opt_asc_desc  */
#line 371 "lpmysql.y"
                             { emit("GROUPBY %d",  (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-3].intval) + 1; }
#line 2365 "lpmysql.tab.c"
    break;

  case 15: /* opt_asc_desc: %empty  */
#line 374 "lpmysql.y"
                        { (yyval.intval) = 0; }
#line 2371 "lpmysql.tab.c"
    break;

  case 16: /* opt_asc_desc: ASC  */
#line 375 "lpmysql.y"
                        { (yyval.intval) = 0; }
#line 2377 "lpmysql.tab.c"
    break;

  case 17: /* opt_asc_desc: DESC  */
#line 376 "lpmysql.y"
                        { (yyval.intval) = 1; }
#line 2383 "lpmysql.tab.c"
    break;

  case 18: /* opt_with_rollup: %empty  */
#line 379 "lpmysql.y"
                            { (yyval.intval) = 0; }
#line 2389 "lpmysql.tab.c"
    break;

  case 19: /* opt_with_rollup: WITH ROLLUP  */
#line 380 "lpmysql.y"
                  { (yyval.intval) = 1; }
#line 2395 "lpmysql.tab.c"
    break;

  case 21: /* opt_having: HAVING expr  */
#line 383 "lpmysql.y"
                                    { emit("HAVING"); }
#line 2401 "lpmysql.tab.c"
    break;

  case 23: /* opt_orderby: ORDER BY groupby_list  */
#line 385 "lpmysql.y"
                                               { emit("ORDERBY %d", (yyvsp[0].intval)); }
#line 2407 "lpmysql.tab.c"
    break;

  case 25: /* opt_limit: LIMIT expr  */
#line 388 "lpmysql.y"
                                  { emit("LIMIT 1"); }
#line 2413 "lpmysql.tab.c"
    break;

  case 26: /* opt_limit: LIMIT expr ',' expr  */
#line 389 "lpmysql.y"
                                    { emit("LIMIT 2"); }
#line 2419 "lpmysql.tab.c"
    break;

  case 28: /* opt_into_list: INTO column_list  */
#line 393 "lpmysql.y"
                      { emit("INTO %d", (yyvsp[0].intval)); }
#line 2425 "lpmysql.tab.c"
    break;

  case 29: /* column_list: NAME  */
#line 396 "lpmysql.y"
                           { emit("COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 2431 "lpmysql.tab.c"
    break;

  case 30: /* column_list: STRING  */
#line 397 "lpmysql.y"
                           { lyyerror((yylsp[0]), "string %s found where name required", (yyvsp[0].strval));
                              emit("COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 2438 "lpmysql.tab.c"
    break;

  case 31: /* column_list: column_list ',' NAME  */
#line 399 "lpmysql.y"
                           { emit("COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2444 "lpmysql.tab.c"
    break;

  case 32: /* column_list: column_list ',' STRING  */
#line 400 "lpmysql.y"
                           { lyyerror((yylsp[0]), "string %s found where name required", (yyvsp[-2].intval));
                            emit("COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2451 "lpmysql.tab.c"
    break;

  case 33: /* select_opts: %empty  */
#line 404 "lpmysql.y"
                                      { (yyval.intval) = 0; }
#line 2457 "lpmysql.tab.c"
    break;

  case 34: /* select_opts: select_opts ALL  */
#line 405 "lpmysql.y"
                                  { if((yyval.intval) & 01) lyyerror((yylsp[0]),"duplicate ALL option"); (yyval.intval) = (yyvsp[-1].intval) | 01; }
#line 2463 "lpmysql.tab.c"
    break;

  case 35: /* select_opts: select_opts DISTINCT  */
#line 406 "lpmysql.y"
                                  { if((yyval.intval) & 02) lyyerror((yylsp[0]),"duplicate DISTINCT option"); (yyval.intval) = (yyvsp[-1].intval) | 02; }
#line 2469 "lpmysql.tab.c"
    break;

  case 36: /* select_opts: select_opts DISTINCTROW  */
#line 407 "lpmysql.y"
                                  { if((yyval.intval) & 04) lyyerror((yylsp[0]),"duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[-1].intval) | 04; }
#line 2475 "lpmysql.tab.c"
    break;

  case 37: /* select_opts: select_opts HIGH_PRIORITY  */
#line 408 "lpmysql.y"
                                  { if((yyval.intval) & 010) lyyerror((yylsp[0]),"duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[-1].intval) | 010; }
#line 2481 "lpmysql.tab.c"
    break;

  case 38: /* select_opts: select_opts STRAIGHT_JOIN  */
#line 409 "lpmysql.y"
                                  { if((yyval.intval) & 020) lyyerror((yylsp[0]),"duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[-1].intval) | 020; }
#line 2487 "lpmysql.tab.c"
    break;

  case 39: /* select_opts: select_opts SQL_SMALL_RESULT  */
#line 410 "lpmysql.y"
                                  { if((yyval.intval) & 040) lyyerror((yylsp[0]),"duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[-1].intval) | 040; }
#line 2493 "lpmysql.tab.c"
    break;

  case 40: /* select_opts: select_opts SQL_BIG_RESULT  */
#line 411 "lpmysql.y"
                                  { if((yyval.intval) & 0100) lyyerror((yylsp[0]),"duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[-1].intval) | 0100; }
#line 2499 "lpmysql.tab.c"
    break;

  case 41: /* select_opts: select_opts SQL_CALC_FOUND_ROWS  */
#line 412 "lpmysql.y"
                                  { if((yyval.intval) & 0200) lyyerror((yylsp[0]),"duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[-1].intval) | 0200; }
#line 2505 "lpmysql.tab.c"
    break;

  case 42: /* select_expr_list: select_expr  */
#line 415 "lpmysql.y"
                              { (yyval.intval) = 1; }
#line 2511 "lpmysql.tab.c"
    break;

  case 43: /* select_expr_list: select_expr_list ',' select_expr  */
#line 416 "lpmysql.y"
                                       {(yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2517 "lpmysql.tab.c"
    break;

  case 44: /* select_expr_list: '*'  */
#line 417 "lpmysql.y"
          { emit("SELECTALL"); (yyval.intval) = 1; }
#line 2523 "lpmysql.tab.c"
    break;

  case 46: /* table_references: table_reference  */
#line 422 "lpmysql.y"
                                     { (yyval.intval) = 1; }
#line 2529 "lpmysql.tab.c"
    break;

  case 47: /* table_references: table_references ',' table_reference  */
#line 423 "lpmysql.y"
                                           { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2535 "lpmysql.tab.c"
    break;

  case 50: /* table_factor: NAME opt_as_alias index_hint  */
#line 431 "lpmysql.y"
                                 { emit("TABLE %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 2541 "lpmysql.tab.c"
    break;

  case 51: /* table_factor: NAME '.' NAME opt_as_alias index_hint  */
#line 432 "lpmysql.y"
                                          { emit("TABLE %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval));
                               free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); }
#line 2548 "lpmysql.tab.c"
    break;

  case 52: /* table_factor: table_subquery opt_as NAME  */
#line 434 "lpmysql.y"
                               { emit("SUBQUERYAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2554 "lpmysql.tab.c"
    break;

  case 53: /* table_factor: '(' table_references ')'  */
#line 435 "lpmysql.y"
                             { emit("TABLEREFERENCES %d", (yyvsp[-1].intval)); }
#line 2560 "lpmysql.tab.c"
    break;

  case 56: /* opt_as_alias: AS NAME  */
#line 442 "lpmysql.y"
                      { emit ("ALIAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2566 "lpmysql.tab.c"
    break;

  case 57: /* opt_as_alias: NAME  */
#line 443 "lpmysql.y"
                      { emit ("ALIAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2572 "lpmysql.tab.c"
    break;

  case 59: /* join_table: table_reference opt_inner_cross JOIN table_factor opt_join_condition  */
#line 449 "lpmysql.y"
                  { emit("JOIN %d", 0100+(yyvsp[-3].intval)); }
#line 2578 "lpmysql.tab.c"
    break;

  case 60: /* join_table: table_reference STRAIGHT_JOIN table_factor  */
#line 451 "lpmysql.y"
                  { emit("JOIN %d", 0200); }
#line 2584 "lpmysql.tab.c"
    break;

  case 61: /* join_table: table_reference STRAIGHT_JOIN table_factor ON expr  */
#line 453 "lpmysql.y"
                  { emit("JOIN %d", 0200); }
#line 2590 "lpmysql.tab.c"
    break;

  case 62: /* join_table: table_reference left_or_right opt_outer JOIN table_factor join_condition  */
#line 455 "lpmysql.y"
                  { emit("JOIN %d", 0300+(yyvsp[-4].intval)+(yyvsp[-3].intval)); }
#line 2596 "lpmysql.tab.c"
    break;

  case 63: /* join_table: table_reference NATURAL opt_left_or_right_outer JOIN table_factor  */
#line 457 "lpmysql.y"
                  { emit("JOIN %d", 0400+(yyvsp[-2].intval)); }
#line 2602 "lpmysql.tab.c"
    break;

  case 64: /* opt_inner_cross: %empty  */
#line 460 "lpmysql.y"
                           { (yyval.intval) = 0; }
#line 2608 "lpmysql.tab.c"
    break;

  case 65: /* opt_inner_cross: INNER  */
#line 461 "lpmysql.y"
           { (yyval.intval) = 1; }
#line 2614 "lpmysql.tab.c"
    break;

  case 66: /* opt_inner_cross: CROSS  */
#line 462 "lpmysql.y"
            { (yyval.intval) = 2; }
#line 2620 "lpmysql.tab.c"
    break;

  case 67: /* opt_outer: %empty  */
#line 465 "lpmysql.y"
                      { (yyval.intval) = 0; }
#line 2626 "lpmysql.tab.c"
    break;

  case 68: /* opt_outer: OUTER  */
#line 466 "lpmysql.y"
           {(yyval.intval) = 4; }
#line 2632 "lpmysql.tab.c"
    break;

  case 69: /* left_or_right: LEFT  */
#line 469 "lpmysql.y"
                    { (yyval.intval) = 1; }
#line 2638 "lpmysql.tab.c"
    break;

  case 70: /* left_or_right: RIGHT  */
#line 470 "lpmysql.y"
            { (yyval.intval) = 2; }
#line 2644 "lpmysql.tab.c"
    break;

  case 71: /* opt_left_or_right_outer: LEFT opt_outer  */
#line 473 "lpmysql.y"
                                        { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 2650 "lpmysql.tab.c"
    break;

  case 72: /* opt_left_or_right_outer: RIGHT opt_outer  */
#line 474 "lpmysql.y"
                      { (yyval.intval) = 2 + (yyvsp[0].intval); }
#line 2656 "lpmysql.tab.c"
    break;

  case 73: /* opt_left_or_right_outer: %empty  */
#line 475 "lpmysql.y"
               { (yyval.intval) = 0; }
#line 2662 "lpmysql.tab.c"
    break;

  case 76: /* join_condition: ON expr  */
#line 481 "lpmysql.y"
            { emit("ONEXPR"); }
#line 2668 "lpmysql.tab.c"
    break;

  case 77: /* join_condition: USING '(' column_list ')'  */
#line 482 "lpmysql.y"
                                { emit("USING %d", (yyvsp[-1].intval)); }
#line 2674 "lpmysql.tab.c"
    break;

  case 78: /* index_hint: USE KEY opt_for_join '(' index_list ')'  */
#line 487 "lpmysql.y"
                  { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 010+(yyvsp[-3].intval)); }
#line 2680 "lpmysql.tab.c"
    break;

  case 79: /* index_hint: IGNORE KEY opt_for_join '(' index_list ')'  */
#line 489 "lpmysql.y"
                  { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 020+(yyvsp[-3].intval)); }
#line 2686 "lpmysql.tab.c"
    break;

  case 80: /* index_hint: FORCE KEY opt_for_join '(' index_list ')'  */
#line 491 "lpmysql.y"
                  { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 030+(yyvsp[-3].intval)); }
#line 2692 "lpmysql.tab.c"
    break;

  case 82: /* opt_for_join: FOR JOIN  */
#line 495 "lpmysql.y"
                       { (yyval.intval) = 1; }
#line 2698 "lpmysql.tab.c"
    break;

  case 83: /* opt_for_join: %empty  */
#line 496 "lpmysql.y"
               { (yyval.intval) = 0; }
#line 2704 "lpmysql.tab.c"
    break;

  case 84: /* index_list: NAME  */
#line 499 "lpmysql.y"
                  { emit("INDEX %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 2710 "lpmysql.tab.c"
    break;

  case 85: /* index_list: index_list ',' NAME  */
#line 500 "lpmysql.y"
                         { emit("INDEX %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2716 "lpmysql.tab.c"
    break;

  case 86: /* table_subquery: '(' select_stmt ')'  */
#line 503 "lpmysql.y"
                                    { emit("SUBQUERY"); }
#line 2722 "lpmysql.tab.c"
    break;

  case 87: /* stmt: delete_stmt  */
#line 508 "lpmysql.y"
                  { emit("STMT"); }
#line 2728 "lpmysql.tab.c"
    break;

  case 88: /* delete_stmt: DELETE delete_opts FROM NAME opt_where opt_orderby opt_limit  */
#line 513 "lpmysql.y"
                  { emit("DELETEONE %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2734 "lpmysql.tab.c"
    break;

  case 89: /* delete_opts: delete_opts LOW_PRIORITY  */
#line 516 "lpmysql.y"
                                      { (yyval.intval) = (yyvsp[-1].intval) + 01; }
#line 2740 "lpmysql.tab.c"
    break;

  case 90: /* delete_opts: delete_opts QUICK  */
#line 517 "lpmysql.y"
                       { (yyval.intval) = (yyvsp[-1].intval) + 02; }
#line 2746 "lpmysql.tab.c"
    break;

  case 91: /* delete_opts: delete_opts IGNORE  */
#line 518 "lpmysql.y"
                        { (yyval.intval) = (yyvsp[-1].intval) + 04; }
#line 2752 "lpmysql.tab.c"
    break;

  case 92: /* delete_opts: %empty  */
#line 519 "lpmysql.y"
               { (yyval.intval) = 0; }
#line 2758 "lpmysql.tab.c"
    break;

  case 93: /* delete_stmt: DELETE delete_opts delete_list FROM table_references opt_where  */
#line 525 "lpmysql.y"
            { emit("DELETEMULTI %d %d %d", (yyvsp[-4].intval), (yyvsp[-3].intval), (yyvsp[-1].intval)); }
#line 2764 "lpmysql.tab.c"
    break;

  case 94: /* delete_list: NAME opt_dot_star  */
#line 527 "lpmysql.y"
                               { emit("TABLE %s", (yyvsp[-1].strval)); free((yyvsp[-1].strval)); (yyval.intval) = 1; }
#line 2770 "lpmysql.tab.c"
    break;

  case 95: /* delete_list: delete_list ',' NAME opt_dot_star  */
#line 529 "lpmysql.y"
            { emit("TABLE %s", (yyvsp[-1].strval)); free((yyvsp[-1].strval)); (yyval.intval) = (yyvsp[-3].intval) + 1; }
#line 2776 "lpmysql.tab.c"
    break;

  case 98: /* delete_stmt: DELETE delete_opts FROM delete_list USING table_references opt_where  */
#line 537 "lpmysql.y"
            { emit("DELETEMULTI %d %d %d", (yyvsp[-5].intval), (yyvsp[-3].intval), (yyvsp[-1].intval)); }
#line 2782 "lpmysql.tab.c"
    break;

  case 99: /* stmt: insert_stmt  */
#line 542 "lpmysql.y"
                  { emit("STMT"); }
#line 2788 "lpmysql.tab.c"
    break;

  case 100: /* insert_stmt: INSERT insert_opts opt_into NAME opt_col_names VALUES insert_vals_list opt_ondupupdate  */
#line 548 "lpmysql.y"
                     { emit("INSERTVALS %d %d %s", (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 2794 "lpmysql.tab.c"
    break;

  case 102: /* opt_ondupupdate: ONDUPLICATE KEY UPDATE insert_asgn_list  */
#line 552 "lpmysql.y"
                                             { emit("DUPUPDATE %d", (yyvsp[0].intval)); }
#line 2800 "lpmysql.tab.c"
    break;

  case 103: /* insert_opts: %empty  */
#line 555 "lpmysql.y"
                       { (yyval.intval) = 0; }
#line 2806 "lpmysql.tab.c"
    break;

  case 104: /* insert_opts: insert_opts LOW_PRIORITY  */
#line 556 "lpmysql.y"
                              { (yyval.intval) = (yyvsp[-1].intval) | 01 ; }
#line 2812 "lpmysql.tab.c"
    break;

  case 105: /* insert_opts: insert_opts DELAYED  */
#line 557 "lpmysql.y"
                         { (yyval.intval) = (yyvsp[-1].intval) | 02 ; }
#line 2818 "lpmysql.tab.c"
    break;

  case 106: /* insert_opts: insert_opts HIGH_PRIORITY  */
#line 558 "lpmysql.y"
                               { (yyval.intval) = (yyvsp[-1].intval) | 04 ; }
#line 2824 "lpmysql.tab.c"
    break;

  case 107: /* insert_opts: insert_opts IGNORE  */
#line 559 "lpmysql.y"
                        { (yyval.intval) = (yyvsp[-1].intval) | 010 ; }
#line 2830 "lpmysql.tab.c"
    break;

  case 111: /* opt_col_names: '(' column_list ')'  */
#line 566 "lpmysql.y"
                         { emit("INSERTCOLS %d", (yyvsp[-1].intval)); }
#line 2836 "lpmysql.tab.c"
    break;

  case 112: /* insert_vals_list: '(' insert_vals ')'  */
#line 569 "lpmysql.y"
                                      { emit("VALUES %d", (yyvsp[-1].intval)); (yyval.intval) = 1; }
#line 2842 "lpmysql.tab.c"
    break;

  case 113: /* insert_vals_list: insert_vals_list ',' '(' insert_vals ')'  */
#line 570 "lpmysql.y"
                                              { emit("VALUES %d", (yyvsp[-1].intval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 2848 "lpmysql.tab.c"
    break;

  case 114: /* insert_vals: expr  */
#line 573 "lpmysql.y"
          { (yyval.intval) = 1; }
#line 2854 "lpmysql.tab.c"
    break;

  case 115: /* insert_vals: DEFAULT  */
#line 574 "lpmysql.y"
             { emit("DEFAULT"); (yyval.intval) = 1; }
#line 2860 "lpmysql.tab.c"
    break;

  case 116: /* insert_vals: insert_vals ',' expr  */
#line 575 "lpmysql.y"
                          { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2866 "lpmysql.tab.c"
    break;

  case 117: /* insert_vals: insert_vals ',' DEFAULT  */
#line 576 "lpmysql.y"
                             { emit("DEFAULT"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2872 "lpmysql.tab.c"
    break;

  case 118: /* insert_stmt: INSERT insert_opts opt_into NAME SET insert_asgn_list opt_ondupupdate  */
#line 582 "lpmysql.y"
     { emit("INSERTASGN %d %d %s", (yyvsp[-5].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2878 "lpmysql.tab.c"
    break;

  case 119: /* insert_stmt: INSERT insert_opts opt_into NAME opt_col_names select_stmt opt_ondupupdate  */
#line 587 "lpmysql.y"
                    { emit("INSERTSELECT %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2884 "lpmysql.tab.c"
    break;

  case 120: /* insert_asgn_list: NAME COMPARISON expr  */
#line 592 "lpmysql.y"
       { if ((yyvsp[-1].subtok) != 4) { lyyerror((yylsp[-1]),"bad insert assignment to %s", (yyvsp[-2].strval)); YYERROR; }
       emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 2891 "lpmysql.tab.c"
    break;

  case 121: /* insert_asgn_list: NAME COMPARISON DEFAULT  */
#line 595 "lpmysql.y"
       { if ((yyvsp[-1].subtok) != 4) { lyyerror((yylsp[-1]),"bad insert assignment to %s", (yyvsp[-2].strval)); YYERROR; }
                 emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 2898 "lpmysql.tab.c"
    break;

  case 122: /* insert_asgn_list: insert_asgn_list ',' NAME COMPARISON expr  */
#line 598 "lpmysql.y"
       { if ((yyvsp[-1].subtok) != 4) { lyyerror((yylsp[-1]),"bad insert assignment to %s", (yyvsp[-4].intval)); YYERROR; }
                 emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 2905 "lpmysql.tab.c"
    break;

  case 123: /* insert_asgn_list: insert_asgn_list ',' NAME COMPARISON DEFAULT  */
#line 601 "lpmysql.y"
       { if ((yyvsp[-1].subtok) != 4) { lyyerror((yylsp[-1]),"bad insert assignment to %s", (yyvsp[-4].intval)); YYERROR; }
                 emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 2912 "lpmysql.tab.c"
    break;

  case 124: /* stmt: replace_stmt  */
#line 606 "lpmysql.y"
                   { emit("STMT"); }
#line 2918 "lpmysql.tab.c"
    break;

  case 125: /* replace_stmt: REPLACE insert_opts opt_into NAME opt_col_names VALUES insert_vals_list opt_ondupupdate  */
#line 612 "lpmysql.y"
                     { emit("REPLACEVALS %d %d %s", (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 2924 "lpmysql.tab.c"
    break;

  case 126: /* replace_stmt: REPLACE insert_opts opt_into NAME SET insert_asgn_list opt_ondupupdate  */
#line 618 "lpmysql.y"
     { emit("REPLACEASGN %d %d %s", (yyvsp[-5].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2930 "lpmysql.tab.c"
    break;

  case 127: /* replace_stmt: REPLACE insert_opts opt_into NAME opt_col_names select_stmt opt_ondupupdate  */
#line 623 "lpmysql.y"
                    { emit("REPLACESELECT %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2936 "lpmysql.tab.c"
    break;

  case 128: /* stmt: update_stmt  */
#line 627 "lpmysql.y"
                  { emit("STMT"); }
#line 2942 "lpmysql.tab.c"
    break;

  case 129: /* update_stmt: UPDATE update_opts table_references SET update_asgn_list opt_where opt_orderby opt_limit  */
#line 634 "lpmysql.y"
          { emit("UPDATE %d %d %d", (yyvsp[-6].intval), (yyvsp[-5].intval), (yyvsp[-3].intval)); }
#line 2948 "lpmysql.tab.c"
    break;

  case 130: /* update_opts: %empty  */
#line 637 "lpmysql.y"
                       { (yyval.intval) = 0; }
#line 2954 "lpmysql.tab.c"
    break;

  case 131: /* update_opts: insert_opts LOW_PRIORITY  */
#line 638 "lpmysql.y"
                              { (yyval.intval) = (yyvsp[-1].intval) | 01 ; }
#line 2960 "lpmysql.tab.c"
    break;

  case 132: /* update_opts: insert_opts IGNORE  */
#line 639 "lpmysql.y"
                        { (yyval.intval) = (yyvsp[-1].intval) | 010 ; }
#line 2966 "lpmysql.tab.c"
    break;

  case 133: /* update_asgn_list: NAME COMPARISON expr  */
#line 644 "lpmysql.y"
     { if ((yyvsp[-1].subtok) != 4) { lyyerror((yylsp[-1]),"bad update assignment to %s", (yyvsp[-2].strval)); YYERROR; }
	 emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 2973 "lpmysql.tab.c"
    break;

  case 134: /* update_asgn_list: NAME '.' NAME COMPARISON expr  */
#line 647 "lpmysql.y"
   { if ((yyvsp[-1].subtok) != 4) { lyyerror((yylsp[-1]),"bad update assignment to %s", (yyvsp[-4].strval)); YYERROR; }
	 emit("ASSIGN %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval)); free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 2980 "lpmysql.tab.c"
    break;

  case 135: /* update_asgn_list: update_asgn_list ',' NAME COMPARISON expr  */
#line 650 "lpmysql.y"
   { if ((yyvsp[-1].subtok) != 4) { lyyerror((yylsp[-1]),"bad update assignment to %s", (yyvsp[-2].strval)); YYERROR; }
	 emit("ASSIGN %s.%s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 2987 "lpmysql.tab.c"
    break;

  case 136: /* update_asgn_list: update_asgn_list ',' NAME '.' NAME COMPARISON expr  */
#line 653 "lpmysql.y"
   { if ((yyvsp[-1].subtok) != 4) { lyyerror((yylsp[-1]),"bad update  assignment to %s.$s", (yyvsp[-4].strval), (yyvsp[-2].strval)); YYERROR; }
	 emit("ASSIGN %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval)); free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 2994 "lpmysql.tab.c"
    break;

  case 137: /* stmt: create_database_stmt  */
#line 660 "lpmysql.y"
                           { emit("STMT"); }
#line 3000 "lpmysql.tab.c"
    break;

  case 138: /* create_database_stmt: CREATE DATABASE opt_if_not_exists NAME  */
#line 664 "lpmysql.y"
                                            { emit("CREATEDATABASE %d %s", (yyvsp[-1].intval), (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3006 "lpmysql.tab.c"
    break;

  case 139: /* create_database_stmt: CREATE SCHEMA opt_if_not_exists NAME  */
#line 665 "lpmysql.y"
                                          { emit("CREATEDATABASE %d %s", (yyvsp[-1].intval), (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3012 "lpmysql.tab.c"
    break;

  case 140: /* opt_if_not_exists: %empty  */
#line 668 "lpmysql.y"
                              { (yyval.intval) = 0; }
#line 3018 "lpmysql.tab.c"
    break;

  case 141: /* opt_if_not_exists: IF EXISTS  */
#line 669 "lpmysql.y"
                      { if(!(yyvsp[0].subtok)) { lyyerror((yylsp[0]),"IF EXISTS doesn't exist"); YYERROR; }
                        (yyval.intval) = (yyvsp[0].subtok); /* NOT EXISTS hack */ }
#line 3025 "lpmysql.tab.c"
    break;

  case 142: /* stmt: create_table_stmt  */
#line 675 "lpmysql.y"
                        { emit("STMT"); }
#line 3031 "lpmysql.tab.c"
    break;

  case 143: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '(' create_col_list ')'  */
#line 679 "lpmysql.y"
                           { emit("CREATE %d %d %d %s", (yyvsp[-6].intval), (yyvsp[-4].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3037 "lpmysql.tab.c"
    break;

  case 144: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME '(' create_col_list ')'  */
#line 683 "lpmysql.y"
                           { emit("CREATE %d %d %d %s.%s", (yyvsp[-8].intval), (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-5].strval), (yyvsp[-3].strval));
                          free((yyvsp[-5].strval)); free((yyvsp[-3].strval)); }
#line 3044 "lpmysql.tab.c"
    break;

  case 145: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '(' create_col_list ')' create_select_statement  */
#line 689 "lpmysql.y"
                        { emit("CREATESELECT %d %d %d %s", (yyvsp[-7].intval), (yyvsp[-5].intval), (yyvsp[-2].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 3050 "lpmysql.tab.c"
    break;

  case 146: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME create_select_statement  */
#line 693 "lpmysql.y"
                           { emit("CREATESELECT %d %d 0 %s", (yyvsp[-4].intval), (yyvsp[-2].intval), (yyvsp[-1].strval)); free((yyvsp[-1].strval)); }
#line 3056 "lpmysql.tab.c"
    break;

  case 147: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME '(' create_col_list ')' create_select_statement  */
#line 698 "lpmysql.y"
                            { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[-9].intval), (yyvsp[-7].intval), (yyvsp[-6].strval), (yyvsp[-4].strval));
                              free((yyvsp[-6].strval)); free((yyvsp[-4].strval)); }
#line 3063 "lpmysql.tab.c"
    break;

  case 148: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME create_select_statement  */
#line 703 "lpmysql.y"
                           { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[-6].intval), (yyvsp[-4].intval), (yyvsp[-3].strval), (yyvsp[-1].strval));
                          free((yyvsp[-3].strval)); free((yyvsp[-1].strval)); }
#line 3070 "lpmysql.tab.c"
    break;

  case 149: /* create_col_list: create_definition  */
#line 707 "lpmysql.y"
                                   { (yyval.intval) = 1; }
#line 3076 "lpmysql.tab.c"
    break;

  case 150: /* create_col_list: create_col_list ',' create_definition  */
#line 708 "lpmysql.y"
                                            { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3082 "lpmysql.tab.c"
    break;

  case 151: /* $@1: %empty  */
#line 711 "lpmysql.y"
                   { emit("STARTCOL"); }
#line 3088 "lpmysql.tab.c"
    break;

  case 152: /* create_definition: $@1 NAME data_type column_atts  */
#line 712 "lpmysql.y"
                   { emit("COLUMNDEF %d %s", (yyvsp[-1].intval), (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3094 "lpmysql.tab.c"
    break;

  case 153: /* create_definition: PRIMARY KEY '(' column_list ')'  */
#line 714 "lpmysql.y"
                                         { emit("PRIKEY %d", (yyvsp[-1].intval)); }
#line 3100 "lpmysql.tab.c"
    break;

  case 154: /* create_definition: KEY '(' column_list ')'  */
#line 715 "lpmysql.y"
                                         { emit("KEY %d", (yyvsp[-1].intval)); }
#line 3106 "lpmysql.tab.c"
    break;

  case 155: /* create_definition: INDEX '(' column_list ')'  */
#line 716 "lpmysql.y"
                                         { emit("KEY %d", (yyvsp[-1].intval)); }
#line 3112 "lpmysql.tab.c"
    break;

  case 156: /* create_definition: FULLTEXT INDEX '(' column_list ')'  */
#line 717 "lpmysql.y"
                                         { emit("TEXTINDEX %d", (yyvsp[-1].intval)); }
#line 3118 "lpmysql.tab.c"
    break;

  case 157: /* create_definition: FULLTEXT KEY '(' column_list ')'  */
#line 718 "lpmysql.y"
                                         { emit("TEXTINDEX %d", (yyvsp[-1].intval)); }
#line 3124 "lpmysql.tab.c"
    break;

  case 158: /* column_atts: %empty  */
#line 721 "lpmysql.y"
                       { (yyval.intval) = 0; }
#line 3130 "lpmysql.tab.c"
    break;

  case 159: /* column_atts: column_atts NOT NULLX  */
#line 722 "lpmysql.y"
                                        { emit("ATTR NOTNULL"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3136 "lpmysql.tab.c"
    break;

  case 161: /* column_atts: column_atts DEFAULT STRING  */
#line 724 "lpmysql.y"
                                        { emit("ATTR DEFAULT STRING %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3142 "lpmysql.tab.c"
    break;

  case 162: /* column_atts: column_atts DEFAULT INTNUM  */
#line 725 "lpmysql.y"
                                        { emit("ATTR DEFAULT NUMBER %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3148 "lpmysql.tab.c"
    break;

  case 163: /* column_atts: column_atts DEFAULT APPROXNUM  */
#line 726 "lpmysql.y"
                                        { emit("ATTR DEFAULT FLOAT %g", (yyvsp[0].floatval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3154 "lpmysql.tab.c"
    break;

  case 164: /* column_atts: column_atts DEFAULT BOOL  */
#line 727 "lpmysql.y"
                                        { emit("ATTR DEFAULT BOOL %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3160 "lpmysql.tab.c"
    break;

  case 165: /* column_atts: column_atts AUTO_INCREMENT  */
#line 728 "lpmysql.y"
                                        { emit("ATTR AUTOINC"); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 3166 "lpmysql.tab.c"
    break;

  case 166: /* column_atts: column_atts UNIQUE '(' column_list ')'  */
#line 729 "lpmysql.y"
                                             { emit("ATTR UNIQUEKEY %d", (yyvsp[-1].intval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3172 "lpmysql.tab.c"
    break;

  case 167: /* column_atts: column_atts UNIQUE KEY  */
#line 730 "lpmysql.y"
                             { emit("ATTR UNIQUEKEY"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3178 "lpmysql.tab.c"
    break;

  case 168: /* column_atts: column_atts PRIMARY KEY  */
#line 731 "lpmysql.y"
                              { emit("ATTR PRIKEY"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3184 "lpmysql.tab.c"
    break;

  case 169: /* column_atts: column_atts KEY  */
#line 732 "lpmysql.y"
                      { emit("ATTR PRIKEY"); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 3190 "lpmysql.tab.c"
    break;

  case 170: /* column_atts: column_atts COMMENT STRING  */
#line 733 "lpmysql.y"
                                 { emit("ATTR COMMENT %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3196 "lpmysql.tab.c"
    break;

  case 171: /* opt_length: %empty  */
#line 736 "lpmysql.y"
                      { (yyval.intval) = 0; }
#line 3202 "lpmysql.tab.c"
    break;

  case 172: /* opt_length: '(' INTNUM ')'  */
#line 737 "lpmysql.y"
                    { (yyval.intval) = (yyvsp[-1].intval); }
#line 3208 "lpmysql.tab.c"
    break;

  case 173: /* opt_length: '(' INTNUM ',' INTNUM ')'  */
#line 738 "lpmysql.y"
                               { (yyval.intval) = (yyvsp[-3].intval) + 1000*(yyvsp[-1].intval); }
#line 3214 "lpmysql.tab.c"
    break;

  case 174: /* opt_binary: %empty  */
#line 741 "lpmysql.y"
                      { (yyval.intval) = 0; }
#line 3220 "lpmysql.tab.c"
    break;

  case 175: /* opt_binary: BINARY  */
#line 742 "lpmysql.y"
            { (yyval.intval) = 4000; }
#line 3226 "lpmysql.tab.c"
    break;

  case 176: /* opt_uz: %empty  */
#line 745 "lpmysql.y"
                  { (yyval.intval) = 0; }
#line 3232 "lpmysql.tab.c"
    break;

  case 177: /* opt_uz: opt_uz UNSIGNED  */
#line 746 "lpmysql.y"
                     { (yyval.intval) = (yyvsp[-1].intval) | 1000; }
#line 3238 "lpmysql.tab.c"
    break;

  case 178: /* opt_uz: opt_uz ZEROFILL  */
#line 747 "lpmysql.y"
                     { (yyval.intval) = (yyvsp[-1].intval) | 2000; }
#line 3244 "lpmysql.tab.c"
    break;

  case 180: /* opt_csc: opt_csc CHAR SET STRING  */
#line 751 "lpmysql.y"
                             { emit("COLCHARSET %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3250 "lpmysql.tab.c"
    break;

  case 181: /* opt_csc: opt_csc COLLATE STRING  */
#line 752 "lpmysql.y"
                            { emit("COLCOLLATE %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3256 "lpmysql.tab.c"
    break;

  case 182: /* data_type: BIT opt_length  */
#line 756 "lpmysql.y"
                    { (yyval.intval) = 10000 + (yyvsp[0].intval); }
#line 3262 "lpmysql.tab.c"
    break;

  case 183: /* data_type: TINYINT opt_length opt_uz  */
#line 757 "lpmysql.y"
                               { (yyval.intval) = 10000 + (yyvsp[-1].intval); }
#line 3268 "lpmysql.tab.c"
    break;

  case 184: /* data_type: SMALLINT opt_length opt_uz  */
#line 758 "lpmysql.y"
                                { (yyval.intval) = 20000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3274 "lpmysql.tab.c"
    break;

  case 185: /* data_type: MEDIUMINT opt_length opt_uz  */
#line 759 "lpmysql.y"
                                 { (yyval.intval) = 30000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3280 "lpmysql.tab.c"
    break;

  case 186: /* data_type: INT opt_length opt_uz  */
#line 760 "lpmysql.y"
                           { (yyval.intval) = 40000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3286 "lpmysql.tab.c"
    break;

  case 187: /* data_type: INTEGER opt_length opt_uz  */
#line 761 "lpmysql.y"
                               { (yyval.intval) = 50000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3292 "lpmysql.tab.c"
    break;

  case 188: /* data_type: BIGINT opt_length opt_uz  */
#line 762 "lpmysql.y"
                              { (yyval.intval) = 60000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3298 "lpmysql.tab.c"
    break;

  case 189: /* data_type: REAL opt_length opt_uz  */
#line 763 "lpmysql.y"
                            { (yyval.intval) = 70000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3304 "lpmysql.tab.c"
    break;

  case 190: /* data_type: DOUBLE opt_length opt_uz  */
#line 764 "lpmysql.y"
                              { (yyval.intval) = 80000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3310 "lpmysql.tab.c"
    break;

  case 191: /* data_type: FLOAT opt_length opt_uz  */
#line 765 "lpmysql.y"
                             { (yyval.intval) = 90000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3316 "lpmysql.tab.c"
    break;

  case 192: /* data_type: DECIMAL opt_length opt_uz  */
#line 766 "lpmysql.y"
                               { (yyval.intval) = 110000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3322 "lpmysql.tab.c"
    break;

  case 193: /* data_type: DATE  */
#line 767 "lpmysql.y"
          { (yyval.intval) = 100001; }
#line 3328 "lpmysql.tab.c"
    break;

  case 194: /* data_type: TIME  */
#line 768 "lpmysql.y"
          { (yyval.intval) = 100002; }
#line 3334 "lpmysql.tab.c"
    break;

  case 195: /* data_type: TIMESTAMP  */
#line 769 "lpmysql.y"
               { (yyval.intval) = 100003; }
#line 3340 "lpmysql.tab.c"
    break;

  case 196: /* data_type: DATETIME  */
#line 770 "lpmysql.y"
              { (yyval.intval) = 100004; }
#line 3346 "lpmysql.tab.c"
    break;

  case 197: /* data_type: YEAR  */
#line 771 "lpmysql.y"
          { (yyval.intval) = 100005; }
#line 3352 "lpmysql.tab.c"
    break;

  case 198: /* data_type: CHAR opt_length opt_csc  */
#line 772 "lpmysql.y"
                             { (yyval.intval) = 120000 + (yyvsp[-1].intval); }
#line 3358 "lpmysql.tab.c"
    break;

  case 199: /* data_type: VARCHAR '(' INTNUM ')' opt_csc  */
#line 773 "lpmysql.y"
                                    { (yyval.intval) = 130000 + (yyvsp[-2].intval); }
#line 3364 "lpmysql.tab.c"
    break;

  case 200: /* data_type: BINARY opt_length  */
#line 774 "lpmysql.y"
                       { (yyval.intval) = 140000 + (yyvsp[0].intval); }
#line 3370 "lpmysql.tab.c"
    break;

  case 201: /* data_type: VARBINARY '(' INTNUM ')'  */
#line 775 "lpmysql.y"
                              { (yyval.intval) = 150000 + (yyvsp[-1].intval); }
#line 3376 "lpmysql.tab.c"
    break;

  case 202: /* data_type: TINYBLOB  */
#line 776 "lpmysql.y"
              { (yyval.intval) = 160001; }
#line 3382 "lpmysql.tab.c"
    break;

  case 203: /* data_type: BLOB  */
#line 777 "lpmysql.y"
          { (yyval.intval) = 160002; }
#line 3388 "lpmysql.tab.c"
    break;

  case 204: /* data_type: MEDIUMBLOB  */
#line 778 "lpmysql.y"
                { (yyval.intval) = 160003; }
#line 3394 "lpmysql.tab.c"
    break;

  case 205: /* data_type: LONGBLOB  */
#line 779 "lpmysql.y"
              { (yyval.intval) = 160004; }
#line 3400 "lpmysql.tab.c"
    break;

  case 206: /* data_type: TINYTEXT opt_binary opt_csc  */
#line 780 "lpmysql.y"
                                 { (yyval.intval) = 170000 + (yyvsp[-1].intval); }
#line 3406 "lpmysql.tab.c"
    break;

  case 207: /* data_type: TEXT opt_binary opt_csc  */
#line 781 "lpmysql.y"
                             { (yyval.intval) = 171000 + (yyvsp[-1].intval); }
#line 3412 "lpmysql.tab.c"
    break;

  case 208: /* data_type: MEDIUMTEXT opt_binary opt_csc  */
#line 782 "lpmysql.y"
                                   { (yyval.intval) = 172000 + (yyvsp[-1].intval); }
#line 3418 "lpmysql.tab.c"
    break;

  case 209: /* data_type: LONGTEXT opt_binary opt_csc  */
#line 783 "lpmysql.y"
                                 { (yyval.intval) = 173000 + (yyvsp[-1].intval); }
#line 3424 "lpmysql.tab.c"
    break;

  case 210: /* data_type: ENUM '(' enum_list ')' opt_csc  */
#line 784 "lpmysql.y"
                                    { (yyval.intval) = 200000 + (yyvsp[-2].intval); }
#line 3430 "lpmysql.tab.c"
    break;

  case 211: /* data_type: SET '(' enum_list ')' opt_csc  */
#line 785 "lpmysql.y"
                                   { (yyval.intval) = 210000 + (yyvsp[-2].intval); }
#line 3436 "lpmysql.tab.c"
    break;

  case 212: /* enum_list: STRING  */
#line 788 "lpmysql.y"
                  { emit("ENUMVAL %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 3442 "lpmysql.tab.c"
    break;

  case 213: /* enum_list: enum_list ',' STRING  */
#line 789 "lpmysql.y"
                          { emit("ENUMVAL %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3448 "lpmysql.tab.c"
    break;

  case 214: /* create_select_statement: opt_ignore_replace opt_as select_stmt  */
#line 792 "lpmysql.y"
                                                               { emit("CREATESELECT %d", (yyvsp[-2].intval)); }
#line 3454 "lpmysql.tab.c"
    break;

  case 215: /* opt_ignore_replace: %empty  */
#line 795 "lpmysql.y"
                              { (yyval.intval) = 0; }
#line 3460 "lpmysql.tab.c"
    break;

  case 216: /* opt_ignore_replace: IGNORE  */
#line 796 "lpmysql.y"
            { (yyval.intval) = 1; }
#line 3466 "lpmysql.tab.c"
    break;

  case 217: /* opt_ignore_replace: REPLACE  */
#line 797 "lpmysql.y"
             { (yyval.intval) = 2; }
#line 3472 "lpmysql.tab.c"
    break;

  case 218: /* opt_temporary: %empty  */
#line 800 "lpmysql.y"
                           { (yyval.intval) = 0; }
#line 3478 "lpmysql.tab.c"
    break;

  case 219: /* opt_temporary: TEMPORARY  */
#line 801 "lpmysql.y"
               { (yyval.intval) = 1;}
#line 3484 "lpmysql.tab.c"
    break;

  case 220: /* stmt: set_stmt  */
#line 806 "lpmysql.y"
               { emit("STMT"); }
#line 3490 "lpmysql.tab.c"
    break;

  case 224: /* set_expr: USERVAR COMPARISON expr  */
#line 814 "lpmysql.y"
                        { if ((yyvsp[-1].subtok) != 4) { lyyerror((yylsp[-1]),"bad set to @%s", (yyvsp[-2].strval)); YYERROR; }
		 emit("SET %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3497 "lpmysql.tab.c"
    break;

  case 225: /* set_expr: USERVAR ASSIGN expr  */
#line 816 "lpmysql.y"
                          { emit("SET %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3503 "lpmysql.tab.c"
    break;

  case 226: /* expr: NAME  */
#line 821 "lpmysql.y"
                    { emit("NAME %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3509 "lpmysql.tab.c"
    break;

  case 227: /* expr: USERVAR  */
#line 822 "lpmysql.y"
                     { emit("USERVAR %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3515 "lpmysql.tab.c"
    break;

  case 228: /* expr: NAME '.' NAME  */
#line 823 "lpmysql.y"
                   { emit("FIELDNAME %s.%s", (yyvsp[-2].strval), (yyvsp[0].strval)); free((yyvsp[-2].strval)); free((yyvsp[0].strval)); }
#line 3521 "lpmysql.tab.c"
    break;

  case 229: /* expr: STRING  */
#line 824 "lpmysql.y"
                   { emit("STRING %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3527 "lpmysql.tab.c"
    break;

  case 230: /* expr: INTNUM  */
#line 825 "lpmysql.y"
                   { emit("NUMBER %d", (yyvsp[0].intval)); }
#line 3533 "lpmysql.tab.c"
    break;

  case 231: /* expr: APPROXNUM  */
#line 826 "lpmysql.y"
                   { emit("FLOAT %g", (yyvsp[0].floatval)); }
#line 3539 "lpmysql.tab.c"
    break;

  case 232: /* expr: BOOL  */
#line 827 "lpmysql.y"
                   { emit("BOOL %d", (yyvsp[0].intval)); }
#line 3545 "lpmysql.tab.c"
    break;

  case 233: /* expr: expr '+' expr  */
#line 830 "lpmysql.y"
                    { emit("ADD"); }
#line 3551 "lpmysql.tab.c"
    break;

  case 234: /* expr: expr '-' expr  */
#line 831 "lpmysql.y"
                   { emit("SUB"); }
#line 3557 "lpmysql.tab.c"
    break;

  case 235: /* expr: expr '*' expr  */
#line 832 "lpmysql.y"
                   { emit("MUL"); }
#line 3563 "lpmysql.tab.c"
    break;

  case 236: /* expr: expr '/' expr  */
#line 833 "lpmysql.y"
                   { emit("DIV"); }
#line 3569 "lpmysql.tab.c"
    break;

  case 237: /* expr: expr '%' expr  */
#line 834 "lpmysql.y"
                   { emit("MOD"); }
#line 3575 "lpmysql.tab.c"
    break;

  case 238: /* expr: expr MOD expr  */
#line 835 "lpmysql.y"
                   { emit("MOD"); }
#line 3581 "lpmysql.tab.c"
    break;

  case 239: /* expr: '-' expr  */
#line 836 "lpmysql.y"
                           { emit("NEG"); }
#line 3587 "lpmysql.tab.c"
    break;

  case 240: /* expr: expr ANDOP expr  */
#line 837 "lpmysql.y"
                     { emit("AND"); }
#line 3593 "lpmysql.tab.c"
    break;

  case 241: /* expr: expr OR expr  */
#line 838 "lpmysql.y"
                  { emit("OR"); }
#line 3599 "lpmysql.tab.c"
    break;

  case 242: /* expr: expr XOR expr  */
#line 839 "lpmysql.y"
                   { emit("XOR"); }
#line 3605 "lpmysql.tab.c"
    break;

  case 243: /* expr: expr COMPARISON expr  */
#line 840 "lpmysql.y"
                          { emit("CMP %d", (yyvsp[-1].subtok)); }
#line 3611 "lpmysql.tab.c"
    break;

  case 244: /* expr: expr COMPARISON '(' select_stmt ')'  */
#line 841 "lpmysql.y"
                                         { emit("CMPSELECT %d", (yyvsp[-3].subtok)); }
#line 3617 "lpmysql.tab.c"
    break;

  case 245: /* expr: expr COMPARISON ANY '(' select_stmt ')'  */
#line 842 "lpmysql.y"
                                             { emit("CMPANYSELECT %d", (yyvsp[-4].subtok)); }
#line 3623 "lpmysql.tab.c"
    break;

  case 246: /* expr: expr COMPARISON SOME '(' select_stmt ')'  */
#line 843 "lpmysql.y"
                                              { emit("CMPANYSELECT %d", (yyvsp[-4].subtok)); }
#line 3629 "lpmysql.tab.c"
    break;

  case 247: /* expr: expr COMPARISON ALL '(' select_stmt ')'  */
#line 844 "lpmysql.y"
                                             { emit("CMPALLSELECT %d", (yyvsp[-4].subtok)); }
#line 3635 "lpmysql.tab.c"
    break;

  case 248: /* expr: expr '|' expr  */
#line 845 "lpmysql.y"
                   { emit("BITOR"); }
#line 3641 "lpmysql.tab.c"
    break;

  case 249: /* expr: expr '&' expr  */
#line 846 "lpmysql.y"
                   { emit("BITAND"); }
#line 3647 "lpmysql.tab.c"
    break;

  case 250: /* expr: expr '^' expr  */
#line 847 "lpmysql.y"
                   { emit("BITXOR"); }
#line 3653 "lpmysql.tab.c"
    break;

  case 251: /* expr: expr SHIFT expr  */
#line 848 "lpmysql.y"
                     { emit("SHIFT %s", (yyvsp[-1].subtok)==1?"left":"right"); }
#line 3659 "lpmysql.tab.c"
    break;

  case 252: /* expr: NOT expr  */
#line 849 "lpmysql.y"
              { emit("NOT"); }
#line 3665 "lpmysql.tab.c"
    break;

  case 253: /* expr: '!' expr  */
#line 850 "lpmysql.y"
              { emit("NOT"); }
#line 3671 "lpmysql.tab.c"
    break;

  case 254: /* expr: USERVAR ASSIGN expr  */
#line 851 "lpmysql.y"
                         { emit("ASSIGN @%s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3677 "lpmysql.tab.c"
    break;

  case 255: /* expr: expr IS NULLX  */
#line 854 "lpmysql.y"
                         { emit("ISNULL"); }
#line 3683 "lpmysql.tab.c"
    break;

  case 256: /* expr: expr IS NOT NULLX  */
#line 855 "lpmysql.y"
                         { emit("ISNULL"); emit("NOT"); }
#line 3689 "lpmysql.tab.c"
    break;

  case 257: /* expr: expr IS BOOL  */
#line 856 "lpmysql.y"
                         { emit("ISBOOL %d", (yyvsp[0].intval)); }
#line 3695 "lpmysql.tab.c"
    break;

  case 258: /* expr: expr IS NOT BOOL  */
#line 857 "lpmysql.y"
                         { emit("ISBOOL %d", (yyvsp[0].intval)); emit("NOT"); }
#line 3701 "lpmysql.tab.c"
    break;

  case 259: /* expr: expr BETWEEN expr AND expr  */
#line 860 "lpmysql.y"
                                               { emit("BETWEEN"); }
#line 3707 "lpmysql.tab.c"
    break;

  case 260: /* val_list: expr  */
#line 864 "lpmysql.y"
               { (yyval.intval) = 1; }
#line 3713 "lpmysql.tab.c"
    break;

  case 261: /* val_list: expr ',' val_list  */
#line 865 "lpmysql.y"
                       { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 3719 "lpmysql.tab.c"
    break;

  case 262: /* opt_val_list: %empty  */
#line 868 "lpmysql.y"
                        { (yyval.intval) = 0; }
#line 3725 "lpmysql.tab.c"
    break;

  case 264: /* expr: expr IN '(' val_list ')'  */
#line 872 "lpmysql.y"
                                     { emit("ISIN %d", (yyvsp[-1].intval)); }
#line 3731 "lpmysql.tab.c"
    break;

  case 265: /* expr: expr NOT IN '(' val_list ')'  */
#line 873 "lpmysql.y"
                                     { emit("ISIN %d", (yyvsp[-1].intval)); emit("NOT"); }
#line 3737 "lpmysql.tab.c"
    break;

  case 266: /* expr: expr IN '(' select_stmt ')'  */
#line 874 "lpmysql.y"
                                     { emit("INSELECT"); }
#line 3743 "lpmysql.tab.c"
    break;

  case 267: /* expr: expr NOT IN '(' select_stmt ')'  */
#line 875 "lpmysql.y"
                                     { emit("INSELECT"); emit("NOT"); }
#line 3749 "lpmysql.tab.c"
    break;

  case 268: /* expr: EXISTS '(' select_stmt ')'  */
#line 876 "lpmysql.y"
                                     { emit("EXISTS"); if((yyvsp[-3].subtok))emit("NOT"); }
#line 3755 "lpmysql.tab.c"
    break;

  case 269: /* expr: NAME '(' opt_val_list ')'  */
#line 879 "lpmysql.y"
                                {  emit("CALL %d %s", (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3761 "lpmysql.tab.c"
    break;

  case 270: /* expr: FCOUNT '(' '*' ')'  */
#line 883 "lpmysql.y"
                         { emit("COUNTALL"); }
#line 3767 "lpmysql.tab.c"
    break;

  case 271: /* expr: FCOUNT '(' expr ')'  */
#line 884 "lpmysql.y"
                         { emit(" CALL 1 COUNT"); }
#line 3773 "lpmysql.tab.c"
    break;

  case 272: /* expr: FSUBSTRING '(' val_list ')'  */
#line 886 "lpmysql.y"
                                  {  emit("CALL %d SUBSTR", (yyvsp[-1].intval));}
#line 3779 "lpmysql.tab.c"
    break;

  case 273: /* expr: FSUBSTRING '(' expr FROM expr ')'  */
#line 887 "lpmysql.y"
                                       {  emit("CALL 2 SUBSTR"); }
#line 3785 "lpmysql.tab.c"
    break;

  case 274: /* expr: FSUBSTRING '(' expr FROM expr FOR expr ')'  */
#line 888 "lpmysql.y"
                                                {  emit("CALL 3 SUBSTR"); }
#line 3791 "lpmysql.tab.c"
    break;

  case 275: /* expr: FTRIM '(' val_list ')'  */
#line 889 "lpmysql.y"
                         { emit("CALL %d TRIM", (yyvsp[-1].intval)); }
#line 3797 "lpmysql.tab.c"
    break;

  case 276: /* expr: FTRIM '(' trim_ltb expr FROM val_list ')'  */
#line 890 "lpmysql.y"
                                               { emit("CALL 3 TRIM"); }
#line 3803 "lpmysql.tab.c"
    break;

  case 277: /* trim_ltb: LEADING  */
#line 893 "lpmysql.y"
                  { emit("INT 1"); }
#line 3809 "lpmysql.tab.c"
    break;

  case 278: /* trim_ltb: TRAILING  */
#line 894 "lpmysql.y"
              { emit("INT 2"); }
#line 3815 "lpmysql.tab.c"
    break;

  case 279: /* trim_ltb: BOTH  */
#line 895 "lpmysql.y"
          { emit("INT 3"); }
#line 3821 "lpmysql.tab.c"
    break;

  case 280: /* expr: FDATE_ADD '(' expr ',' interval_exp ')'  */
#line 898 "lpmysql.y"
                                              { emit("CALL 3 DATE_ADD"); }
#line 3827 "lpmysql.tab.c"
    break;

  case 281: /* expr: FDATE_SUB '(' expr ',' interval_exp ')'  */
#line 899 "lpmysql.y"
                                              { emit("CALL 3 DATE_SUB"); }
#line 3833 "lpmysql.tab.c"
    break;

  case 282: /* interval_exp: INTERVAL expr DAY_HOUR  */
#line 902 "lpmysql.y"
                                     { emit("NUMBER 1"); }
#line 3839 "lpmysql.tab.c"
    break;

  case 283: /* interval_exp: INTERVAL expr DAY_MICROSECOND  */
#line 903 "lpmysql.y"
                                   { emit("NUMBER 2"); }
#line 3845 "lpmysql.tab.c"
    break;

  case 284: /* interval_exp: INTERVAL expr DAY_MINUTE  */
#line 904 "lpmysql.y"
                              { emit("NUMBER 3"); }
#line 3851 "lpmysql.tab.c"
    break;

  case 285: /* interval_exp: INTERVAL expr DAY_SECOND  */
#line 905 "lpmysql.y"
                              { emit("NUMBER 4"); }
#line 3857 "lpmysql.tab.c"
    break;

  case 286: /* interval_exp: INTERVAL expr YEAR_MONTH  */
#line 906 "lpmysql.y"
                              { emit("NUMBER 5"); }
#line 3863 "lpmysql.tab.c"
    break;

  case 287: /* interval_exp: INTERVAL expr YEAR  */
#line 907 "lpmysql.y"
                              { emit("NUMBER 6"); }
#line 3869 "lpmysql.tab.c"
    break;

  case 288: /* interval_exp: INTERVAL expr HOUR_MICROSECOND  */
#line 908 "lpmysql.y"
                                    { emit("NUMBER 7"); }
#line 3875 "lpmysql.tab.c"
    break;

  case 289: /* interval_exp: INTERVAL expr HOUR_MINUTE  */
#line 909 "lpmysql.y"
                               { emit("NUMBER 8"); }
#line 3881 "lpmysql.tab.c"
    break;

  case 290: /* interval_exp: INTERVAL expr HOUR_SECOND  */
#line 910 "lpmysql.y"
                               { emit("NUMBER 9"); }
#line 3887 "lpmysql.tab.c"
    break;

  case 291: /* expr: CASE expr case_list END  */
#line 913 "lpmysql.y"
                                        { emit("CASEVAL %d 0", (yyvsp[-1].intval)); }
#line 3893 "lpmysql.tab.c"
    break;

  case 292: /* expr: CASE expr case_list ELSE expr END  */
#line 914 "lpmysql.y"
                                        { emit("CASEVAL %d 1", (yyvsp[-3].intval)); }
#line 3899 "lpmysql.tab.c"
    break;

  case 293: /* expr: CASE case_list END  */
#line 915 "lpmysql.y"
                                        { emit("CASE %d 0", (yyvsp[-1].intval)); }
#line 3905 "lpmysql.tab.c"
    break;

  case 294: /* expr: CASE case_list ELSE expr END  */
#line 916 "lpmysql.y"
                                        { emit("CASE %d 1", (yyvsp[-3].intval)); }
#line 3911 "lpmysql.tab.c"
    break;

  case 295: /* case_list: WHEN expr THEN expr  */
#line 919 "lpmysql.y"
                                   { (yyval.intval) = 1; }
#line 3917 "lpmysql.tab.c"
    break;

  case 296: /* case_list: case_list WHEN expr THEN expr  */
#line 920 "lpmysql.y"
                                         { (yyval.intval) = (yyvsp[-4].intval)+1; }
#line 3923 "lpmysql.tab.c"
    break;

  case 297: /* expr: expr LIKE expr  */
#line 923 "lpmysql.y"
                     { emit("LIKE"); }
#line 3929 "lpmysql.tab.c"
    break;

  case 298: /* expr: expr NOT LIKE expr  */
#line 924 "lpmysql.y"
                        { emit("LIKE"); emit("NOT"); }
#line 3935 "lpmysql.tab.c"
    break;

  case 299: /* expr: expr REGEXP expr  */
#line 927 "lpmysql.y"
                       { emit("REGEXP"); }
#line 3941 "lpmysql.tab.c"
    break;

  case 300: /* expr: expr NOT REGEXP expr  */
#line 928 "lpmysql.y"
                          { emit("REGEXP"); emit("NOT"); }
#line 3947 "lpmysql.tab.c"
    break;

  case 301: /* expr: CURRENT_TIMESTAMP  */
#line 931 "lpmysql.y"
                        { emit("NOW"); }
#line 3953 "lpmysql.tab.c"
    break;

  case 302: /* expr: CURRENT_DATE  */
#line 932 "lpmysql.y"
                        { emit("NOW"); }
#line 3959 "lpmysql.tab.c"
    break;

  case 303: /* expr: CURRENT_TIME  */
#line 933 "lpmysql.y"
                        { emit("NOW"); }
#line 3965 "lpmysql.tab.c"
    break;

  case 304: /* expr: BINARY expr  */
#line 935 "lpmysql.y"
                               { emit("STRTOBIN"); }
#line 3971 "lpmysql.tab.c"
    break;


#line 3975 "lpmysql.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 938 "lpmysql.y"


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
yyerror(char *s, ...)
{
  va_list ap;
  va_start(ap, s);

  if(yylloc.first_line)
    fprintf(stderr, "%s:%d.%d-%d.%d: error: ", yylloc.filename, yylloc.first_line, yylloc.first_column,
	    yylloc.last_line, yylloc.last_column);
  vfprintf(stderr, s, ap);
  fprintf(stderr, "\n");

}

void
lyyerror(YYLTYPE t, char *s, ...)
{
  va_list ap;
  va_start(ap, s);

  if(t.first_line)
    fprintf(stderr, "%s:%d.%d-%d.%d: error: ", t.filename, t.first_line, t.first_column,
	    t.last_line, t.last_column);
  vfprintf(stderr, s, ap);
  fprintf(stderr, "\n");
}

main(int ac, char **av)
{
  extern FILE *yyin;

  if(ac > 1 && !strcmp(av[1], "-d")) {
    yydebug = 1; ac--; av++;
  }

  if(ac > 1) {
    if((yyin = fopen(av[1], "r")) == NULL) {
      perror(av[1]);
      exit(1);
    }
    filename = av[1];
  } else
    filename = "(stdin)";

  if(!yyparse())
    printf("SQL parse worked\n");
  else
    printf("SQL parse failed\n");
} /* main */
