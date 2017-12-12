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
#line 29 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
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
	class Data_Memmber* dm;
	class Class* clas;
	class Function* func;
	class Access_Modifier* am;
	class Data_Storage* ds;
	class List_Parameters* lp;
	} YYSTYPE;
/* Line 196 of yacc.c.  */
#line 458 "yacc.cpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 470 "yacc.cpp"

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
#define YYLAST   3250

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  165
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  247
/* YYNRULES -- Number of rules. */
#define YYNRULES  586
/* YYNRULES -- Number of states. */
#define YYNSTATES  1004

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
     235,   243,   247,   248,   250,   255,   260,   265,   270,   275,
     279,   282,   287,   292,   294,   296,   298,   300,   302,   304,
     307,   310,   312,   315,   318,   320,   323,   326,   329,   331,
     333,   335,   340,   346,   353,   359,   365,   371,   372,   374,
     376,   379,   381,   383,   385,   389,   393,   397,   399,   403,
     407,   409,   413,   417,   419,   423,   427,   431,   435,   439,
     443,   447,   451,   453,   457,   461,   463,   467,   469,   473,
     475,   479,   481,   485,   487,   491,   493,   499,   503,   505,
     507,   509,   511,   513,   515,   517,   519,   521,   523,   525,
     527,   529,   531,   533,   535,   537,   539,   541,   543,   545,
     547,   549,   551,   553,   555,   557,   559,   561,   563,   565,
     569,   570,   572,   574,   577,   579,   583,   586,   589,   592,
     595,   597,   601,   603,   607,   610,   612,   614,   616,   622,
     628,   632,   635,   639,   641,   645,   649,   652,   654,   657,
     659,   661,   663,   665,   667,   669,   671,   673,   675,   677,
     678,   684,   692,   698,   702,   703,   705,   707,   710,   713,
     715,   718,   722,   725,   728,   730,   732,   734,   736,   739,
     745,   753,   757,   767,   771,   776,   777,   779,   780,   782,
     783,   785,   787,   789,   791,   793,   795,   799,   808,   816,
     825,   827,   829,   831,   833,   835,   838,   841,   845,   850,
     854,   858,   859,   861,   865,   869,   873,   878,   880,   883,
     890,   897,   900,   901,   903,   906,   909,   912,   918,   924,
     926,   928,   935,   942,   944,   948,   952,   955,   958,   959,
     961,   962,   964,   965,   967,   973,   974,   976,   978,   981,
     984,   988,   993,   997,   999,  1002,  1004,  1006,  1012,  1016,
    1018,  1021,  1023,  1025,  1027,  1029,  1031,  1033,  1035,  1037,
    1040,  1042,  1045,  1047,  1049,  1051,  1053,  1055,  1057,  1059,
    1061,  1063,  1065,  1067,  1069,  1071,  1072,  1074,  1076,  1078,
    1080,  1082,  1084,  1086,  1088,  1091,  1097,  1102,  1103,  1105,
    1108,  1111,  1116,  1119,  1124,  1128,  1132,  1136,  1137,  1139,
    1141,  1144,  1146,  1148,  1150,  1152,  1154,  1156,  1158,  1160,
    1162,  1164,  1171,  1177,  1184,  1190,  1196,  1199,  1207,  1215,
    1223,  1224,  1226,  1228,  1230,  1232,  1234,  1238,  1240,  1242,
    1247,  1248,  1250,  1252,  1257,  1267,  1270,  1273,  1274,  1276,
    1277,  1279,  1285,  1291,  1293,  1295,  1302,  1313,  1316,  1319,
    1325,  1331,  1340,  1346,  1352,  1355,  1360,  1362,  1364,  1372,
    1383,  1385,  1387,  1389,  1391,  1393,  1395,  1397,  1399,  1401,
    1403,  1405,  1407,  1409,  1411,  1413,  1415,  1417,  1419,  1421,
    1423,  1425,  1427,  1435,  1443,  1448,  1454,  1455,  1457,  1463,
    1469,  1477,  1479,  1481,  1483,  1485,  1487,  1488,  1490,  1492,
    1494,  1496,  1498,  1506,  1507,  1509,  1512,  1515,  1519,  1520,
    1522,  1524,  1527,  1529,  1531,  1533,  1535,  1537,  1539,  1541,
    1543,  1545,  1549,  1554,  1555,  1557,  1559,  1563,  1571,  1572,
    1574,  1577,  1580,  1584,  1585,  1587,  1589,  1592,  1594,  1596,
    1598,  1600,  1609,  1618,  1619,  1621,  1631,  1644,  1648,  1652,
    1659,  1666,  1673,  1675,  1678,  1686,  1687,  1689,  1692,  1696,
    1701,  1702,  1704,  1706,  1710,  1713,  1718,  1728,  1738,  1740,
    1742,  1745,  1752,  1760,  1761,  1763,  1766,  1768,  1770,  1772,
    1774,  1776,  1778,  1780,  1782,  1784,  1786,  1790,  1793,  1794,
    1796,  1800,  1801,  1802,  1803,  1804,  1805
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
     293,     0,    -1,   167,    -1,     7,    -1,     9,    -1,    10,
      -1,    11,    -1,    13,    -1,    14,    -1,    90,    -1,   113,
      -1,    72,    -1,   299,    -1,   170,    -1,   178,    -1,   171,
      -1,   172,    -1,   176,    -1,   177,    -1,   173,    -1,    52,
      -1,   174,    -1,   175,    -1,    62,    -1,   102,    -1,    54,
      -1,   104,    -1,   120,    -1,    82,    -1,   116,    -1,    87,
      -1,   117,    -1,    57,    -1,    75,    -1,    66,    -1,    91,
      -1,   108,    -1,   169,    32,    -1,   299,    32,    -1,   123,
      32,    -1,   178,   180,    -1,   171,   180,    -1,   299,   180,
      -1,    -1,   180,   179,    -1,     4,    -1,   229,    -1,   183,
      -1,   182,   141,   183,    -1,   229,    -1,   100,   181,    -1,
      93,   181,    -1,   186,    -1,   185,    -1,   166,    -1,   199,
      -1,   187,    -1,   188,    -1,   190,    -1,   193,    -1,   194,
      -1,   197,    -1,   201,    -1,   206,    -1,   202,    -1,   203,
      -1,    19,   229,    18,    -1,   184,    44,     5,    -1,   172,
      44,     5,    -1,   176,    44,     5,    -1,   185,    19,   189,
      18,    -1,   299,    19,   189,    18,    -1,    -1,   182,    -1,
     184,   142,   192,   143,    -1,   299,   142,   192,   143,    -1,
      -1,   192,    -1,   229,    -1,   192,   141,   229,    -1,   111,
      -1,    51,    44,     5,    -1,    51,   142,   192,   143,    -1,
     207,   162,    -1,   207,   163,    -1,   198,    -1,    89,   169,
      19,   189,    18,    -1,    89,   299,    19,   189,    18,    -1,
      89,   170,   142,   192,   143,   179,   200,    -1,    89,   142,
     192,   143,   179,   200,    -1,    89,   299,   142,   192,   143,
     179,   200,    -1,    89,   178,   371,    -1,    -1,   371,    -1,
     115,    19,   169,    18,    -1,   115,    19,   299,    18,    -1,
     115,    19,   123,    18,    -1,    58,    19,   229,    18,    -1,
     118,    19,   229,    18,    -1,   207,   164,     5,    -1,    23,
     211,    -1,   105,    19,   169,    18,    -1,   105,    19,   299,
      18,    -1,   184,    -1,   299,    -1,   195,    -1,   196,    -1,
     204,    -1,   207,    -1,    27,   211,    -1,    15,   211,    -1,
     212,    -1,   162,   211,    -1,   163,   211,    -1,   208,    -1,
      40,   211,    -1,    34,   211,    -1,    32,   211,    -1,   209,
      -1,   210,    -1,   205,    -1,    19,   229,    18,   208,    -1,
      19,   216,    32,    18,   211,    -1,    19,   299,   180,   213,
      18,   211,    -1,    19,   172,   213,    18,   211,    -1,    19,
     176,   213,    18,   211,    -1,    19,   123,   213,    18,   211,
      -1,    -1,   214,    -1,   215,    -1,   214,   215,    -1,   180,
      -1,    32,    -1,   211,    -1,   216,    32,   211,    -1,   216,
      33,   211,    -1,   216,    25,   211,    -1,   216,    -1,   217,
      40,   216,    -1,   217,    34,   216,    -1,   217,    -1,   218,
     152,   217,    -1,   218,   153,   217,    -1,   218,    -1,   219,
      31,   218,    -1,   219,    30,   218,    -1,   219,   158,   218,
      -1,   219,   159,   218,    -1,   219,    85,   169,    -1,   219,
      50,   169,    -1,   219,    85,   299,    -1,   219,    50,   299,
      -1,   219,    -1,   220,   156,   219,    -1,   220,   157,   219,
      -1,   220,    -1,   221,    23,   220,    -1,   221,    -1,   222,
      26,   221,    -1,   222,    -1,   223,    22,   222,    -1,   223,
      -1,   224,   160,   223,    -1,   224,    -1,   225,   161,   224,
      -1,   225,    -1,   225,    16,   229,    17,   229,    -1,   211,
     228,   229,    -1,    29,    -1,   144,    -1,   145,    -1,   146,
      -1,   147,    -1,   148,    -1,   149,    -1,   150,    -1,   151,
      -1,   154,    -1,   155,    -1,   226,    -1,   227,    -1,   229,
      -1,   229,    -1,   238,    -1,   239,    -1,   233,    -1,   234,
      -1,   237,    -1,   248,    -1,   250,    -1,   260,    -1,   273,
      -1,   280,    -1,   285,    -1,   286,    -1,   287,    -1,   288,
      -1,   261,    -1,   290,    -1,    21,   235,    20,    -1,    -1,
     236,    -1,   232,    -1,   236,   232,    -1,    28,    -1,     5,
      17,   232,    -1,   240,    28,    -1,   245,    28,    -1,   169,
     241,    -1,   299,   241,    -1,   242,    -1,   241,   141,   242,
      -1,   313,    -1,   313,    29,   243,    -1,   313,    29,    -1,
     229,    -1,   371,    -1,   244,    -1,   106,   169,   142,   229,
     143,    -1,   106,   299,   142,   229,   143,    -1,    60,   169,
     246,    -1,    60,   246,    -1,    60,   299,   246,    -1,   247,
      -1,   246,   141,   247,    -1,   313,    29,   230,    -1,   313,
      29,    -1,   313,    -1,   249,    28,    -1,   188,    -1,   198,
      -1,   227,    -1,   195,    -1,   196,    -1,   209,    -1,   210,
      -1,   252,    -1,   253,    -1,   231,    -1,    -1,    79,    19,
     251,    18,   233,    -1,    79,    19,   251,    18,   233,    67,
     233,    -1,   110,    19,   229,    18,   254,    -1,    21,   255,
      20,    -1,    -1,   256,    -1,   257,    -1,   256,   257,    -1,
     258,   236,    -1,   259,    -1,   258,   259,    -1,    55,   230,
      17,    -1,    63,    17,    -1,    55,    17,    -1,   262,    -1,
     263,    -1,   264,    -1,   272,    -1,   119,   234,    -1,   125,
      19,   231,    18,   233,    -1,    65,   233,   125,    19,   231,
      18,    28,    -1,    65,   233,    28,    -1,    76,    19,   265,
      28,   266,    28,   267,    18,   233,    -1,    76,    19,    18,
      -1,    76,    19,     1,    18,    -1,    -1,   268,    -1,    -1,
     269,    -1,    -1,   270,    -1,   240,    -1,   271,    -1,   231,
      -1,   271,    -1,   249,    -1,   271,   141,   249,    -1,    77,
      19,   169,     5,    81,   229,    18,   233,    -1,    77,    19,
       5,    81,   229,    18,   233,    -1,    77,    19,   299,     5,
      81,   229,    18,   233,    -1,   274,    -1,   275,    -1,   276,
      -1,   277,    -1,   279,    -1,    53,    28,    -1,    61,    28,
      -1,    78,     5,    28,    -1,    78,    55,   230,    28,    -1,
      78,    63,    28,    -1,   101,   278,    28,    -1,    -1,   229,
      -1,   112,   278,    28,    -1,   114,   234,   281,    -1,   114,
     234,   284,    -1,   114,   234,   281,   284,    -1,   282,    -1,
     281,   282,    -1,    56,    19,   176,   283,    18,   234,    -1,
      56,    19,   299,   283,    18,   234,    -1,    56,   234,    -1,
      -1,   313,    -1,    73,   234,    -1,    58,   234,    -1,   118,
     234,    -1,    86,    19,   229,    18,   233,    -1,   121,    19,
     289,    18,   233,    -1,   240,    -1,   229,    -1,    74,    19,
     169,   291,    18,   233,    -1,    74,    19,   299,   291,    18,
     233,    -1,   292,    -1,   291,   141,   292,    -1,     5,    29,
     229,    -1,   294,   295,    -1,   294,   306,    -1,    -1,   302,
      -1,    -1,   396,    -1,    -1,   306,    -1,   295,    88,   299,
     301,   298,    -1,    -1,    28,    -1,   313,    -1,   300,   313,
      -1,   313,    44,    -1,   300,   313,    44,    -1,    21,   294,
     296,    20,    -1,   294,   296,    20,    -1,   303,    -1,   302,
     303,    -1,   304,    -1,   305,    -1,   121,   313,    29,   299,
      28,    -1,   121,   168,    28,    -1,   307,    -1,   306,   307,
      -1,   297,    -1,   308,    -1,   315,    -1,   364,    -1,   374,
      -1,   388,    -1,   395,    -1,   312,    -1,   310,   312,    -1,
     311,    -1,   310,   311,    -1,    49,    -1,    71,    -1,    84,
      -1,    89,    -1,    94,    -1,    96,    -1,    97,    -1,    98,
      -1,    99,    -1,   103,    -1,   119,    -1,   122,    -1,   124,
      -1,    -1,   107,    -1,     5,    -1,     6,    -1,     5,    -1,
      13,    -1,    12,    -1,     7,    -1,     6,    -1,   316,   320,
      -1,   295,   309,    59,   314,   317,    -1,   295,   309,    59,
     317,    -1,    -1,   318,    -1,    17,   176,    -1,    17,   319,
      -1,    17,   176,   141,   319,    -1,    17,   299,    -1,    17,
     176,   141,   299,    -1,   319,   141,   299,    -1,   299,   141,
     299,    -1,    21,   321,    20,    -1,    -1,   322,    -1,   323,
      -1,   322,   323,    -1,   324,    -1,   325,    -1,   326,    -1,
     336,    -1,   343,    -1,   347,    -1,   350,    -1,   355,    -1,
     359,    -1,   308,    -1,   295,   309,    60,   169,   246,    28,
      -1,   295,   309,    60,   246,    28,    -1,   295,   309,    60,
     299,   246,    28,    -1,   295,   309,   169,   241,    28,    -1,
     295,   309,   299,   241,    28,    -1,   327,   330,    -1,   295,
     309,   169,   299,    19,   328,    18,    -1,   295,   309,   123,
     299,    19,   328,    18,    -1,   295,   309,   299,   299,    19,
     328,    18,    -1,    -1,   331,    -1,   123,    -1,   234,    -1,
      28,    -1,   332,    -1,   331,   141,   332,    -1,   333,    -1,
     335,    -1,   295,   334,   169,     5,    -1,    -1,   100,    -1,
      93,    -1,   295,    95,   169,     5,    -1,   295,   309,   169,
     299,   410,    21,   337,    20,   411,    -1,   340,   338,    -1,
     341,   339,    -1,    -1,   341,    -1,    -1,   340,    -1,   295,
     137,   411,   342,   410,    -1,   295,   138,   411,   342,   410,
      -1,   234,    -1,    28,    -1,   295,   309,    69,   169,   241,
      28,    -1,   295,   309,    69,   169,   299,   408,    21,   344,
      20,   409,    -1,   345,   346,    -1,   346,   345,    -1,   295,
     139,   409,   234,   408,    -1,   295,   140,   409,   234,   408,
      -1,   295,   309,   348,   410,    21,   337,    20,   411,    -1,
     169,   111,   142,   331,   143,    -1,   169,   349,   142,   331,
     143,    -1,   300,   111,    -1,   295,   309,   351,   360,    -1,
     352,    -1,   354,    -1,   169,    92,   353,    19,   169,     5,
      18,    -1,   169,    92,   353,    19,   169,     5,   141,   169,
       5,    18,    -1,    40,    -1,    34,    -1,    27,    -1,    15,
      -1,   162,    -1,   163,    -1,   113,    -1,    72,    -1,    32,
      -1,    33,    -1,    25,    -1,    23,    -1,    22,    -1,    26,
      -1,   152,    -1,   153,    -1,   156,    -1,   157,    -1,    30,
      -1,    31,    -1,   159,    -1,   158,    -1,    80,    92,   169,
      19,   169,     5,    18,    -1,    70,    92,   169,    19,   169,
       5,    18,    -1,   295,   309,   356,   361,    -1,     5,    19,
     328,    18,   357,    -1,    -1,   358,    -1,    17,    51,    19,
     189,    18,    -1,    17,   111,    19,   189,    18,    -1,   295,
     309,    15,     5,    19,    18,   234,    -1,   234,    -1,    28,
      -1,   234,    -1,    28,    -1,   367,    -1,    -1,     5,    -1,
       6,    -1,    13,    -1,    12,    -1,     7,    -1,   295,   309,
     109,   363,   365,   362,   298,    -1,    -1,   366,    -1,    17,
     319,    -1,    17,   299,    -1,    21,   368,    20,    -1,    -1,
     369,    -1,   370,    -1,   369,   370,    -1,   324,    -1,   325,
      -1,   326,    -1,   336,    -1,   343,    -1,   347,    -1,   350,
      -1,   355,    -1,   308,    -1,    21,   372,    20,    -1,    21,
     373,   141,    20,    -1,    -1,   373,    -1,   243,    -1,   373,
     141,   243,    -1,   295,   309,    83,     5,   375,   377,   298,
      -1,    -1,   376,    -1,    17,   319,    -1,    17,   299,    -1,
      21,   378,    20,    -1,    -1,   379,    -1,   380,    -1,   379,
     380,    -1,   381,    -1,   383,    -1,   386,    -1,   384,    -1,
     295,   382,   169,     5,    19,   328,    18,   387,    -1,   295,
     382,   123,     5,    19,   328,    18,   387,    -1,    -1,    89,
      -1,   295,   382,   169,     5,   410,    21,   385,    20,   411,
      -1,   295,   382,   169,   111,   142,   331,   143,   410,    21,
     385,    20,   411,    -1,   295,   137,   387,    -1,   295,   138,
     387,    -1,   295,   137,   387,   295,   138,   387,    -1,   295,
     138,   387,   295,   137,   387,    -1,   295,   382,    69,   169,
       5,   387,    -1,    28,    -1,    21,    20,    -1,   295,   309,
      68,     5,   389,   391,   298,    -1,    -1,   390,    -1,    17,
     174,    -1,    21,   392,    20,    -1,    21,   393,   141,    20,
      -1,    -1,   393,    -1,   394,    -1,   393,   141,   394,    -1,
     295,     5,    -1,   295,     5,    29,   230,    -1,   295,   309,
      64,   329,     5,    19,   328,    18,    28,    -1,   295,   309,
      64,   299,     5,    19,   328,    18,    28,    -1,   397,    -1,
     398,    -1,   397,   398,    -1,   406,   142,   399,   402,   143,
     407,    -1,   406,   142,   399,   402,   141,   143,   407,    -1,
      -1,   400,    -1,   401,    17,    -1,   130,    -1,   131,    -1,
      69,    -1,   132,    -1,   133,    -1,   134,    -1,   135,    -1,
     101,    -1,   136,    -1,   403,    -1,   402,   141,   403,    -1,
     299,   404,    -1,    -1,   405,    -1,    19,   191,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   103,   103,   104,   105,   106,   107,   108,   109,   110,
     113,   114,   120,   129,   130,   133,   138,   139,   140,   143,
     144,   147,   148,   149,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   155,   155,   158,   158,   161,   162,   163,
     166,   167,   168,   170,   172,   175,   179,   183,   184,   187,
     188,   189,   192,   193,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   210,   213,   214,   215,
     218,   219,   221,   223,   226,   227,   230,   232,   235,   236,
     239,   242,   243,   246,   249,   252,   255,   256,   260,   261,
     262,   263,   265,   267,   270,   271,   272,   275,   278,   281,
     284,   287,   288,   291,   292,   293,   294,   295,   298,   299,
     300,   301,   304,   307,   310,   311,   312,   313,   314,   315,
     316,   324,   325,   326,   327,   328,   329,   331,   333,   336,
     337,   340,   341,   344,   345,   346,   347,   350,   351,   352,
     355,   356,   357,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   371,   372,   373,   376,   377,   380,   381,   384,
     385,   388,   389,   392,   393,   396,   397,   400,   403,   403,
     403,   403,   403,   403,   404,   404,   404,   404,   404,   407,
     408,   411,   414,   418,   419,   420,   423,   424,   425,   426,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   438,
     440,   442,   446,   447,   450,   453,   456,   457,   460,   461,
     464,   465,   468,   469,   470,   473,   474,   475,   478,   479,
     483,   484,   485,   488,   489,   492,   493,   494,   497,   500,
     501,   502,   503,   504,   505,   506,   509,   510,   513,   514,
     518,   519,   523,   526,   528,   530,   533,   534,   537,   540,
     541,   544,   545,   546,   550,   551,   552,   553,   556,   559,
     563,   564,   568,   569,   570,   572,   574,   576,   578,   580,
     582,   585,   586,   589,   592,   595,   596,   599,   600,   601,
     604,   605,   606,   607,   608,   611,   614,   617,   618,   619,
     622,   625,   627,   630,   633,   634,   635,   638,   639,   642,
     644,   645,   647,   649,   652,   655,   658,   661,   664,   667,
     668,   672,   673,   676,   677,   680,   683,   684,   686,   688,
     690,   692,   694,   696,   700,   702,   704,   713,   714,   717,
     718,   721,   722,   727,   728,   731,   732,   735,   738,   741,
     742,   745,   746,   749,   750,   751,   752,   753,   764,   765,
     768,   769,   772,   773,   774,   775,   776,   777,   778,   779,
     780,   781,   782,   783,   784,   786,   788,   791,   792,   796,
     797,   798,   799,   800,   806,   811,   814,   816,   818,   821,
     822,   823,   824,   825,   831,   832,   835,   838,   840,   843,
     844,   847,   848,   849,   850,   851,   852,   853,   854,   855,
     857,   860,   861,   862,   865,   866,   869,   877,   880,   884,
     889,   891,   895,   898,   899,   902,   903,   906,   907,   910,
     914,   916,   917,   921,   924,   930,   931,   933,   935,   937,
     939,   942,   948,   954,   955,   958,   959,   965,   966,   969,
     975,   981,   987,   989,   992,   996,   999,  1000,  1003,  1004,
    1007,  1007,  1008,  1008,  1008,  1008,  1008,  1008,  1009,  1009,
    1009,  1009,  1009,  1009,  1010,  1010,  1010,  1010,  1010,  1010,
    1010,  1010,  1013,  1014,  1017,  1020,  1022,  1024,  1027,  1028,
    1044,  1047,  1048,  1051,  1052,  1055,  1056,  1059,  1060,  1061,
    1062,  1063,  1066,  1069,  1071,  1074,  1075,  1078,  1080,  1082,
    1085,  1086,  1089,  1090,  1091,  1092,  1093,  1094,  1095,  1096,
    1098,  1103,  1104,  1107,  1109,  1112,  1113,  1118,  1120,  1122,
    1125,  1126,  1129,  1131,  1133,  1136,  1137,  1140,  1141,  1142,
    1143,  1147,  1148,  1150,  1152,  1155,  1161,  1169,  1170,  1171,
    1172,  1175,  1180,  1181,  1186,  1188,  1190,  1193,  1196,  1197,
    1199,  1201,  1204,  1205,  1208,  1209,  1214,  1215,  1220,  1223,
    1224,  1227,  1228,  1230,  1232,  1235,  1238,  1239,  1240,  1241,
    1242,  1243,  1244,  1245,  1246,  1249,  1250,  1254,  1256,  1258,
    1267,  1274,  1279,  1284,  1289,  1294,  1299
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
  "object_creation_expression", "array_creation_expression",
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
  "selection_statement", "boolexp", "if_statement", "switch_statement",
  "switch_block", "switch_sections_opt", "switch_sections",
  "switch_section", "switch_labels", "switch_label", "iteration_statement",
  "unsafe_statement", "while_statement", "do_statement", "for_statement",
  "for_initializer_opt", "for_condition_opt", "for_iterator_opt",
  "for_initializer", "for_condition", "for_iterator",
  "statement_expression_list", "foreach_statement", "jump_statement",
  "break_statement", "continue_statement", "goto_statement",
  "return_statement", "expression_opt", "throw_statement", "try_statement",
  "catch_clauses", "catch_clause", "identifier_opt", "finally_clause",
  "checked_statement", "unchecked_statement", "lock_statement",
  "using_statement", "resource_acquisition", "fixed_statement",
  "fixed_pointer_declarators", "fixed_pointer_declarator",
  "compilation_unit", "using_directives_opt", "attributes_opt",
  "namespace_member_declarations_opt", "namespace_declaration",
  "comma_opt", "qualified_identifier", "qualifier", "namespace_body",
  "using_directives", "using_directive", "using_alias_directive",
  "using_namespace_directive", "namespace_member_declarations",
  "namespace_member_declaration", "type_declaration", "modifiers_opt",
  "modifiers", "modifier", "static_opt", "identif", "identifier",
  "class_declaration", "class_h", "class_base_opt", "class_base",
  "interface_type_list", "class_body", "class_member_declarations_opt",
  "class_member_declarations", "class_member_declaration",
  "constant_declaration", "field_declaration", "method_declaration",
  "method_header", "formal_parameter_list_opt", "return_type",
  "method_body", "formal_parameter_list", "formal_parameter",
  "fixed_parameter", "parameter_modifier_opt", "parameter_array",
  "property_declaration", "accessor_declarations",
  "set_accessor_declaration_opt", "get_accessor_declaration_opt",
  "get_accessor_declaration", "set_accessor_declaration", "accessor_body",
  "event_declaration", "event_accessor_declarations",
  "add_accessor_declaration", "remove_accessor_declaration",
  "indexer_declaration", "indexer_declarator", "qualified_this",
  "operator_declaration", "operator_declarator",
  "overloadable_operator_declarator", "overloadable_operator",
  "conversion_operator_declarator", "constructor_declaration",
  "constructor_declarator", "constructor_initializer_opt",
  "constructor_initializer", "destructor_declaration", "operator_body",
  "constructor_body", "struct_bod", "IDENTIFIER", "struct_declaration",
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
     199,   199,   200,   200,   201,   201,   201,   202,   203,   204,
     205,   206,   206,   207,   207,   207,   207,   207,   208,   208,
     208,   208,   209,   210,   211,   211,   211,   211,   211,   211,
     211,   212,   212,   212,   212,   212,   212,   213,   213,   214,
     214,   215,   215,   216,   216,   216,   216,   217,   217,   217,
     218,   218,   218,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   220,   220,   220,   221,   221,   222,   222,   223,
     223,   224,   224,   225,   225,   226,   226,   227,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   229,
     229,   230,   231,   232,   232,   232,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   234,
     235,   235,   236,   236,   237,   238,   239,   239,   240,   240,
     241,   241,   242,   242,   242,   243,   243,   243,   244,   244,
     245,   245,   245,   246,   246,   247,   247,   247,   248,   249,
     249,   249,   249,   249,   249,   249,   250,   250,   251,   251,
     252,   252,   253,   254,   255,   255,   256,   256,   257,   258,
     258,   259,   259,   259,   260,   260,   260,   260,   261,   262,
     263,   263,   264,   264,   264,   265,   265,   266,   266,   267,
     267,   268,   268,   269,   270,   271,   271,   272,   272,   272,
     273,   273,   273,   273,   273,   274,   275,   276,   276,   276,
     277,   278,   278,   279,   280,   280,   280,   281,   281,   282,
     282,   282,   283,   283,   284,   285,   286,   287,   288,   289,
     289,   290,   290,   291,   291,   292,   293,   293,   294,   294,
     295,   295,   296,   296,   297,   298,   298,   299,   299,   300,
     300,   301,   301,   302,   302,   303,   303,   304,   305,   306,
     306,   307,   307,   308,   308,   308,   308,   308,   309,   309,
     310,   310,   311,   311,   311,   311,   311,   311,   311,   311,
     311,   311,   311,   311,   311,   312,   312,   313,   313,   314,
     314,   314,   314,   314,   315,   316,   316,   317,   317,   318,
     318,   318,   318,   318,   319,   319,   320,   321,   321,   322,
     322,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   324,   324,   324,   325,   325,   326,   327,   327,   327,
     328,   328,   329,   330,   330,   331,   331,   332,   332,   333,
     334,   334,   334,   335,   336,   337,   337,   338,   338,   339,
     339,   340,   341,   342,   342,   343,   343,   344,   344,   345,
     346,   347,   348,   348,   349,   350,   351,   351,   352,   352,
     353,   353,   353,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   354,   354,   355,   356,   357,   357,   358,   358,
     359,   360,   360,   361,   361,   362,   362,   363,   363,   363,
     363,   363,   364,   365,   365,   366,   366,   367,   368,   368,
     369,   369,   370,   370,   370,   370,   370,   370,   370,   370,
     370,   371,   371,   372,   372,   373,   373,   374,   375,   375,
     376,   376,   377,   378,   378,   379,   379,   380,   380,   380,
     380,   381,   381,   382,   382,   383,   384,   385,   385,   385,
     385,   386,   387,   387,   388,   389,   389,   390,   391,   391,
     392,   392,   393,   393,   394,   394,   395,   395,   396,   397,
     397,   398,   398,   399,   399,   400,   401,   401,   401,   401,
     401,   401,   401,   401,   401,   402,   402,   403,   404,   404,
     405,   406,   407,   408,   409,   410,   411
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
       7,     3,     0,     1,     4,     4,     4,     4,     4,     3,
       2,     4,     4,     1,     1,     1,     1,     1,     1,     2,
       2,     1,     2,     2,     1,     2,     2,     2,     1,     1,
       1,     4,     5,     6,     5,     5,     5,     0,     1,     1,
       2,     1,     1,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     5,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       0,     1,     1,     2,     1,     3,     2,     2,     2,     2,
       1,     3,     1,     3,     2,     1,     1,     1,     5,     5,
       3,     2,     3,     1,     3,     3,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       5,     7,     5,     3,     0,     1,     1,     2,     2,     1,
       2,     3,     2,     2,     1,     1,     1,     1,     2,     5,
       7,     3,     9,     3,     4,     0,     1,     0,     1,     0,
       1,     1,     1,     1,     1,     1,     3,     8,     7,     8,
       1,     1,     1,     1,     1,     2,     2,     3,     4,     3,
       3,     0,     1,     3,     3,     3,     4,     1,     2,     6,
       6,     2,     0,     1,     2,     2,     2,     5,     5,     1,
       1,     6,     6,     1,     3,     3,     2,     2,     0,     1,
       0,     1,     0,     1,     5,     0,     1,     1,     2,     2,
       3,     4,     3,     1,     2,     1,     1,     5,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     5,     4,     0,     1,     2,
       2,     4,     2,     4,     3,     3,     3,     0,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     6,     5,     6,     5,     5,     2,     7,     7,     7,
       0,     1,     1,     1,     1,     1,     3,     1,     1,     4,
       0,     1,     1,     4,     9,     2,     2,     0,     1,     0,
       1,     5,     5,     1,     1,     6,    10,     2,     2,     5,
       5,     8,     5,     5,     2,     4,     1,     1,     7,    10,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     7,     7,     4,     5,     0,     1,     5,     5,
       7,     1,     1,     1,     1,     1,     0,     1,     1,     1,
       1,     1,     7,     0,     1,     2,     2,     3,     0,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     4,     0,     1,     1,     3,     7,     0,     1,
       2,     2,     3,     0,     1,     1,     2,     1,     1,     1,
       1,     8,     8,     0,     1,     9,    12,     3,     3,     6,
       6,     6,     1,     2,     7,     0,     1,     2,     3,     4,
       0,     1,     1,     3,     2,     4,     9,     9,     1,     1,
       2,     6,     7,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     0,     1,
       3,     0,     0,     0,     0,     0,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
     318,     0,     0,   320,   319,   333,   335,   336,   367,   368,
       0,    12,     0,   327,     1,   365,   341,   320,   339,   342,
     343,     0,   344,   345,   346,   347,   321,   558,   559,     0,
     334,   338,   328,     0,   329,   352,   353,   354,     0,   355,
     356,   357,   358,   359,   360,   361,   366,   362,   363,   364,
       0,   365,   350,   348,   365,   340,   320,   374,   560,   563,
     330,     0,   327,   318,   377,     0,     0,     0,     0,   351,
     349,   365,   400,     0,   320,   389,   391,   392,   393,     0,
     394,   395,   396,   397,   398,   399,   568,   573,   566,   567,
     569,   570,   571,   572,   574,     0,   564,     0,   337,   318,
     320,   325,   369,   373,   372,   371,   370,     0,   377,   376,
     378,   412,     0,     0,   545,   518,   487,   488,   491,   490,
     489,   493,     0,   386,   390,   200,   414,   413,   406,   578,
       0,   575,   565,   320,     0,   320,   326,   324,    35,    36,
     379,   382,   380,   375,     0,     0,     0,     0,   546,     0,
       0,   519,     0,   486,   494,   367,     0,    20,    25,    32,
       0,    23,    34,     0,     0,    33,     0,    28,    30,    24,
      26,    29,    31,    27,     0,     0,    13,    15,    16,    19,
      21,    22,    17,    18,    14,     0,   585,     0,   446,   447,
       0,   367,     3,     4,     5,     6,     7,     8,     0,     0,
       0,     0,   204,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,     0,     0,     0,     0,     0,     0,     0,
       9,   291,     0,     0,    80,   291,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    54,     2,     0,    16,
      17,   103,    53,    52,    56,    57,    58,    59,    60,   105,
     106,    61,    85,    55,    62,    64,    65,   107,   120,    63,
     108,   114,   118,   119,     0,   111,   231,   202,   185,   186,
       0,   201,   187,   183,   184,     0,     0,   188,     0,   189,
     236,   237,   190,   197,   254,   255,   256,   257,   191,   280,
     281,   282,   283,   284,   192,   193,   194,   195,   196,   198,
     104,    76,   577,   579,     0,   582,     0,   332,     0,     0,
       0,   320,   320,   547,   320,   325,   521,   520,   320,   325,
     496,   495,   320,   325,   485,   320,     0,     0,     0,   223,
       0,   327,     0,     0,     0,     0,    39,     0,    37,     0,
       0,     0,   210,   585,     0,   212,     0,    45,    41,    40,
      38,    42,     0,     0,     0,   482,   481,   445,   484,   483,
     474,     0,     0,     0,     0,     0,    57,   105,   106,    85,
     118,   119,   110,   104,   127,   127,   127,   133,   137,   140,
     143,   152,   155,   157,   159,   161,   163,   165,   179,   180,
       0,   104,   100,   109,   117,   116,   115,     0,     0,   285,
       0,   305,     0,   221,     0,   286,     0,     0,     0,     0,
       0,     0,     0,   239,     0,     0,     0,    13,    14,     0,
     137,   292,     0,     0,     0,     0,     0,     0,     0,   306,
     258,     0,     0,   112,   113,   208,   212,     0,     0,     0,
       0,    72,    83,    84,     0,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,     0,   199,   203,   206,
     207,   228,    72,     0,   209,     0,    77,    78,   582,   576,
     561,   331,   383,   381,   385,   384,   420,     0,   411,   415,
     417,   418,     0,     0,     0,   551,   552,   544,   533,     0,
     320,   525,   527,   528,   530,   529,   517,   365,   510,   502,
     503,   504,   505,   506,   507,   508,   509,     0,   320,   500,
     492,     0,     0,     0,   227,   402,     0,     0,   226,     0,
     583,     0,     0,   320,   453,   462,   461,   460,   463,   452,
     468,   469,   458,   459,   451,   450,   457,   456,   464,   465,
     466,   467,   471,   470,   454,   455,     0,   320,   404,     0,
     320,     0,   444,   214,   320,   405,   320,   320,   205,   132,
     131,     0,   128,   129,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    66,   127,    81,
       0,     0,   220,   222,   261,     0,     0,     0,     0,   263,
     271,   275,     0,   266,   272,   367,     0,     0,   287,   181,
       0,   289,   182,   238,     0,     0,     0,    72,     0,   513,
      91,    72,     0,     0,   290,     0,     0,     0,   293,     0,
       0,   294,   297,   295,     0,     0,     0,     0,   310,   309,
       0,     0,    68,    69,    67,     0,     0,     0,    73,    47,
       0,    49,    99,   167,     0,     0,   580,     0,   562,   422,
       0,   421,     0,     0,   320,     0,   554,   548,   320,   534,
       0,   522,   526,     0,   497,   501,   476,     0,   401,   224,
     403,   225,   435,     0,     0,     0,     0,     0,     0,   211,
       0,   320,     0,   215,   213,   217,   216,     0,     0,     0,
       0,   320,   320,     0,   130,     0,     0,   136,     0,   134,
     135,   133,   139,   138,   141,   142,   145,   144,   149,   151,
     148,   150,   146,   147,   153,   154,   156,   158,   160,   162,
       0,   164,   121,     0,    82,    97,     0,     0,     0,   313,
       0,   264,   267,     0,     0,     0,     0,   288,     0,     0,
      43,     0,     0,   515,     0,   514,     0,     0,   101,   102,
       0,     0,   301,   304,   298,   296,    96,    94,    95,    98,
       0,     0,    74,    51,    46,    50,     0,    70,    71,    75,
      79,     0,     0,   557,   416,   556,     0,   549,   553,     0,
       0,     0,     0,   475,   477,   480,   320,     0,     0,   408,
       0,   442,   407,     0,     0,     0,   443,   409,   586,   586,
     586,     0,   425,   428,     0,   426,   430,   126,   124,   125,
     122,     0,     0,     0,     0,     0,     0,     0,   273,     0,
     268,   276,     0,     0,     0,   240,   307,    92,    43,    86,
      43,   511,     0,    87,    43,   244,   242,   302,   302,   308,
     259,    48,   423,   419,   555,     0,     0,   585,     0,     0,
       0,     0,     0,   320,   320,     0,     0,     0,   586,     0,
       0,     0,     0,   441,   166,   123,     0,   315,   311,   314,
     312,   269,     0,     0,     0,     0,    89,    93,    44,    92,
     512,   516,    92,     0,     0,     0,   245,   246,     0,   249,
       0,   303,     0,     0,   320,   320,     0,   320,    72,    72,
     584,   584,   584,     0,   437,     0,   438,   473,   472,   448,
       0,   424,     0,     0,   434,   433,   585,   585,   260,     0,
     270,   274,   278,     0,     0,   241,    88,    90,   253,     0,
     252,   243,   247,   248,   250,     0,     0,     0,   542,   541,
       0,     0,   320,     0,     0,     0,     0,     0,   436,     0,
     218,   219,   431,   432,     0,   277,   279,   251,   299,   300,
     543,     0,     0,     0,     0,   585,   478,   479,   583,   583,
       0,   262,   532,   531,     0,     0,   586,     0,   439,   440,
     449,   320,   320,   535,   320,     0,     0,     0,     0,     0,
     586,   539,   540,   536
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,   236,   237,    10,   238,   176,   177,   364,   179,   180,
     181,   365,   183,   184,   837,   351,   773,   648,   649,   241,
     242,   243,   244,   366,   650,   246,   465,   466,   247,   248,
     367,   368,   251,   369,   253,   886,   254,   255,   256,   257,
     258,   259,   260,   261,   370,   371,   377,   265,   561,   562,
     563,   420,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   456,   467,   610,   613,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   341,   342,   694,   695,
     276,   328,   329,   277,   278,   279,   614,   280,   281,   846,
     895,   896,   897,   898,   899,   282,   283,   284,   285,   286,
     602,   829,   929,   603,   830,   930,   604,   287,   288,   289,
     290,   291,   292,   422,   293,   294,   631,   632,   900,   633,
     295,   296,   297,   298,   640,   299,   738,   739,     2,     3,
     476,   134,    16,   137,   373,    12,   101,     4,     5,     6,
       7,   135,    18,    19,    50,    51,    52,    53,    62,   108,
      20,    21,   109,   110,   142,    57,    73,    74,    75,    76,
      77,    78,    79,   477,   113,   128,   478,   479,   480,   662,
     481,    80,   700,   812,   815,   701,   702,   926,    81,   862,
     863,   864,    82,   186,   346,    83,   187,   188,   546,   189,
      84,   190,   793,   794,    85,   357,   360,   323,   121,    22,
     153,   154,   324,   507,   508,   509,   696,   754,   755,    23,
     150,   151,   319,   489,   490,   491,   492,   670,   493,   494,
     974,   495,   949,    24,   147,   148,   315,   484,   485,   486,
      25,    26,    27,    28,    95,    96,    97,   130,   131,   302,
     303,    29,   470,   683,   956,   354,   871
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -780
static const short int yypact[] =
{
     -58,   527,   112,   -75,   -58,  -780,  -780,  -780,  -780,  -780,
     109,  -780,   527,   102,  -780,   424,  -780,    39,  -780,  -780,
    -780,   227,  -780,  -780,  -780,  -780,  -780,   -75,  -780,   136,
    -780,  -780,   160,   527,  -780,  -780,  -780,  -780,   527,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
     329,  1362,  -780,  -780,  1047,  -780,    53,  -780,  -780,   286,
    -780,   187,   279,    85,   523,   230,   322,   369,   567,  -780,
    -780,  1362,  -780,   359,    71,  -780,  -780,  -780,  -780,   297,
    -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,   527,  -780,   126,  -780,   -58,
      78,   361,  -780,  -780,  -780,  -780,  -780,   277,   387,  -780,
    -780,  -780,   441,   469,   479,   482,  -780,  -780,  -780,  -780,
    -780,   522,  2826,  -780,  -780,  1697,  -780,  -780,  -780,   491,
     455,  -780,  -780,    78,   495,    82,  -780,  -780,  -780,  -780,
     384,   401,   411,  -780,   542,   559,   508,   578,  -780,   527,
     590,  -780,   527,   601,  -780,   608,   632,  -780,  -780,  -780,
    2960,  -780,  -780,  2960,   552,  -780,   556,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,    73,   284,  -780,   655,  -780,  -780,
    -780,  -780,  -780,  -780,   655,   343,  -780,   458,  -780,  -780,
     470,   644,  -780,  -780,  -780,  -780,  -780,  -780,  2753,  2283,
    2753,  2753,  -780,  2753,  2753,  2753,    80,   646,   375,  2960,
     658,  1818,  -780,   671,   674,   675,   302,   677,   678,  1121,
    -780,  2753,   681,   682,  -780,  2753,  -780,   683,   684,   581,
     683,   687,   670,   688,  2753,  2753,  -780,  -780,   396,   665,
     667,   194,   695,  -780,  -780,    62,  -780,  -780,  -780,   105,
     108,  -780,   111,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
     419,  -780,   122,   123,   148,  -780,  -780,  -780,  -780,  -780,
     696,  1697,  -780,  -780,  -780,   689,   690,  -780,   691,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
      95,  2753,  -780,  -780,    46,  -780,   700,  -780,   527,   527,
     527,    30,    30,  -780,    99,   361,   401,   411,   115,   361,
     401,   411,   118,   361,  -780,    30,   702,   396,    29,  -780,
     343,   293,   396,    64,  2960,  2960,  -780,   703,  -780,  1404,
     573,    76,  -780,   705,   256,   414,   585,  -780,  -780,  -780,
    -780,  -780,   114,   709,   712,  -780,  -780,  -780,  -780,  -780,
    -780,  1697,   716,   718,   665,   667,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,    22,   358,   308,   326,   148,   415,    81,
     503,   117,   412,   715,   714,   719,   582,    40,  -780,  -780,
     725,    56,  -780,  -780,  -780,  -780,  -780,   739,  2753,  -780,
    2753,  -780,   396,   604,   343,  -780,    48,  2960,  1260,  2984,
     720,  2753,   721,  2753,  2753,  2753,   221,   605,   141,    45,
     457,  -780,   722,  2960,  2753,   727,   307,  3051,  2753,  -780,
    -780,  2402,  2753,  -780,  -780,   615,   728,   753,   754,   757,
    2753,  2051,  -780,  -780,   758,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,  2753,  -780,  -780,  -780,
    -780,  -780,  2051,  2753,   615,   748,   626,  -780,  -780,  -780,
    -780,  -780,   401,   411,  -780,  -780,   416,   751,   629,  -780,
    -780,  -780,   759,   766,   752,   634,  -780,  -780,   693,   756,
     124,  -780,  -780,  -780,  -780,  -780,  -780,  1362,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,  -780,   764,   137,  -780,
    -780,   760,   770,   183,   763,  -780,   527,   188,  2753,   202,
    -780,   462,   465,    30,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,   776,   -75,  -780,   527,
      30,   778,  -780,  2167,   -75,  -780,    30,   -75,  -780,  -780,
    -780,   782,   358,  -780,   784,   785,  2753,  2521,  2753,  2753,
    2753,  2753,  2753,  2753,  2753,  2960,  2960,  2753,  2753,  2753,
    2753,  2753,  2753,  2753,  2753,  2753,  2753,  3130,   358,  -780,
     466,   786,   604,   604,  -780,   787,   253,   334,   793,  -780,
    -780,  -780,   791,  -780,   672,   731,   268,   337,  -780,  -780,
     792,  -780,  -780,  -780,   796,   797,   472,  2051,  2753,  2167,
    -780,  2051,  2753,  2753,  -780,   341,   368,   803,  -780,   587,
     683,   307,  -780,  -780,   397,   460,   374,   804,  -780,  -780,
     807,   809,  -780,  -780,  -780,   473,  2753,  2753,   692,  -780,
     811,  -780,  -780,  -780,   816,   476,  -780,  2753,  -780,  -780,
    2960,  -780,  2960,   808,   -75,   810,   806,  -780,   138,  -780,
    2917,  -780,  -780,  2893,  -780,  -780,   820,   683,  -780,  -780,
    -780,  -780,  -780,   818,  2960,  2960,   822,  2960,   477,  -780,
     826,   -75,  2960,  -780,  -780,  -780,  -780,   492,   832,   513,
     831,   139,   146,  2753,  -780,  2753,  2753,  -780,  2753,  -780,
    -780,  -780,   457,   457,    81,    81,   503,   503,   821,    64,
     821,    64,   503,   503,   117,   117,   412,   715,   714,   719,
     837,   582,  -780,   838,  -780,  -780,  2753,   828,    37,  -780,
      41,  -780,  2753,  2753,  2753,   777,   788,  -780,  1818,  1818,
     655,   841,   493,  -780,   843,   726,   848,   497,  -780,  -780,
     849,   277,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
    1818,  1818,  -780,  -780,  -780,  -780,  2051,  -780,  -780,  -780,
    -780,   282,   366,  -780,  -780,  -780,  2753,  -780,  -780,  2960,
     394,   240,    60,  -780,  -780,  -780,   -75,   405,   427,  -780,
     436,  -780,  -780,   854,    26,    50,  -780,  -780,  -780,  -780,
    -780,   737,  -780,  -780,   740,  -780,  -780,  -780,  -780,  -780,
    -780,  2753,  2753,   858,  2753,  1818,   873,  1818,  -780,   851,
    -780,  -780,   862,  2753,  2753,   827,  -780,   866,   655,  -780,
     655,  -780,  1935,  -780,   655,   438,  -780,   527,   527,  -780,
    -780,  -780,  -780,  -780,  -780,   439,   870,   871,   755,   876,
     880,   490,   883,   -75,   -75,   886,   888,    67,  -780,  2753,
    2753,   486,   486,  -780,  -780,  -780,   879,  -780,  -780,  -780,
    -780,  2753,  1818,   890,   891,  1818,  -780,  -780,  -780,   866,
    -780,  -780,   866,  2637,   893,   892,   438,  -780,  1573,  -780,
     897,  -780,   900,   498,    30,    30,   898,   -75,  2051,  2051,
    -780,  -780,  -780,   771,  -780,   783,  -780,  -780,  -780,  -780,
    2960,  -780,   780,   781,  -780,  -780,  -780,  -780,  -780,   903,
    -780,   672,  -780,  1818,  1818,  -780,  -780,  -780,  -780,   908,
    -780,  -780,  -780,  1697,  -780,   683,   683,   909,  -780,  -780,
     910,   912,   -75,   502,   914,   915,   683,   683,  -780,   440,
    -780,  -780,  -780,  -780,  1818,  -780,  -780,  -780,  -780,  -780,
    -780,   498,   498,   526,   918,  -780,  -780,  -780,  -780,  -780,
     916,  -780,  -780,  -780,   498,   498,  -780,   919,  -780,  -780,
    -780,   163,   171,  -780,   -75,   801,   798,   921,   498,   498,
    -780,  -780,  -780,  -780
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -780,  -780,  -780,  -780,   733,   732,  -780,   823,  -780,   812,
    -780,   378,  -780,   736,  -291,  -149,   303,  -780,   168,  -780,
    -780,  -780,  -780,  -102,  -433,  -780,  -780,  -371,  -780,  -780,
     -91,   -17,  -780,     3,  -780,  -355,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,   372,    75,   143,  -117,  -780,  -354,  -780,
     399,  -188,   100,   -14,    87,   381,   382,   380,   385,   379,
    -780,  -780,   231,  -780,   706,  -509,  -416,  -268,  -204,   -74,
    -780,    68,  -780,  -780,  -780,   -48,  -135,   422,  -599,  -780,
    -780,  -137,   456,  -780,  -393,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,    79,  -780,    83,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,    96,  -780,  -780,  -780,
    -780,  -780,  -780,   762,  -780,  -780,  -780,   345,   130,   351,
    -780,  -780,  -780,  -780,  -780,  -780,   388,   158,  -780,    11,
      -3,   857,  -780,  -253,     0,   817,  -780,  -780,   989,  -780,
    -780,   991,    44,   -38,   -67,  -780,   944,   945,     1,  -780,
    -780,  -780,   889,  -780,  -112,  -780,  -780,  -780,   924,  -303,
    -296,  -290,  -780,  -300,  -780,  -780,  -530,   335,  -780,  -780,
    -780,  -280,   309,  -780,  -780,   301,   304,   132,  -279,  -780,
     142,   144,  -277,  -780,  -780,  -276,  -780,  -780,  -780,  -780,
    -275,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,   504,  -412,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,   520,  -780,  -780,  -780,  -780,
      17,  -780,  -414,  -780,  -780,  -780,  -780,  -780,  -780,   346,
    -780,  -780,  -780,   986,  -780,  -780,  -780,  -780,   711,  -780,
    -780,  -780,   548,  -302,  -229,  -333,  -779
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -582
static const short int yytable[] =
{
      15,    11,    13,   458,   122,   127,   620,   406,   264,   681,
     551,   378,   482,    32,    54,   601,   641,   688,    72,   499,
     753,   564,   565,   245,   697,   511,   500,   590,   348,   654,
     872,   873,   501,    61,   249,   349,    72,   317,    63,  -317,
     321,   462,   502,   503,   616,   504,   505,   506,  -410,   347,
     352,     8,     9,    71,   347,   825,   585,   515,   338,   827,
     347,    55,   487,     1,   621,   112,   496,  -581,   347,   645,
     510,    71,   403,  -387,   100,   462,   594,   350,     8,     9,
    -229,   372,   350,   392,   393,   919,   394,   395,   396,   921,
    -229,  -388,   655,   558,   264,   129,   350,    54,  -322,   347,
       8,     9,  -323,   435,   548,   336,    99,   141,   250,   245,
     133,   859,    14,   356,   462,   569,   359,   433,   434,  -550,
     249,   570,   185,  -232,   397,   300,  -233,   350,   252,  -230,
      54,    33,    54,  -232,   401,  -523,  -233,    31,  -498,  -230,
    -234,  -235,   555,   132,  -524,   347,    34,   573,   574,   316,
    -234,  -235,   320,   426,   264,   429,   430,  -499,   787,  -427,
     330,   331,   619,   333,   463,   464,  -429,   575,   869,   245,
     516,   860,  -581,   595,   337,   343,   345,   445,   826,    55,
     249,  -581,   826,  -537,   751,   353,   345,   622,   756,   468,
     513,  -538,   870,   517,   250,  -581,   473,   519,   463,   391,
     262,   586,   576,  -229,    60,   499,     1,   993,   920,   404,
     331,   678,   500,  -581,   252,    98,   680,   549,   501,   419,
    -581,  1003,   398,   686,  -581,   560,   560,   560,   502,   503,
     682,   504,   505,   506,   733,     8,     9,   463,   439,   436,
     617,  -581,   588,   891,   264,   857,  -232,   752,    56,  -233,
     690,   757,  -230,   338,   250,   549,   698,  -581,   737,   245,
    -581,     8,     9,  -234,  -235,   592,  -581,   593,   263,   349,
     249,   300,   338,   745,   252,   577,   578,   854,    59,  -581,
    -581,  -581,     8,     9,   498,   338,   262,   852,  -581,     8,
       9,   264,   446,   447,   448,   449,   450,   451,   452,   453,
     338,   436,   454,   455,   129,  -581,   245,   410,   472,   474,
     475,   483,   347,  -581,   338,   488,   338,   249,   125,   497,
     823,  -227,   518,    34,   516,   126,   828,   114,   514,   516,
     347,   514,   520,   345,   333,   333,   440,    34,   347,   737,
     559,   347,   746,   549,   250,    32,   262,   347,     8,     9,
     831,   858,   437,   111,   263,    86,   266,   411,   559,   758,
     600,   300,   347,   629,   252,   412,   350,   552,   138,   350,
     438,   853,   347,   338,   115,   350,   339,   953,   347,   123,
     630,   712,   713,   639,   939,   139,   759,    87,    64,   136,
     559,   250,   768,    65,   400,   340,   125,    66,   338,   856,
     350,     8,     9,   514,   107,   514,   350,   597,   300,   607,
     865,   252,    67,   560,   263,   766,    88,    89,    90,    91,
      92,    93,    94,   626,  -316,   887,   336,   636,   338,   336,
     673,   300,   866,  -327,  -227,  -327,   262,   338,    68,   560,
     566,   867,   266,   553,   903,   980,   144,   567,   568,   707,
     709,   710,   711,   711,   711,   711,   711,   711,    34,   338,
     711,   711,   711,   711,   711,   711,   711,   711,   338,   711,
     498,   338,   338,    35,   145,   954,   955,   887,   767,   125,
     887,   684,   566,   262,   685,   140,   355,   488,   601,   623,
     568,   125,   338,   893,   338,    36,   146,   338,   358,   149,
     182,   894,   266,   240,   263,   497,   709,   125,    37,   659,
     301,   660,    38,    39,   924,   307,   661,   514,    40,   947,
      41,    42,    43,    44,   906,   308,   948,    45,   102,   103,
     104,    46,     8,     9,   936,   105,   106,   937,   182,   152,
     107,   182,   309,    47,   835,   836,    48,   888,    49,   889,
     436,   263,   310,   892,   699,   762,   763,   982,   983,   716,
     717,   311,   158,   722,   723,   159,   849,   850,   579,   580,
     991,   992,   116,   117,   118,   719,   721,   376,   312,   119,
     120,   442,   443,   444,  1001,  1002,   817,   182,   818,   819,
     167,   820,   266,   962,   963,   168,   304,   182,   305,   314,
     428,   838,   125,   795,   950,   951,   761,   657,   125,   734,
     169,   318,   170,   657,   657,   750,   772,   657,   664,   779,
     801,   878,   322,   880,   171,   172,   264,   325,   173,   910,
     911,   264,   264,   664,   657,   806,   840,   326,   657,   266,
     844,   245,   987,   664,   334,   975,   245,   245,   335,   240,
     808,   809,   249,   264,   264,   571,   572,   249,   249,   347,
     333,   361,   333,   984,   985,   483,   724,   725,   245,   245,
     333,   714,   715,   185,   399,   458,   988,   989,   932,   249,
     249,   935,   957,   958,   333,   333,   405,   333,   699,   838,
     407,   838,   805,   408,   409,   838,   413,   414,   811,   814,
     423,   424,   336,   427,   125,   875,   431,   432,   264,   437,
     264,   438,   182,   182,   441,   547,   457,   459,   460,   461,
     471,   512,   523,   245,   550,   245,   250,   554,   556,   965,
     966,   250,   250,   557,   249,   400,   249,   428,   581,   240,
     582,   583,   584,   587,   589,   516,   252,   618,   608,   611,
     624,   252,   252,   250,   250,   628,   549,   553,   642,   643,
     981,   848,   644,   652,   264,   264,   656,   657,   264,   663,
     664,   666,   667,   252,   252,   668,   671,   665,   676,   245,
     245,   264,   669,   245,   674,   182,   240,   182,   677,   333,
     249,   249,   518,   861,   249,   687,   245,   925,   925,   691,
     703,   182,   705,   706,   735,   182,   736,   249,   250,   240,
     250,   741,   744,   743,   748,   749,   264,   264,   262,   742,
     747,   760,   769,   262,   262,   770,   264,   771,   252,   777,
     252,   245,   245,   776,   778,   786,   783,   792,   785,   796,
     799,   245,   249,   249,   802,   262,   262,   264,   901,   901,
     807,   810,   249,   338,   821,   175,   822,   824,   833,   839,
     913,   915,   245,   841,   250,   250,   843,   842,   250,   834,
     845,   968,   969,   249,   868,   809,   876,   808,   737,   881,
     882,   250,   978,   979,   252,   252,   263,   619,   252,   904,
     905,   263,   263,   327,   885,   908,   332,   907,   300,   909,
     262,   252,   262,   912,   917,   390,   918,   928,   933,   934,
     940,   911,   941,   263,   263,   945,   250,   250,   946,   952,
     333,   964,   910,   960,   961,   967,   250,   421,   971,   970,
     972,   421,   976,   977,   990,   999,   252,   252,   986,   998,
     994,  1000,   402,   300,   851,   178,   252,   250,   239,   973,
     775,   417,   416,   182,   182,   418,   262,   262,   313,   732,
     262,   704,   726,   728,   727,   731,   943,   252,   263,   729,
     263,   689,   679,   262,   266,   942,   764,   931,   902,   266,
     266,   944,   765,   178,   879,   740,   178,   425,   995,   996,
     306,   973,   344,    30,    17,    69,    70,   143,   124,   784,
     803,   266,   266,   816,   927,   813,   916,   914,   262,   262,
     672,   997,   675,    58,   788,   469,   658,     0,   262,     0,
       0,     0,   375,     0,   263,   263,     0,     0,   263,     0,
       0,     0,   178,     0,     0,     0,     0,     0,   182,   262,
     182,   263,   178,     0,     0,     0,     0,     0,   182,     0,
       0,   182,     0,     0,     0,     0,   266,     0,   266,     0,
       0,     0,   182,   182,     0,   182,     0,   521,   522,     0,
     182,     0,     0,     0,     0,     0,   263,   263,     0,     0,
       0,     0,     0,     0,     0,     0,   263,     0,     0,     0,
       0,     0,     0,     0,   239,     0,    35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   591,   263,     0,     0,
       0,     0,   266,   266,     0,     0,   266,   609,    36,   612,
     615,     0,     0,     0,     0,     0,     8,     9,     0,   266,
     627,    37,     0,     0,   637,    38,    39,   638,   612,   847,
     596,    40,   606,    41,    42,    43,    44,   651,     0,     0,
      45,     0,     0,     0,    46,     0,   625,   178,   178,     0,
     635,     0,   653,     0,   266,   266,    47,   182,   651,    48,
       0,    49,     0,   157,   266,   158,     0,     0,   159,     0,
       0,     0,     0,   161,   239,     0,     0,   162,     0,     0,
       0,     0,     0,     0,     0,   266,   165,     0,     0,     0,
       0,     0,     0,   167,     0,     0,     0,     0,   168,     0,
       0,     0,   138,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   169,   609,   170,     0,     0,     0,   139,
     178,   239,   178,     0,     0,     0,     0,   171,   172,     0,
       0,   173,     0,     0,   232,     0,   178,     0,     0,     0,
     178,     0,     0,     0,   239,     0,     0,     0,     0,   693,
       0,   598,     0,   415,     0,     8,     9,   192,     0,   193,
     194,   195,     0,   196,   197,   198,   240,     0,   599,   199,
       0,     0,     0,   200,     0,     0,     0,   201,  -265,     0,
       0,   730,   203,     0,   204,     0,     0,     0,   182,     0,
     205,     0,     0,     0,     0,     0,     0,     0,   718,   720,
       0,   206,   157,     0,   158,     0,     0,   159,   362,     0,
       0,   240,   161,   651,     0,   693,   162,   651,     0,     0,
       0,     0,   212,     0,     0,   165,     0,     0,     0,     0,
       0,     0,   167,     0,     0,     0,     0,   168,     0,   219,
     220,   138,   774,   774,     0,     0,     0,     0,     0,     0,
       0,     0,   169,   780,   170,   222,     0,     0,   139,     0,
       0,   224,     0,   226,     0,   228,   171,   172,   363,     0,
     173,     0,     0,   232,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   781,     0,   782,     0,     0,   178,   178,
       0,     0,     0,   791,     0,     0,   175,     0,     0,     0,
       0,    35,     0,     0,     0,     0,     0,   797,   798,   524,
     800,     0,   234,   235,     0,   804,   525,   526,     0,   527,
     528,   529,     0,    36,   530,   531,   532,   533,   534,     0,
       0,     0,   612,     0,   535,     0,    37,     0,   612,     0,
     832,    39,     0,     0,     0,     0,    40,     0,    41,    42,
      43,    44,     0,     0,     0,    45,     0,     0,     0,    46,
       0,     0,     0,     0,     0,     0,   536,     0,     0,     0,
       0,    47,   651,   178,    48,   178,    49,     0,     0,     0,
       0,     0,   609,   178,     0,     0,   178,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   178,   178,     0,
     178,     0,     0,     0,     0,   178,     0,   537,     0,     0,
       0,     0,   855,     0,     0,     0,     0,   874,     0,     0,
     877,     0,     0,     0,     0,     0,     0,     0,     0,   883,
     884,     0,     0,     0,     0,     0,     0,     0,   693,     0,
       0,     0,     0,     0,     0,     0,   538,   539,     0,     0,
     540,   541,   542,   543,     0,     0,   544,   545,     0,     0,
       0,     0,     0,     0,     0,   922,   923,     0,   191,     9,
     192,     0,   193,   194,   195,     0,   196,   197,   198,     0,
       0,     0,   199,     0,   125,     0,   200,     0,     0,   609,
     201,   202,     0,     0,     0,   203,     0,   204,     0,     0,
       0,     0,   178,   205,   651,   651,     0,     0,     0,     0,
       0,     0,     0,     0,   206,   157,   207,   158,   893,     0,
     159,   208,     0,   209,   210,   161,   894,     0,   211,   162,
       0,     0,     0,     0,     0,   212,     0,   213,   165,   214,
     215,   216,   217,   959,     0,   167,     0,     0,     0,   218,
     168,     0,   219,   220,   138,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   221,   169,     0,   170,   222,     0,
       0,   139,     0,   223,   224,   225,   226,   227,   228,   171,
     172,   229,   230,   173,   231,     0,   232,     0,   233,     0,
       0,     0,   191,     9,   192,     0,   193,   194,   195,     0,
     196,   197,   198,     0,     0,     0,   199,     0,   125,     0,
     200,   239,     0,     0,   201,   202,     0,     0,     0,   203,
       0,   204,     0,     0,     0,   234,   235,   205,     0,     0,
       0,     0,     0,   178,     0,     0,     0,     0,   206,   157,
     207,   158,     0,     0,   159,   208,     0,   209,   210,   161,
       0,     0,   211,   162,     0,     0,   239,     0,     0,   212,
       0,   213,   165,   214,   215,   216,   217,     0,     0,   167,
       0,     0,     0,   218,   168,     0,   219,   220,   138,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   221,   169,
       0,   170,   222,     0,     0,   139,     0,   223,   224,   225,
     226,   227,   228,   171,   172,   229,   230,   173,   231,     0,
     232,     0,   233,     8,     9,   192,     0,   193,   194,   195,
       0,   196,   197,   198,     0,     0,     0,   199,     0,   125,
       0,   200,     0,     0,     0,   201,   202,     0,     0,     0,
     203,     0,   204,     0,     0,     0,     0,     0,   205,   234,
     235,     0,     0,     0,     0,     0,     0,     0,     0,   206,
     157,   207,   158,     0,     0,   159,   208,     0,     0,   210,
     161,     0,     0,   211,   162,     0,     0,     0,     0,     0,
     212,     0,   213,   165,   214,   215,   216,   217,     0,     0,
     167,     0,     0,     0,   218,   168,     0,   219,   220,   138,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   221,
     169,     0,   170,   222,     0,     0,   139,     0,   223,   224,
     225,   226,   227,   228,   171,   172,   229,   230,   173,   231,
       8,     9,   192,   233,   193,   194,   195,     0,   196,   197,
     198,     0,     0,     0,   199,   890,   619,     0,   200,     0,
       0,     0,   201,     0,     0,     0,     0,   203,     0,   204,
       0,     0,     0,     0,     0,   205,     0,     0,     0,     0,
     234,   235,     0,     0,     0,     0,   206,   157,     0,   158,
       0,     0,   159,   362,     0,     0,     0,   161,     0,     0,
       0,   162,     0,     0,     0,     0,     0,   212,     0,     0,
     165,     0,     0,     0,     0,     0,     0,   167,     0,     0,
       0,     0,   168,     0,   219,   220,   138,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   169,     0,   170,
     222,   692,     0,   139,     0,     0,   224,     0,   226,     0,
     228,   171,   172,   363,     0,   173,     8,     9,   192,     0,
     193,   194,   195,     0,   196,   197,   198,     0,     0,     0,
     199,     0,     0,     0,   200,     0,     0,     0,   201,     0,
       0,     0,     0,   203,     0,   204,     0,     0,     0,     0,
       0,   205,     0,     0,     0,     0,     0,   234,   235,     0,
       0,     0,   206,   157,     0,   158,     0,     0,   159,   362,
       0,     0,     0,   161,     0,     0,     0,   162,     0,     0,
       0,     0,     0,   212,     0,     0,   165,     0,     0,     0,
       0,     0,     0,   167,     0,     0,     0,     0,   168,     0,
     219,   220,   138,     0,   646,     0,     0,     0,     0,     0,
       0,   647,     0,   169,     0,   170,   222,     0,     0,   139,
       0,     0,   224,     0,   226,     0,   228,   171,   172,   363,
       0,   173,     8,     9,   192,     0,   193,   194,   195,     0,
     196,   197,   198,     0,     0,     0,   199,     0,   619,     0,
     200,     0,     0,     0,   201,     0,     0,     0,     0,   203,
       0,   204,     0,     0,     0,     0,     0,   205,     0,     0,
       0,     0,     0,   234,   235,     0,     0,     0,   206,   157,
       0,   158,     0,     0,   159,   362,     0,     0,     0,   161,
       0,     0,     0,   162,     0,     0,     0,     0,     0,   212,
       0,     0,   165,     0,     0,     0,     0,     0,     0,   167,
       0,     0,     0,     0,   168,     0,   219,   220,   138,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   169,
       0,   170,   222,   692,     0,   139,     0,     0,   224,     0,
     226,     0,   228,   171,   172,   363,     0,   173,     8,     9,
     192,     0,   193,   194,   195,     0,   196,   197,   198,     0,
       0,     0,   199,     0,     0,     0,   200,     0,     0,     0,
     201,     0,     0,     0,     0,   203,     0,   204,     0,     0,
       0,     0,     0,   205,     0,     0,     0,     0,     0,   234,
     235,     0,     0,     0,   206,   157,     0,   158,     0,     0,
     159,   362,     0,     0,     0,   161,     0,     0,     0,   162,
       0,     0,     0,     0,     0,   212,     0,     0,   165,     0,
       0,     0,     0,     0,     0,   167,     0,     0,     0,     0,
     168,     0,   219,   220,   138,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   169,     0,   170,   222,     0,
       0,   139,     0,     0,   224,     0,   226,     0,   228,   171,
     172,   363,     0,   173,     0,     0,   374,     8,     9,   192,
       0,   193,   194,   195,     0,   196,   197,   198,     0,     0,
       0,   199,     0,     0,     0,   200,     0,     0,     0,   201,
       0,     0,     0,     0,   203,     0,   204,     0,     0,     0,
       0,     0,   205,     0,     0,   234,   235,     0,     0,     0,
       0,     0,     0,   206,   157,     0,   158,     0,     0,   159,
     362,     0,     0,     0,   161,     0,     0,     0,   162,     0,
       0,     0,     0,     0,   212,     0,     0,   165,     0,     0,
       0,     0,     0,     0,   167,     0,     0,     0,     0,   168,
       0,   219,   220,   138,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   169,     0,   170,   222,     0,     0,
     139,     0,     0,   224,     0,   226,     0,   228,   171,   172,
     363,     0,   173,     0,     0,   232,     8,     9,   192,     0,
     193,   194,   195,     0,   196,   197,   198,     0,     0,   708,
     199,     0,     0,     0,   200,     0,     0,     0,   201,     0,
       0,     0,     0,   203,     0,   204,     0,     0,     0,     0,
       0,   205,     0,     0,   234,   235,     0,     0,     0,     0,
       0,     0,   206,   157,     0,   158,     0,     0,   159,   362,
       0,     0,     0,   161,     0,     0,     0,   162,     0,     0,
       0,     0,     0,   212,     0,     0,   165,     0,     0,     0,
       0,     0,     0,   167,     0,     0,     0,     0,   168,     0,
     219,   220,   138,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   169,     0,   170,   222,     0,     0,   139,
       0,     0,   224,     0,   226,     0,   228,   171,   172,   363,
       0,   173,     8,     9,   192,     0,   193,   194,   195,     0,
     196,   197,   198,     0,   938,     0,   199,     0,     0,     0,
     200,     0,     0,     0,   201,     0,     0,     0,     0,   203,
       0,   204,     0,     0,     0,     0,     0,   205,     0,     0,
       0,     0,     0,   234,   235,     0,     0,     0,   206,   157,
       0,   158,     0,     0,   159,   362,     0,     0,     0,   161,
       0,     0,     0,   162,     0,     0,     0,     0,     0,   212,
       0,     0,   165,     0,     0,     0,     0,     0,     0,   167,
       0,     0,     0,     0,   168,     0,   219,   220,   138,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   169,
       0,   170,   222,     0,     0,   139,     0,     0,   224,     0,
     226,     0,   228,   171,   172,   363,     0,   173,     8,     9,
     192,     0,   193,   194,   195,     0,   196,   197,   198,     0,
       0,     0,   199,     0,     0,     0,   200,     0,     0,     0,
     201,     0,     0,     0,     0,   203,     0,   204,     0,     0,
       0,     0,     0,   205,     0,     0,     0,     0,     0,   234,
     235,     0,     0,     0,   206,   157,     0,   158,     0,     0,
     159,   362,     0,     0,     0,   161,     0,     0,     0,   162,
       0,     0,     0,     0,     0,   212,     0,     0,   165,     0,
       0,   155,     9,     0,     0,   167,     0,     0,     0,     0,
     168,   156,   219,   220,   138,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   169,     0,   170,   222,     0,
       0,   139,     0,     0,   224,     0,   226,     0,   228,   171,
     172,   363,     0,   173,     0,     0,     0,     0,   157,     0,
     158,     0,     0,   159,     0,    64,   160,     0,   161,     0,
      65,     0,   162,     0,    66,   163,   164,     0,   155,     9,
       0,   165,     0,     0,     0,     0,   166,     0,   167,    67,
       0,     0,     0,   168,     0,   234,   235,   138,     0,     0,
       0,     0,     8,     9,     0,     0,     0,     0,   169,     0,
     170,     0,     0,     0,   139,    68,     0,     0,     0,     0,
       0,     0,   171,   172,     0,   157,   173,   158,     0,   174,
     159,     0,    64,   160,     0,   161,     0,    65,     0,   162,
       0,    66,   163,   164,     0,     8,     9,     0,   165,   157,
       0,   158,     0,   166,   159,   167,    67,     0,     0,   161,
     168,     0,     0,   162,   138,     0,   789,     0,     0,   605,
       9,     0,   165,     0,     0,   169,     0,   170,     0,   167,
       0,   139,    68,     0,   168,     0,     0,     0,   138,   171,
     172,     0,   157,   173,   158,     0,   174,   159,     0,   169,
       0,   170,   161,     0,     0,   139,   162,     0,     0,     0,
       0,     0,     0,   171,   172,   165,   157,   173,   158,     0,
     790,   159,   167,     0,     0,     0,   161,   168,     0,     0,
     162,   138,     0,     0,     0,     0,     8,     9,     0,   165,
       0,     0,   169,     0,   170,     0,   167,     0,   139,     0,
       0,   168,     0,     0,     0,   138,   171,   172,     0,     0,
     173,     0,     0,   232,     0,     0,   169,     0,   170,     0,
       0,     0,   139,     0,     0,     0,     0,     0,     0,     0,
     171,   172,     0,   157,   173,   158,     0,   232,   159,     0,
       0,     0,     0,   161,     0,     0,     0,   162,     0,     0,
       0,     0,     0,     0,     0,     0,   165,     0,     0,     0,
       0,     0,     0,   167,     0,     8,     9,   192,   168,   193,
     194,   195,   138,   196,   197,   198,     0,     0,     0,   199,
       0,     0,     0,   169,     0,   170,     0,   201,     0,   139,
       0,     0,     0,     0,     0,     0,     0,   171,   172,     0,
       0,   173,     0,     0,   634,     0,     0,     0,     0,     0,
       0,   206,   157,     0,   158,     0,     0,   159,   362,     0,
       0,     0,   161,     0,     0,     0,   162,     0,     0,     0,
       0,     0,   212,     0,     0,   165,     0,     0,     0,     0,
       0,     0,   167,     0,     0,     0,     0,   168,     0,   219,
     220,   138,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   169,     0,   170,   222,     0,     0,   139,     0,
       0,   224,     0,   226,     0,   228,   171,   172,   363,     0,
     173
};

static const short int yycheck[] =
{
       3,     1,     1,   271,    71,    79,   418,   211,   125,   518,
     343,   199,   312,    12,    17,   408,   432,   547,    56,   322,
     619,   375,   376,   125,   554,   325,   322,   398,   177,   462,
     809,   810,   322,    33,   125,   184,    74,   149,    38,     0,
     152,    19,   322,   322,   415,   322,   322,   322,    18,     4,
     185,     5,     6,    56,     4,    18,    16,    28,    32,    18,
       4,    17,   315,   121,    19,    65,   319,   142,     4,   440,
     323,    74,   209,    20,    63,    19,    28,    32,     5,     6,
      18,   198,    32,   200,   201,    18,   203,   204,   205,   868,
      28,    20,   463,   361,   211,    95,    32,   100,    20,     4,
       5,     6,    20,   238,    28,    32,    21,   107,   125,   211,
      99,    51,     0,   187,    19,    34,   190,   234,   235,    20,
     211,    40,   122,    18,    44,   125,    18,    32,   125,    18,
     133,    29,   135,    28,   208,    20,    28,    28,    20,    28,
      18,    18,    28,    17,    20,     4,    44,    30,    31,   149,
      28,    28,   152,   227,   271,   229,   230,    20,    20,    20,
     160,   160,    21,   163,   142,   300,    20,    50,   142,   271,
     141,   111,   142,   125,   174,   175,   175,    29,   141,   135,
     271,   142,   141,    20,   617,   185,   185,   142,   621,   143,
     327,    20,   142,   330,   211,   142,   308,   332,   142,   199,
     125,   161,    85,   141,    44,   508,   121,   986,   141,   209,
     209,    28,   508,   142,   211,    28,    28,   141,   508,   219,
     142,  1000,   142,   523,   142,   374,   375,   376,   508,   508,
      28,   508,   508,   508,   588,     5,     6,   142,    44,   238,
      19,   142,   391,   842,   361,     5,   141,   618,    21,   141,
     550,   622,   141,    32,   271,   141,   556,   142,     5,   361,
     142,     5,     6,   141,   141,   402,   142,   404,   125,   418,
     361,   271,    32,     5,   271,   158,   159,   786,   142,   142,
     142,   142,     5,     6,   322,    32,   211,     5,   142,     5,
       6,   408,   144,   145,   146,   147,   148,   149,   150,   151,
      32,   300,   154,   155,   304,   142,   408,     5,   308,   309,
     310,   314,     4,   142,    32,   318,    32,   408,    21,   322,
     736,    28,    29,    44,   141,    28,   742,     5,   327,   141,
       4,   330,   332,   332,   334,   335,   142,    44,     4,     5,
      32,     4,     5,   141,   361,   344,   271,     4,     5,     6,
     743,   111,    44,   123,   211,    69,   125,    55,    32,    18,
     408,   361,     4,    56,   361,    63,    32,   111,    91,    32,
      44,     5,     4,    32,     5,    32,    92,   907,     4,    20,
      73,   569,   570,   431,   893,   108,    18,   101,    59,    28,
      32,   408,    18,    64,    19,   111,    21,    68,    32,     5,
      32,     5,     6,   402,    17,   404,    32,   407,   408,   409,
       5,   408,    83,   562,   271,    18,   130,   131,   132,   133,
     134,   135,   136,   423,     0,   837,    32,   427,    32,    32,
     497,   431,     5,    19,   141,    21,   361,    32,   109,   588,
      25,     5,   211,    29,     5,     5,     5,    32,    33,   566,
     567,   568,   569,   570,   571,   572,   573,   574,    44,    32,
     577,   578,   579,   580,   581,   582,   583,   584,    32,   586,
     508,    32,    32,    49,     5,   908,   909,   889,    18,    21,
     892,    19,    25,   408,    19,   107,    28,   490,   881,    32,
      33,    21,    32,    55,    32,    71,    17,    32,    28,    17,
     122,    63,   271,   125,   361,   508,   623,    21,    84,    93,
      19,    95,    88,    89,    28,    20,   100,   516,    94,    21,
      96,    97,    98,    99,   857,   141,    28,   103,     5,     6,
       7,   107,     5,     6,   889,    12,    13,   892,   160,    17,
      17,   163,   141,   119,   748,   749,   122,   838,   124,   840,
     549,   408,   141,   844,   557,   629,   630,   971,   972,   573,
     574,    19,    54,   577,   578,    57,   770,   771,   156,   157,
     984,   985,     5,     6,     7,   575,   576,   199,    19,    12,
      13,   162,   163,   164,   998,   999,   703,   209,   705,   706,
      82,   708,   361,   926,   927,    87,   141,   219,   143,    21,
      19,   750,    21,   677,   904,   905,    19,   141,    21,   143,
     102,    21,   104,   141,   141,   143,   143,   141,   141,   143,
     143,   825,    21,   827,   116,   117,   743,    19,   120,   139,
     140,   748,   749,   141,   141,   143,   143,     5,   141,   408,
     143,   743,   975,   141,    92,   143,   748,   749,    92,   271,
     137,   138,   743,   770,   771,   152,   153,   748,   749,     4,
     660,    17,   662,   137,   138,   668,   579,   580,   770,   771,
     670,   571,   572,   673,    28,   943,   978,   979,   882,   770,
     771,   885,   911,   912,   684,   685,    28,   687,   691,   838,
      19,   840,   692,    19,    19,   844,    19,    19,   701,   702,
      19,    19,    32,    19,    21,   822,    19,    19,   825,    44,
     827,    44,   334,   335,    19,   142,    20,    28,    28,    28,
      20,    19,    19,   825,    19,   827,   743,   142,    19,   933,
     934,   748,   749,    21,   825,    19,   827,    19,    23,   361,
      26,    22,   160,    18,     5,   141,   743,   142,    28,    28,
      28,   748,   749,   770,   771,    28,   141,    29,     5,     5,
     964,   761,     5,     5,   881,   882,    18,   141,   885,    18,
     141,     5,    20,   770,   771,   141,    20,    18,    18,   881,
     882,   898,    89,   885,    20,   407,   408,   409,    18,   789,
     881,   882,    29,   796,   885,    19,   898,   871,   872,    21,
      18,   423,    18,    18,    18,   427,    19,   898,   825,   431,
     827,    18,    81,   141,    18,    18,   933,   934,   743,    28,
      28,    18,    18,   748,   749,    18,   943,    18,   825,    18,
     827,   933,   934,   141,    18,    29,    28,    17,    28,    21,
      18,   943,   933,   934,    18,   770,   771,   964,   847,   848,
      18,    20,   943,    32,    17,   122,    18,    29,    81,    18,
     863,   864,   964,    20,   881,   882,    18,   141,   885,    81,
      21,   945,   946,   964,    20,   138,    18,   137,     5,    28,
      18,   898,   956,   957,   881,   882,   743,    21,   885,    19,
      19,   748,   749,   160,    67,    19,   163,   142,   898,    19,
     825,   898,   827,    20,    18,   199,    18,    28,    18,    18,
      17,   140,    20,   770,   771,    18,   933,   934,    18,    21,
     920,    18,   139,   143,   143,    17,   943,   221,    18,    20,
      18,   225,    18,    18,    18,   137,   933,   934,    20,   138,
      21,    20,   209,   943,   776,   122,   943,   964,   125,   952,
     647,   219,   219,   575,   576,   219,   881,   882,   146,   587,
     885,   562,   581,   583,   582,   586,   898,   964,   825,   584,
     827,   549,   516,   898,   743,   896,   631,   881,   848,   748,
     749,   898,   631,   160,   826,   597,   163,   225,   991,   992,
     133,   994,   175,     4,     3,    51,    51,   108,    74,   664,
     691,   770,   771,   702,   872,   701,   864,   863,   933,   934,
     490,   994,   508,    27,   668,   304,   468,    -1,   943,    -1,
      -1,    -1,   199,    -1,   881,   882,    -1,    -1,   885,    -1,
      -1,    -1,   209,    -1,    -1,    -1,    -1,    -1,   660,   964,
     662,   898,   219,    -1,    -1,    -1,    -1,    -1,   670,    -1,
      -1,   673,    -1,    -1,    -1,    -1,   825,    -1,   827,    -1,
      -1,    -1,   684,   685,    -1,   687,    -1,   334,   335,    -1,
     692,    -1,    -1,    -1,    -1,    -1,   933,   934,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   943,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   271,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   400,   964,    -1,    -1,
      -1,    -1,   881,   882,    -1,    -1,   885,   411,    71,   413,
     414,    -1,    -1,    -1,    -1,    -1,     5,     6,    -1,   898,
     424,    84,    -1,    -1,   428,    88,    89,   431,   432,   761,
     407,    94,   409,    96,    97,    98,    99,   441,    -1,    -1,
     103,    -1,    -1,    -1,   107,    -1,   423,   334,   335,    -1,
     427,    -1,   456,    -1,   933,   934,   119,   789,   462,   122,
      -1,   124,    -1,    52,   943,    54,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    62,   361,    -1,    -1,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   964,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    87,    -1,
      -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,   518,   104,    -1,    -1,    -1,   108,
     407,   408,   409,    -1,    -1,    -1,    -1,   116,   117,    -1,
      -1,   120,    -1,    -1,   123,    -1,   423,    -1,    -1,    -1,
     427,    -1,    -1,    -1,   431,    -1,    -1,    -1,    -1,   553,
      -1,     1,    -1,   142,    -1,     5,     6,     7,    -1,     9,
      10,    11,    -1,    13,    14,    15,   898,    -1,    18,    19,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    28,    -1,
      -1,   585,    32,    -1,    34,    -1,    -1,    -1,   920,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   575,   576,
      -1,    51,    52,    -1,    54,    -1,    -1,    57,    58,    -1,
      -1,   943,    62,   617,    -1,   619,    66,   621,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    87,    -1,    89,
      90,    91,   646,   647,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   102,   657,   104,   105,    -1,    -1,   108,    -1,
      -1,   111,    -1,   113,    -1,   115,   116,   117,   118,    -1,
     120,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   660,    -1,   662,    -1,    -1,   575,   576,
      -1,    -1,    -1,   670,    -1,    -1,   673,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,   684,   685,    15,
     687,    -1,   162,   163,    -1,   692,    22,    23,    -1,    25,
      26,    27,    -1,    71,    30,    31,    32,    33,    34,    -1,
      -1,    -1,   736,    -1,    40,    -1,    84,    -1,   742,    -1,
     744,    89,    -1,    -1,    -1,    -1,    94,    -1,    96,    97,
      98,    99,    -1,    -1,    -1,   103,    -1,    -1,    -1,   107,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      -1,   119,   776,   660,   122,   662,   124,    -1,    -1,    -1,
      -1,    -1,   786,   670,    -1,    -1,   673,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   684,   685,    -1,
     687,    -1,    -1,    -1,    -1,   692,    -1,   113,    -1,    -1,
      -1,    -1,   789,    -1,    -1,    -1,    -1,   821,    -1,    -1,
     824,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   833,
     834,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   842,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   152,   153,    -1,    -1,
     156,   157,   158,   159,    -1,    -1,   162,   163,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   869,   870,    -1,     5,     6,
       7,    -1,     9,    10,    11,    -1,    13,    14,    15,    -1,
      -1,    -1,    19,    -1,    21,    -1,    23,    -1,    -1,   893,
      27,    28,    -1,    -1,    -1,    32,    -1,    34,    -1,    -1,
      -1,    -1,   789,    40,   908,   909,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,    -1,
      57,    58,    -1,    60,    61,    62,    63,    -1,    65,    66,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    75,    76,
      77,    78,    79,   920,    -1,    82,    -1,    -1,    -1,    86,
      87,    -1,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   101,   102,    -1,   104,   105,    -1,
      -1,   108,    -1,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,    -1,   123,    -1,   125,    -1,
      -1,    -1,     5,     6,     7,    -1,     9,    10,    11,    -1,
      13,    14,    15,    -1,    -1,    -1,    19,    -1,    21,    -1,
      23,   898,    -1,    -1,    27,    28,    -1,    -1,    -1,    32,
      -1,    34,    -1,    -1,    -1,   162,   163,    40,    -1,    -1,
      -1,    -1,    -1,   920,    -1,    -1,    -1,    -1,    51,    52,
      53,    54,    -1,    -1,    57,    58,    -1,    60,    61,    62,
      -1,    -1,    65,    66,    -1,    -1,   943,    -1,    -1,    72,
      -1,    74,    75,    76,    77,    78,    79,    -1,    -1,    82,
      -1,    -1,    -1,    86,    87,    -1,    89,    90,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,   102,
      -1,   104,   105,    -1,    -1,   108,    -1,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,    -1,
     123,    -1,   125,     5,     6,     7,    -1,     9,    10,    11,
      -1,    13,    14,    15,    -1,    -1,    -1,    19,    -1,    21,
      -1,    23,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    40,   162,
     163,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      52,    53,    54,    -1,    -1,    57,    58,    -1,    -1,    61,
      62,    -1,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    74,    75,    76,    77,    78,    79,    -1,    -1,
      82,    -1,    -1,    -1,    86,    87,    -1,    89,    90,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,
     102,    -1,   104,   105,    -1,    -1,   108,    -1,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
       5,     6,     7,   125,     9,    10,    11,    -1,    13,    14,
      15,    -1,    -1,    -1,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
     162,   163,    -1,    -1,    -1,    -1,    51,    52,    -1,    54,
      -1,    -1,    57,    58,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    87,    -1,    89,    90,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,   104,
     105,   106,    -1,   108,    -1,    -1,   111,    -1,   113,    -1,
     115,   116,   117,   118,    -1,   120,     5,     6,     7,    -1,
       9,    10,    11,    -1,    13,    14,    15,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    32,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,   162,   163,    -1,
      -1,    -1,    51,    52,    -1,    54,    -1,    -1,    57,    58,
      -1,    -1,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    87,    -1,
      89,    90,    91,    -1,    93,    -1,    -1,    -1,    -1,    -1,
      -1,   100,    -1,   102,    -1,   104,   105,    -1,    -1,   108,
      -1,    -1,   111,    -1,   113,    -1,   115,   116,   117,   118,
      -1,   120,     5,     6,     7,    -1,     9,    10,    11,    -1,
      13,    14,    15,    -1,    -1,    -1,    19,    -1,    21,    -1,
      23,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,   162,   163,    -1,    -1,    -1,    51,    52,
      -1,    54,    -1,    -1,    57,    58,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    87,    -1,    89,    90,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,
      -1,   104,   105,   106,    -1,   108,    -1,    -1,   111,    -1,
     113,    -1,   115,   116,   117,   118,    -1,   120,     5,     6,
       7,    -1,     9,    10,    11,    -1,    13,    14,    15,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    32,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,   162,
     163,    -1,    -1,    -1,    51,    52,    -1,    54,    -1,    -1,
      57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      87,    -1,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   102,    -1,   104,   105,    -1,
      -1,   108,    -1,    -1,   111,    -1,   113,    -1,   115,   116,
     117,   118,    -1,   120,    -1,    -1,   123,     5,     6,     7,
      -1,     9,    10,    11,    -1,    13,    14,    15,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,   162,   163,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    52,    -1,    54,    -1,    -1,    57,
      58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    87,
      -1,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,    -1,   104,   105,    -1,    -1,
     108,    -1,    -1,   111,    -1,   113,    -1,   115,   116,   117,
     118,    -1,   120,    -1,    -1,   123,     5,     6,     7,    -1,
       9,    10,    11,    -1,    13,    14,    15,    -1,    -1,    18,
      19,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    32,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,   162,   163,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    54,    -1,    -1,    57,    58,
      -1,    -1,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    87,    -1,
      89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,    -1,   104,   105,    -1,    -1,   108,
      -1,    -1,   111,    -1,   113,    -1,   115,   116,   117,   118,
      -1,   120,     5,     6,     7,    -1,     9,    10,    11,    -1,
      13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,   162,   163,    -1,    -1,    -1,    51,    52,
      -1,    54,    -1,    -1,    57,    58,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    87,    -1,    89,    90,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,
      -1,   104,   105,    -1,    -1,   108,    -1,    -1,   111,    -1,
     113,    -1,   115,   116,   117,   118,    -1,   120,     5,     6,
       7,    -1,     9,    10,    11,    -1,    13,    14,    15,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    32,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,   162,
     163,    -1,    -1,    -1,    51,    52,    -1,    54,    -1,    -1,
      57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    75,    -1,
      -1,     5,     6,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      87,    15,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   102,    -1,   104,   105,    -1,
      -1,   108,    -1,    -1,   111,    -1,   113,    -1,   115,   116,
     117,   118,    -1,   120,    -1,    -1,    -1,    -1,    52,    -1,
      54,    -1,    -1,    57,    -1,    59,    60,    -1,    62,    -1,
      64,    -1,    66,    -1,    68,    69,    70,    -1,     5,     6,
      -1,    75,    -1,    -1,    -1,    -1,    80,    -1,    82,    83,
      -1,    -1,    -1,    87,    -1,   162,   163,    91,    -1,    -1,
      -1,    -1,     5,     6,    -1,    -1,    -1,    -1,   102,    -1,
     104,    -1,    -1,    -1,   108,   109,    -1,    -1,    -1,    -1,
      -1,    -1,   116,   117,    -1,    52,   120,    54,    -1,   123,
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
       0,   121,   293,   294,   302,   303,   304,   305,     5,     6,
     168,   299,   300,   313,     0,   295,   297,   306,   307,   308,
     315,   316,   364,   374,   388,   395,   396,   397,   398,   406,
     303,    28,   313,    29,    44,    49,    71,    84,    88,    89,
      94,    96,    97,    98,    99,   103,   107,   119,   122,   124,
     309,   310,   311,   312,   295,   307,    21,   320,   398,   142,
      44,   299,   313,   299,    59,    64,    68,    83,   109,   311,
     312,   295,   308,   321,   322,   323,   324,   325,   326,   327,
     336,   343,   347,   350,   355,   359,    69,   101,   130,   131,
     132,   133,   134,   135,   136,   399,   400,   401,    28,    21,
     294,   301,     5,     6,     7,    12,    13,    17,   314,   317,
     318,   123,   299,   329,     5,     5,     5,     6,     7,    12,
      13,   363,   309,    20,   323,    21,    28,   234,   330,   299,
     402,   403,    17,   294,   296,   306,    28,   298,    91,   108,
     176,   299,   319,   317,     5,     5,    17,   389,   390,    17,
     375,   376,    17,   365,   366,     5,    15,    52,    54,    57,
      60,    62,    66,    69,    70,    75,    80,    82,    87,   102,
     104,   116,   117,   120,   123,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   299,   348,   351,   352,   354,
     356,     5,     7,     9,    10,    11,    13,    14,    15,    19,
      23,    27,    28,    32,    34,    40,    51,    53,    58,    60,
      61,    65,    72,    74,    76,    77,    78,    79,    86,    89,
      90,   101,   105,   110,   111,   112,   113,   114,   115,   118,
     119,   121,   123,   125,   162,   163,   166,   167,   169,   172,
     176,   184,   185,   186,   187,   188,   190,   193,   194,   195,
     196,   197,   198,   199,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   227,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   245,   248,   249,   250,
     252,   253,   260,   261,   262,   263,   264,   272,   273,   274,
     275,   276,   277,   279,   280,   285,   286,   287,   288,   290,
     299,    19,   404,   405,   141,   143,   296,    20,   141,   141,
     141,    19,    19,   174,    21,   391,   299,   319,    21,   377,
     299,   319,    21,   362,   367,    19,     5,   169,   246,   247,
     299,   313,   169,   299,    92,    92,    32,   299,    32,    92,
     111,   241,   242,   299,   300,   313,   349,     4,   180,   180,
      32,   180,   241,   299,   410,    28,   234,   360,    28,   234,
     361,    17,    58,   118,   172,   176,   188,   195,   196,   198,
     209,   210,   211,   299,   123,   172,   176,   211,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     229,   299,   211,   211,   211,   211,   211,    44,   142,    28,
      19,   234,   169,   246,   299,    28,   233,    19,    19,    19,
       5,    55,    63,    19,    19,   142,   169,   170,   178,   299,
     216,   229,   278,    19,    19,   278,   234,    19,    19,   234,
     234,    19,    19,   211,   211,   241,   313,    44,    44,    44,
     142,    19,   162,   163,   164,    29,   144,   145,   146,   147,
     148,   149,   150,   151,   154,   155,   228,    20,   232,    28,
      28,    28,    19,   142,   241,   191,   192,   229,   143,   403,
     407,    20,   299,   319,   299,   299,   295,   328,   331,   332,
     333,   335,   328,   295,   392,   393,   394,   298,   295,   378,
     379,   380,   381,   383,   384,   386,   298,   295,   308,   324,
     325,   326,   336,   343,   347,   350,   355,   368,   369,   370,
     298,   328,    19,   246,   313,    28,   141,   246,    29,   241,
     299,   169,   169,    19,    15,    22,    23,    25,    26,    27,
      30,    31,    32,    33,    34,    40,    72,   113,   152,   153,
     156,   157,   158,   159,   162,   163,   353,   142,    28,   141,
      19,   410,   111,    29,   142,    28,    19,    21,   232,    32,
     180,   213,   214,   215,   213,   213,    25,    32,    33,    34,
      40,   152,   153,    30,    31,    50,    85,   158,   159,   156,
     157,    23,    26,    22,   160,    16,   161,    18,   180,     5,
     192,   229,   246,   246,    28,   125,   169,   299,     1,    18,
     240,   249,   265,   268,   271,     5,   169,   299,    28,   229,
     230,    28,   229,   231,   251,   229,   192,    19,   142,    21,
     371,    19,   142,    32,    28,   169,   299,   229,    28,    56,
      73,   281,   282,   284,   123,   169,   299,   229,   229,   240,
     289,   231,     5,     5,     5,   192,    93,   100,   182,   183,
     189,   229,     5,   229,   189,   192,    18,   141,   407,    93,
      95,   100,   334,    18,   141,    18,     5,    20,   141,    89,
     382,    20,   380,   309,    20,   370,    18,    18,    28,   247,
      28,   230,    28,   408,    19,    19,   328,    19,   331,   242,
     328,    21,   106,   229,   243,   244,   371,   331,   328,   295,
     337,   340,   341,    18,   215,    18,    18,   211,    18,   211,
     211,   211,   216,   216,   217,   217,   218,   218,   169,   299,
     169,   299,   218,   218,   219,   219,   220,   221,   222,   223,
     229,   224,   208,   213,   143,    18,    19,     5,   291,   292,
     291,    18,    28,   141,    81,     5,     5,    28,    18,    18,
     143,   189,   192,   243,   372,   373,   189,   192,    18,    18,
      18,    19,   234,   234,   282,   284,    18,    18,    18,    18,
      18,    18,   143,   181,   229,   181,   141,    18,    18,   143,
     229,   169,   169,    28,   332,    28,    29,    20,   394,    69,
     123,   169,    17,   357,   358,   234,    21,   169,   169,    18,
     169,   143,    18,   337,   169,   299,   143,    18,   137,   138,
      20,   295,   338,   341,   295,   339,   340,   211,   211,   211,
     211,    17,    18,   231,    29,    18,   141,    18,   231,   266,
     269,   249,   229,    81,    81,   233,   233,   179,   180,    18,
     143,    20,   141,    18,   143,    21,   254,   176,   299,   233,
     233,   183,     5,     5,   230,   169,     5,     5,   111,    51,
     111,   295,   344,   345,   346,     5,     5,     5,    20,   142,
     142,   411,   411,   411,   229,   211,    18,   229,   233,   292,
     233,    28,    18,   229,   229,    67,   200,   371,   179,   179,
      20,   243,   179,    55,    63,   255,   256,   257,   258,   259,
     283,   313,   283,     5,    19,    19,   410,   142,    19,    19,
     139,   140,    20,   295,   346,   295,   345,    18,    18,    18,
     141,   411,   229,   229,    28,   234,   342,   342,    28,   267,
     270,   271,   233,    18,    18,   233,   200,   200,    17,   230,
      17,    20,   257,   236,   259,    18,    18,    21,    28,   387,
     328,   328,    21,   331,   189,   189,   409,   409,   409,   169,
     143,   143,   410,   410,    18,   233,   233,    17,   234,   234,
      20,    18,    18,   295,   385,   143,    18,    18,   234,   234,
       5,   233,   387,   387,   137,   138,    20,   410,   408,   408,
      18,   387,   387,   411,    21,   295,   295,   385,   138,   137,
      20,   387,   387,   411
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
#line 261 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[-5].r.myLineNo),(yyvsp[-5].r.myColNo),"expecting type,you can\'t declare array without type","");;}
    break;

  case 214:
#line 470 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[-1].r.myLineNo),(yyvsp[-1].r.myColNo),"type error expected value of var ","");;}
    break;

  case 221:
#line 484 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"expecting local type,you can\'t declare constant without type","");;}
    break;

  case 226:
#line 493 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"expecting value,you can\'t declare constant without value","");;}
    break;

  case 227:
#line 494 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"expecting value,you can\'t declare constant without value","");;}
    break;

  case 239:
#line 514 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"expecting type without boolean expression","");;}
    break;

  case 240:
#line 518 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { cout << "\t\t if without else\n"; ;}
    break;

  case 241:
#line 519 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { cout << "\t\t if with else\n"; ;}
    break;

  case 253:
#line 546 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[-1].r.myLineNo),(yyvsp[-1].r.myColNo),"expecting type,you can\'t  without type case ('')","");;}
    break;

  case 261:
#line 564 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[-2].r.myLineNo),(yyvsp[-2].r.myColNo),"expecting type,you can\'t declare constant without while","");;}
    break;

  case 263:
#line 569 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[-2].r.myLineNo),(yyvsp[-2].r.myColNo),"expecting type,you can\'t in for","");;}
    break;

  case 278:
#line 600 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[-5].r.myLineNo),(yyvsp[-5].r.myColNo),"error type ","");;}
    break;

  case 317:
#line 684 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { cout << "TESTING" <<endl;;}
    break;

  case 332:
#line 722 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {cout<<"error in the open brackets ";;}
    break;

  case 350:
#line 768 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { cout << "\t\t Added modifier\n";;}
    break;

  case 351:
#line 769 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[-1].r.myLineNo),(yyvsp[-1].r.myColNo),"error modifer can't type more the modifier","");;}
    break;

  case 357:
#line 777 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	(yyval.am)=p->set_access_modifier(3);	;}
    break;

  case 358:
#line 778 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	(yyval.am)=p->set_access_modifier(2);	;}
    break;

  case 359:
#line 779 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	(yyval.am)=p->set_access_modifier(1);	;}
    break;

  case 366:
#line 788 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	(yyval.ds)=p->set_data_storage(1);		;}
    break;

  case 368:
#line 792 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_NOT_IDENTIFIER) ","");;}
    break;

  case 370:
#line 797 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_INTEGER) ","");;}
    break;

  case 371:
#line 798 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_INTEGER) ","");;}
    break;

  case 372:
#line 799 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_INTEGER) ","");;}
    break;

  case 373:
#line 800 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_NOT_IDENTIFIER) ","");;}
    break;

  case 374:
#line 806 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
													(yyval.clas) = p->finish_class_declaration((yyvsp[-1].clas), NULL, NULL);
											;}
    break;

  case 375:
#line 811 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
													(yyval.clas) = p->create_class((yyvsp[-1].r.str), NULL);
											;}
    break;

  case 376:
#line 814 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[-5].r.myLineNo),(yyvsp[-5].r.myColNo),"error not identifier (T_NOT_IDENTIFIER) ","");;}
    break;

  case 378:
#line 818 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { cout << "\t\t Added class base\n";;}
    break;

  case 386:
#line 835 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { cout << "\t\t Added class body\n"; ;}
    break;

  case 402:
#line 861 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[-5].r.myLineNo),(yyvsp[-5].r.myColNo),"error const ","can't const with out type ");;}
    break;

  case 406:
#line 869 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
												if (errorRec.errQ->isEmpty()) {
													(yyval.func) = p->finish_function_declaration((yyvsp[-1].func), NULL);
	           									}
											;}
    break;

  case 407:
#line 877 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
													(yyval.func) = p->create_function((yyvsp[-3].r.str), NULL, (yyval.am), (yyval.ds));
											;}
    break;

  case 408:
#line 881 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
													(yyval.func) = p->create_function((yyvsp[-3].r.str), NULL, (yyval.am), (yyval.ds));
											;}
    break;

  case 409:
#line 885 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
													(yyval.func) = p->create_function((yyvsp[-3].r.str), NULL, (yyval.am), (yyval.ds));
											;}
    break;

  case 419:
#line 910 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
																	(yyval.lp) = p->add_parameters((yyvsp[0].r.str),NULL);
																;}
    break;

  case 486:
#line 1056 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[-1].r.myLineNo),(yyvsp[-1].r.myColNo),"type error expected no struct body ","");;}
    break;

  case 488:
#line 1060 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"type error expected not id ","");;}
    break;

  case 489:
#line 1061 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_INTEGER) ","");;}
    break;

  case 490:
#line 1062 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_INTEGER) ","");;}
    break;

  case 491:
#line 1063 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_INTEGER) ","");;}
    break;

  case 517:
#line 1118 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { cout << "FINISHED INTERFACE WITH NO EERRORS." << endl ;}
    break;

  case 519:
#line 1122 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { cout << "\t\t Added interface base\n"; ;}
    break;

  case 522:
#line 1129 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { cout << "\t\t Added interface body"; ;}
    break;

  case 559:
#line 1223 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {cout << "\t\t added attribute\n";;}
    break;

  case 581:
#line 1274 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { 
		//lex_enter_attrib();
    ;}
    break;

  case 582:
#line 1279 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
		//lex_exit_attrib();
	;}
    break;

  case 583:
#line 1284 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
		//lex_enter_accessor();
    ;}
    break;

  case 584:
#line 1289 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
		//lex_exit_accessor();
	;}
    break;

  case 585:
#line 1294 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
		//lex_enter_getset();
	;}
    break;

  case 586:
#line 1299 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { 
		//lex_exit_getset();
	;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 3284 "yacc.cpp"

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


#line 1305 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"


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

