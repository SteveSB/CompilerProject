/* A Bison parser, made by GNU Bison 2.1.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     LO_TER = 258,
     RANK_SPECIFIER = 259,
     T_IDENTIFIER = 260,
     T_NOT_IDENTIFIER = 261,
     T_LITERAL_INTEGER = 262,
     T_LITERAL_LONG = 263,
     T_LITERAL_REAL = 264,
     T_LITERAL_CHARACTER = 265,
     T_LITERAL_STRING = 266,
     T_LITERAL_FLOAT = 267,
     T_LITERAL_DOUBLE = 268,
     T_LITERAL_BOOLEAN = 269,
     T_TILDE = 270,
     T_QUESTION_MARK = 271,
     T_COLON = 272,
     T_CLOSE_PARENNTHESES = 273,
     T_OPEN_PARENNTHESES = 274,
     T_CLOSE_BRACKETS = 275,
     T_OPEN_BRACKETS = 276,
     T_OR = 277,
     T_AND = 278,
     T_HASH = 279,
     T_MOD = 280,
     T_XOR = 281,
     T_NOT = 282,
     T_SEMICOLON = 283,
     T_EQUAL = 284,
     T_BIGGER = 285,
     T_SMALLER = 286,
     T_MULTIPLY = 287,
     T_DEVIDE = 288,
     T_MINUS = 289,
     T_SPACE = 290,
     T_BACKSLASH_SINGLE_COTATION = 291,
     T_BACKSLASH_R = 292,
     T_DOUBLE_BACKSLASH = 293,
     T_BACKSLASH_A = 294,
     T_BACKSLASH_PLUS = 295,
     T_BACKSLASH_V = 296,
     T_BACKSLASH_F = 297,
     T_STRING_END = 298,
     T_DOT = 299,
     T_TAB = 300,
     T_BACKSPACE = 301,
     T_LNUMBER = 302,
     T_VALUE = 303,
     T_ABSTRACT = 304,
     T_AS = 305,
     T_BASE = 306,
     T_BOOL = 307,
     T_BREAK = 308,
     T_BYTE = 309,
     T_CASE = 310,
     T_CATCH = 311,
     T_CHAR = 312,
     T_CHECKED = 313,
     T_CLASS = 314,
     T_CONST = 315,
     T_CONTINUE = 316,
     T_DECIMAL = 317,
     T_DEFAULT = 318,
     T_DELEGATE = 319,
     T_DO = 320,
     T_DOUBLE = 321,
     T_ELSE = 322,
     T_ENUM = 323,
     T_EVENT = 324,
     T_EXPLICIT = 325,
     T_EXTERN = 326,
     T_FALSE = 327,
     T_FINALLY = 328,
     T_FIXED = 329,
     T_FLOAT = 330,
     T_FOR = 331,
     T_FOREACH = 332,
     T_GOTO = 333,
     T_IF = 334,
     T_IMPLICIT = 335,
     T_IN = 336,
     T_INT = 337,
     T_INTERFACE = 338,
     T_INTERNAL = 339,
     T_IS = 340,
     T_LOCK = 341,
     T_LONG = 342,
     T_NAMESPACE = 343,
     T_NEW = 344,
     T_NULL_LITERAL = 345,
     T_OBJECT = 346,
     T_OPERATOR = 347,
     T_OUT = 348,
     T_OVERRIDE = 349,
     T_PARAMS = 350,
     T_PRIVATE = 351,
     T_PROTECTED = 352,
     T_PUBLIC = 353,
     T_READONLY = 354,
     T_REF = 355,
     T_RETURN = 356,
     T_SBYTE = 357,
     T_SEALED = 358,
     T_SHORT = 359,
     T_SIZEOF = 360,
     T_STACKALLOC = 361,
     T_STATIC = 362,
     T_STRING = 363,
     T_STRUCT = 364,
     T_SWITCH = 365,
     T_THIS = 366,
     T_THROW = 367,
     T_TRUE = 368,
     T_TRY = 369,
     T_TYPEOF = 370,
     T_UINT = 371,
     T_ULONG = 372,
     T_UNCHECKED = 373,
     T_UNSAFE = 374,
     T_USHORT = 375,
     T_USING = 376,
     T_VIRTUAL = 377,
     T_VOID = 378,
     T_VOLATILE = 379,
     T_WHILE = 380,
     T_VAR = 381,
     T_ENTER = 382,
     test = 383,
     ne = 384,
     T_ASSEMBLY = 385,
     T_FIELD = 386,
     T_METHOD = 387,
     T_MODULE = 388,
     T_PARAM = 389,
     T_PROPERTY = 390,
     T_TYPE = 391,
     T_GET = 392,
     T_SET = 393,
     T_ADD = 394,
     T_REMOVE = 395,
     T_COMMA = 396,
     T_OPEN_ARRAY = 397,
     T_CLOSE_ARRAY = 398,
     T_PLUSEQ = 399,
     T_MINUSEQ = 400,
     T_STAREQ = 401,
     T_DIVEQ = 402,
     T_MODEQ = 403,
     T_XOREQ = 404,
     T_ANDEQ = 405,
     T_OREQ = 406,
     T_LTLT = 407,
     T_GTGT = 408,
     T_GTGTEQ = 409,
     T_LTLTEQ = 410,
     T_EQEQ = 411,
     T_NOTEQ = 412,
     T_LEQ = 413,
     T_GEQ = 414,
     T_ANDAND = 415,
     T_OROR = 416,
     T_PLUSPLUS = 417,
     T_MINUSMINUS = 418,
     T_ARROW = 419
   };
#endif
/* Tokens.  */
#define LO_TER 258
#define RANK_SPECIFIER 259
#define T_IDENTIFIER 260
#define T_NOT_IDENTIFIER 261
#define T_LITERAL_INTEGER 262
#define T_LITERAL_LONG 263
#define T_LITERAL_REAL 264
#define T_LITERAL_CHARACTER 265
#define T_LITERAL_STRING 266
#define T_LITERAL_FLOAT 267
#define T_LITERAL_DOUBLE 268
#define T_LITERAL_BOOLEAN 269
#define T_TILDE 270
#define T_QUESTION_MARK 271
#define T_COLON 272
#define T_CLOSE_PARENNTHESES 273
#define T_OPEN_PARENNTHESES 274
#define T_CLOSE_BRACKETS 275
#define T_OPEN_BRACKETS 276
#define T_OR 277
#define T_AND 278
#define T_HASH 279
#define T_MOD 280
#define T_XOR 281
#define T_NOT 282
#define T_SEMICOLON 283
#define T_EQUAL 284
#define T_BIGGER 285
#define T_SMALLER 286
#define T_MULTIPLY 287
#define T_DEVIDE 288
#define T_MINUS 289
#define T_SPACE 290
#define T_BACKSLASH_SINGLE_COTATION 291
#define T_BACKSLASH_R 292
#define T_DOUBLE_BACKSLASH 293
#define T_BACKSLASH_A 294
#define T_BACKSLASH_PLUS 295
#define T_BACKSLASH_V 296
#define T_BACKSLASH_F 297
#define T_STRING_END 298
#define T_DOT 299
#define T_TAB 300
#define T_BACKSPACE 301
#define T_LNUMBER 302
#define T_VALUE 303
#define T_ABSTRACT 304
#define T_AS 305
#define T_BASE 306
#define T_BOOL 307
#define T_BREAK 308
#define T_BYTE 309
#define T_CASE 310
#define T_CATCH 311
#define T_CHAR 312
#define T_CHECKED 313
#define T_CLASS 314
#define T_CONST 315
#define T_CONTINUE 316
#define T_DECIMAL 317
#define T_DEFAULT 318
#define T_DELEGATE 319
#define T_DO 320
#define T_DOUBLE 321
#define T_ELSE 322
#define T_ENUM 323
#define T_EVENT 324
#define T_EXPLICIT 325
#define T_EXTERN 326
#define T_FALSE 327
#define T_FINALLY 328
#define T_FIXED 329
#define T_FLOAT 330
#define T_FOR 331
#define T_FOREACH 332
#define T_GOTO 333
#define T_IF 334
#define T_IMPLICIT 335
#define T_IN 336
#define T_INT 337
#define T_INTERFACE 338
#define T_INTERNAL 339
#define T_IS 340
#define T_LOCK 341
#define T_LONG 342
#define T_NAMESPACE 343
#define T_NEW 344
#define T_NULL_LITERAL 345
#define T_OBJECT 346
#define T_OPERATOR 347
#define T_OUT 348
#define T_OVERRIDE 349
#define T_PARAMS 350
#define T_PRIVATE 351
#define T_PROTECTED 352
#define T_PUBLIC 353
#define T_READONLY 354
#define T_REF 355
#define T_RETURN 356
#define T_SBYTE 357
#define T_SEALED 358
#define T_SHORT 359
#define T_SIZEOF 360
#define T_STACKALLOC 361
#define T_STATIC 362
#define T_STRING 363
#define T_STRUCT 364
#define T_SWITCH 365
#define T_THIS 366
#define T_THROW 367
#define T_TRUE 368
#define T_TRY 369
#define T_TYPEOF 370
#define T_UINT 371
#define T_ULONG 372
#define T_UNCHECKED 373
#define T_UNSAFE 374
#define T_USHORT 375
#define T_USING 376
#define T_VIRTUAL 377
#define T_VOID 378
#define T_VOLATILE 379
#define T_WHILE 380
#define T_VAR 381
#define T_ENTER 382
#define test 383
#define ne 384
#define T_ASSEMBLY 385
#define T_FIELD 386
#define T_METHOD 387
#define T_MODULE 388
#define T_PARAM 389
#define T_PROPERTY 390
#define T_TYPE 391
#define T_GET 392
#define T_SET 393
#define T_ADD 394
#define T_REMOVE 395
#define T_COMMA 396
#define T_OPEN_ARRAY 397
#define T_CLOSE_ARRAY 398
#define T_PLUSEQ 399
#define T_MINUSEQ 400
#define T_STAREQ 401
#define T_DIVEQ 402
#define T_MODEQ 403
#define T_XOREQ 404
#define T_ANDEQ 405
#define T_OREQ 406
#define T_LTLT 407
#define T_GTGT 408
#define T_GTGTEQ 409
#define T_LTLTEQ 410
#define T_EQEQ 411
#define T_NOTEQ 412
#define T_LEQ 413
#define T_GEQ 414
#define T_ANDAND 415
#define T_OROR 416
#define T_PLUSPLUS 417
#define T_MINUSMINUS 418
#define T_ARROW 419




/* Copy the first part of user declarations.  */
#line 2 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"

#define YYERROR_VERBOSE
  extern int yylineno;
  #define _CRT_SECURE_NO_WARNINGS
  #define YYDEBUG 1
  #include <iostream>
  #include "ErrorRecovery.h"
  #include "CSTokens\MyParser.h"
  using namespace std;
  #include <FlexLexer.h>
  int yylex(void);
  int yyparse();
  void yyerror(char *);
  #include <queue>
  FlexLexer* lexer = new yyFlexLexer();
  MyParser* p = new MyParser();
  ErrorRecovery errorRec;
  bool isLocal = false;
  char *classInher="";
  class Access_Modifier* access_modifier;
  class Data_Storage* data_storage;
  class List_Parameters* lp;
  class InheritanceList* il;
  class Block_Scope *bs;
  class Parser
  {
	public:
	int parse()
	{
		return yyparse();
	}
  };


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 36 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
typedef union YYSTYPE {
	struct R{
		int i;
		float f;
		char c;
		char* str;
		int myLineNo;
		int myColNo;
	}r;
	class Local_Variable* lv;
	class Data_Member* dm;
	class Class* clas;
	class Function* func;
	class Access_Modifier* am;
	class Data_Storage* ds;
	/*class List_Parameters* lp;*/
	} YYSTYPE;
/* Line 196 of yacc.c.  */
#line 465 "yacc.cpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 477 "yacc.cpp"

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T) && (defined (__STDC__) || defined (__cplusplus))
# include <stddef.h> /* INFRINGES ON USER NAME SPACE */
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if defined (__STDC__) || defined (__cplusplus)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     define YYINCLUDED_STDLIB_H
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2005 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM ((YYSIZE_T) -1)
#  endif
#  ifdef __cplusplus
extern "C" {
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if (! defined (malloc) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if (! defined (free) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifdef __cplusplus
}
#  endif
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short int yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short int) + sizeof (YYSTYPE))			\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short int yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3600

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  165
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  263
/* YYNRULES -- Number of rules. */
#define YYNRULES  611
/* YYNRULES -- Number of states. */
#define YYNSTATES  1041

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   419

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    41,    43,    45,    47,    49,    51,    53,    55,    57,
      59,    61,    63,    65,    67,    69,    71,    73,    76,    79,
      82,    85,    88,    91,    92,    95,    97,    99,   101,   105,
     107,   110,   113,   115,   117,   119,   121,   123,   125,   127,
     129,   131,   133,   135,   137,   139,   141,   145,   149,   153,
     157,   162,   167,   168,   170,   175,   180,   181,   183,   185,
     189,   191,   195,   200,   203,   206,   208,   214,   220,   228,
     235,   243,   247,   251,   259,   268,   269,   271,   276,   281,
     286,   291,   296,   300,   303,   308,   313,   315,   317,   319,
     321,   323,   325,   328,   331,   333,   336,   339,   341,   344,
     347,   350,   352,   354,   356,   361,   367,   374,   380,   386,
     392,   393,   395,   397,   400,   402,   404,   406,   410,   414,
     418,   420,   424,   428,   430,   434,   438,   440,   444,   448,
     452,   456,   460,   464,   468,   472,   474,   478,   482,   484,
     488,   490,   494,   496,   500,   502,   506,   508,   512,   514,
     520,   524,   526,   528,   530,   532,   534,   536,   538,   540,
     542,   544,   546,   548,   550,   552,   554,   556,   558,   560,
     562,   564,   566,   568,   570,   572,   574,   576,   578,   580,
     582,   584,   586,   590,   591,   593,   595,   598,   600,   604,
     607,   610,   613,   616,   618,   622,   624,   628,   631,   635,
     640,   646,   652,   659,   667,   669,   671,   673,   679,   685,
     689,   692,   696,   698,   702,   706,   709,   711,   714,   716,
     718,   720,   722,   724,   726,   728,   730,   732,   734,   735,
     738,   741,   745,   751,   754,   757,   761,   765,   766,   768,
     770,   773,   776,   778,   781,   785,   788,   791,   793,   795,
     797,   799,   802,   805,   808,   812,   820,   824,   827,   830,
     838,   840,   843,   844,   846,   847,   849,   850,   852,   854,
     856,   858,   860,   862,   866,   869,   872,   879,   885,   892,
     894,   896,   898,   900,   902,   905,   908,   912,   917,   921,
     925,   926,   928,   932,   936,   940,   945,   947,   950,   957,
     964,   967,   968,   970,   973,   976,   979,   985,   991,   993,
     995,  1002,  1009,  1011,  1015,  1019,  1022,  1025,  1026,  1028,
    1029,  1031,  1032,  1034,  1040,  1041,  1043,  1045,  1048,  1051,
    1055,  1060,  1064,  1066,  1069,  1071,  1073,  1079,  1083,  1085,
    1088,  1090,  1092,  1094,  1096,  1098,  1100,  1102,  1104,  1107,
    1109,  1112,  1114,  1116,  1118,  1120,  1122,  1124,  1126,  1128,
    1130,  1132,  1134,  1136,  1137,  1139,  1141,  1144,  1146,  1148,
    1150,  1152,  1154,  1156,  1158,  1161,  1168,  1174,  1175,  1176,
    1178,  1181,  1184,  1189,  1192,  1197,  1201,  1205,  1209,  1210,
    1212,  1214,  1217,  1219,  1221,  1223,  1225,  1227,  1229,  1231,
    1233,  1235,  1237,  1244,  1250,  1257,  1263,  1269,  1272,  1277,
    1282,  1287,  1292,  1297,  1302,  1303,  1305,  1307,  1309,  1311,
    1313,  1317,  1319,  1321,  1326,  1327,  1329,  1331,  1336,  1346,
    1349,  1352,  1353,  1355,  1356,  1358,  1364,  1370,  1372,  1374,
    1381,  1392,  1395,  1398,  1404,  1410,  1419,  1425,  1431,  1434,
    1439,  1441,  1443,  1451,  1462,  1464,  1466,  1468,  1470,  1472,
    1474,  1476,  1478,  1480,  1482,  1484,  1486,  1488,  1490,  1492,
    1494,  1496,  1498,  1500,  1502,  1504,  1506,  1514,  1522,  1525,
    1531,  1535,  1536,  1538,  1544,  1550,  1558,  1560,  1562,  1564,
    1566,  1568,  1569,  1571,  1573,  1575,  1577,  1579,  1587,  1588,
    1590,  1593,  1596,  1600,  1601,  1603,  1605,  1608,  1610,  1612,
    1614,  1616,  1618,  1620,  1622,  1624,  1626,  1630,  1635,  1636,
    1638,  1640,  1644,  1652,  1653,  1655,  1658,  1661,  1665,  1666,
    1668,  1670,  1673,  1675,  1677,  1679,  1681,  1690,  1699,  1700,
    1702,  1712,  1725,  1729,  1733,  1740,  1747,  1754,  1756,  1759,
    1767,  1768,  1770,  1773,  1777,  1782,  1783,  1785,  1787,  1791,
    1794,  1799,  1809,  1819,  1821,  1823,  1826,  1833,  1841,  1842,
    1844,  1847,  1849,  1851,  1853,  1855,  1857,  1859,  1861,  1863,
    1865,  1867,  1871,  1874,  1875,  1877,  1881,  1882,  1883,  1884,
    1885,  1886
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
     304,     0,    -1,   167,    -1,     7,    -1,     9,    -1,    10,
      -1,    11,    -1,    13,    -1,    14,    -1,    90,    -1,   113,
      -1,    72,    -1,   310,    -1,   170,    -1,   178,    -1,   171,
      -1,   172,    -1,   176,    -1,   177,    -1,   173,    -1,    52,
      -1,   174,    -1,   175,    -1,    62,    -1,   102,    -1,    54,
      -1,   104,    -1,   120,    -1,    82,    -1,   116,    -1,    87,
      -1,   117,    -1,    57,    -1,    75,    -1,    66,    -1,    91,
      -1,   108,    -1,   169,    32,    -1,   310,    32,    -1,   123,
      32,    -1,   178,   180,    -1,   171,   180,    -1,   310,   180,
      -1,    -1,   180,   179,    -1,     4,    -1,   230,    -1,   183,
      -1,   182,   141,   183,    -1,   230,    -1,   100,   181,    -1,
      93,   181,    -1,   186,    -1,   185,    -1,   166,    -1,   199,
      -1,   187,    -1,   188,    -1,   190,    -1,   193,    -1,   194,
      -1,   197,    -1,   202,    -1,   207,    -1,   203,    -1,   204,
      -1,    19,   230,    18,    -1,   184,    44,     5,    -1,   172,
      44,     5,    -1,   176,    44,     5,    -1,   185,    19,   189,
      18,    -1,   310,    19,   189,    18,    -1,    -1,   182,    -1,
     184,   142,   192,   143,    -1,   310,   142,   192,   143,    -1,
      -1,   192,    -1,   230,    -1,   192,   141,   230,    -1,   111,
      -1,    51,    44,     5,    -1,    51,   142,   192,   143,    -1,
     208,   162,    -1,   208,   163,    -1,   198,    -1,    89,   169,
      19,   189,    18,    -1,    89,   310,    19,   189,    18,    -1,
      89,   170,   142,   191,   143,   179,   201,    -1,    89,   142,
     191,   143,   179,   201,    -1,    89,   310,   142,   191,   143,
     179,   201,    -1,    89,   178,   387,    -1,    89,   170,   200,
      -1,   142,   191,   143,   142,   143,   179,   201,    -1,   142,
     191,   143,   142,   192,   143,   179,   201,    -1,    -1,   387,
      -1,   115,    19,   169,    18,    -1,   115,    19,   310,    18,
      -1,   115,    19,   123,    18,    -1,    58,    19,   230,    18,
      -1,   118,    19,   230,    18,    -1,   208,   164,     5,    -1,
      23,   212,    -1,   105,    19,   169,    18,    -1,   105,    19,
     310,    18,    -1,   184,    -1,   310,    -1,   195,    -1,   196,
      -1,   205,    -1,   208,    -1,    27,   212,    -1,    15,   212,
      -1,   213,    -1,   162,   212,    -1,   163,   212,    -1,   209,
      -1,    40,   212,    -1,    34,   212,    -1,    32,   212,    -1,
     210,    -1,   211,    -1,   206,    -1,    19,   230,    18,   209,
      -1,    19,   217,    32,    18,   212,    -1,    19,   310,   180,
     214,    18,   212,    -1,    19,   172,   214,    18,   212,    -1,
      19,   176,   214,    18,   212,    -1,    19,   123,   214,    18,
     212,    -1,    -1,   215,    -1,   216,    -1,   215,   216,    -1,
     180,    -1,    32,    -1,   212,    -1,   217,    32,   212,    -1,
     217,    33,   212,    -1,   217,    25,   212,    -1,   217,    -1,
     218,    40,   217,    -1,   218,    34,   217,    -1,   218,    -1,
     219,   152,   218,    -1,   219,   153,   218,    -1,   219,    -1,
     220,    31,   219,    -1,   220,    30,   219,    -1,   220,   158,
     219,    -1,   220,   159,   219,    -1,   220,    85,   169,    -1,
     220,    50,   169,    -1,   220,    85,   310,    -1,   220,    50,
     310,    -1,   220,    -1,   221,   156,   220,    -1,   221,   157,
     220,    -1,   221,    -1,   222,    23,   221,    -1,   222,    -1,
     223,    26,   222,    -1,   223,    -1,   224,    22,   223,    -1,
     224,    -1,   225,   160,   224,    -1,   225,    -1,   226,   161,
     225,    -1,   226,    -1,   226,    16,   230,    17,   230,    -1,
     212,   229,   230,    -1,    29,    -1,   144,    -1,   145,    -1,
     146,    -1,   147,    -1,   148,    -1,   149,    -1,   150,    -1,
     151,    -1,   154,    -1,   155,    -1,   227,    -1,   228,    -1,
     230,    -1,   230,    -1,   239,    -1,   240,    -1,   234,    -1,
     235,    -1,   238,    -1,   249,    -1,   251,    -1,   265,    -1,
     284,    -1,   291,    -1,   296,    -1,   297,    -1,   298,    -1,
     299,    -1,   266,    -1,   301,    -1,    21,   236,    20,    -1,
      -1,   237,    -1,   233,    -1,   237,   233,    -1,    28,    -1,
       5,    17,   233,    -1,   241,    28,    -1,   246,    28,    -1,
     169,   242,    -1,   310,   242,    -1,   243,    -1,   242,   141,
     243,    -1,   324,    -1,   324,    29,   244,    -1,   324,    29,
      -1,   142,   143,   324,    -1,   142,   143,   324,    29,    -1,
     142,   143,   324,    29,   244,    -1,   142,   143,   142,   143,
     324,    -1,   142,   143,   142,   143,   324,    29,    -1,   142,
     143,   142,   143,   324,    29,   244,    -1,   230,    -1,   387,
      -1,   245,    -1,   106,   169,   142,   230,   143,    -1,   106,
     310,   142,   230,   143,    -1,    60,   169,   247,    -1,    60,
     247,    -1,    60,   310,   247,    -1,   248,    -1,   247,   141,
     248,    -1,   324,    29,   231,    -1,   324,    29,    -1,   324,
      -1,   250,    28,    -1,   188,    -1,   198,    -1,   228,    -1,
     195,    -1,   196,    -1,   210,    -1,   211,    -1,   253,    -1,
     256,    -1,   232,    -1,    -1,   254,   255,    -1,    79,    19,
      -1,   252,    18,   234,    -1,   252,    18,   234,    67,   234,
      -1,   257,   258,    -1,   110,    19,    -1,   230,    18,   259,
      -1,    21,   260,    20,    -1,    -1,   261,    -1,   262,    -1,
     261,   262,    -1,   263,   237,    -1,   264,    -1,   263,   264,
      -1,    55,   231,    17,    -1,    63,    17,    -1,    55,    17,
      -1,   267,    -1,   270,    -1,   271,    -1,   281,    -1,   119,
     235,    -1,   268,   269,    -1,   125,    19,    -1,   232,    18,
     234,    -1,    65,   234,   125,    19,   232,    18,    28,    -1,
      65,   234,    28,    -1,   272,   273,    -1,    76,    19,    -1,
     274,    28,   275,    28,   276,    18,   234,    -1,    18,    -1,
       1,    18,    -1,    -1,   277,    -1,    -1,   278,    -1,    -1,
     279,    -1,   241,    -1,   280,    -1,   232,    -1,   280,    -1,
     250,    -1,   280,   141,   250,    -1,   282,   283,    -1,    77,
      19,    -1,   169,     5,    81,   230,    18,   234,    -1,     5,
      81,   230,    18,   234,    -1,   310,     5,    81,   230,    18,
     234,    -1,   285,    -1,   286,    -1,   287,    -1,   288,    -1,
     290,    -1,    53,    28,    -1,    61,    28,    -1,    78,     5,
      28,    -1,    78,    55,   231,    28,    -1,    78,    63,    28,
      -1,   101,   289,    28,    -1,    -1,   230,    -1,   112,   289,
      28,    -1,   114,   235,   292,    -1,   114,   235,   295,    -1,
     114,   235,   292,   295,    -1,   293,    -1,   292,   293,    -1,
      56,    19,   176,   294,    18,   235,    -1,    56,    19,   310,
     294,    18,   235,    -1,    56,   235,    -1,    -1,   324,    -1,
      73,   235,    -1,    58,   235,    -1,   118,   235,    -1,    86,
      19,   230,    18,   234,    -1,   121,    19,   300,    18,   234,
      -1,   241,    -1,   230,    -1,    74,    19,   169,   302,    18,
     234,    -1,    74,    19,   310,   302,    18,   234,    -1,   303,
      -1,   302,   141,   303,    -1,     5,    29,   230,    -1,   305,
     306,    -1,   305,   317,    -1,    -1,   313,    -1,    -1,   412,
      -1,    -1,   317,    -1,   306,    88,   310,   312,   309,    -1,
      -1,    28,    -1,   324,    -1,   311,   324,    -1,   324,    44,
      -1,   311,   324,    44,    -1,    21,   305,   307,    20,    -1,
     305,   307,    20,    -1,   314,    -1,   313,   314,    -1,   315,
      -1,   316,    -1,   121,   324,    29,   310,    28,    -1,   121,
     168,    28,    -1,   318,    -1,   317,   318,    -1,   308,    -1,
     319,    -1,   326,    -1,   380,    -1,   390,    -1,   404,    -1,
     411,    -1,   323,    -1,   321,   323,    -1,   322,    -1,   321,
     322,    -1,    49,    -1,    71,    -1,    84,    -1,    89,    -1,
      94,    -1,    96,    -1,    97,    -1,    98,    -1,    99,    -1,
     119,    -1,   122,    -1,   124,    -1,    -1,   103,    -1,   107,
      -1,   103,   107,    -1,     5,    -1,     6,    -1,     5,    -1,
      13,    -1,    12,    -1,     7,    -1,     6,    -1,   327,   332,
      -1,   306,   320,    59,   325,   328,   329,    -1,   306,   320,
      59,   328,   329,    -1,    -1,    -1,   330,    -1,    17,   176,
      -1,    17,   331,    -1,    17,   176,   141,   331,    -1,    17,
     310,    -1,    17,   176,   141,   310,    -1,   331,   141,   310,
      -1,   310,   141,   310,    -1,    21,   333,    20,    -1,    -1,
     334,    -1,   335,    -1,   334,   335,    -1,   336,    -1,   337,
      -1,   338,    -1,   351,    -1,   358,    -1,   362,    -1,   365,
      -1,   370,    -1,   375,    -1,   319,    -1,   306,   320,    60,
     169,   247,    28,    -1,   306,   320,    60,   247,    28,    -1,
     306,   320,    60,   310,   247,    28,    -1,   306,   320,   169,
     242,    28,    -1,   306,   320,   310,   242,    28,    -1,   339,
     345,    -1,   340,    19,   343,    18,    -1,   341,    19,   343,
      18,    -1,   342,    19,   343,    18,    -1,   306,   320,   169,
     310,    -1,   306,   320,   123,   310,    -1,   306,   320,   310,
     310,    -1,    -1,   346,    -1,   123,    -1,   235,    -1,    28,
      -1,   347,    -1,   346,   141,   347,    -1,   348,    -1,   350,
      -1,   306,   349,   169,     5,    -1,    -1,   100,    -1,    93,
      -1,   306,    95,   169,     5,    -1,   306,   320,   169,   310,
     426,    21,   352,    20,   427,    -1,   355,   353,    -1,   356,
     354,    -1,    -1,   356,    -1,    -1,   355,    -1,   306,   137,
     427,   357,   426,    -1,   306,   138,   427,   357,   426,    -1,
     235,    -1,    28,    -1,   306,   320,    69,   169,   242,    28,
      -1,   306,   320,    69,   169,   310,   424,    21,   359,    20,
     425,    -1,   360,   361,    -1,   361,   360,    -1,   306,   139,
     425,   235,   424,    -1,   306,   140,   425,   235,   424,    -1,
     306,   320,   363,   426,    21,   352,    20,   427,    -1,   169,
     111,   142,   346,   143,    -1,   169,   364,   142,   346,   143,
      -1,   311,   111,    -1,   306,   320,   366,   376,    -1,   367,
      -1,   369,    -1,   169,    92,   368,    19,   169,     5,    18,
      -1,   169,    92,   368,    19,   169,     5,   141,   169,     5,
      18,    -1,    40,    -1,    34,    -1,    27,    -1,    15,    -1,
     162,    -1,   163,    -1,   113,    -1,    72,    -1,    32,    -1,
      33,    -1,    25,    -1,    23,    -1,    22,    -1,    26,    -1,
     152,    -1,   153,    -1,   156,    -1,   157,    -1,    30,    -1,
      31,    -1,   159,    -1,   158,    -1,    80,    92,   169,    19,
     169,     5,    18,    -1,    70,    92,   169,    19,   169,     5,
      18,    -1,   371,   377,    -1,   372,    19,   343,    18,   373,
      -1,   306,   320,     5,    -1,    -1,   374,    -1,    17,    51,
      19,   189,    18,    -1,    17,   111,    19,   189,    18,    -1,
     306,   320,    15,     5,    19,    18,   235,    -1,   235,    -1,
      28,    -1,   235,    -1,    28,    -1,   383,    -1,    -1,     5,
      -1,     6,    -1,    13,    -1,    12,    -1,     7,    -1,   306,
     320,   109,   379,   381,   378,   309,    -1,    -1,   382,    -1,
      17,   331,    -1,    17,   310,    -1,    21,   384,    20,    -1,
      -1,   385,    -1,   386,    -1,   385,   386,    -1,   336,    -1,
     337,    -1,   338,    -1,   351,    -1,   358,    -1,   362,    -1,
     365,    -1,   370,    -1,   319,    -1,    21,   388,    20,    -1,
      21,   389,   141,    20,    -1,    -1,   389,    -1,   244,    -1,
     389,   141,   244,    -1,   306,   320,    83,     5,   391,   393,
     309,    -1,    -1,   392,    -1,    17,   331,    -1,    17,   310,
      -1,    21,   394,    20,    -1,    -1,   395,    -1,   396,    -1,
     395,   396,    -1,   397,    -1,   399,    -1,   402,    -1,   400,
      -1,   306,   398,   169,     5,    19,   343,    18,   403,    -1,
     306,   398,   123,     5,    19,   343,    18,   403,    -1,    -1,
      89,    -1,   306,   398,   169,     5,   426,    21,   401,    20,
     427,    -1,   306,   398,   169,   111,   142,   346,   143,   426,
      21,   401,    20,   427,    -1,   306,   137,   403,    -1,   306,
     138,   403,    -1,   306,   137,   403,   306,   138,   403,    -1,
     306,   138,   403,   306,   137,   403,    -1,   306,   398,    69,
     169,     5,   403,    -1,    28,    -1,    21,    20,    -1,   306,
     320,    68,     5,   405,   407,   309,    -1,    -1,   406,    -1,
      17,   174,    -1,    21,   408,    20,    -1,    21,   409,   141,
      20,    -1,    -1,   409,    -1,   410,    -1,   409,   141,   410,
      -1,   306,     5,    -1,   306,     5,    29,   231,    -1,   306,
     320,    64,   344,     5,    19,   343,    18,    28,    -1,   306,
     320,    64,   310,     5,    19,   343,    18,    28,    -1,   413,
      -1,   414,    -1,   413,   414,    -1,   422,   142,   415,   418,
     143,   423,    -1,   422,   142,   415,   418,   141,   143,   423,
      -1,    -1,   416,    -1,   417,    17,    -1,   130,    -1,   131,
      -1,    69,    -1,   132,    -1,   133,    -1,   134,    -1,   135,
      -1,   101,    -1,   136,    -1,   419,    -1,   418,   141,   419,
      -1,   310,   420,    -1,    -1,   421,    -1,    19,   191,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   110,   110,   111,   112,   113,   114,   115,   116,   117,
     120,   121,   127,   136,   137,   140,   145,   146,   147,   150,
     151,   154,   155,   156,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   162,   162,   165,   165,   168,   169,   170,
     173,   174,   175,   177,   179,   182,   186,   190,   191,   194,
     195,   196,   199,   200,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   217,   220,   221,   222,
     225,   226,   228,   230,   233,   234,   237,   239,   242,   243,
     246,   249,   250,   253,   256,   259,   262,   263,   267,   268,
     269,   270,   271,   274,   275,   277,   279,   282,   283,   284,
     287,   290,   293,   296,   299,   300,   303,   304,   305,   306,
     307,   310,   311,   312,   313,   316,   319,   322,   323,   324,
     325,   326,   327,   328,   336,   337,   338,   339,   340,   341,
     343,   345,   348,   349,   352,   353,   356,   357,   358,   359,
     362,   363,   364,   367,   368,   369,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   383,   384,   385,   388,   389,
     392,   393,   396,   397,   400,   401,   404,   405,   408,   409,
     412,   415,   415,   415,   415,   415,   415,   416,   416,   416,
     416,   416,   419,   420,   423,   426,   430,   431,   432,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   450,   452,   454,   458,   459,   462,   465,   468,
     472,   475,   476,   479,   480,   483,   490,   497,   498,   499,
     500,   501,   502,   503,   506,   507,   508,   511,   512,   516,
     517,   518,   521,   522,   525,   526,   527,   530,   533,   534,
     535,   536,   537,   538,   539,   542,   543,   546,   547,   551,
     555,   558,   559,   562,   565,   568,   571,   573,   575,   578,
     579,   582,   585,   586,   589,   590,   591,   595,   596,   597,
     598,   601,   604,   607,   610,   613,   614,   618,   623,   630,
     631,   632,   634,   636,   638,   640,   642,   644,   647,   648,
     651,   654,   657,   658,   661,   664,   667,   668,   669,   672,
     673,   674,   675,   676,   679,   682,   685,   686,   687,   690,
     693,   695,   698,   701,   702,   703,   706,   707,   710,   712,
     713,   715,   717,   720,   723,   726,   729,   732,   735,   736,
     740,   741,   744,   745,   748,   751,   752,   759,   761,   763,
     765,   767,   769,   773,   775,   777,   786,   787,   790,   791,
     794,   795,   800,   801,   804,   805,   808,   811,   814,   815,
     818,   819,   822,   823,   824,   825,   826,   837,   838,   841,
     842,   845,   846,   847,   848,   849,   850,   854,   858,   862,
     863,   864,   865,   867,   869,   873,   877,   883,   884,   888,
     889,   890,   891,   892,   897,   902,   909,   917,   919,   921,
     924,   925,   926,   927,   928,   931,   932,   935,   938,   940,
     943,   944,   947,   948,   949,   950,   951,   952,   953,   954,
     955,   957,   960,   961,   962,   965,   966,   969,   976,   981,
     986,   993,   999,  1005,  1010,  1012,  1016,  1019,  1020,  1023,
    1024,  1027,  1028,  1031,  1035,  1037,  1038,  1042,  1045,  1051,
    1052,  1054,  1056,  1058,  1060,  1063,  1069,  1075,  1076,  1079,
    1080,  1086,  1087,  1090,  1096,  1102,  1108,  1110,  1113,  1117,
    1120,  1121,  1124,  1125,  1128,  1128,  1129,  1129,  1129,  1129,
    1129,  1129,  1130,  1130,  1130,  1130,  1130,  1130,  1131,  1131,
    1131,  1131,  1131,  1131,  1131,  1131,  1134,  1135,  1138,  1143,
    1149,  1154,  1156,  1159,  1160,  1176,  1179,  1180,  1183,  1184,
    1187,  1188,  1191,  1192,  1193,  1194,  1195,  1198,  1201,  1203,
    1206,  1207,  1210,  1212,  1214,  1217,  1218,  1221,  1222,  1223,
    1224,  1225,  1226,  1227,  1228,  1230,  1235,  1236,  1239,  1241,
    1244,  1245,  1250,  1252,  1254,  1257,  1258,  1261,  1263,  1265,
    1268,  1269,  1272,  1273,  1274,  1275,  1279,  1280,  1282,  1284,
    1287,  1293,  1301,  1302,  1303,  1304,  1307,  1312,  1313,  1318,
    1320,  1322,  1325,  1328,  1329,  1331,  1333,  1336,  1337,  1340,
    1341,  1346,  1347,  1352,  1355,  1356,  1359,  1360,  1362,  1364,
    1367,  1370,  1371,  1372,  1373,  1374,  1375,  1376,  1377,  1378,
    1381,  1382,  1386,  1388,  1390,  1399,  1406,  1411,  1416,  1421,
    1426,  1431
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LO_TER", "RANK_SPECIFIER",
  "T_IDENTIFIER", "T_NOT_IDENTIFIER", "T_LITERAL_INTEGER",
  "T_LITERAL_LONG", "T_LITERAL_REAL", "T_LITERAL_CHARACTER",
  "T_LITERAL_STRING", "T_LITERAL_FLOAT", "T_LITERAL_DOUBLE",
  "T_LITERAL_BOOLEAN", "T_TILDE", "T_QUESTION_MARK", "T_COLON",
  "T_CLOSE_PARENNTHESES", "T_OPEN_PARENNTHESES", "T_CLOSE_BRACKETS",
  "T_OPEN_BRACKETS", "T_OR", "T_AND", "T_HASH", "T_MOD", "T_XOR", "T_NOT",
  "T_SEMICOLON", "T_EQUAL", "T_BIGGER", "T_SMALLER", "T_MULTIPLY",
  "T_DEVIDE", "T_MINUS", "T_SPACE", "T_BACKSLASH_SINGLE_COTATION",
  "T_BACKSLASH_R", "T_DOUBLE_BACKSLASH", "T_BACKSLASH_A",
  "T_BACKSLASH_PLUS", "T_BACKSLASH_V", "T_BACKSLASH_F", "T_STRING_END",
  "T_DOT", "T_TAB", "T_BACKSPACE", "T_LNUMBER", "T_VALUE", "T_ABSTRACT",
  "T_AS", "T_BASE", "T_BOOL", "T_BREAK", "T_BYTE", "T_CASE", "T_CATCH",
  "T_CHAR", "T_CHECKED", "T_CLASS", "T_CONST", "T_CONTINUE", "T_DECIMAL",
  "T_DEFAULT", "T_DELEGATE", "T_DO", "T_DOUBLE", "T_ELSE", "T_ENUM",
  "T_EVENT", "T_EXPLICIT", "T_EXTERN", "T_FALSE", "T_FINALLY", "T_FIXED",
  "T_FLOAT", "T_FOR", "T_FOREACH", "T_GOTO", "T_IF", "T_IMPLICIT", "T_IN",
  "T_INT", "T_INTERFACE", "T_INTERNAL", "T_IS", "T_LOCK", "T_LONG",
  "T_NAMESPACE", "T_NEW", "T_NULL_LITERAL", "T_OBJECT", "T_OPERATOR",
  "T_OUT", "T_OVERRIDE", "T_PARAMS", "T_PRIVATE", "T_PROTECTED",
  "T_PUBLIC", "T_READONLY", "T_REF", "T_RETURN", "T_SBYTE", "T_SEALED",
  "T_SHORT", "T_SIZEOF", "T_STACKALLOC", "T_STATIC", "T_STRING",
  "T_STRUCT", "T_SWITCH", "T_THIS", "T_THROW", "T_TRUE", "T_TRY",
  "T_TYPEOF", "T_UINT", "T_ULONG", "T_UNCHECKED", "T_UNSAFE", "T_USHORT",
  "T_USING", "T_VIRTUAL", "T_VOID", "T_VOLATILE", "T_WHILE", "T_VAR",
  "T_ENTER", "test", "ne", "T_ASSEMBLY", "T_FIELD", "T_METHOD", "T_MODULE",
  "T_PARAM", "T_PROPERTY", "T_TYPE", "T_GET", "T_SET", "T_ADD", "T_REMOVE",
  "\",\"", "\"[\"", "\"]\"", "T_PLUSEQ", "T_MINUSEQ", "T_STAREQ",
  "T_DIVEQ", "T_MODEQ", "T_XOREQ", "T_ANDEQ", "T_OREQ", "T_LTLT", "T_GTGT",
  "T_GTGTEQ", "T_LTLTEQ", "T_EQEQ", "T_NOTEQ", "T_LEQ", "T_GEQ",
  "T_ANDAND", "T_OROR", "T_PLUSPLUS", "T_MINUSMINUS", "T_ARROW", "$accept",
  "literal", "boolean_literal", "namespace_name", "type", "non_array_type",
  "simple_type", "primitive_type", "numeric_type", "integral_type",
  "floating_point_type", "class_type", "pointer_type", "array_type",
  "rank_specifiers_opt", "rank_specifier", "variable_reference",
  "argument_list", "argument", "primary_expression",
  "primary_expression_no_parenthesis", "parenthesized_expression",
  "member_access", "invocation_expression", "argument_list_opt",
  "element_access", "expression_list_opt", "expression_list",
  "this_access", "base_access", "post_increment_expression",
  "post_decrement_expression", "new_expression",
  "object_creation_expression", "array_creation_expression", "temporary",
  "array_initializer_opt", "typeof_expression", "checked_expression",
  "unchecked_expression", "pointer_member_access", "addressof_expression",
  "sizeof_expression", "postfix_expression",
  "unary_expression_not_plusminus", "pre_increment_expression",
  "pre_decrement_expression", "unary_expression", "cast_expression",
  "type_quals_opt", "type_quals", "type_qual", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "conditional_and_expression",
  "conditional_or_expression", "conditional_expression", "assignment",
  "assignment_operator", "expression", "constant_expression",
  "boolean_expression", "statement", "embedded_statement", "block",
  "statement_list_opt", "statement_list", "empty_statement",
  "labeled_statement", "declaration_statement",
  "local_variable_declaration", "variable_declarators",
  "variable_declarator", "variable_initializer", "stackalloc_initializer",
  "local_constant_declaration", "constant_declarators",
  "constant_declarator", "expression_statement", "statement_expression",
  "selection_statement", "boolexp", "if_statement", "if_statement_1",
  "if_statement_2", "switch_statement", "switch_statement_1",
  "switch_statement_2", "switch_block", "switch_sections_opt",
  "switch_sections", "switch_section", "switch_labels", "switch_label",
  "iteration_statement", "unsafe_statement", "while_statement",
  "while_statement_1", "while_statement_2", "do_statement",
  "for_statement", "for_statement_1", "for_statement_2",
  "for_initializer_opt", "for_condition_opt", "for_iterator_opt",
  "for_initializer", "for_condition", "for_iterator",
  "statement_expression_list", "foreach_statement", "foreach_statement_1",
  "foreach_statement_2", "jump_statement", "break_statement",
  "continue_statement", "goto_statement", "return_statement",
  "expression_opt", "throw_statement", "try_statement", "catch_clauses",
  "catch_clause", "identifier_opt", "finally_clause", "checked_statement",
  "unchecked_statement", "lock_statement", "using_statement",
  "resource_acquisition", "fixed_statement", "fixed_pointer_declarators",
  "fixed_pointer_declarator", "compilation_unit", "using_directives_opt",
  "attributes_opt", "namespace_member_declarations_opt",
  "namespace_declaration", "comma_opt", "qualified_identifier",
  "qualifier", "namespace_body", "using_directives", "using_directive",
  "using_alias_directive", "using_namespace_directive",
  "namespace_member_declarations", "namespace_member_declaration",
  "type_declaration", "modifiers_opt", "modifiers", "modifier",
  "data_storage_opt", "identif", "identifier", "class_declaration",
  "class_h", "test_1", "class_base_opt", "class_base",
  "interface_type_list", "class_body", "class_member_declarations_opt",
  "class_member_declarations", "class_member_declaration",
  "constant_declaration", "field_declaration", "method_declaration",
  "method_header", "method_1", "method_2", "method_3",
  "formal_parameter_list_opt", "return_type", "method_body",
  "formal_parameter_list", "formal_parameter", "fixed_parameter",
  "parameter_modifier_opt", "parameter_array", "property_declaration",
  "accessor_declarations", "set_accessor_declaration_opt",
  "get_accessor_declaration_opt", "get_accessor_declaration",
  "set_accessor_declaration", "accessor_body", "event_declaration",
  "event_accessor_declarations", "add_accessor_declaration",
  "remove_accessor_declaration", "indexer_declaration",
  "indexer_declarator", "qualified_this", "operator_declaration",
  "operator_declarator", "overloadable_operator_declarator",
  "overloadable_operator", "conversion_operator_declarator",
  "constructor_declaration", "constructor_declarator", "constructor_1",
  "constructor_initializer_opt", "constructor_initializer",
  "destructor_declaration", "operator_body", "constructor_body",
  "struct_bod", "IDENTIFIER", "struct_declaration",
  "struct_interfaces_opt", "struct_interfaces", "struct_body",
  "struct_member_declarations_opt", "struct_member_declarations",
  "struct_member_declaration", "array_initializer",
  "variable_initializer_list_opt", "variable_initializer_list",
  "interface_declaration", "interface_base_opt", "interface_base",
  "interface_body", "interface_member_declarations_opt",
  "interface_member_declarations", "interface_member_declaration",
  "interface_method_declaration", "new_opt",
  "interface_property_declaration", "interface_indexer_declaration",
  "interface_accessors", "interface_event_declaration",
  "interface_empty_body", "enum_declaration", "enum_base_opt", "enum_base",
  "enum_body", "enum_member_declarations_opt", "enum_member_declarations",
  "enum_member_declaration", "delegate_declaration", "attributes",
  "attribute_sections", "attribute_section",
  "attribute_target_specifier_opt", "attribute_target_specifier",
  "attribute_target", "attribute_list", "attribute",
  "attribute_arguments_opt", "attribute_arguments", "ENTER_attrib",
  "EXIT_attrib", "ENTER_accessor_decl", "EXIT_accessor_decl",
  "ENTER_getset", "EXIT_getset", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short int yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] =
{
       0,   165,   166,   166,   166,   166,   166,   166,   166,   166,
     167,   167,   168,   169,   169,   170,   171,   171,   171,   172,
     172,   173,   173,   173,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   175,   175,   176,   176,   177,   177,   177,
     178,   178,   178,   179,   179,   180,   181,   182,   182,   183,
     183,   183,   184,   184,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   186,   187,   187,   187,
     188,   188,   189,   189,   190,   190,   191,   191,   192,   192,
     193,   194,   194,   195,   196,   197,   198,   198,   199,   199,
     199,   199,   199,   200,   200,   201,   201,   202,   202,   202,
     203,   204,   205,   206,   207,   207,   208,   208,   208,   208,
     208,   209,   209,   209,   209,   210,   211,   212,   212,   212,
     212,   212,   212,   212,   213,   213,   213,   213,   213,   213,
     214,   214,   215,   215,   216,   216,   217,   217,   217,   217,
     218,   218,   218,   219,   219,   219,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   221,   221,   221,   222,   222,
     223,   223,   224,   224,   225,   225,   226,   226,   227,   227,
     228,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   230,   230,   231,   232,   233,   233,   233,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   235,   236,   236,   237,   237,   238,   239,   240,
     240,   241,   241,   242,   242,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   244,   244,   244,   245,   245,   246,
     246,   246,   247,   247,   248,   248,   248,   249,   250,   250,
     250,   250,   250,   250,   250,   251,   251,   252,   252,   253,
     254,   255,   255,   256,   257,   258,   259,   260,   260,   261,
     261,   262,   263,   263,   264,   264,   264,   265,   265,   265,
     265,   266,   267,   268,   269,   270,   270,   271,   272,   273,
     273,   273,   274,   274,   275,   275,   276,   276,   277,   277,
     278,   279,   280,   280,   281,   282,   283,   283,   283,   284,
     284,   284,   284,   284,   285,   286,   287,   287,   287,   288,
     289,   289,   290,   291,   291,   291,   292,   292,   293,   293,
     293,   294,   294,   295,   296,   297,   298,   299,   300,   300,
     301,   301,   302,   302,   303,   304,   304,   305,   305,   306,
     306,   307,   307,   308,   309,   309,   310,   310,   311,   311,
     312,   312,   313,   313,   314,   314,   315,   316,   317,   317,
     318,   318,   319,   319,   319,   319,   319,   320,   320,   321,
     321,   322,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   323,   323,   323,   323,   324,   324,   325,
     325,   325,   325,   325,   326,   327,   327,   328,   329,   329,
     330,   330,   330,   330,   330,   331,   331,   332,   333,   333,
     334,   334,   335,   335,   335,   335,   335,   335,   335,   335,
     335,   335,   336,   336,   336,   337,   337,   338,   339,   339,
     339,   340,   341,   342,   343,   343,   344,   345,   345,   346,
     346,   347,   347,   348,   349,   349,   349,   350,   351,   352,
     352,   353,   353,   354,   354,   355,   356,   357,   357,   358,
     358,   359,   359,   360,   361,   362,   363,   363,   364,   365,
     366,   366,   367,   367,   368,   368,   368,   368,   368,   368,
     368,   368,   368,   368,   368,   368,   368,   368,   368,   368,
     368,   368,   368,   368,   368,   368,   369,   369,   370,   371,
     372,   373,   373,   374,   374,   375,   376,   376,   377,   377,
     378,   378,   379,   379,   379,   379,   379,   380,   381,   381,
     382,   382,   383,   384,   384,   385,   385,   386,   386,   386,
     386,   386,   386,   386,   386,   386,   387,   387,   388,   388,
     389,   389,   390,   391,   391,   392,   392,   393,   394,   394,
     395,   395,   396,   396,   396,   396,   397,   397,   398,   398,
     399,   400,   401,   401,   401,   401,   402,   403,   403,   404,
     405,   405,   406,   407,   407,   408,   408,   409,   409,   410,
     410,   411,   411,   412,   413,   413,   414,   414,   415,   415,
     416,   417,   417,   417,   417,   417,   417,   417,   417,   417,
     418,   418,   419,   420,   420,   421,   422,   423,   424,   425,
     426,   427
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     2,     2,     0,     2,     1,     1,     1,     3,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       4,     4,     0,     1,     4,     4,     0,     1,     1,     3,
       1,     3,     4,     2,     2,     1,     5,     5,     7,     6,
       7,     3,     3,     7,     8,     0,     1,     4,     4,     4,
       4,     4,     3,     2,     4,     4,     1,     1,     1,     1,
       1,     1,     2,     2,     1,     2,     2,     1,     2,     2,
       2,     1,     1,     1,     4,     5,     6,     5,     5,     5,
       0,     1,     1,     2,     1,     1,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     5,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     0,     1,     1,     2,     1,     3,     2,
       2,     2,     2,     1,     3,     1,     3,     2,     3,     4,
       5,     5,     6,     7,     1,     1,     1,     5,     5,     3,
       2,     3,     1,     3,     3,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     2,
       2,     3,     5,     2,     2,     3,     3,     0,     1,     1,
       2,     2,     1,     2,     3,     2,     2,     1,     1,     1,
       1,     2,     2,     2,     3,     7,     3,     2,     2,     7,
       1,     2,     0,     1,     0,     1,     0,     1,     1,     1,
       1,     1,     1,     3,     2,     2,     6,     5,     6,     1,
       1,     1,     1,     1,     2,     2,     3,     4,     3,     3,
       0,     1,     3,     3,     3,     4,     1,     2,     6,     6,
       2,     0,     1,     2,     2,     2,     5,     5,     1,     1,
       6,     6,     1,     3,     3,     2,     2,     0,     1,     0,
       1,     0,     1,     5,     0,     1,     1,     2,     2,     3,
       4,     3,     1,     2,     1,     1,     5,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     2,     6,     5,     0,     0,     1,
       2,     2,     4,     2,     4,     3,     3,     3,     0,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     6,     5,     6,     5,     5,     2,     4,     4,
       4,     4,     4,     4,     0,     1,     1,     1,     1,     1,
       3,     1,     1,     4,     0,     1,     1,     4,     9,     2,
       2,     0,     1,     0,     1,     5,     5,     1,     1,     6,
      10,     2,     2,     5,     5,     8,     5,     5,     2,     4,
       1,     1,     7,    10,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     7,     7,     2,     5,
       3,     0,     1,     5,     5,     7,     1,     1,     1,     1,
       1,     0,     1,     1,     1,     1,     1,     7,     0,     1,
       2,     2,     3,     0,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     4,     0,     1,
       1,     3,     7,     0,     1,     2,     2,     3,     0,     1,
       1,     2,     1,     1,     1,     1,     8,     8,     0,     1,
       9,    12,     3,     3,     6,     6,     6,     1,     2,     7,
       0,     1,     2,     3,     4,     0,     1,     1,     3,     2,
       4,     9,     9,     1,     1,     2,     6,     7,     0,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     0,     1,     3,     0,     0,     0,     0,
       0,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
     337,     0,     0,   339,   338,   352,   354,   355,   387,   388,
       0,    12,     0,   346,     1,   383,   360,   339,   358,   361,
     362,     0,   363,   364,   365,   366,   340,   583,   584,     0,
     353,   357,   347,     0,   348,   371,   372,   373,     0,   374,
     375,   376,   377,   378,   379,   384,   385,   380,   381,   382,
       0,   383,   369,   367,   383,   359,   339,   394,   585,   588,
     349,     0,   346,   337,   386,   397,     0,     0,     0,     0,
     370,   368,   383,   421,     0,   339,   410,   412,   413,   414,
       0,     0,     0,     0,   415,   416,   417,   418,   419,     0,
       0,   420,   593,   598,   591,   592,   594,   595,   596,   597,
     599,     0,   589,     0,   356,   337,   339,   344,   389,   393,
     392,   391,   390,   397,   398,   436,     0,     0,   570,   543,
     512,   513,   516,   515,   514,   518,     0,   407,   411,   203,
     438,   437,   427,   339,   339,   339,   509,   508,   498,   339,
     603,     0,   600,   590,   339,     0,   339,   345,   343,   398,
       0,   396,   399,     0,     0,     0,     0,   571,     0,     0,
     544,     0,   511,   519,   387,     0,    20,    25,    32,     0,
      23,    34,     0,     0,    33,     0,    28,    30,    35,    24,
      26,    36,    29,    31,    27,     0,     0,    13,    15,    16,
      19,    21,    22,    17,    18,    14,     0,   610,     0,   470,
     471,   387,     3,     4,     5,     6,     7,     8,     0,     0,
       0,     0,   207,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,     0,     0,     0,     0,     0,     0,     0,
       9,   310,     0,     0,    80,   310,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    54,     2,     0,    16,
      17,   106,    53,    52,    56,    57,    58,    59,    60,   108,
     109,    61,    85,    55,    62,    64,    65,   110,   123,    63,
     111,   117,   121,   122,     0,   114,   240,   205,   188,   189,
       0,   204,   190,   186,   187,     0,     0,   191,     0,   192,
     245,   248,   246,     0,   193,   200,   267,     0,   268,   269,
       0,   270,     0,   194,   299,   300,   301,   302,   303,   195,
     196,   197,   198,   199,   201,   107,   444,     0,   435,   439,
     441,   442,     0,     0,     0,    76,   602,   604,     0,   607,
       0,   351,   395,   400,   403,   401,   339,   339,   572,   339,
     344,   546,   545,   339,   344,   521,   520,   339,   344,   510,
       0,     0,     0,   232,     0,   346,     0,     0,     0,     0,
      39,   432,    37,     0,     0,     0,     0,   213,   431,     0,
     215,     0,    45,    41,    40,    38,    42,     0,   433,     0,
     507,   506,   469,     0,     0,     0,     0,     0,    57,   108,
     109,    85,   121,   122,   113,   107,   130,   130,   130,   136,
     140,   143,   146,   155,   158,   160,   162,   164,   166,   168,
     182,   183,     0,   107,   103,   112,   120,   119,   118,     0,
       0,   304,     0,   324,     0,   230,     0,   305,     0,     0,
     278,   295,     0,     0,     0,   250,     0,    76,     0,    13,
      14,     0,   140,   311,     0,     0,   254,     0,     0,     0,
       0,   325,   271,     0,   273,   115,   116,   211,   215,     0,
       0,     0,     0,    72,    83,    84,     0,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,     0,   202,
     206,   209,   210,   237,   185,   247,     0,   249,     0,   253,
       0,   272,     0,   280,   288,   292,   277,     0,   283,   289,
     387,     0,   294,     0,    72,     0,   212,   446,     0,   445,
       0,   428,   339,   429,   430,   501,     0,    77,    78,   607,
     601,   586,   350,     0,     0,     0,     0,     0,     0,     0,
     576,   577,   569,   558,     0,   339,   550,   552,   553,   555,
     554,   542,   383,   535,   527,   528,   529,   530,   531,   532,
     533,   534,     0,   339,   525,   517,     0,     0,   236,   423,
       0,     0,   235,     0,   608,     0,     0,   477,   486,   485,
     484,   487,   476,   492,   493,   482,   483,   475,   474,   481,
     480,   488,   489,   490,   491,   495,   494,   478,   479,     0,
     339,     0,   425,     0,     0,   468,   217,   339,   426,   339,
     208,     0,   135,   134,     0,   131,   132,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      66,   130,    81,     0,     0,   229,   231,   276,     0,     0,
       0,   306,   184,     0,   308,     0,     0,    72,    76,    92,
     538,    91,    72,    76,     0,   309,     0,     0,   312,     0,
       0,   313,   316,   314,     0,     0,     0,     0,   329,   328,
       0,    68,    69,    67,     0,     0,     0,    73,    47,     0,
      49,   102,   170,     0,     0,     0,   281,   284,     0,     0,
       0,     0,     0,     0,     0,     0,   440,     0,   499,   502,
     605,     0,   587,   404,   402,   406,   405,     0,     0,   579,
     573,   339,   559,     0,   547,   551,     0,   522,   526,     0,
     422,   233,   424,   234,   459,     0,     0,     0,     0,     0,
       0,   218,   214,   339,     0,   224,   216,   226,   225,     0,
       0,     0,   339,   339,     0,   133,     0,     0,   139,     0,
     137,   138,   136,   142,   141,   144,   145,   148,   147,   152,
     154,   151,   153,   149,   150,   156,   157,   159,   161,   163,
     165,     0,   167,   124,     0,    82,   100,     0,     0,     0,
     332,     0,   307,     0,    43,     0,     0,   540,     0,   539,
       0,     0,   104,   105,     0,   320,   323,   317,   315,    99,
      97,    98,   101,     0,    74,    51,    46,    50,     0,    70,
     251,   257,   255,   274,   290,     0,   285,   293,     0,     0,
       0,    71,    75,   447,   443,     0,     0,    79,   582,   581,
       0,   574,   578,     0,     0,     0,   505,   339,     0,     0,
       0,   466,     0,   219,     0,     0,     0,   467,   611,   611,
     611,     0,   449,   452,     0,   450,   454,   129,   127,   128,
     125,     0,     0,     0,     0,     0,     0,     0,   326,    95,
      43,    86,    43,   536,     0,    87,    43,   321,   321,   327,
      48,     0,     0,     0,     0,   258,   259,     0,   262,   286,
       0,     0,     0,    72,    72,   580,     0,     0,   610,     0,
       0,     0,   339,   339,     0,     0,     0,   221,   220,   611,
       0,     0,     0,     0,   465,   169,   126,     0,   334,   330,
     333,   331,    89,    96,    44,     0,    95,   537,   541,    95,
       0,   322,     0,   252,   266,     0,   265,   256,   260,   261,
     263,     0,   287,   291,   297,     0,     0,     0,     0,     0,
     339,   339,     0,   339,   609,   609,   609,     0,   461,     0,
     462,   497,   496,   472,     0,   222,   448,     0,     0,   458,
     457,   610,   610,   275,    43,     0,    88,    90,     0,     0,
     264,     0,   296,   298,   503,   504,     0,   567,   566,     0,
       0,   339,     0,     0,     0,   460,     0,   223,   227,   228,
     455,   456,    95,    43,   318,   319,   279,   568,     0,     0,
       0,     0,   610,   608,   608,     0,    93,    95,   557,   556,
       0,     0,   611,     0,   463,   464,   473,    94,   339,   339,
     560,   339,     0,     0,     0,     0,     0,   611,   564,   565,
     561
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,   246,   247,    10,   248,   187,   188,   386,   190,   191,
     192,   387,   194,   195,   869,   376,   805,   677,   678,   251,
     252,   253,   254,   388,   679,   256,   516,   517,   257,   258,
     389,   390,   261,   391,   263,   649,   922,   264,   265,   266,
     267,   268,   269,   270,   271,   392,   393,   399,   275,   604,
     605,   606,   442,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,   478,   518,   643,   485,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   366,   367,   736,
     737,   286,   352,   353,   287,   288,   289,   486,   290,   291,
     487,   292,   293,   489,   812,   884,   885,   886,   887,   888,
     294,   295,   296,   297,   491,   298,   299,   300,   496,   497,
     815,   941,   498,   816,   942,   499,   301,   302,   502,   303,
     304,   305,   306,   307,   444,   308,   309,   661,   662,   930,
     663,   310,   311,   312,   313,   670,   314,   779,   780,     2,
       3,   316,   145,    16,   148,   395,    12,   107,     4,     5,
       6,     7,   146,    18,    19,    50,    51,    52,    53,    62,
     113,    20,    21,   114,   151,   152,   335,    57,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,   317,   117,
     132,   318,   319,   320,   510,   321,    84,   741,   852,   855,
     742,   743,   971,    85,   901,   902,   903,    86,   197,   371,
      87,   198,   199,   589,   200,    88,    89,    90,   698,   699,
      91,   382,   138,   348,   125,    22,   162,   163,   349,   552,
     553,   554,   738,   788,   789,    23,   159,   160,   344,   534,
     535,   536,   537,   713,   538,   539,  1011,   540,   988,    24,
     156,   157,   340,   529,   530,   531,    25,    26,    27,    28,
     101,   102,   103,   141,   142,   326,   327,    29,   521,   725,
     993,   379,   912
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -793
static const short int yypact[] =
{
       7,   602,    47,   156,     7,  -793,  -793,  -793,  -793,  -793,
     297,  -793,   602,   335,  -793,  1019,  -793,    48,  -793,  -793,
    -793,   399,  -793,  -793,  -793,  -793,  -793,   156,  -793,   229,
    -793,  -793,   392,   602,  -793,  -793,  -793,  -793,   602,  -793,
    -793,  -793,  -793,  -793,  -793,   321,  -793,  -793,  -793,  -793,
      50,  1436,  -793,  -793,  1161,  -793,    62,  -793,  -793,   404,
    -793,   434,   413,   192,  -793,   539,    88,   485,   495,   553,
    -793,  -793,  1436,  -793,   493,   147,  -793,  -793,  -793,  -793,
     287,   497,   502,   511,  -793,  -793,  -793,  -793,  -793,   369,
     530,  -793,  -793,  -793,  -793,  -793,  -793,  -793,  -793,  -793,
    -793,   602,  -793,   492,  -793,     7,   148,   515,  -793,  -793,
    -793,  -793,  -793,  -793,   537,  -793,   552,   558,   566,   570,
    -793,  -793,  -793,  -793,  -793,   574,  3154,  -793,  -793,  1742,
    -793,  -793,  -793,    51,    51,    51,  -793,  -793,  -793,    51,
     576,   267,  -793,  -793,   148,   584,   155,  -793,  -793,   537,
     355,  -793,  -793,   592,   598,   402,   623,  -793,   602,   633,
    -793,   602,   642,  -793,   604,   663,  -793,  -793,  -793,  3310,
    -793,  -793,  3310,   580,  -793,   582,  -793,  -793,  -793,  -793,
    -793,  -793,  -793,  -793,  -793,   469,    38,  -793,   675,  -793,
    -793,  -793,  -793,  -793,  -793,   675,    75,  -793,   527,  -793,
    -793,   664,  -793,  -793,  -793,  -793,  -793,  -793,  3032,  2328,
    3032,  3032,  -793,  3032,  3032,  3032,   250,   657,   459,  3310,
     665,  1863,  -793,   681,   685,   687,    84,   688,   691,  1406,
    -793,  3032,   693,   696,  -793,  3032,  -793,   699,   698,   508,
     699,   702,   690,   704,  3032,  3032,  -793,  -793,    91,   680,
     689,   257,   706,  -793,  -793,    74,  -793,  -793,  -793,    94,
      97,  -793,   118,  -793,  -793,  -793,  -793,  -793,  -793,  -793,
     458,  -793,   120,   136,   293,  -793,  -793,  -793,  -793,  -793,
     709,  1742,  -793,  -793,  -793,   703,   707,  -793,   708,  -793,
    -793,  3032,  -793,  3032,  -793,  -793,  -793,  3032,  -793,  -793,
    1290,  -793,  3334,  -793,  -793,  -793,  -793,  -793,  -793,  -793,
    -793,  -793,  -793,  -793,  -793,    72,   489,   714,   596,  -793,
    -793,  -793,   720,   723,   727,  3032,  -793,  -793,    55,  -793,
     728,  -793,  -793,   606,   608,   609,    51,    51,  -793,   157,
     515,   608,   609,   164,   515,   608,   609,   168,   515,  -793,
     732,   482,   145,  -793,   426,   259,    91,   383,  3310,  3310,
    -793,  -793,  -793,  3131,   610,   612,   171,  -793,   736,   324,
     512,   611,  -793,  -793,  -793,  -793,  -793,   239,  -793,   737,
    -793,  -793,  -793,  1742,   740,   742,   680,   689,  -793,  -793,
    -793,  -793,  -793,  -793,  -793,    15,   429,   305,   319,   293,
     470,   333,   524,   254,    -4,   739,   738,   741,   614,    21,
    -793,  -793,   749,    52,  -793,  -793,  -793,  -793,  -793,   766,
    3032,  -793,  3032,  -793,   482,   636,   426,  -793,    31,  3310,
    -793,  -793,   751,  3032,   752,  -793,  3032,  3032,    89,   640,
      95,    36,   543,  -793,   755,  3310,  -793,   756,    64,  3401,
    3032,  -793,  -793,  2447,  -793,  -793,  -793,   646,   760,   785,
     787,   788,  3032,  2096,  -793,  -793,   791,  -793,  -793,  -793,
    -793,  -793,  -793,  -793,  -793,  -793,  -793,  -793,  3032,  -793,
    -793,  -793,  -793,  -793,  -793,  -793,   780,  -793,   782,  -793,
     783,  -793,   786,  -793,  -793,  -793,  -793,   777,  -793,   666,
     725,    78,  -793,   337,  2096,  2566,   646,  -793,  3310,  -793,
    3310,  -793,   156,  -793,  -793,   793,   790,   670,  -793,  -793,
    -793,  -793,  -793,   602,   602,   602,   794,   795,   809,   796,
     674,  -793,  -793,   730,   797,   175,  -793,  -793,  -793,  -793,
    -793,  -793,  1436,  -793,  -793,  -793,  -793,  -793,  -793,  -793,
    -793,  -793,   802,   196,  -793,  -793,   805,   248,   798,  -793,
     602,   255,  3032,   263,  -793,   100,   299,  -793,  -793,  -793,
    -793,  -793,  -793,  -793,  -793,  -793,  -793,  -793,  -793,  -793,
    -793,  -793,  -793,  -793,  -793,  -793,  -793,  -793,  -793,   807,
     156,    59,  -793,    79,   810,  -793,  2212,   156,  -793,   156,
    -793,  3032,  -793,  -793,   812,   429,  -793,   817,   818,  3032,
    2683,  3032,  3032,  3032,  3032,  3032,  3032,  3032,  3310,  3310,
    3032,  3032,  3032,  3032,  3032,  3032,  3032,  3032,  3032,  3032,
    3480,   429,  -793,   471,   823,   636,   636,  -793,   826,   130,
     460,  -793,  -793,   800,  -793,   824,   701,  2096,  3032,  -793,
    2212,  -793,  2096,  3032,  3032,  -793,   354,   330,  -793,   607,
     699,    64,  -793,  -793,   384,   467,   350,   828,  -793,  -793,
     830,  -793,  -793,  -793,   486,  3032,  3032,   712,  -793,   837,
    -793,  -793,  -793,  1863,   835,  1863,  -793,  3032,  3032,  3032,
     776,   778,   843,   490,   300,   418,  -793,    16,  -793,  -793,
    -793,  3032,  -793,   608,   609,  -793,  -793,   834,   836,   838,
    -793,   204,  -793,  3267,  -793,  -793,  3243,  -793,  -793,   699,
    -793,  -793,  -793,  -793,  -793,   844,  3310,  3310,  3310,   516,
     734,   839,  -793,   156,  3310,  -793,  -793,  -793,  -793,   517,
     546,   846,   208,   224,  3032,  -793,  3032,  3032,  -793,  3032,
    -793,  -793,  -793,   543,   543,   333,   333,   524,   524,   841,
     383,   841,   383,   524,   524,   254,   254,    -4,   739,   738,
     741,   853,   614,  -793,   857,  -793,  -793,  3032,   851,    69,
    -793,    77,  -793,  1863,   675,   863,   746,  -793,   862,   743,
     865,   747,  -793,  -793,   355,  -793,  -793,  -793,  -793,  -793,
    -793,  -793,  -793,  1863,  -793,  -793,  -793,  -793,  2096,  -793,
     827,   264,  -793,  -793,  -793,   864,  -793,  -793,   867,  3032,
    3032,  -793,  -793,  -793,  -793,   876,   879,  -793,  -793,  -793,
    3032,  -793,  -793,  3310,   447,    81,  -793,   156,   449,   462,
     464,  -793,   602,  2212,   881,     9,    58,  -793,  -793,  -793,
    -793,   764,  -793,  -793,   771,  -793,  -793,  -793,  -793,  -793,
    -793,  3032,  3032,   885,  3032,  1863,   904,  1863,  -793,   889,
     675,  -793,    70,  -793,  1980,  -793,   675,   602,   602,  -793,
    -793,  1863,  2799,   894,   892,   264,  -793,  1615,  -793,  3032,
    1863,   896,   905,  2096,  2096,  -793,   466,   903,   906,   792,
     547,   909,   156,   156,   913,   915,   127,   895,  -793,  -793,
    3032,  3032,   551,   551,  -793,  -793,  -793,   912,  -793,  -793,
    -793,  -793,  -793,  -793,  -793,  2915,   889,  -793,  -793,   889,
     919,  -793,   923,  -793,  -793,   925,  -793,  -793,  -793,  1742,
    -793,   926,  -793,   666,  -793,  1863,  1863,   927,   928,   572,
      51,    51,   922,   156,  -793,  -793,  -793,   808,  -793,   811,
    -793,  -793,  -793,  -793,  3310,  2212,  -793,   804,   806,  -793,
    -793,  -793,  -793,  -793,   675,   523,  -793,  -793,   699,   699,
    -793,  1863,  -793,  -793,  -793,  -793,   933,  -793,  -793,   937,
     938,   156,   528,   699,   699,  -793,   488,  -793,  -793,  -793,
    -793,  -793,   889,   675,  -793,  -793,  -793,  -793,   572,   572,
     554,   939,  -793,  -793,  -793,   944,  -793,   889,  -793,  -793,
     572,   572,  -793,   945,  -793,  -793,  -793,  -793,   246,   252,
    -793,   156,   829,   832,   956,   572,   572,  -793,  -793,  -793,
    -793
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -793,  -793,  -793,  -793,   -38,   748,  -793,   825,  -793,   831,
    -793,   124,  -793,   758,  -597,  -171,   309,  -793,   181,  -793,
    -793,  -793,  -793,  -121,  -476,  -793,  -402,  -399,  -793,  -793,
     -18,    93,  -793,   103,  -793,  -793,  -551,  -793,  -793,  -793,
    -793,  -793,  -793,  -793,   361,   114,   247,    26,  -793,  -366,
    -793,   391,  -191,    80,   -15,    96,   375,   377,   374,   378,
     379,  -793,  -793,   290,  -793,   789,  -535,  -286,  -278,    71,
     -74,  -793,   119,  -793,  -793,  -793,  -264,  -173,   416,  -620,
    -793,  -793,  -146,   450,  -793,  -290,  -793,  -793,  -793,  -793,
    -793,  -793,  -793,  -793,  -793,  -793,  -793,   128,  -793,   125,
    -793,  -793,  -793,  -793,  -793,  -793,  -793,  -793,  -793,  -793,
    -793,  -793,  -793,  -793,  -793,   126,  -793,  -793,  -793,  -793,
    -793,  -793,  -793,  -793,   779,  -793,  -793,  -793,   357,   143,
     362,  -793,  -793,  -793,  -793,  -793,  -793,   382,   161,  -793,
      35,    -3,   887,  -793,   230,     0,   847,  -793,  -793,  1025,
    -793,  -793,  1032,    28,   -36,   -65,  -793,   985,   986,     1,
    -793,  -793,  -793,   930,   891,  -793,  -142,  -793,  -793,  -793,
     966,  -322,  -305,  -301,  -793,  -793,  -793,  -793,  -130,  -793,
    -793,  -568,   533,  -793,  -793,  -793,  -298,   313,  -793,  -793,
     304,   314,   138,  -297,  -793,   152,   159,  -296,  -793,  -793,
    -295,  -793,  -793,  -793,  -793,  -293,  -793,  -793,  -793,  -793,
    -793,  -793,  -793,  -793,  -793,  -793,  -793,  -793,  -793,  -793,
    -793,   504,  -414,  -793,  -793,  -793,  -793,  -793,  -793,  -793,
    -793,   529,  -793,  -793,  -793,  -793,    27,  -793,  -411,  -793,
    -793,  -793,  -793,  -793,  -793,   351,  -793,  -793,  -793,  1038,
    -793,  -793,  -793,  -793,   744,  -793,  -793,  -793,   548,  -316,
    -253,  -356,  -792
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -611
static const short int yytable[] =
{
      15,    11,    13,   480,   322,   323,   131,   126,   255,   324,
     495,   490,   594,    32,    54,   137,   342,   373,   400,   346,
      73,   633,   729,   377,   374,   544,   651,   723,   692,   739,
     787,   607,   608,    61,   504,   646,   494,   628,    63,    73,
     372,   362,   545,     8,     9,    55,   546,    14,  -336,   547,
     548,   549,   550,    72,   551,   652,   372,   913,   914,   637,
       8,     9,   372,   674,     8,     9,   116,   825,   375,  -434,
     362,   504,    72,   425,   372,   457,   372,     8,     9,   372,
       8,     9,  -408,   690,     8,     9,   898,   865,   186,   432,
     375,   504,  -238,     8,     9,   867,     8,     9,   106,   372,
     255,   140,  -238,    54,   375,   600,   693,   375,   647,    65,
     362,   259,  -241,   362,    66,  -242,   650,   966,    67,   726,
     659,   362,  -241,   362,   381,  -242,   196,   826,     1,   315,
     363,   351,   362,    68,   356,   778,  -239,   660,  -243,   433,
     144,    54,   506,    54,   423,   963,  -239,   434,  -243,   364,
     334,   910,   622,   623,  -244,   274,   638,   601,   341,    69,
     255,   345,   362,   448,  -244,   451,   452,  -409,  -341,   354,
     355,   785,   357,   559,    55,  -342,   790,  -575,   653,   255,
     365,   424,   629,   563,  -548,   361,   368,   370,  -523,   669,
    -606,   438,   899,  -606,   601,  -549,   378,   370,   519,   592,
     911,   730,   693,   259,  -606,   557,   526,   527,   561,   413,
     866,   115,   925,   105,   505,  -238,  -524,   365,   866,   426,
     355,   365,   260,   908,   831,   603,   603,   603,  -451,   441,
    1030,   544,   262,   365,   394,  -241,   414,   415,  -242,   416,
     417,   418,   631,   272,  -453,  1040,   786,   274,   545,   458,
     193,   791,   546,   250,   928,   547,   548,   549,   550,  -239,
     551,  -243,   255,   259,   501,   774,  -562,   598,   964,   374,
     455,   456,  -563,   924,   333,   926,   720,  -244,   635,   929,
     636,   315,   259,   722,   616,   617,   560,  -236,   562,  -606,
    -606,   724,   428,   193,   419,   895,   193,  -606,  -606,  -606,
     315,   461,   503,    34,   618,   823,  -606,   274,   129,   372,
    -606,   543,   593,     1,   260,   130,   458,  -606,   727,   882,
     565,   566,   467,   372,   262,    31,   274,   883,   140,     8,
       9,   362,   362,   398,   372,   272,   528,   602,  -606,   619,
     533,   372,   691,   193,   542,   997,  -606,   935,   793,   459,
    -606,   602,   558,   193,   372,   558,   564,   370,   357,   357,
       8,     9,   375,   460,    33,   259,  -606,   612,   801,   375,
      32,    59,   792,   613,   260,   976,   273,  1002,   977,    34,
     593,   704,   375,   315,   262,   992,   362,   372,  -606,   560,
     129,   639,   420,   260,  -606,   272,   560,   136,   817,   462,
    -236,   814,   799,   262,   593,   250,  1017,   656,   328,   274,
     329,   665,   620,   621,   272,   375,   360,   947,   948,   276,
      56,   753,   754,   824,   250,   558,   193,   558,    64,   640,
     372,     8,     9,   372,   603,   595,    60,   468,   469,   470,
     471,   472,   473,   474,   475,   657,   178,   476,   477,   666,
     362,  1016,   897,   315,   904,   923,   167,    34,   375,   168,
     603,   602,   104,   181,   372,   778,  1027,   905,   273,   906,
     694,   949,   695,    92,     8,     9,   260,   716,   422,   360,
     129,   362,   193,   193,   176,   800,   262,     8,     9,   177,
     118,   863,   375,  1015,   362,   609,   362,   272,   362,   362,
     119,   360,   610,   611,   179,    93,   180,   250,   357,   143,
     357,   276,   923,   127,   362,   923,   133,   543,   182,   183,
     362,   134,   184,   703,   705,   706,   975,   450,   273,   129,
     135,  -346,   533,  -346,    94,    95,    96,    97,    98,    99,
     100,   596,   952,   147,   108,   109,   110,   273,   129,   139,
     542,   111,   112,   193,   150,   380,    34,   153,   120,   121,
     122,   558,   255,   154,   255,   123,   124,   255,   609,   193,
     532,   276,   129,   193,   541,   654,   611,   250,   555,   969,
     759,   761,   507,   155,   508,   795,   796,   158,   923,   509,
     276,   161,   731,   986,   458,   325,   740,  1018,  1019,   495,
     987,   757,   758,   923,   331,   763,   764,     8,     9,  1028,
    1029,   336,   701,   870,   775,  1000,  1001,   337,   760,   762,
     464,   465,   466,  -500,  1038,  1039,   794,   701,   129,   804,
     273,   701,   193,   822,   193,   748,   750,   751,   752,   752,
     752,   752,   752,   752,   339,   836,   752,   752,   752,   752,
     752,   752,   752,   752,   343,   752,  1023,   512,   512,   841,
     847,   480,   255,   347,   701,   259,  1003,   259,   350,   512,
     259,  1012,   358,   276,   359,   835,   614,   615,   186,   372,
     750,   383,   255,   848,   849,   421,   954,   955,   838,   839,
     840,  1020,  1021,   427,   755,   756,   845,  1024,  1025,   870,
     429,   870,   994,   995,   430,   870,   431,   435,   528,   274,
     436,   274,   445,   357,   274,   446,   196,   449,   765,   766,
     129,   453,   360,   454,   459,   463,   357,   357,   357,   479,
     740,   481,   511,   460,   846,   482,   483,   512,   513,   851,
     854,   514,   193,   193,   255,   515,   255,   523,   522,   524,
     525,   556,   590,   597,   810,   591,   813,  -610,   599,   422,
     255,   450,   624,   626,   625,   259,   255,   630,   255,   255,
     857,   632,   858,   859,   627,   860,   260,   560,   260,   641,
     644,   260,   648,   655,   658,   259,   262,   593,   262,   596,
     671,   262,   672,   673,   878,   896,   681,   272,   683,   272,
     684,   685,   272,   870,   686,   687,   689,   688,   700,   274,
     697,   701,   707,   708,   709,   711,   710,   714,   255,   712,
     989,   990,   717,   719,   255,   255,   728,   562,   782,   274,
     744,   733,   870,   357,   900,   746,   747,   193,   970,   970,
     193,   776,   783,   907,   784,   777,   802,   259,   803,   259,
     193,   193,   193,   808,   868,   809,   811,   819,   193,   820,
     255,   821,   828,   259,   829,   837,   850,   830,   843,   259,
     861,   259,   259,   362,   879,   862,   260,   842,   931,   931,
     864,   871,   873,   875,   874,   890,   262,   315,   916,   872,
     876,   274,   889,   274,   881,   893,   260,   272,   894,   957,
     959,   909,   849,   917,  1004,  1005,   262,   274,   848,   778,
     650,   936,   937,   274,   945,   274,   274,   272,   877,  1013,
    1014,   259,   950,   946,   965,   951,   996,   259,   259,   956,
     273,   961,   273,   962,   953,   273,   919,   978,   921,   315,
     973,   979,   980,   991,   981,   984,   985,   998,   955,   999,
     954,   189,   933,  1007,   249,  1008,  1009,   193,   260,  1022,
     260,   944,  1026,   259,   357,   274,  1031,  1035,   262,  1036,
     262,   274,   274,   276,   260,   276,  1037,   439,   276,   272,
     260,   272,   260,   260,   262,   807,   338,   440,  1010,   880,
     262,   773,   262,   262,   189,   272,   745,   189,   412,   767,
     769,   272,   768,   272,   272,   770,   939,   274,   772,   732,
     721,   250,   940,   938,   447,   943,   982,   983,   797,  -335,
     443,   932,   781,   798,   443,  1032,  1033,   920,  1010,    30,
     273,   330,   260,   369,   397,    17,    70,    71,   260,   260,
     332,   128,   262,   149,   189,   696,   844,   856,   262,   262,
     273,   972,  1006,   272,   189,   960,   853,   718,  1034,   272,
     272,   958,   832,   250,   715,    58,     0,   702,    35,     0,
       0,     0,   520,   276,   260,     0,     0,     0,     0,     0,
     484,     0,   488,     0,   262,     0,   484,     0,   193,     0,
      36,     0,     0,   276,     0,   272,     0,     0,     0,     0,
       0,     0,     0,    37,     0,     0,   249,    38,    39,     0,
       0,     0,   273,    40,   273,    41,    42,    43,    44,     0,
       0,     0,    45,     0,     0,   249,    46,   189,   273,     0,
       0,     0,     0,     0,   273,     0,   273,   273,    47,     0,
       0,    48,     0,    49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   276,     0,   276,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   276,     0,     0,     0,     0,     0,   276,     0,   276,
     276,     0,     0,   189,   189,     0,   273,     0,     0,     0,
       0,     0,   273,   273,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   249,     0,
      35,   634,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   642,     0,     0,   645,     0,     0,   273,   276,
       0,     0,    36,     0,     0,   276,   276,     0,     0,   667,
       0,     0,   668,     0,     0,    37,     0,     0,     0,    38,
      39,     0,   680,     0,   189,    40,     0,    41,    42,    43,
      44,     0,     0,     0,    45,     0,     0,   682,    46,     0,
     189,   276,     0,     0,   189,     0,     0,     0,   249,     0,
      47,     0,     0,    48,     0,    49,     0,     0,     0,     0,
       0,   492,     0,   680,     0,     8,     9,   202,     0,   203,
     204,   205,     0,   206,   207,   208,     0,     0,   493,   209,
       0,     0,     0,   210,     0,     0,     0,   211,  -282,     0,
       0,     0,   213,     0,   214,     0,     0,     0,     0,     0,
     215,     0,     0,   189,     0,   189,     0,     0,     0,     0,
       0,   216,   166,     0,   167,     0,     0,   168,   384,     0,
       0,   642,   170,     0,     0,     0,   171,     0,     0,     0,
       0,     0,   222,     0,     0,   174,     0,     0,     0,     0,
       0,     0,   176,     0,     0,     0,     0,   177,     0,   229,
     230,   178,     0,     0,     0,   735,     0,     0,     0,     0,
       0,     0,   179,     0,   180,   232,     0,     0,   181,     0,
       0,   234,     0,   236,     0,   238,   182,   183,   385,     0,
     184,     8,     9,   242,     0,     0,     0,   771,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   680,     0,     0,   735,
       0,   680,     0,   189,   189,     0,     0,     0,     0,     0,
       0,     0,   244,   245,     0,     0,     0,     0,   166,     0,
     167,     0,     0,   168,   806,   806,     0,     0,   170,     0,
       0,     0,   171,     0,     0,     0,   484,     0,   818,     0,
       0,   174,     0,     0,     0,    35,     0,     0,   176,     0,
     827,     0,     0,   177,     0,     0,     0,   178,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    36,   179,     0,
     180,     0,     0,     0,   181,     0,     0,     0,     0,     0,
      37,     0,   182,   183,     0,    39,   184,     0,     0,   242,
      40,     0,    41,    42,    43,    44,     0,     0,   189,    45,
       0,   189,     0,    46,     0,     0,     0,     0,   437,     0,
       0,   189,   189,   189,     0,    47,     0,     0,    48,   189,
      49,     0,     0,     0,     0,     0,   484,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   680,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   891,   892,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   642,
     201,     9,   202,     0,   203,   204,   205,     0,   206,   207,
     208,     0,   735,     0,   209,     0,   129,     0,   210,     0,
       0,     0,   211,   212,     0,     0,     0,   213,     0,   214,
     915,     0,     0,   918,     0,   215,     0,     0,   189,     0,
       0,     0,     0,   735,     0,     0,   216,   166,   217,   167,
     882,   642,   168,   218,     0,   219,   220,   170,   883,     0,
     221,   171,   680,   680,     0,     0,     0,   222,     0,   223,
     174,   224,   225,   226,   227,     0,     0,   176,     0,   967,
     968,   228,   177,     0,   229,   230,   178,     0,     0,     0,
       0,     0,   249,     0,     0,     0,   231,   179,     0,   180,
     232,     0,     0,   181,     0,   233,   234,   235,   236,   237,
     238,   182,   183,   239,   240,   184,   241,     0,   242,     0,
     243,     0,     0,     0,     0,     0,     0,   201,     9,   202,
       0,   203,   204,   205,   735,   206,   207,   208,     0,     0,
       0,   209,     0,   129,   249,   210,     0,     0,     0,   211,
     212,     0,     0,     0,   213,     0,   214,   244,   245,     0,
       0,     0,   215,     0,     0,     0,     0,     0,     0,   189,
       0,     0,     0,   216,   166,   217,   167,     0,     0,   168,
     218,     0,   219,   220,   170,     0,     0,   221,   171,     0,
       0,     0,     0,     0,   222,     0,   223,   174,   224,   225,
     226,   227,     0,     0,   176,     0,     0,     0,   228,   177,
       0,   229,   230,   178,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   231,   179,     0,   180,   232,     0,     0,
     181,     0,   233,   234,   235,   236,   237,   238,   182,   183,
     239,   240,   184,   241,     0,   242,     0,   243,     8,     9,
     202,     0,   203,   204,   205,     0,   206,   207,   208,     0,
       0,     0,   209,     0,   129,     0,   210,     0,     0,     0,
     211,   212,     0,     0,     0,   213,     0,   214,     0,     0,
       0,     0,     0,   215,   244,   245,     0,     0,     0,     0,
       0,     0,     0,     0,   216,   166,   217,   167,     0,     0,
     168,   218,     0,     0,   220,   170,     0,     0,   221,   171,
       0,     0,     0,     0,     0,   222,     0,   223,   174,   224,
     225,   226,   227,     0,     0,   176,     0,     0,     0,   228,
     177,     0,   229,   230,   178,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   231,   179,     0,   180,   232,     0,
       0,   181,     0,   233,   234,   235,   236,   237,   238,   182,
     183,   239,   240,   184,   241,     8,     9,   202,   243,   203,
     204,   205,     0,   206,   207,   208,     0,     0,     0,   209,
     927,   650,     0,   210,     0,     0,     0,   211,     0,     0,
       0,     0,   213,     0,   214,     0,     0,     0,     0,     0,
     215,     0,     0,     0,     0,   244,   245,     0,     0,     0,
       0,   216,   166,     0,   167,     0,     0,   168,   384,     0,
       0,     0,   170,     0,     0,     0,   171,     0,     0,     0,
       0,     0,   222,     0,     0,   174,     0,     0,     0,     0,
       0,     0,   176,     0,     0,     0,     0,   177,     0,   229,
     230,   178,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   179,     0,   180,   232,   734,     0,   181,     0,
       0,   234,     0,   236,     0,   238,   182,   183,   385,     0,
     184,     8,     9,   202,     0,   203,   204,   205,     0,   206,
     207,   208,     0,     0,     0,   209,     0,     0,     0,   210,
       0,     0,     0,   211,     0,     0,     0,     0,   213,     0,
     214,     0,     0,     0,     0,     0,   215,     0,     0,     0,
       0,     0,   244,   245,     0,     0,     0,   216,   166,     0,
     167,     0,     0,   168,   384,     0,     0,     0,   170,     0,
       0,     0,   171,     0,     0,     0,     0,     0,   222,     0,
       0,   174,     0,     0,     0,     0,     0,     0,   176,     0,
       0,     0,     0,   177,     0,   229,   230,   178,     0,   675,
       0,     0,     0,     0,     0,     0,   676,     0,   179,     0,
     180,   232,     0,     0,   181,     0,     0,   234,     0,   236,
       0,   238,   182,   183,   385,     0,   184,     8,     9,   202,
       0,   203,   204,   205,     0,   206,   207,   208,     0,     0,
       0,   209,     0,   650,     0,   210,     0,     0,     0,   211,
       0,     0,     0,     0,   213,     0,   214,     0,     0,     0,
       0,     0,   215,     0,     0,     0,     0,     0,   244,   245,
       0,     0,     0,   216,   166,     0,   167,     0,     0,   168,
     384,     0,     0,     0,   170,     0,     0,     0,   171,     0,
       0,     0,     0,     0,   222,     0,     0,   174,     0,     0,
       0,     0,     0,     0,   176,     0,     0,     0,     0,   177,
       0,   229,   230,   178,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   179,     0,   180,   232,   734,     0,
     181,     0,     0,   234,     0,   236,     0,   238,   182,   183,
     385,     0,   184,     8,     9,   202,     0,   203,   204,   205,
       0,   206,   207,   208,     0,     0,     0,   209,     0,     0,
       0,   210,     0,     0,     0,   211,     0,     0,     0,     0,
     213,     0,   214,     0,     0,     0,     0,     0,   215,     0,
       0,     0,     0,     0,   244,   245,     0,     0,     0,   216,
     166,     0,   167,     0,     0,   168,   384,     0,     0,     0,
     170,     0,     0,     0,   171,     0,     0,     0,     0,     0,
     222,     0,     0,   174,     0,     0,     0,     0,     0,     0,
     176,     0,     0,     0,     0,   177,     0,   229,   230,   178,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     179,     0,   180,   232,     0,     0,   181,     0,     0,   234,
       0,   236,     0,   238,   182,   183,   385,     0,   184,     0,
       0,   396,     8,     9,   202,     0,   203,   204,   205,     0,
     206,   207,   208,     0,     0,     0,   209,     0,     0,     0,
     210,     0,     0,     0,   211,     0,     0,     0,     0,   213,
       0,   214,     0,     0,     0,     0,     0,   215,     0,     0,
     244,   245,     0,     0,     0,     0,     0,     0,   216,   166,
       0,   167,     0,     0,   168,   384,     0,     0,     0,   170,
       0,     0,     0,   171,     0,     0,     0,     0,     0,   222,
       0,     0,   174,     0,     0,     0,     0,     0,     0,   176,
       0,     0,     0,     0,   177,     0,   229,   230,   178,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   179,
       0,   180,   232,     0,     0,   181,     0,     0,   234,     0,
     236,     0,   238,   182,   183,   385,     0,   184,     0,     0,
     242,     8,     9,   202,     0,   203,   204,   205,     0,   206,
     207,   208,     0,     0,     0,   209,     0,     0,     0,   210,
       0,     0,     0,   211,     0,     0,     0,     0,   213,     0,
     214,     0,     0,     0,     0,     0,   215,     0,     0,   244,
     245,     0,     0,     0,     0,     0,     0,   216,   166,     0,
     167,     0,     0,   168,   384,     0,     0,     0,   170,     0,
       0,     0,   171,     0,     0,     0,     0,     0,   222,     0,
       0,   174,     0,     0,     0,     0,     0,     0,   176,     0,
       0,     0,     0,   177,     0,   229,   230,   178,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   179,     0,
     180,   232,     0,     0,   181,     0,     0,   234,     0,   236,
       0,   238,   182,   183,   385,     0,   184,     0,     8,     9,
     202,     0,   203,   204,   205,     0,   206,   207,   208,     0,
       0,   749,   209,     0,     0,     0,   210,     0,     0,   591,
     211,     0,     0,     0,     0,   213,     0,   214,     0,     0,
       0,     0,     0,   215,     0,     0,     0,     0,   244,   245,
       0,     0,     0,     0,   216,   166,     0,   167,     0,     0,
     168,   384,     0,     0,     0,   170,     0,     0,     0,   171,
       0,     0,     0,     0,     0,   222,     0,     0,   174,     0,
       0,     0,     0,     0,     0,   176,     0,     0,     0,     0,
     177,     0,   229,   230,   178,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   179,     0,   180,   232,     0,
       0,   181,     0,     0,   234,     0,   236,     0,   238,   182,
     183,   385,     0,   184,     8,     9,   202,     0,   203,   204,
     205,     0,   206,   207,   208,     0,   934,     0,   209,     0,
       0,     0,   210,     0,     0,     0,   211,     0,     0,     0,
       0,   213,     0,   214,     0,     0,     0,     0,     0,   215,
       0,     0,     0,     0,     0,   244,   245,     0,     0,     0,
     216,   166,     0,   167,     0,     0,   168,   384,     0,     0,
       0,   170,     0,     0,     0,   171,     0,     0,     0,     0,
       0,   222,     0,     0,   174,     0,     0,     0,     0,     0,
       0,   176,     0,     0,     0,     0,   177,     0,   229,   230,
     178,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   179,     0,   180,   232,     0,     0,   181,     0,     0,
     234,     0,   236,     0,   238,   182,   183,   385,     0,   184,
       8,     9,   202,     0,   203,   204,   205,     0,   206,   207,
     208,     0,     0,     0,   209,     0,     0,     0,   210,     0,
       0,     0,   211,     0,     0,     0,     0,   213,     0,   214,
       0,     0,     0,     0,     0,   215,     0,     0,     0,     0,
       0,   244,   245,     0,     0,     0,   216,   166,     0,   167,
       0,     0,   168,   384,     0,     0,     0,   170,     0,     0,
       0,   171,     0,     0,     0,     0,     0,   222,     0,     0,
     174,     0,     0,     0,     0,     0,     0,   176,     0,     0,
       0,     0,   177,     0,   229,   230,   178,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   179,     0,   180,
     232,     0,     0,   181,     0,     0,   234,     0,   236,     0,
     238,   182,   183,   385,     0,   184,     0,     8,     9,   202,
       0,   203,   204,   205,     0,   206,   207,   208,     0,     0,
       0,   209,     0,     0,     0,   210,     0,     0,   974,   211,
       0,     0,     0,     0,   213,     0,   214,     0,     0,     0,
       0,     0,   215,     0,     0,     0,     0,   244,   245,     0,
       0,     0,     0,   216,   166,     0,   167,     0,     0,   168,
     384,     0,     0,     0,   170,     0,     0,     0,   171,     0,
       0,     0,     0,     0,   222,     0,     0,   174,     0,     0,
       0,     0,     0,     0,   176,     0,     0,     0,     0,   177,
       0,   229,   230,   178,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   179,     0,   180,   232,     0,     0,
     181,     0,     0,   234,     0,   236,   567,   238,   182,   183,
     385,     0,   184,   568,   569,     0,   570,   571,   572,   164,
       9,   573,   574,   575,   576,   577,     0,     0,     0,   165,
       0,   578,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   244,   245,     0,     0,     0,     0,
       0,     0,     0,   579,     0,     0,   166,     0,   167,     0,
       0,   168,     0,    65,   169,     0,   170,     0,    66,     0,
     171,     0,    67,   172,   173,     0,     0,     0,     0,   174,
       0,     0,     0,     0,   175,     0,   176,    68,     0,     0,
       0,   177,     0,     0,   580,   178,     0,     0,   164,     9,
       0,     0,     0,     0,     0,     0,   179,     0,   180,     0,
       0,     0,   181,    69,     0,     0,     0,     0,     0,     0,
     182,   183,     8,     9,   184,     0,     0,   185,     0,     0,
       0,     0,     0,   581,   582,     0,     0,   583,   584,   585,
     586,     0,     0,   587,   588,   166,     0,   167,     0,     0,
     168,     0,    65,   169,     0,   170,     0,    66,     0,   171,
       0,    67,   172,   173,     0,     8,     9,     0,   174,   166,
       0,   167,     0,   175,   168,   176,    68,     0,     0,   170,
     177,     0,     0,   171,   178,     0,   833,     0,     0,   500,
       9,     0,   174,     0,     0,   179,     0,   180,     0,   176,
       0,   181,    69,     0,   177,     0,     0,     0,   178,   182,
     183,     0,   166,   184,   167,     0,   185,   168,     0,   179,
       0,   180,   170,     0,     0,   181,   171,     0,     0,     0,
       0,     0,     0,   182,   183,   174,   166,   184,   167,     0,
     834,   168,   176,     0,     0,     0,   170,   177,     0,     0,
     171,   178,     0,     0,     0,     0,     8,     9,     0,   174,
       0,     0,   179,     0,   180,     0,   176,     0,   181,     0,
       0,   177,     0,     0,     0,   178,   182,   183,     0,     0,
     184,     0,     0,   242,     0,     0,   179,     0,   180,     0,
       0,     0,   181,     0,     0,     0,     0,     0,     0,     0,
     182,   183,     0,   166,   184,   167,     0,   242,   168,     0,
       0,     0,     0,   170,     0,     0,     0,   171,     0,     0,
       0,     0,     0,     0,     0,     0,   174,     0,     0,     0,
       0,     0,     0,   176,     0,     8,     9,   202,   177,   203,
     204,   205,   178,   206,   207,   208,     0,     0,     0,   209,
       0,     0,     0,   179,     0,   180,     0,   211,     0,   181,
       0,     0,     0,     0,     0,     0,     0,   182,   183,     0,
       0,   184,     0,     0,   664,     0,     0,     0,     0,     0,
       0,   216,   166,     0,   167,     0,     0,   168,   384,     0,
       0,     0,   170,     0,     0,     0,   171,     0,     0,     0,
       0,     0,   222,     0,     0,   174,     0,     0,     0,     0,
       0,     0,   176,     0,     0,     0,     0,   177,     0,   229,
     230,   178,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   179,     0,   180,   232,     0,     0,   181,     0,
       0,   234,     0,   236,     0,   238,   182,   183,   385,     0,
     184
};

static const short int yycheck[] =
{
       3,     1,     1,   281,   134,   135,    80,    72,   129,   139,
     300,   297,   368,    12,    17,    89,   158,   188,   209,   161,
      56,   420,   590,   196,   195,   347,   440,   562,   504,   597,
     650,   397,   398,    33,    19,   437,   300,    16,    38,    75,
       4,    32,   347,     5,     6,    17,   347,     0,     0,   347,
     347,   347,   347,    56,   347,    19,     4,   849,   850,    28,
       5,     6,     4,   462,     5,     6,    66,    51,    32,    18,
      32,    19,    75,   219,     4,   248,     4,     5,     6,     4,
       5,     6,    20,     5,     5,     6,     5,    18,   126,     5,
      32,    19,    18,     5,     6,    18,     5,     6,    63,     4,
     221,   101,    28,   106,    32,   383,   505,    32,    19,    59,
      32,   129,    18,    32,    64,    18,    21,   909,    68,    19,
      56,    32,    28,    32,   198,    28,   126,   111,   121,   129,
      92,   169,    32,    83,   172,     5,    18,    73,    18,    55,
     105,   144,   315,   146,   218,    18,    28,    63,    28,   111,
     150,   142,   156,   157,    18,   129,   125,   142,   158,   109,
     281,   161,    32,   237,    28,   239,   240,    20,    20,   169,
     169,   647,   172,    28,   146,    20,   652,    20,   142,   300,
     142,   219,   161,   356,    20,   185,   186,   186,    20,   453,
     142,   229,   111,   142,   142,    20,   196,   196,   143,    28,
     142,   142,   601,   221,   142,   351,   336,   337,   354,   209,
     141,   123,   142,    21,   142,   141,    20,   142,   141,   219,
     219,   142,   129,   843,    20,   396,   397,   398,    20,   229,
    1022,   553,   129,   142,   208,   141,   210,   211,   141,   213,
     214,   215,   413,   129,    20,  1037,   648,   221,   553,   248,
     126,   653,   553,   129,   874,   553,   553,   553,   553,   141,
     553,   141,   383,   281,   302,   631,    20,    28,   141,   440,
     244,   245,    20,   870,   150,   872,    28,   141,   424,   876,
     426,   281,   300,    28,    30,    31,   141,    28,    29,   142,
     142,    28,   221,   169,    44,   830,   172,   142,   142,   142,
     300,    44,   302,    44,    50,     5,   142,   281,    21,     4,
     142,   347,   141,   121,   221,    28,   315,   142,    19,    55,
     358,   359,    29,     4,   221,    28,   300,    63,   328,     5,
       6,    32,    32,   209,     4,   221,   339,    32,   142,    85,
     343,     4,     5,   219,   347,   965,   142,   882,    18,    44,
     142,    32,   351,   229,     4,   354,   356,   356,   358,   359,
       5,     6,    32,    44,    29,   383,   142,    34,    18,    32,
     369,   142,    18,    40,   281,   926,   129,   974,   929,    44,
     141,   523,    32,   383,   281,   953,    32,     4,   142,   141,
      21,   429,   142,   300,   142,   281,   141,    28,   688,   142,
     141,   687,    18,   300,   141,   281,  1003,   445,   141,   383,
     143,   449,   158,   159,   300,    32,    32,   893,   894,   129,
      21,   612,   613,     5,   300,   424,   302,   426,   107,   429,
       4,     5,     6,     4,   605,   111,    44,   144,   145,   146,
     147,   148,   149,   150,   151,   445,    91,   154,   155,   449,
      32,  1002,     5,   453,     5,   869,    54,    44,    32,    57,
     631,    32,    28,   108,     4,     5,  1017,     5,   221,     5,
     508,     5,   510,    69,     5,     6,   383,   542,    19,    32,
      21,    32,   358,   359,    82,    18,   383,     5,     6,    87,
       5,   777,    32,     5,    32,    25,    32,   383,    32,    32,
       5,    32,    32,    33,   102,   101,   104,   383,   508,    17,
     510,   221,   926,    20,    32,   929,    19,   553,   116,   117,
      32,    19,   120,   523,   524,   525,   925,    19,   281,    21,
      19,    19,   535,    21,   130,   131,   132,   133,   134,   135,
     136,    29,   898,    28,     5,     6,     7,   300,    21,    19,
     553,    12,    13,   429,    17,    28,    44,     5,     5,     6,
       7,   560,   683,     5,   685,    12,    13,   688,    25,   445,
     340,   281,    21,   449,   344,    32,    33,   453,   348,    28,
     618,   619,    93,    17,    95,   659,   660,    17,  1002,   100,
     300,    17,   591,    21,   593,    19,   599,  1008,  1009,   889,
      28,   616,   617,  1017,    20,   620,   621,     5,     6,  1020,
    1021,    19,   141,   784,   143,   971,   972,    19,   618,   619,
     162,   163,   164,    19,  1035,  1036,    19,   141,    21,   143,
     383,   141,   508,   143,   510,   609,   610,   611,   612,   613,
     614,   615,   616,   617,    21,   719,   620,   621,   622,   623,
     624,   625,   626,   627,    21,   629,  1012,   141,   141,   143,
     143,   939,   783,    21,   141,   683,   143,   685,     5,   141,
     688,   143,    92,   383,    92,   713,   152,   153,   716,     4,
     654,    17,   803,   137,   138,    28,   139,   140,   726,   727,
     728,   137,   138,    28,   614,   615,   734,  1013,  1014,   870,
      19,   872,   955,   956,    19,   876,    19,    19,   711,   683,
      19,   685,    19,   713,   688,    19,   716,    19,   622,   623,
      21,    19,    32,    19,    44,    19,   726,   727,   728,    20,
     733,    28,    18,    44,   734,    28,    28,   141,    18,   742,
     743,    18,   618,   619,   865,    18,   867,   141,    20,   141,
     141,    19,   142,   142,   683,   143,   685,    21,    21,    19,
     881,    19,    23,    22,    26,   783,   887,    18,   889,   890,
     744,     5,   746,   747,   160,   749,   683,   141,   685,    28,
      28,   688,   142,    28,    28,   803,   683,   141,   685,    29,
       5,   688,     5,     5,   794,   833,     5,   683,    18,   685,
      18,    18,   688,   974,    18,    28,    81,   141,    18,   783,
      17,   141,    18,    18,     5,   141,    20,    20,   939,    89,
     950,   951,    20,    18,   945,   946,    19,    29,    28,   803,
      18,    21,  1003,   833,   837,    18,    18,   713,   912,   913,
     716,    18,    18,   842,   143,    19,    18,   865,    18,   867,
     726,   727,   728,   141,   783,    18,    21,    81,   734,    81,
     981,    18,    28,   881,    28,    21,    20,    29,    29,   887,
      17,   889,   890,    32,   803,    18,   783,   143,   877,   878,
      29,    18,    20,    18,   141,    18,   783,   887,   862,   143,
     143,   865,    28,   867,    67,    19,   803,   783,    19,   902,
     903,    20,   138,    18,   978,   979,   803,   881,   137,     5,
      21,    17,    20,   887,    18,   889,   890,   803,   794,   993,
     994,   939,    19,    18,    29,    19,   964,   945,   946,    20,
     683,    18,   685,    18,   142,   688,   865,    18,   867,   939,
      28,    18,    17,    21,    18,    18,    18,   143,   140,   143,
     139,   126,   881,    20,   129,    18,    18,   833,   865,    20,
     867,   890,    18,   981,   964,   939,    21,   138,   865,   137,
     867,   945,   946,   683,   881,   685,    20,   229,   688,   865,
     887,   867,   889,   890,   881,   676,   155,   229,   991,   808,
     887,   630,   889,   890,   169,   881,   605,   172,   209,   624,
     626,   887,   625,   889,   890,   627,   887,   981,   629,   593,
     560,   887,   887,   885,   235,   889,   945,   946,   661,     0,
     231,   878,   640,   661,   235,  1028,  1029,   866,  1031,     4,
     783,   144,   939,   186,   209,     3,    51,    51,   945,   946,
     149,    75,   939,   113,   219,   512,   733,   743,   945,   946,
     803,   913,   981,   939,   229,   903,   742,   553,  1031,   945,
     946,   902,   711,   939,   535,    27,    -1,   519,    49,    -1,
      -1,    -1,   328,   783,   981,    -1,    -1,    -1,    -1,    -1,
     291,    -1,   293,    -1,   981,    -1,   297,    -1,   964,    -1,
      71,    -1,    -1,   803,    -1,   981,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    -1,   281,    88,    89,    -1,
      -1,    -1,   865,    94,   867,    96,    97,    98,    99,    -1,
      -1,    -1,   103,    -1,    -1,   300,   107,   302,   881,    -1,
      -1,    -1,    -1,    -1,   887,    -1,   889,   890,   119,    -1,
      -1,   122,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   865,    -1,   867,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   881,    -1,    -1,    -1,    -1,    -1,   887,    -1,   889,
     890,    -1,    -1,   358,   359,    -1,   939,    -1,    -1,    -1,
      -1,    -1,   945,   946,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   383,    -1,
      49,   422,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   433,    -1,    -1,   436,    -1,    -1,   981,   939,
      -1,    -1,    71,    -1,    -1,   945,   946,    -1,    -1,   450,
      -1,    -1,   453,    -1,    -1,    84,    -1,    -1,    -1,    88,
      89,    -1,   463,    -1,   429,    94,    -1,    96,    97,    98,
      99,    -1,    -1,    -1,   103,    -1,    -1,   478,   107,    -1,
     445,   981,    -1,    -1,   449,    -1,    -1,    -1,   453,    -1,
     119,    -1,    -1,   122,    -1,   124,    -1,    -1,    -1,    -1,
      -1,     1,    -1,   504,    -1,     5,     6,     7,    -1,     9,
      10,    11,    -1,    13,    14,    15,    -1,    -1,    18,    19,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    28,    -1,
      -1,    -1,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,   508,    -1,   510,    -1,    -1,    -1,    -1,
      -1,    51,    52,    -1,    54,    -1,    -1,    57,    58,    -1,
      -1,   562,    62,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    87,    -1,    89,
      90,    91,    -1,    -1,    -1,   596,    -1,    -1,    -1,    -1,
      -1,    -1,   102,    -1,   104,   105,    -1,    -1,   108,    -1,
      -1,   111,    -1,   113,    -1,   115,   116,   117,   118,    -1,
     120,     5,     6,   123,    -1,    -1,    -1,   628,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   647,    -1,    -1,   650,
      -1,   652,    -1,   618,   619,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   162,   163,    -1,    -1,    -1,    -1,    52,    -1,
      54,    -1,    -1,    57,   675,   676,    -1,    -1,    62,    -1,
      -1,    -1,    66,    -1,    -1,    -1,   687,    -1,   689,    -1,
      -1,    75,    -1,    -1,    -1,    49,    -1,    -1,    82,    -1,
     701,    -1,    -1,    87,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,   102,    -1,
     104,    -1,    -1,    -1,   108,    -1,    -1,    -1,    -1,    -1,
      84,    -1,   116,   117,    -1,    89,   120,    -1,    -1,   123,
      94,    -1,    96,    97,    98,    99,    -1,    -1,   713,   103,
      -1,   716,    -1,   107,    -1,    -1,    -1,    -1,   142,    -1,
      -1,   726,   727,   728,    -1,   119,    -1,    -1,   122,   734,
     124,    -1,    -1,    -1,    -1,    -1,   777,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   808,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   819,   820,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   830,
       5,     6,     7,    -1,     9,    10,    11,    -1,    13,    14,
      15,    -1,   843,    -1,    19,    -1,    21,    -1,    23,    -1,
      -1,    -1,    27,    28,    -1,    -1,    -1,    32,    -1,    34,
     861,    -1,    -1,   864,    -1,    40,    -1,    -1,   833,    -1,
      -1,    -1,    -1,   874,    -1,    -1,    51,    52,    53,    54,
      55,   882,    57,    58,    -1,    60,    61,    62,    63,    -1,
      65,    66,   893,   894,    -1,    -1,    -1,    72,    -1,    74,
      75,    76,    77,    78,    79,    -1,    -1,    82,    -1,   910,
     911,    86,    87,    -1,    89,    90,    91,    -1,    -1,    -1,
      -1,    -1,   887,    -1,    -1,    -1,   101,   102,    -1,   104,
     105,    -1,    -1,   108,    -1,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,    -1,   123,    -1,
     125,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,
      -1,     9,    10,    11,   965,    13,    14,    15,    -1,    -1,
      -1,    19,    -1,    21,   939,    23,    -1,    -1,    -1,    27,
      28,    -1,    -1,    -1,    32,    -1,    34,   162,   163,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,   964,
      -1,    -1,    -1,    51,    52,    53,    54,    -1,    -1,    57,
      58,    -1,    60,    61,    62,    -1,    -1,    65,    66,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    75,    76,    77,
      78,    79,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,
      -1,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,   102,    -1,   104,   105,    -1,    -1,
     108,    -1,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,    -1,   123,    -1,   125,     5,     6,
       7,    -1,     9,    10,    11,    -1,    13,    14,    15,    -1,
      -1,    -1,    19,    -1,    21,    -1,    23,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    32,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    40,   162,   163,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    53,    54,    -1,    -1,
      57,    58,    -1,    -1,    61,    62,    -1,    -1,    65,    66,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    75,    76,
      77,    78,    79,    -1,    -1,    82,    -1,    -1,    -1,    86,
      87,    -1,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   101,   102,    -1,   104,   105,    -1,
      -1,   108,    -1,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,     5,     6,     7,   125,     9,
      10,    11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,
      20,    21,    -1,    23,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,   162,   163,    -1,    -1,    -1,
      -1,    51,    52,    -1,    54,    -1,    -1,    57,    58,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    87,    -1,    89,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   102,    -1,   104,   105,   106,    -1,   108,    -1,
      -1,   111,    -1,   113,    -1,   115,   116,   117,   118,    -1,
     120,     5,     6,     7,    -1,     9,    10,    11,    -1,    13,
      14,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,   162,   163,    -1,    -1,    -1,    51,    52,    -1,
      54,    -1,    -1,    57,    58,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    87,    -1,    89,    90,    91,    -1,    93,
      -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,   102,    -1,
     104,   105,    -1,    -1,   108,    -1,    -1,   111,    -1,   113,
      -1,   115,   116,   117,   118,    -1,   120,     5,     6,     7,
      -1,     9,    10,    11,    -1,    13,    14,    15,    -1,    -1,
      -1,    19,    -1,    21,    -1,    23,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,   162,   163,
      -1,    -1,    -1,    51,    52,    -1,    54,    -1,    -1,    57,
      58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    87,
      -1,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,    -1,   104,   105,   106,    -1,
     108,    -1,    -1,   111,    -1,   113,    -1,   115,   116,   117,
     118,    -1,   120,     5,     6,     7,    -1,     9,    10,    11,
      -1,    13,    14,    15,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,   162,   163,    -1,    -1,    -1,    51,
      52,    -1,    54,    -1,    -1,    57,    58,    -1,    -1,    -1,
      62,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    87,    -1,    89,    90,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,    -1,   104,   105,    -1,    -1,   108,    -1,    -1,   111,
      -1,   113,    -1,   115,   116,   117,   118,    -1,   120,    -1,
      -1,   123,     5,     6,     7,    -1,     9,    10,    11,    -1,
      13,    14,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
     162,   163,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,    54,    -1,    -1,    57,    58,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    87,    -1,    89,    90,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,
      -1,   104,   105,    -1,    -1,   108,    -1,    -1,   111,    -1,
     113,    -1,   115,   116,   117,   118,    -1,   120,    -1,    -1,
     123,     5,     6,     7,    -1,     9,    10,    11,    -1,    13,
      14,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,   162,
     163,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,
      54,    -1,    -1,    57,    58,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    87,    -1,    89,    90,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,
     104,   105,    -1,    -1,   108,    -1,    -1,   111,    -1,   113,
      -1,   115,   116,   117,   118,    -1,   120,    -1,     5,     6,
       7,    -1,     9,    10,    11,    -1,    13,    14,    15,    -1,
      -1,    18,    19,    -1,    -1,    -1,    23,    -1,    -1,   143,
      27,    -1,    -1,    -1,    -1,    32,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,   162,   163,
      -1,    -1,    -1,    -1,    51,    52,    -1,    54,    -1,    -1,
      57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      87,    -1,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   102,    -1,   104,   105,    -1,
      -1,   108,    -1,    -1,   111,    -1,   113,    -1,   115,   116,
     117,   118,    -1,   120,     5,     6,     7,    -1,     9,    10,
      11,    -1,    13,    14,    15,    -1,    17,    -1,    19,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,   162,   163,    -1,    -1,    -1,
      51,    52,    -1,    54,    -1,    -1,    57,    58,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    87,    -1,    89,    90,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   102,    -1,   104,   105,    -1,    -1,   108,    -1,    -1,
     111,    -1,   113,    -1,   115,   116,   117,   118,    -1,   120,
       5,     6,     7,    -1,     9,    10,    11,    -1,    13,    14,
      15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,   162,   163,    -1,    -1,    -1,    51,    52,    -1,    54,
      -1,    -1,    57,    58,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    87,    -1,    89,    90,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,   104,
     105,    -1,    -1,   108,    -1,    -1,   111,    -1,   113,    -1,
     115,   116,   117,   118,    -1,   120,    -1,     5,     6,     7,
      -1,     9,    10,    11,    -1,    13,    14,    15,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    23,    -1,    -1,   143,    27,
      -1,    -1,    -1,    -1,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,   162,   163,    -1,
      -1,    -1,    -1,    51,    52,    -1,    54,    -1,    -1,    57,
      58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    87,
      -1,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,    -1,   104,   105,    -1,    -1,
     108,    -1,    -1,   111,    -1,   113,    15,   115,   116,   117,
     118,    -1,   120,    22,    23,    -1,    25,    26,    27,     5,
       6,    30,    31,    32,    33,    34,    -1,    -1,    -1,    15,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   162,   163,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    52,    -1,    54,    -1,
      -1,    57,    -1,    59,    60,    -1,    62,    -1,    64,    -1,
      66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    80,    -1,    82,    83,    -1,    -1,
      -1,    87,    -1,    -1,   113,    91,    -1,    -1,     5,     6,
      -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,   104,    -1,
      -1,    -1,   108,   109,    -1,    -1,    -1,    -1,    -1,    -1,
     116,   117,     5,     6,   120,    -1,    -1,   123,    -1,    -1,
      -1,    -1,    -1,   152,   153,    -1,    -1,   156,   157,   158,
     159,    -1,    -1,   162,   163,    52,    -1,    54,    -1,    -1,
      57,    -1,    59,    60,    -1,    62,    -1,    64,    -1,    66,
      -1,    68,    69,    70,    -1,     5,     6,    -1,    75,    52,
      -1,    54,    -1,    80,    57,    82,    83,    -1,    -1,    62,
      87,    -1,    -1,    66,    91,    -1,    69,    -1,    -1,     5,
       6,    -1,    75,    -1,    -1,   102,    -1,   104,    -1,    82,
      -1,   108,   109,    -1,    87,    -1,    -1,    -1,    91,   116,
     117,    -1,    52,   120,    54,    -1,   123,    57,    -1,   102,
      -1,   104,    62,    -1,    -1,   108,    66,    -1,    -1,    -1,
      -1,    -1,    -1,   116,   117,    75,    52,   120,    54,    -1,
     123,    57,    82,    -1,    -1,    -1,    62,    87,    -1,    -1,
      66,    91,    -1,    -1,    -1,    -1,     5,     6,    -1,    75,
      -1,    -1,   102,    -1,   104,    -1,    82,    -1,   108,    -1,
      -1,    87,    -1,    -1,    -1,    91,   116,   117,    -1,    -1,
     120,    -1,    -1,   123,    -1,    -1,   102,    -1,   104,    -1,
      -1,    -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,   117,    -1,    52,   120,    54,    -1,   123,    57,    -1,
      -1,    -1,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    -1,     5,     6,     7,    87,     9,
      10,    11,    91,    13,    14,    15,    -1,    -1,    -1,    19,
      -1,    -1,    -1,   102,    -1,   104,    -1,    27,    -1,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,    -1,
      -1,   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    52,    -1,    54,    -1,    -1,    57,    58,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    87,    -1,    89,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   102,    -1,   104,   105,    -1,    -1,   108,    -1,
      -1,   111,    -1,   113,    -1,   115,   116,   117,   118,    -1,
     120
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,   121,   304,   305,   313,   314,   315,   316,     5,     6,
     168,   310,   311,   324,     0,   306,   308,   317,   318,   319,
     326,   327,   380,   390,   404,   411,   412,   413,   414,   422,
     314,    28,   324,    29,    44,    49,    71,    84,    88,    89,
      94,    96,    97,    98,    99,   103,   107,   119,   122,   124,
     320,   321,   322,   323,   306,   318,    21,   332,   414,   142,
      44,   310,   324,   310,   107,    59,    64,    68,    83,   109,
     322,   323,   306,   319,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   351,   358,   362,   365,   370,   371,
     372,   375,    69,   101,   130,   131,   132,   133,   134,   135,
     136,   415,   416,   417,    28,    21,   305,   312,     5,     6,
       7,    12,    13,   325,   328,   123,   310,   344,     5,     5,
       5,     6,     7,    12,    13,   379,   320,    20,   335,    21,
      28,   235,   345,    19,    19,    19,    28,   235,   377,    19,
     310,   418,   419,    17,   305,   307,   317,    28,   309,   328,
      17,   329,   330,     5,     5,    17,   405,   406,    17,   391,
     392,    17,   381,   382,     5,    15,    52,    54,    57,    60,
      62,    66,    69,    70,    75,    80,    82,    87,    91,   102,
     104,   108,   116,   117,   120,   123,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   310,   363,   366,   367,
     369,     5,     7,     9,    10,    11,    13,    14,    15,    19,
      23,    27,    28,    32,    34,    40,    51,    53,    58,    60,
      61,    65,    72,    74,    76,    77,    78,    79,    86,    89,
      90,   101,   105,   110,   111,   112,   113,   114,   115,   118,
     119,   121,   123,   125,   162,   163,   166,   167,   169,   172,
     176,   184,   185,   186,   187,   188,   190,   193,   194,   195,
     196,   197,   198,   199,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   228,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   246,   249,   250,   251,
     253,   254,   256,   257,   265,   266,   267,   268,   270,   271,
     272,   281,   282,   284,   285,   286,   287,   288,   290,   291,
     296,   297,   298,   299,   301,   310,   306,   343,   346,   347,
     348,   350,   343,   343,   343,    19,   420,   421,   141,   143,
     307,    20,   329,   176,   310,   331,    19,    19,   174,    21,
     407,   310,   331,    21,   393,   310,   331,    21,   378,   383,
       5,   169,   247,   248,   310,   324,   169,   310,    92,    92,
      32,   310,    32,    92,   111,   142,   242,   243,   310,   311,
     324,   364,     4,   180,   180,    32,   180,   242,   310,   426,
      28,   235,   376,    17,    58,   118,   172,   176,   188,   195,
     196,   198,   210,   211,   212,   310,   123,   172,   176,   212,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   230,   310,   212,   212,   212,   212,   212,    44,
     142,    28,    19,   235,   169,   247,   310,    28,   234,    19,
      19,    19,     5,    55,    63,    19,    19,   142,   169,   170,
     178,   310,   217,   230,   289,    19,    19,   289,   235,    19,
      19,   235,   235,    19,    19,   212,   212,   242,   324,    44,
      44,    44,   142,    19,   162,   163,   164,    29,   144,   145,
     146,   147,   148,   149,   150,   151,   154,   155,   229,    20,
     233,    28,    28,    28,   230,   232,   252,   255,   230,   258,
     232,   269,     1,    18,   241,   250,   273,   274,   277,   280,
       5,   169,   283,   310,    19,   142,   242,    93,    95,   100,
     349,    18,   141,    18,    18,    18,   191,   192,   230,   143,
     419,   423,    20,   141,   141,   141,   343,   343,   306,   408,
     409,   410,   309,   306,   394,   395,   396,   397,   399,   400,
     402,   309,   306,   319,   336,   337,   338,   351,   358,   362,
     365,   370,   384,   385,   386,   309,    19,   247,   324,    28,
     141,   247,    29,   242,   310,   169,   169,    15,    22,    23,
      25,    26,    27,    30,    31,    32,    33,    34,    40,    72,
     113,   152,   153,   156,   157,   158,   159,   162,   163,   368,
     142,   143,    28,   141,   426,   111,    29,   142,    28,    21,
     233,   142,    32,   180,   214,   215,   216,   214,   214,    25,
      32,    33,    34,    40,   152,   153,    30,    31,    50,    85,
     158,   159,   156,   157,    23,    26,    22,   160,    16,   161,
      18,   180,     5,   192,   230,   247,   247,    28,   125,   169,
     310,    28,   230,   231,    28,   230,   191,    19,   142,   200,
      21,   387,    19,   142,    32,    28,   169,   310,    28,    56,
      73,   292,   293,   295,   123,   169,   310,   230,   230,   241,
     300,     5,     5,     5,   192,    93,   100,   182,   183,   189,
     230,     5,   230,    18,    18,    18,    18,    28,   141,    81,
       5,     5,   189,   192,   169,   169,   347,    17,   373,   374,
      18,   141,   423,   310,   331,   310,   310,    18,    18,     5,
      20,   141,    89,   398,    20,   396,   320,    20,   386,    18,
      28,   248,    28,   231,    28,   424,    19,    19,    19,   346,
     142,   324,   243,    21,   106,   230,   244,   245,   387,   346,
     306,   352,   355,   356,    18,   216,    18,    18,   212,    18,
     212,   212,   212,   217,   217,   218,   218,   219,   219,   169,
     310,   169,   310,   219,   219,   220,   220,   221,   222,   223,
     224,   230,   225,   209,   214,   143,    18,    19,     5,   302,
     303,   302,    28,    18,   143,   189,   191,   244,   388,   389,
     189,   191,    18,    18,    19,   235,   235,   293,   295,    18,
      18,    18,    18,    18,   143,   181,   230,   181,   141,    18,
     234,    21,   259,   234,   232,   275,   278,   250,   230,    81,
      81,    18,   143,     5,     5,    51,   111,   230,    28,    28,
      29,    20,   410,    69,   123,   169,   235,    21,   169,   169,
     169,   143,   143,    29,   352,   169,   310,   143,   137,   138,
      20,   306,   353,   356,   306,   354,   355,   212,   212,   212,
     212,    17,    18,   232,    29,    18,   141,    18,   234,   179,
     180,    18,   143,    20,   141,    18,   143,   176,   310,   234,
     183,    67,    55,    63,   260,   261,   262,   263,   264,    28,
      18,   230,   230,    19,    19,   231,   169,     5,     5,   111,
     306,   359,   360,   361,     5,     5,     5,   324,   244,    20,
     142,   142,   427,   427,   427,   230,   212,    18,   230,   234,
     303,   234,   201,   387,   179,   142,   179,    20,   244,   179,
     294,   324,   294,   234,    17,   231,    17,    20,   262,   237,
     264,   276,   279,   280,   234,    18,    18,   189,   189,     5,
      19,    19,   426,   142,   139,   140,    20,   306,   361,   306,
     360,    18,    18,    18,   141,    29,   427,   230,   230,    28,
     235,   357,   357,    28,   143,   192,   201,   201,    18,    18,
      17,    18,   234,   234,    18,    18,    21,    28,   403,   343,
     343,    21,   346,   425,   425,   425,   169,   244,   143,   143,
     426,   426,   179,   143,   235,   235,   234,    20,    18,    18,
     306,   401,   143,   235,   235,     5,   201,   179,   403,   403,
     137,   138,    20,   426,   424,   424,    18,   201,   403,   403,
     427,    21,   306,   306,   401,   138,   137,    20,   403,   403,
     427
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (0)


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (N)								\
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (0)
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
              (Loc).first_line, (Loc).first_column,	\
              (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr,					\
                  Type, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short int *bottom, short int *top)
#else
static void
yy_stack_print (bottom, top)
    short int *bottom;
    short int *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname[yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      size_t yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

#endif /* YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);


# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()
    ;
#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short int yyssa[YYINITDEPTH];
  short int *yyss = yyssa;
  short int *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short int *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short int *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a look-ahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to look-ahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 89:
#line 268 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[-5].r.myLineNo),(yyvsp[-5].r.myColNo),"expecting type,you can\'t declare array without type","");;}
    break;

  case 94:
#line 275 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[-7].r.myLineNo),(yyvsp[-7].r.myColNo),"second number not allowed","");;}
    break;

  case 209:
#line 468 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	
															access_modifier = nullptr;	
															data_storage = nullptr;
														;}
    break;

  case 215:
#line 483 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
												if (isLocal) {
													(yyval.lv) = p->create_local_variable((yyvsp[0].r.str), (yyvsp[0].r.myColNo), (yyvsp[0].r.myLineNo));
												} else {
													(yyval.dm) = p->create_data_member((yyvsp[0].r.str), access_modifier, data_storage, (yyvsp[0].r.myColNo), (yyvsp[0].r.myLineNo));
												}
											;}
    break;

  case 216:
#line 490 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
												if (isLocal) {
													(yyval.lv) = p->create_local_variable((yyvsp[-2].r.str), (yyvsp[-2].r.myColNo), (yyvsp[-2].r.myLineNo));
												} else {
													(yyval.dm) = p->create_data_member((yyvsp[-2].r.str), access_modifier, data_storage, (yyvsp[-2].r.myColNo), (yyvsp[-2].r.myLineNo));
												}
											;}
    break;

  case 217:
#line 497 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[-1].r.myLineNo),(yyvsp[-1].r.myColNo),"type error expected value of var ","");;}
    break;

  case 218:
#line 498 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	cout << "WTF1";	;}
    break;

  case 219:
#line 499 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	cout << "WTF2";	;}
    break;

  case 220:
#line 500 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	cout << "WTF3";	;}
    break;

  case 221:
#line 501 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	cout << "WTF4";	;}
    break;

  case 222:
#line 502 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	cout << "WTF5";	;}
    break;

  case 223:
#line 503 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	cout << "WTF6";	;}
    break;

  case 230:
#line 517 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"expecting local type,you can\'t declare constant without type","");;}
    break;

  case 235:
#line 526 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"expecting value,you can\'t declare constant without value","");;}
    break;

  case 236:
#line 527 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"expecting value,you can\'t declare constant without value","");;}
    break;

  case 248:
#line 547 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"expecting type without boolean expression","");;}
    break;

  case 249:
#line 551 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { bs = p->finish_scope_declaration(bs, 10);	;}
    break;

  case 250:
#line 555 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {  bs = p->create_scope(10); cout<<"Add if"<<endl;	;}
    break;

  case 251:
#line 558 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { cout << "\t if without else\n"; ;}
    break;

  case 252:
#line 559 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { cout << "\t if with else\n"; ;}
    break;

  case 253:
#line 562 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	bs = p->finish_scope_declaration(bs, 7);	;}
    break;

  case 254:
#line 565 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	bs = p->create_scope(7); cout<<"Add switch"<<endl;	;}
    break;

  case 266:
#line 591 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[-1].r.myLineNo),(yyvsp[-1].r.myColNo),"expecting type,you can\'t  without type case ('')","");;}
    break;

  case 272:
#line 604 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	bs = p->finish_scope_declaration(bs, 6);	;}
    break;

  case 273:
#line 607 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	bs = p->create_scope(6); cout<<"Add while"<<endl;	;}
    break;

  case 276:
#line 614 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[-2].r.myLineNo),(yyvsp[-2].r.myColNo),"expecting type,you can\'t declare constant without while","");;}
    break;

  case 277:
#line 618 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
											bs=p->finish_scope_declaration(bs, 5);
										;}
    break;

  case 278:
#line 623 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
											//cout<<"her father"<<p-> Symbol_Table->get_current_scope()<<"???"<<endl;
											bs= p->create_scope(5);
											cout<<"Add for "<<endl;
										;}
    break;

  case 280:
#line 631 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	errorRec.errQ->enqueue((yyvsp[0].r.myLineNo), (yyvsp[0].r.myColNo), "expecting type,you can\'t in for", "");	;}
    break;

  case 294:
#line 661 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	bs = p->finish_scope_declaration(bs, 9);	;}
    break;

  case 295:
#line 664 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	bs = p->create_scope(9); cout<<"Add foreach"<<endl;	;}
    break;

  case 297:
#line 668 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	errorRec.errQ->enqueue((yyvsp[-3].r.myLineNo), (yyvsp[-3].r.myColNo), "error type ", "");	;}
    break;

  case 336:
#line 752 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
																p->print(p->Symbol_Table);
																p->set_Inheritance_pointers(p->Symbol_Table->get_root_scope()->get_map()); 
																p->check_all(p->Symbol_Table);
																cout << "TESTING" <<endl;
															;}
    break;

  case 351:
#line 795 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {cout<<"error in the open brackets ";;}
    break;

  case 369:
#line 841 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { cout << "\t\t Added modifier\n";	;}
    break;

  case 370:
#line 842 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[-1].r.myLineNo),(yyvsp[-1].r.myColNo),"error modifer can't type more the modifier","");;}
    break;

  case 376:
#line 850 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	
									(yyval.am) = p->set_access_modifier(3, (yyvsp[0].r.myColNo), (yyvsp[0].r.myLineNo));
									access_modifier = (yyval.am);
							;}
    break;

  case 377:
#line 854 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	
									(yyval.am) = p->set_access_modifier(2, (yyvsp[0].r.myColNo), (yyvsp[0].r.myLineNo));
									access_modifier = (yyval.am);
							;}
    break;

  case 378:
#line 858 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	
									(yyval.am) = p->set_access_modifier(1, (yyvsp[0].r.myColNo), (yyvsp[0].r.myLineNo));
									access_modifier = (yyval.am);
							;}
    break;

  case 384:
#line 869 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	
									(yyval.ds) = p->set_data_storage(2, (yyvsp[0].r.myColNo), (yyvsp[0].r.myLineNo));
									data_storage = (yyval.ds);
								;}
    break;

  case 385:
#line 873 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	
									(yyval.ds) = p->set_data_storage(1, (yyvsp[0].r.myColNo), (yyvsp[0].r.myLineNo));
									data_storage = (yyval.ds);
								;}
    break;

  case 386:
#line 877 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
									(yyval.ds) = p->set_data_storage(3, (yyvsp[-1].r.myColNo), (yyvsp[-1].r.myLineNo));
									data_storage = (yyval.ds);
								;}
    break;

  case 388:
#line 884 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_NOT_IDENTIFIER) ","");;}
    break;

  case 390:
#line 889 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_INTEGER) ","");;}
    break;

  case 391:
#line 890 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_INTEGER) ","");;}
    break;

  case 392:
#line 891 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_INTEGER) ","");;}
    break;

  case 393:
#line 892 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_NOT_IDENTIFIER) ","");;}
    break;

  case 394:
#line 897 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
													(yyval.clas) = p->finish_class_declaration((yyvsp[-1].clas));
											;}
    break;

  case 395:
#line 902 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
													/*TODO: CHECK IF SECOND PARAM NULL OR il*/
													(yyval.clas) = p->create_class((yyvsp[-2].r.str), il, access_modifier, data_storage, (yyvsp[-5].r.myColNo), (yyvsp[-5].r.myLineNo));
													access_modifier = nullptr;
													data_storage = nullptr;
													isLocal = false;
											;}
    break;

  case 396:
#line 909 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { 
													errorRec.errQ->enqueue((yyvsp[-6].r.myLineNo),(yyvsp[-6].r.myColNo),"error not identifier (T_NOT_IDENTIFIER) ","");
													access_modifier = nullptr;
													data_storage = nullptr;
													isLocal = false;
											  ;}
    break;

  case 397:
#line 917 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	il = new InheritanceList();	;}
    break;

  case 399:
#line 921 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { cout << "\t\t Added class base\n";;}
    break;

  case 400:
#line 924 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {;}
    break;

  case 401:
#line 925 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	il = p->add_class_list((yyvsp[0].r.str), il);;}
    break;

  case 402:
#line 926 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {;}
    break;

  case 403:
#line 927 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {  il = p->add_class_list((yyvsp[0].r.str), il);   ;}
    break;

  case 404:
#line 928 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {;}
    break;

  case 405:
#line 931 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	il = p->add_class_list((yyvsp[0].r.str), il);	;}
    break;

  case 406:
#line 932 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	il = p->add_class_list((yyvsp[0].r.str), il);	;}
    break;

  case 407:
#line 935 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { cout << "\t\t Added class body\n"; ;}
    break;

  case 423:
#line 961 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[-5].r.myLineNo),(yyvsp[-5].r.myColNo),"error const ","can't const with out type ");;}
    break;

  case 427:
#line 969 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
												(yyval.func) = p->finish_function_declaration((yyvsp[-1].func));
												isLocal = false;
											;}
    break;

  case 428:
#line 976 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	
													access_modifier = nullptr;
													data_storage = nullptr;
													isLocal = true;
											;}
    break;

  case 429:
#line 981 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
													access_modifier = nullptr;
													data_storage = nullptr;
													isLocal = true;
											;}
    break;

  case 430:
#line 986 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
													access_modifier = nullptr;
													data_storage = nullptr;
													isLocal = true;
											;}
    break;

  case 431:
#line 993 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
																		lp = new List_Parameters();
																		(yyval.func) = p->create_function((yyvsp[0].r.str), lp, access_modifier, data_storage, false, (yyvsp[-3].r.myColNo), (yyvsp[-3].r.myLineNo));
																;}
    break;

  case 432:
#line 999 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
																		lp = new List_Parameters();
																		(yyval.func) = p->create_function((yyvsp[0].r.str), lp, access_modifier, data_storage, false, (yyvsp[-3].r.myColNo), (yyvsp[-3].r.myLineNo));
																;}
    break;

  case 433:
#line 1005 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
																		lp = new List_Parameters();
																		(yyval.func) = p->create_function((yyvsp[0].r.str), lp, access_modifier, data_storage, false, (yyvsp[-3].r.myColNo), (yyvsp[-3].r.myLineNo));
																;}
    break;

  case 443:
#line 1031 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
																	lp = p->add_parameters((yyvsp[0].r.str), lp);
																;}
    break;

  case 498:
#line 1138 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
													(yyval.func) = p->finish_function_declaration((yyvsp[-1].func));
												;}
    break;

  case 499:
#line 1143 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
													access_modifier = nullptr;
													data_storage = nullptr;
												;}
    break;

  case 500:
#line 1149 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
													lp = new List_Parameters();
													(yyval.func) = p->create_function((yyvsp[0].r.str), lp, access_modifier, data_storage, true, (yyvsp[-2].r.myColNo), (yyvsp[-2].r.myLineNo));
												;}
    break;

  case 511:
#line 1188 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[-1].r.myLineNo),(yyvsp[-1].r.myColNo),"type error expected no struct body ","");;}
    break;

  case 513:
#line 1192 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"type error expected not id ","");;}
    break;

  case 514:
#line 1193 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_INTEGER) ","");;}
    break;

  case 515:
#line 1194 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_INTEGER) ","");;}
    break;

  case 516:
#line 1195 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_INTEGER) ","");;}
    break;

  case 542:
#line 1250 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { cout << "FINISHED INTERFACE WITH NO EERRORS." << endl ;}
    break;

  case 544:
#line 1254 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { cout << "\t\t Added interface base\n"; ;}
    break;

  case 547:
#line 1261 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { cout << "\t\t Added interface body"; ;}
    break;

  case 584:
#line 1355 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {cout << "\t\t added attribute\n";;}
    break;

  case 606:
#line 1406 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { 
		//lex_enter_attrib();
    ;}
    break;

  case 607:
#line 1411 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
		//lex_exit_attrib();
	;}
    break;

  case 608:
#line 1416 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
		//lex_enter_accessor();
    ;}
    break;

  case 609:
#line 1421 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
		//lex_exit_accessor();
	;}
    break;

  case 610:
#line 1426 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
		//lex_enter_getset();
	;}
    break;

  case 611:
#line 1431 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { 
		//lex_exit_getset();
	;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 3657 "yacc.cpp"

  yyvsp -= yylen;
  yyssp -= yylen;


  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  int yytype = YYTRANSLATE (yychar);
	  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
	  YYSIZE_T yysize = yysize0;
	  YYSIZE_T yysize1;
	  int yysize_overflow = 0;
	  char *yymsg = 0;
#	  define YYERROR_VERBOSE_ARGS_MAXIMUM 5
	  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
	  int yyx;

#if 0
	  /* This is so xgettext sees the translatable formats that are
	     constructed on the fly.  */
	  YY_("syntax error, unexpected %s");
	  YY_("syntax error, unexpected %s, expecting %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
#endif
	  char *yyfmt;
	  char const *yyf;
	  static char const yyunexpected[] = "syntax error, unexpected %s";
	  static char const yyexpecting[] = ", expecting %s";
	  static char const yyor[] = " or %s";
	  char yyformat[sizeof yyunexpected
			+ sizeof yyexpecting - 1
			+ ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
			   * (sizeof yyor - 1))];
	  char const *yyprefix = yyexpecting;

	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  int yyxbegin = yyn < 0 ? -yyn : 0;

	  /* Stay within bounds of both yycheck and yytname.  */
	  int yychecklim = YYLAST - yyn;
	  int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
	  int yycount = 1;

	  yyarg[0] = yytname[yytype];
	  yyfmt = yystpcpy (yyformat, yyunexpected);

	  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      {
		if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
		  {
		    yycount = 1;
		    yysize = yysize0;
		    yyformat[sizeof yyunexpected - 1] = '\0';
		    break;
		  }
		yyarg[yycount++] = yytname[yyx];
		yysize1 = yysize + yytnamerr (0, yytname[yyx]);
		yysize_overflow |= yysize1 < yysize;
		yysize = yysize1;
		yyfmt = yystpcpy (yyfmt, yyprefix);
		yyprefix = yyor;
	      }

	  yyf = YY_(yyformat);
	  yysize1 = yysize + yystrlen (yyf);
	  yysize_overflow |= yysize1 < yysize;
	  yysize = yysize1;

	  if (!yysize_overflow && yysize <= YYSTACK_ALLOC_MAXIMUM)
	    yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg)
	    {
	      /* Avoid sprintf, as that infringes on the user's name space.
		 Don't have undefined behavior even if the translation
		 produced a string with the wrong number of "%s"s.  */
	      char *yyp = yymsg;
	      int yyi = 0;
	      while ((*yyp = *yyf))
		{
		  if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		    {
		      yyp += yytnamerr (yyp, yyarg[yyi++]);
		      yyf += 2;
		    }
		  else
		    {
		      yyp++;
		      yyf++;
		    }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    {
	      yyerror (YY_("syntax error"));
	      goto yyexhaustedlab;
	    }
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror (YY_("syntax error"));
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
        {
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
        }
      else
	{
	  yydestruct ("Error: discarding", yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (0)
     goto yyerrorlab;

yyvsp -= yylen;
  yyssp -= yylen;
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping", yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token. */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK;
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 1437 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"


void yyerror(char *s)
{
    int yylineno=0;
	cout << "\t\tParse error!  Message: " << s<<"\t"<<yylineno<< endl;
	exit(-1);
}

int yylex()
{
	return lexer->yylex();
}

void main(void)
{				
	yydebug = 1;
	if(!freopen("C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\in.cs", "r", stdin)) {
		cout << "cant't open input file!" << endl;
	}

	if(!freopen("C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\out.txt", "w", stdout)) {
		cout << "can't open output file!" << endl;
	} 
   
	Parser* p = new Parser();
	p->parse();

	fclose(stdout);
	fclose(stdin);
	//fclose(stderr);
	
	errorRec.printErrQueue();
}

