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
     T_LITERAL_REAL = 263,
     T_LITERAL_CHARACTER = 264,
     T_LITERAL_STRING = 265,
     T_LITERAL_FLOAT = 266,
     T_LITERAL_DOUBLE = 267,
     T_LITERAL_BOOLEAN = 268,
     T_TILDE = 269,
     T_QUESTION_MARK = 270,
     T_COLON = 271,
     T_CLOSE_PARENNTHESES = 272,
     T_OPEN_PARENNTHESES = 273,
     T_CLOSE_BRACKETS = 274,
     T_OPEN_BRACKETS = 275,
     T_OR = 276,
     T_AND = 277,
     T_HASH = 278,
     T_MOD = 279,
     T_XOR = 280,
     T_NOT = 281,
     T_SEMICOLON = 282,
     T_EQUAL = 283,
     T_BIGGER = 284,
     T_SMALLER = 285,
     T_MULTIPLY = 286,
     T_DEVIDE = 287,
     T_MINUS = 288,
     T_SPACE = 289,
     T_BACKSLASH_SINGLE_COTATION = 290,
     T_BACKSLASH_R = 291,
     T_DOUBLE_BACKSLASH = 292,
     T_BACKSLASH_A = 293,
     T_BACKSLASH_PLUS = 294,
     T_BACKSLASH_V = 295,
     T_BACKSLASH_F = 296,
     T_STRING_END = 297,
     T_DOT = 298,
     T_TAB = 299,
     T_BACKSPACE = 300,
     T_LNUMBER = 301,
     T_VALUE = 302,
     T_ABSTRACT = 303,
     T_AS = 304,
     T_BASE = 305,
     T_BOOL = 306,
     T_BREAK = 307,
     T_BYTE = 308,
     T_CASE = 309,
     T_CATCH = 310,
     T_CHAR = 311,
     T_CHECKED = 312,
     T_CLASS = 313,
     T_CONST = 314,
     T_CONTINUE = 315,
     T_DECIMAL = 316,
     T_DEFAULT = 317,
     T_DELEGATE = 318,
     T_DO = 319,
     T_DOUBLE = 320,
     T_ELSE = 321,
     T_ENUM = 322,
     T_EVENT = 323,
     T_EXPLICIT = 324,
     T_EXTERN = 325,
     T_FALSE = 326,
     T_FINALLY = 327,
     T_FIXED = 328,
     T_FLOAT = 329,
     T_FOR = 330,
     T_FOREACH = 331,
     T_GOTO = 332,
     T_IF = 333,
     T_IMPLICIT = 334,
     T_IN = 335,
     T_INT = 336,
     T_INTERFACE = 337,
     T_INTERNAL = 338,
     T_IS = 339,
     T_LOCK = 340,
     T_LONG = 341,
     T_NAMESPACE = 342,
     T_NEW = 343,
     T_NULL_LITERAL = 344,
     T_OBJECT = 345,
     T_OPERATOR = 346,
     T_OUT = 347,
     T_OVERRIDE = 348,
     T_PARAMS = 349,
     T_PRIVATE = 350,
     T_PROTECTED = 351,
     T_PUBLIC = 352,
     T_READONLY = 353,
     T_REF = 354,
     T_RETURN = 355,
     T_SBYTE = 356,
     T_SEALED = 357,
     T_SHORT = 358,
     T_SIZEOF = 359,
     T_STACKALLOC = 360,
     T_STATIC = 361,
     T_STRING = 362,
     T_STRUCT = 363,
     T_SWITCH = 364,
     T_THIS = 365,
     T_THROW = 366,
     T_TRUE = 367,
     T_TRY = 368,
     T_TYPEOF = 369,
     T_UINT = 370,
     T_ULONG = 371,
     T_UNCHECKED = 372,
     T_UNSAFE = 373,
     T_USHORT = 374,
     T_USING = 375,
     T_VIRTUAL = 376,
     T_VOID = 377,
     T_VOLATILE = 378,
     T_WHILE = 379,
     T_VAR = 380,
     T_ENTER = 381,
     test = 382,
     ne = 383,
     T_ASSEMBLY = 384,
     T_FIELD = 385,
     T_METHOD = 386,
     T_MODULE = 387,
     T_PARAM = 388,
     T_PROPERTY = 389,
     T_TYPE = 390,
     T_GET = 391,
     T_SET = 392,
     T_ADD = 393,
     T_REMOVE = 394,
     T_COMMA = 395,
     T_OPEN_ARRAY = 396,
     T_CLOSE_ARRAY = 397,
     T_PLUSEQ = 398,
     T_MINUSEQ = 399,
     T_STAREQ = 400,
     T_DIVEQ = 401,
     T_MODEQ = 402,
     T_XOREQ = 403,
     T_ANDEQ = 404,
     T_OREQ = 405,
     T_LTLT = 406,
     T_GTGT = 407,
     T_GTGTEQ = 408,
     T_LTLTEQ = 409,
     T_EQEQ = 410,
     T_NOTEQ = 411,
     T_LEQ = 412,
     T_GEQ = 413,
     T_ANDAND = 414,
     T_OROR = 415,
     T_PLUSPLUS = 416,
     T_MINUSMINUS = 417,
     T_ARROW = 418
   };
#endif
/* Tokens.  */
#define LO_TER 258
#define RANK_SPECIFIER 259
#define T_IDENTIFIER 260
#define T_NOT_IDENTIFIER 261
#define T_LITERAL_INTEGER 262
#define T_LITERAL_REAL 263
#define T_LITERAL_CHARACTER 264
#define T_LITERAL_STRING 265
#define T_LITERAL_FLOAT 266
#define T_LITERAL_DOUBLE 267
#define T_LITERAL_BOOLEAN 268
#define T_TILDE 269
#define T_QUESTION_MARK 270
#define T_COLON 271
#define T_CLOSE_PARENNTHESES 272
#define T_OPEN_PARENNTHESES 273
#define T_CLOSE_BRACKETS 274
#define T_OPEN_BRACKETS 275
#define T_OR 276
#define T_AND 277
#define T_HASH 278
#define T_MOD 279
#define T_XOR 280
#define T_NOT 281
#define T_SEMICOLON 282
#define T_EQUAL 283
#define T_BIGGER 284
#define T_SMALLER 285
#define T_MULTIPLY 286
#define T_DEVIDE 287
#define T_MINUS 288
#define T_SPACE 289
#define T_BACKSLASH_SINGLE_COTATION 290
#define T_BACKSLASH_R 291
#define T_DOUBLE_BACKSLASH 292
#define T_BACKSLASH_A 293
#define T_BACKSLASH_PLUS 294
#define T_BACKSLASH_V 295
#define T_BACKSLASH_F 296
#define T_STRING_END 297
#define T_DOT 298
#define T_TAB 299
#define T_BACKSPACE 300
#define T_LNUMBER 301
#define T_VALUE 302
#define T_ABSTRACT 303
#define T_AS 304
#define T_BASE 305
#define T_BOOL 306
#define T_BREAK 307
#define T_BYTE 308
#define T_CASE 309
#define T_CATCH 310
#define T_CHAR 311
#define T_CHECKED 312
#define T_CLASS 313
#define T_CONST 314
#define T_CONTINUE 315
#define T_DECIMAL 316
#define T_DEFAULT 317
#define T_DELEGATE 318
#define T_DO 319
#define T_DOUBLE 320
#define T_ELSE 321
#define T_ENUM 322
#define T_EVENT 323
#define T_EXPLICIT 324
#define T_EXTERN 325
#define T_FALSE 326
#define T_FINALLY 327
#define T_FIXED 328
#define T_FLOAT 329
#define T_FOR 330
#define T_FOREACH 331
#define T_GOTO 332
#define T_IF 333
#define T_IMPLICIT 334
#define T_IN 335
#define T_INT 336
#define T_INTERFACE 337
#define T_INTERNAL 338
#define T_IS 339
#define T_LOCK 340
#define T_LONG 341
#define T_NAMESPACE 342
#define T_NEW 343
#define T_NULL_LITERAL 344
#define T_OBJECT 345
#define T_OPERATOR 346
#define T_OUT 347
#define T_OVERRIDE 348
#define T_PARAMS 349
#define T_PRIVATE 350
#define T_PROTECTED 351
#define T_PUBLIC 352
#define T_READONLY 353
#define T_REF 354
#define T_RETURN 355
#define T_SBYTE 356
#define T_SEALED 357
#define T_SHORT 358
#define T_SIZEOF 359
#define T_STACKALLOC 360
#define T_STATIC 361
#define T_STRING 362
#define T_STRUCT 363
#define T_SWITCH 364
#define T_THIS 365
#define T_THROW 366
#define T_TRUE 367
#define T_TRY 368
#define T_TYPEOF 369
#define T_UINT 370
#define T_ULONG 371
#define T_UNCHECKED 372
#define T_UNSAFE 373
#define T_USHORT 374
#define T_USING 375
#define T_VIRTUAL 376
#define T_VOID 377
#define T_VOLATILE 378
#define T_WHILE 379
#define T_VAR 380
#define T_ENTER 381
#define test 382
#define ne 383
#define T_ASSEMBLY 384
#define T_FIELD 385
#define T_METHOD 386
#define T_MODULE 387
#define T_PARAM 388
#define T_PROPERTY 389
#define T_TYPE 390
#define T_GET 391
#define T_SET 392
#define T_ADD 393
#define T_REMOVE 394
#define T_COMMA 395
#define T_OPEN_ARRAY 396
#define T_CLOSE_ARRAY 397
#define T_PLUSEQ 398
#define T_MINUSEQ 399
#define T_STAREQ 400
#define T_DIVEQ 401
#define T_MODEQ 402
#define T_XOREQ 403
#define T_ANDEQ 404
#define T_OREQ 405
#define T_LTLT 406
#define T_GTGT 407
#define T_GTGTEQ 408
#define T_LTLTEQ 409
#define T_EQEQ 410
#define T_NOTEQ 411
#define T_LEQ 412
#define T_GEQ 413
#define T_ANDAND 414
#define T_OROR 415
#define T_PLUSPLUS 416
#define T_MINUSMINUS 417
#define T_ARROW 418




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
#line 456 "yacc.cpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 468 "yacc.cpp"

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
#define YYLAST   3416

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  164
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  247
/* YYNRULES -- Number of rules. */
#define YYNRULES  585
/* YYNRULES -- Number of states. */
#define YYNSTATES  1003

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   418

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
     155,   156,   157,   158,   159,   160,   161,   162,   163
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
    1040,  1042,  1044,  1046,  1048,  1050,  1052,  1054,  1056,  1058,
    1060,  1062,  1064,  1066,  1068,  1069,  1071,  1073,  1075,  1077,
    1079,  1081,  1083,  1085,  1088,  1094,  1099,  1100,  1102,  1105,
    1108,  1113,  1116,  1121,  1125,  1129,  1133,  1134,  1136,  1138,
    1141,  1143,  1145,  1147,  1149,  1151,  1153,  1155,  1157,  1159,
    1161,  1168,  1174,  1181,  1187,  1193,  1196,  1204,  1212,  1220,
    1221,  1223,  1225,  1227,  1229,  1231,  1235,  1237,  1239,  1244,
    1245,  1247,  1249,  1254,  1264,  1267,  1270,  1271,  1273,  1274,
    1276,  1282,  1288,  1290,  1292,  1299,  1310,  1313,  1316,  1322,
    1328,  1337,  1343,  1349,  1352,  1357,  1359,  1361,  1369,  1380,
    1382,  1384,  1386,  1388,  1390,  1392,  1394,  1396,  1398,  1400,
    1402,  1404,  1406,  1408,  1410,  1412,  1414,  1416,  1418,  1420,
    1422,  1424,  1432,  1440,  1445,  1451,  1452,  1454,  1460,  1466,
    1474,  1476,  1478,  1480,  1482,  1484,  1485,  1487,  1489,  1491,
    1493,  1495,  1503,  1504,  1506,  1509,  1512,  1516,  1517,  1519,
    1521,  1524,  1526,  1528,  1530,  1532,  1534,  1536,  1538,  1540,
    1542,  1546,  1551,  1552,  1554,  1556,  1560,  1568,  1569,  1571,
    1574,  1577,  1581,  1582,  1584,  1586,  1589,  1591,  1593,  1595,
    1597,  1606,  1615,  1616,  1618,  1628,  1641,  1645,  1649,  1656,
    1663,  1670,  1672,  1675,  1683,  1684,  1686,  1689,  1693,  1698,
    1699,  1701,  1703,  1707,  1710,  1715,  1725,  1735,  1737,  1739,
    1742,  1749,  1757,  1758,  1760,  1763,  1765,  1767,  1769,  1771,
    1773,  1775,  1777,  1779,  1781,  1783,  1787,  1790,  1791,  1793,
    1797,  1798,  1799,  1800,  1801,  1802
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
     292,     0,    -1,   166,    -1,     7,    -1,     8,    -1,     9,
      -1,    10,    -1,    12,    -1,    13,    -1,    89,    -1,   112,
      -1,    71,    -1,   298,    -1,   169,    -1,   177,    -1,   170,
      -1,   171,    -1,   175,    -1,   176,    -1,   172,    -1,    51,
      -1,   173,    -1,   174,    -1,    61,    -1,   101,    -1,    53,
      -1,   103,    -1,   119,    -1,    81,    -1,   115,    -1,    86,
      -1,   116,    -1,    56,    -1,    74,    -1,    65,    -1,    90,
      -1,   107,    -1,   168,    31,    -1,   298,    31,    -1,   122,
      31,    -1,   177,   179,    -1,   170,   179,    -1,   298,   179,
      -1,    -1,   179,   178,    -1,     4,    -1,   228,    -1,   182,
      -1,   181,   140,   182,    -1,   228,    -1,    99,   180,    -1,
      92,   180,    -1,   185,    -1,   184,    -1,   165,    -1,   198,
      -1,   186,    -1,   187,    -1,   189,    -1,   192,    -1,   193,
      -1,   196,    -1,   200,    -1,   205,    -1,   201,    -1,   202,
      -1,    18,   228,    17,    -1,   183,    43,     5,    -1,   171,
      43,     5,    -1,   175,    43,     5,    -1,   184,    18,   188,
      17,    -1,   298,    18,   188,    17,    -1,    -1,   181,    -1,
     183,   141,   191,   142,    -1,   298,   141,   191,   142,    -1,
      -1,   191,    -1,   228,    -1,   191,   140,   228,    -1,   110,
      -1,    50,    43,     5,    -1,    50,   141,   191,   142,    -1,
     206,   161,    -1,   206,   162,    -1,   197,    -1,    88,   168,
      18,   188,    17,    -1,    88,   298,    18,   188,    17,    -1,
      88,   169,   141,   191,   142,   178,   199,    -1,    88,   141,
     191,   142,   178,   199,    -1,    88,   298,   141,   191,   142,
     178,   199,    -1,    88,   177,   370,    -1,    -1,   370,    -1,
     114,    18,   168,    17,    -1,   114,    18,   298,    17,    -1,
     114,    18,   122,    17,    -1,    57,    18,   228,    17,    -1,
     117,    18,   228,    17,    -1,   206,   163,     5,    -1,    22,
     210,    -1,   104,    18,   168,    17,    -1,   104,    18,   298,
      17,    -1,   183,    -1,   298,    -1,   194,    -1,   195,    -1,
     203,    -1,   206,    -1,    26,   210,    -1,    14,   210,    -1,
     211,    -1,   161,   210,    -1,   162,   210,    -1,   207,    -1,
      39,   210,    -1,    33,   210,    -1,    31,   210,    -1,   208,
      -1,   209,    -1,   204,    -1,    18,   228,    17,   207,    -1,
      18,   215,    31,    17,   210,    -1,    18,   298,   179,   212,
      17,   210,    -1,    18,   171,   212,    17,   210,    -1,    18,
     175,   212,    17,   210,    -1,    18,   122,   212,    17,   210,
      -1,    -1,   213,    -1,   214,    -1,   213,   214,    -1,   179,
      -1,    31,    -1,   210,    -1,   215,    31,   210,    -1,   215,
      32,   210,    -1,   215,    24,   210,    -1,   215,    -1,   216,
      39,   215,    -1,   216,    33,   215,    -1,   216,    -1,   217,
     151,   216,    -1,   217,   152,   216,    -1,   217,    -1,   218,
      30,   217,    -1,   218,    29,   217,    -1,   218,   157,   217,
      -1,   218,   158,   217,    -1,   218,    84,   168,    -1,   218,
      49,   168,    -1,   218,    84,   298,    -1,   218,    49,   298,
      -1,   218,    -1,   219,   155,   218,    -1,   219,   156,   218,
      -1,   219,    -1,   220,    22,   219,    -1,   220,    -1,   221,
      25,   220,    -1,   221,    -1,   222,    21,   221,    -1,   222,
      -1,   223,   159,   222,    -1,   223,    -1,   224,   160,   223,
      -1,   224,    -1,   224,    15,   228,    16,   228,    -1,   210,
     227,   228,    -1,    28,    -1,   143,    -1,   144,    -1,   145,
      -1,   146,    -1,   147,    -1,   148,    -1,   149,    -1,   150,
      -1,   153,    -1,   154,    -1,   225,    -1,   226,    -1,   228,
      -1,   228,    -1,   237,    -1,   238,    -1,   232,    -1,   233,
      -1,   236,    -1,   247,    -1,   249,    -1,   259,    -1,   272,
      -1,   279,    -1,   284,    -1,   285,    -1,   286,    -1,   287,
      -1,   260,    -1,   289,    -1,    20,   234,    19,    -1,    -1,
     235,    -1,   231,    -1,   235,   231,    -1,    27,    -1,     5,
      16,   231,    -1,   239,    27,    -1,   244,    27,    -1,   168,
     240,    -1,   298,   240,    -1,   241,    -1,   240,   140,   241,
      -1,   312,    -1,   312,    28,   242,    -1,   312,    28,    -1,
     228,    -1,   370,    -1,   243,    -1,   105,   168,   141,   228,
     142,    -1,   105,   298,   141,   228,   142,    -1,    59,   168,
     245,    -1,    59,   245,    -1,    59,   298,   245,    -1,   246,
      -1,   245,   140,   246,    -1,   312,    28,   229,    -1,   312,
      28,    -1,   312,    -1,   248,    27,    -1,   187,    -1,   197,
      -1,   226,    -1,   194,    -1,   195,    -1,   208,    -1,   209,
      -1,   251,    -1,   252,    -1,   230,    -1,    -1,    78,    18,
     250,    17,   232,    -1,    78,    18,   250,    17,   232,    66,
     232,    -1,   109,    18,   228,    17,   253,    -1,    20,   254,
      19,    -1,    -1,   255,    -1,   256,    -1,   255,   256,    -1,
     257,   235,    -1,   258,    -1,   257,   258,    -1,    54,   229,
      16,    -1,    62,    16,    -1,    54,    16,    -1,   261,    -1,
     262,    -1,   263,    -1,   271,    -1,   118,   233,    -1,   124,
      18,   230,    17,   232,    -1,    64,   232,   124,    18,   230,
      17,    27,    -1,    64,   232,    27,    -1,    75,    18,   264,
      27,   265,    27,   266,    17,   232,    -1,    75,    18,    17,
      -1,    75,    18,     1,    17,    -1,    -1,   267,    -1,    -1,
     268,    -1,    -1,   269,    -1,   239,    -1,   270,    -1,   230,
      -1,   270,    -1,   248,    -1,   270,   140,   248,    -1,    76,
      18,   168,     5,    80,   228,    17,   232,    -1,    76,    18,
       5,    80,   228,    17,   232,    -1,    76,    18,   298,     5,
      80,   228,    17,   232,    -1,   273,    -1,   274,    -1,   275,
      -1,   276,    -1,   278,    -1,    52,    27,    -1,    60,    27,
      -1,    77,     5,    27,    -1,    77,    54,   229,    27,    -1,
      77,    62,    27,    -1,   100,   277,    27,    -1,    -1,   228,
      -1,   111,   277,    27,    -1,   113,   233,   280,    -1,   113,
     233,   283,    -1,   113,   233,   280,   283,    -1,   281,    -1,
     280,   281,    -1,    55,    18,   175,   282,    17,   233,    -1,
      55,    18,   298,   282,    17,   233,    -1,    55,   233,    -1,
      -1,   312,    -1,    72,   233,    -1,    57,   233,    -1,   117,
     233,    -1,    85,    18,   228,    17,   232,    -1,   120,    18,
     288,    17,   232,    -1,   239,    -1,   228,    -1,    73,    18,
     168,   290,    17,   232,    -1,    73,    18,   298,   290,    17,
     232,    -1,   291,    -1,   290,   140,   291,    -1,     5,    28,
     228,    -1,   293,   294,    -1,   293,   305,    -1,    -1,   301,
      -1,    -1,   395,    -1,    -1,   305,    -1,   294,    87,   298,
     300,   297,    -1,    -1,    27,    -1,   312,    -1,   299,   312,
      -1,   312,    43,    -1,   299,   312,    43,    -1,    20,   293,
     295,    19,    -1,   293,   295,    19,    -1,   302,    -1,   301,
     302,    -1,   303,    -1,   304,    -1,   120,   312,    28,   298,
      27,    -1,   120,   167,    27,    -1,   306,    -1,   305,   306,
      -1,   296,    -1,   307,    -1,   314,    -1,   363,    -1,   373,
      -1,   387,    -1,   394,    -1,   311,    -1,   309,   311,    -1,
     310,    -1,    48,    -1,    70,    -1,    83,    -1,    88,    -1,
      93,    -1,    95,    -1,    96,    -1,    97,    -1,    98,    -1,
     102,    -1,   118,    -1,   121,    -1,   123,    -1,    -1,   106,
      -1,     5,    -1,     6,    -1,     5,    -1,    12,    -1,    11,
      -1,     7,    -1,     6,    -1,   315,   319,    -1,   294,   308,
      58,   313,   316,    -1,   294,   308,    58,   316,    -1,    -1,
     317,    -1,    16,   175,    -1,    16,   318,    -1,    16,   175,
     140,   318,    -1,    16,   298,    -1,    16,   175,   140,   298,
      -1,   318,   140,   298,    -1,   298,   140,   298,    -1,    20,
     320,    19,    -1,    -1,   321,    -1,   322,    -1,   321,   322,
      -1,   323,    -1,   324,    -1,   325,    -1,   335,    -1,   342,
      -1,   346,    -1,   349,    -1,   354,    -1,   358,    -1,   307,
      -1,   294,   308,    59,   168,   245,    27,    -1,   294,   308,
      59,   245,    27,    -1,   294,   308,    59,   298,   245,    27,
      -1,   294,   308,   168,   240,    27,    -1,   294,   308,   298,
     240,    27,    -1,   326,   329,    -1,   294,   308,   168,   298,
      18,   327,    17,    -1,   294,   308,   122,   298,    18,   327,
      17,    -1,   294,   308,   298,   298,    18,   327,    17,    -1,
      -1,   330,    -1,   122,    -1,   233,    -1,    27,    -1,   331,
      -1,   330,   140,   331,    -1,   332,    -1,   334,    -1,   294,
     333,   168,     5,    -1,    -1,    99,    -1,    92,    -1,   294,
      94,   168,     5,    -1,   294,   308,   168,   298,   409,    20,
     336,    19,   410,    -1,   339,   337,    -1,   340,   338,    -1,
      -1,   340,    -1,    -1,   339,    -1,   294,   136,   410,   341,
     409,    -1,   294,   137,   410,   341,   409,    -1,   233,    -1,
      27,    -1,   294,   308,    68,   168,   240,    27,    -1,   294,
     308,    68,   168,   298,   407,    20,   343,    19,   408,    -1,
     344,   345,    -1,   345,   344,    -1,   294,   138,   408,   233,
     407,    -1,   294,   139,   408,   233,   407,    -1,   294,   308,
     347,   409,    20,   336,    19,   410,    -1,   168,   110,   141,
     330,   142,    -1,   168,   348,   141,   330,   142,    -1,   299,
     110,    -1,   294,   308,   350,   359,    -1,   351,    -1,   353,
      -1,   168,    91,   352,    18,   168,     5,    17,    -1,   168,
      91,   352,    18,   168,     5,   140,   168,     5,    17,    -1,
      39,    -1,    33,    -1,    26,    -1,    14,    -1,   161,    -1,
     162,    -1,   112,    -1,    71,    -1,    31,    -1,    32,    -1,
      24,    -1,    22,    -1,    21,    -1,    25,    -1,   151,    -1,
     152,    -1,   155,    -1,   156,    -1,    29,    -1,    30,    -1,
     158,    -1,   157,    -1,    79,    91,   168,    18,   168,     5,
      17,    -1,    69,    91,   168,    18,   168,     5,    17,    -1,
     294,   308,   355,   360,    -1,     5,    18,   327,    17,   356,
      -1,    -1,   357,    -1,    16,    50,    18,   188,    17,    -1,
      16,   110,    18,   188,    17,    -1,   294,   308,    14,     5,
      18,    17,   233,    -1,   233,    -1,    27,    -1,   233,    -1,
      27,    -1,   366,    -1,    -1,     5,    -1,     6,    -1,    12,
      -1,    11,    -1,     7,    -1,   294,   308,   108,   362,   364,
     361,   297,    -1,    -1,   365,    -1,    16,   318,    -1,    16,
     298,    -1,    20,   367,    19,    -1,    -1,   368,    -1,   369,
      -1,   368,   369,    -1,   323,    -1,   324,    -1,   325,    -1,
     335,    -1,   342,    -1,   346,    -1,   349,    -1,   354,    -1,
     307,    -1,    20,   371,    19,    -1,    20,   372,   140,    19,
      -1,    -1,   372,    -1,   242,    -1,   372,   140,   242,    -1,
     294,   308,    82,     5,   374,   376,   297,    -1,    -1,   375,
      -1,    16,   318,    -1,    16,   298,    -1,    20,   377,    19,
      -1,    -1,   378,    -1,   379,    -1,   378,   379,    -1,   380,
      -1,   382,    -1,   385,    -1,   383,    -1,   294,   381,   168,
       5,    18,   327,    17,   386,    -1,   294,   381,   122,     5,
      18,   327,    17,   386,    -1,    -1,    88,    -1,   294,   381,
     168,     5,   409,    20,   384,    19,   410,    -1,   294,   381,
     168,   110,   141,   330,   142,   409,    20,   384,    19,   410,
      -1,   294,   136,   386,    -1,   294,   137,   386,    -1,   294,
     136,   386,   294,   137,   386,    -1,   294,   137,   386,   294,
     136,   386,    -1,   294,   381,    68,   168,     5,   386,    -1,
      27,    -1,    20,    19,    -1,   294,   308,    67,     5,   388,
     390,   297,    -1,    -1,   389,    -1,    16,   173,    -1,    20,
     391,    19,    -1,    20,   392,   140,    19,    -1,    -1,   392,
      -1,   393,    -1,   392,   140,   393,    -1,   294,     5,    -1,
     294,     5,    28,   229,    -1,   294,   308,    63,   328,     5,
      18,   327,    17,    27,    -1,   294,   308,    63,   298,     5,
      18,   327,    17,    27,    -1,   396,    -1,   397,    -1,   396,
     397,    -1,   405,   141,   398,   401,   142,   406,    -1,   405,
     141,   398,   401,   140,   142,   406,    -1,    -1,   399,    -1,
     400,    16,    -1,   129,    -1,   130,    -1,    68,    -1,   131,
      -1,   132,    -1,   133,    -1,   134,    -1,   100,    -1,   135,
      -1,   402,    -1,   401,   140,   402,    -1,   298,   403,    -1,
      -1,   404,    -1,    18,   190,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1
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
     768,   772,   773,   774,   775,   776,   777,   778,   779,   780,
     781,   782,   783,   784,   786,   788,   791,   792,   796,   797,
     798,   799,   800,   806,   813,   818,   820,   822,   825,   826,
     827,   828,   829,   835,   836,   839,   842,   844,   847,   848,
     851,   852,   853,   854,   855,   856,   857,   858,   859,   861,
     864,   865,   866,   869,   870,   873,   878,   879,   880,   882,
     884,   888,   891,   892,   895,   896,   899,   900,   903,   905,
     907,   908,   912,   915,   921,   922,   924,   926,   928,   930,
     933,   939,   945,   946,   949,   950,   956,   957,   960,   966,
     972,   978,   980,   983,   987,   990,   991,   994,   995,   998,
     998,   999,   999,   999,   999,   999,   999,  1000,  1000,  1000,
    1000,  1000,  1000,  1001,  1001,  1001,  1001,  1001,  1001,  1001,
    1001,  1004,  1005,  1008,  1011,  1013,  1015,  1018,  1019,  1035,
    1038,  1039,  1042,  1043,  1046,  1047,  1050,  1051,  1052,  1053,
    1054,  1057,  1060,  1062,  1065,  1066,  1069,  1071,  1073,  1076,
    1077,  1080,  1081,  1082,  1083,  1084,  1085,  1086,  1087,  1089,
    1094,  1095,  1098,  1100,  1103,  1104,  1109,  1111,  1113,  1116,
    1117,  1120,  1122,  1124,  1127,  1128,  1131,  1132,  1133,  1134,
    1138,  1139,  1141,  1143,  1146,  1152,  1160,  1161,  1162,  1163,
    1166,  1171,  1172,  1177,  1179,  1181,  1184,  1187,  1188,  1190,
    1192,  1195,  1196,  1199,  1200,  1205,  1206,  1211,  1214,  1215,
    1218,  1219,  1221,  1223,  1226,  1229,  1230,  1231,  1232,  1233,
    1234,  1235,  1236,  1237,  1240,  1241,  1245,  1247,  1249,  1258,
    1265,  1270,  1275,  1280,  1285,  1290
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LO_TER", "RANK_SPECIFIER",
  "T_IDENTIFIER", "T_NOT_IDENTIFIER", "T_LITERAL_INTEGER",
  "T_LITERAL_REAL", "T_LITERAL_CHARACTER", "T_LITERAL_STRING",
  "T_LITERAL_FLOAT", "T_LITERAL_DOUBLE", "T_LITERAL_BOOLEAN", "T_TILDE",
  "T_QUESTION_MARK", "T_COLON", "T_CLOSE_PARENNTHESES",
  "T_OPEN_PARENNTHESES", "T_CLOSE_BRACKETS", "T_OPEN_BRACKETS", "T_OR",
  "T_AND", "T_HASH", "T_MOD", "T_XOR", "T_NOT", "T_SEMICOLON", "T_EQUAL",
  "T_BIGGER", "T_SMALLER", "T_MULTIPLY", "T_DEVIDE", "T_MINUS", "T_SPACE",
  "T_BACKSLASH_SINGLE_COTATION", "T_BACKSLASH_R", "T_DOUBLE_BACKSLASH",
  "T_BACKSLASH_A", "T_BACKSLASH_PLUS", "T_BACKSLASH_V", "T_BACKSLASH_F",
  "T_STRING_END", "T_DOT", "T_TAB", "T_BACKSPACE", "T_LNUMBER", "T_VALUE",
  "T_ABSTRACT", "T_AS", "T_BASE", "T_BOOL", "T_BREAK", "T_BYTE", "T_CASE",
  "T_CATCH", "T_CHAR", "T_CHECKED", "T_CLASS", "T_CONST", "T_CONTINUE",
  "T_DECIMAL", "T_DEFAULT", "T_DELEGATE", "T_DO", "T_DOUBLE", "T_ELSE",
  "T_ENUM", "T_EVENT", "T_EXPLICIT", "T_EXTERN", "T_FALSE", "T_FINALLY",
  "T_FIXED", "T_FLOAT", "T_FOR", "T_FOREACH", "T_GOTO", "T_IF",
  "T_IMPLICIT", "T_IN", "T_INT", "T_INTERFACE", "T_INTERNAL", "T_IS",
  "T_LOCK", "T_LONG", "T_NAMESPACE", "T_NEW", "T_NULL_LITERAL", "T_OBJECT",
  "T_OPERATOR", "T_OUT", "T_OVERRIDE", "T_PARAMS", "T_PRIVATE",
  "T_PROTECTED", "T_PUBLIC", "T_READONLY", "T_REF", "T_RETURN", "T_SBYTE",
  "T_SEALED", "T_SHORT", "T_SIZEOF", "T_STACKALLOC", "T_STATIC",
  "T_STRING", "T_STRUCT", "T_SWITCH", "T_THIS", "T_THROW", "T_TRUE",
  "T_TRY", "T_TYPEOF", "T_UINT", "T_ULONG", "T_UNCHECKED", "T_UNSAFE",
  "T_USHORT", "T_USING", "T_VIRTUAL", "T_VOID", "T_VOLATILE", "T_WHILE",
  "T_VAR", "T_ENTER", "test", "ne", "T_ASSEMBLY", "T_FIELD", "T_METHOD",
  "T_MODULE", "T_PARAM", "T_PROPERTY", "T_TYPE", "T_GET", "T_SET", "T_ADD",
  "T_REMOVE", "\",\"", "\"[\"", "\"]\"", "T_PLUSEQ", "T_MINUSEQ",
  "T_STAREQ", "T_DIVEQ", "T_MODEQ", "T_XOREQ", "T_ANDEQ", "T_OREQ",
  "T_LTLT", "T_GTGT", "T_GTGTEQ", "T_LTLTEQ", "T_EQEQ", "T_NOTEQ", "T_LEQ",
  "T_GEQ", "T_ANDAND", "T_OROR", "T_PLUSPLUS", "T_MINUSMINUS", "T_ARROW",
  "$accept", "literal", "boolean_literal", "namespace_name", "type",
  "non_array_type", "simple_type", "primitive_type", "numeric_type",
  "integral_type", "floating_point_type", "class_type", "pointer_type",
  "array_type", "rank_specifiers_opt", "rank_specifier",
  "variable_reference", "argument_list", "argument", "primary_expression",
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
     415,   416,   417,   418
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] =
{
       0,   164,   165,   165,   165,   165,   165,   165,   165,   165,
     166,   166,   167,   168,   168,   169,   170,   170,   170,   171,
     171,   172,   172,   172,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   174,   174,   175,   175,   176,   176,   176,
     177,   177,   177,   178,   178,   179,   180,   181,   181,   182,
     182,   182,   183,   183,   184,   184,   184,   184,   184,   184,
     184,   184,   184,   184,   184,   184,   185,   186,   186,   186,
     187,   187,   188,   188,   189,   189,   190,   190,   191,   191,
     192,   193,   193,   194,   195,   196,   197,   197,   198,   198,
     198,   198,   199,   199,   200,   200,   200,   201,   202,   203,
     204,   205,   205,   206,   206,   206,   206,   206,   207,   207,
     207,   207,   208,   209,   210,   210,   210,   210,   210,   210,
     210,   211,   211,   211,   211,   211,   211,   212,   212,   213,
     213,   214,   214,   215,   215,   215,   215,   216,   216,   216,
     217,   217,   217,   218,   218,   218,   218,   218,   218,   218,
     218,   218,   219,   219,   219,   220,   220,   221,   221,   222,
     222,   223,   223,   224,   224,   225,   225,   226,   227,   227,
     227,   227,   227,   227,   227,   227,   227,   227,   227,   228,
     228,   229,   230,   231,   231,   231,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   233,
     234,   234,   235,   235,   236,   237,   238,   238,   239,   239,
     240,   240,   241,   241,   241,   242,   242,   242,   243,   243,
     244,   244,   244,   245,   245,   246,   246,   246,   247,   248,
     248,   248,   248,   248,   248,   248,   249,   249,   250,   250,
     251,   251,   252,   253,   254,   254,   255,   255,   256,   257,
     257,   258,   258,   258,   259,   259,   259,   259,   260,   261,
     262,   262,   263,   263,   263,   264,   264,   265,   265,   266,
     266,   267,   267,   268,   269,   270,   270,   271,   271,   271,
     272,   272,   272,   272,   272,   273,   274,   275,   275,   275,
     276,   277,   277,   278,   279,   279,   279,   280,   280,   281,
     281,   281,   282,   282,   283,   284,   285,   286,   287,   288,
     288,   289,   289,   290,   290,   291,   292,   292,   293,   293,
     294,   294,   295,   295,   296,   297,   297,   298,   298,   299,
     299,   300,   300,   301,   301,   302,   302,   303,   304,   305,
     305,   306,   306,   307,   307,   307,   307,   307,   308,   308,
     309,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   311,   311,   312,   312,   313,   313,
     313,   313,   313,   314,   315,   315,   316,   316,   317,   317,
     317,   317,   317,   318,   318,   319,   320,   320,   321,   321,
     322,   322,   322,   322,   322,   322,   322,   322,   322,   322,
     323,   323,   323,   324,   324,   325,   326,   326,   326,   327,
     327,   328,   329,   329,   330,   330,   331,   331,   332,   333,
     333,   333,   334,   335,   336,   336,   337,   337,   338,   338,
     339,   340,   341,   341,   342,   342,   343,   343,   344,   345,
     346,   347,   347,   348,   349,   350,   350,   351,   351,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   353,   353,   354,   355,   356,   356,   357,   357,   358,
     359,   359,   360,   360,   361,   361,   362,   362,   362,   362,
     362,   363,   364,   364,   365,   365,   366,   367,   367,   368,
     368,   369,   369,   369,   369,   369,   369,   369,   369,   369,
     370,   370,   371,   371,   372,   372,   373,   374,   374,   375,
     375,   376,   377,   377,   378,   378,   379,   379,   379,   379,
     380,   380,   381,   381,   382,   383,   384,   384,   384,   384,
     385,   386,   386,   387,   388,   388,   389,   390,   390,   391,
     391,   392,   392,   393,   393,   394,   394,   395,   396,   396,
     397,   397,   398,   398,   399,   400,   400,   400,   400,   400,
     400,   400,   400,   400,   401,   401,   402,   403,   403,   404,
     405,   406,   407,   408,   409,   410
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
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     5,     4,     0,     1,     2,     2,
       4,     2,     4,     3,     3,     3,     0,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       6,     5,     6,     5,     5,     2,     7,     7,     7,     0,
       1,     1,     1,     1,     1,     3,     1,     1,     4,     0,
       1,     1,     4,     9,     2,     2,     0,     1,     0,     1,
       5,     5,     1,     1,     6,    10,     2,     2,     5,     5,
       8,     5,     5,     2,     4,     1,     1,     7,    10,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     7,     7,     4,     5,     0,     1,     5,     5,     7,
       1,     1,     1,     1,     1,     0,     1,     1,     1,     1,
       1,     7,     0,     1,     2,     2,     3,     0,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     4,     0,     1,     1,     3,     7,     0,     1,     2,
       2,     3,     0,     1,     1,     2,     1,     1,     1,     1,
       8,     8,     0,     1,     9,    12,     3,     3,     6,     6,
       6,     1,     2,     7,     0,     1,     2,     3,     4,     0,
       1,     1,     3,     2,     4,     9,     9,     1,     1,     2,
       6,     7,     0,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     0,     1,     3,
       0,     0,     0,     0,     0,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
     318,     0,     0,   320,   319,   333,   335,   336,   366,   367,
       0,    12,     0,   327,     1,   364,   341,   320,   339,   342,
     343,     0,   344,   345,   346,   347,   321,   557,   558,     0,
     334,   338,   328,     0,   329,   351,   352,   353,     0,   354,
     355,   356,   357,   358,   359,   360,   365,   361,   362,   363,
       0,   364,   350,   348,   364,   340,   320,   373,   559,   562,
     330,     0,   327,   318,   376,     0,     0,     0,     0,   349,
     364,   399,     0,   320,   388,   390,   391,   392,     0,   393,
     394,   395,   396,   397,   398,   567,   572,   565,   566,   568,
     569,   570,   571,   573,     0,   563,     0,   337,   318,   320,
     325,   368,   372,   371,   370,   369,     0,   376,   375,   377,
     411,     0,     0,   544,   517,   486,   487,   490,   489,   488,
     492,     0,   385,   389,   200,   413,   412,   405,   577,     0,
     574,   564,   320,     0,   320,   326,   324,    35,    36,   378,
     381,   379,   374,     0,     0,     0,     0,   545,     0,     0,
     518,     0,   485,   493,   366,     0,    20,    25,    32,     0,
      23,    34,     0,     0,    33,     0,    28,    30,    24,    26,
      29,    31,    27,     0,     0,    13,    15,    16,    19,    21,
      22,    17,    18,    14,     0,   584,     0,   445,   446,     0,
     366,     3,     4,     5,     6,     7,     8,     0,     0,     0,
       0,   204,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,     0,     0,     0,     0,     0,     0,     0,     9,
     291,     0,     0,    80,   291,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    54,     2,     0,    16,    17,
     103,    53,    52,    56,    57,    58,    59,    60,   105,   106,
      61,    85,    55,    62,    64,    65,   107,   120,    63,   108,
     114,   118,   119,     0,   111,   231,   202,   185,   186,     0,
     201,   187,   183,   184,     0,     0,   188,     0,   189,   236,
     237,   190,   197,   254,   255,   256,   257,   191,   280,   281,
     282,   283,   284,   192,   193,   194,   195,   196,   198,   104,
      76,   576,   578,     0,   581,     0,   332,     0,     0,     0,
     320,   320,   546,   320,   325,   520,   519,   320,   325,   495,
     494,   320,   325,   484,   320,     0,     0,     0,   223,     0,
     327,     0,     0,     0,     0,    39,     0,    37,     0,     0,
       0,   210,   584,     0,   212,     0,    45,    41,    40,    38,
      42,     0,     0,     0,   481,   480,   444,   483,   482,   473,
       0,     0,     0,     0,     0,    57,   105,   106,    85,   118,
     119,   110,   104,   127,   127,   127,   133,   137,   140,   143,
     152,   155,   157,   159,   161,   163,   165,   179,   180,     0,
     104,   100,   109,   117,   116,   115,     0,     0,   285,     0,
     305,     0,   221,     0,   286,     0,     0,     0,     0,     0,
       0,     0,   239,     0,     0,     0,    13,    14,     0,   137,
     292,     0,     0,     0,     0,     0,     0,     0,   306,   258,
       0,     0,   112,   113,   208,   212,     0,     0,     0,     0,
      72,    83,    84,     0,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,     0,   199,   203,   206,   207,
     228,    72,     0,   209,     0,    77,    78,   581,   575,   560,
     331,   382,   380,   384,   383,   419,     0,   410,   414,   416,
     417,     0,     0,     0,   550,   551,   543,   532,     0,   320,
     524,   526,   527,   529,   528,   516,   364,   509,   501,   502,
     503,   504,   505,   506,   507,   508,     0,   320,   499,   491,
       0,     0,     0,   227,   401,     0,     0,   226,     0,   582,
       0,     0,   320,   452,   461,   460,   459,   462,   451,   467,
     468,   457,   458,   450,   449,   456,   455,   463,   464,   465,
     466,   470,   469,   453,   454,     0,   320,   403,     0,   320,
       0,   443,   214,   320,   404,   320,   320,   205,   132,   131,
       0,   128,   129,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    66,   127,    81,     0,
       0,   220,   222,   261,     0,     0,     0,     0,   263,   271,
     275,     0,   266,   272,   366,     0,     0,   287,   181,     0,
     289,   182,   238,     0,     0,     0,    72,     0,   512,    91,
      72,     0,     0,   290,     0,     0,     0,   293,     0,     0,
     294,   297,   295,     0,     0,     0,     0,   310,   309,     0,
       0,    68,    69,    67,     0,     0,     0,    73,    47,     0,
      49,    99,   167,     0,     0,   579,     0,   561,   421,     0,
     420,     0,     0,   320,     0,   553,   547,   320,   533,     0,
     521,   525,     0,   496,   500,   475,     0,   400,   224,   402,
     225,   434,     0,     0,     0,     0,     0,     0,   211,     0,
     320,     0,   215,   213,   217,   216,     0,     0,     0,     0,
     320,   320,     0,   130,     0,     0,   136,     0,   134,   135,
     133,   139,   138,   141,   142,   145,   144,   149,   151,   148,
     150,   146,   147,   153,   154,   156,   158,   160,   162,     0,
     164,   121,     0,    82,    97,     0,     0,     0,   313,     0,
     264,   267,     0,     0,     0,     0,   288,     0,     0,    43,
       0,     0,   514,     0,   513,     0,     0,   101,   102,     0,
       0,   301,   304,   298,   296,    96,    94,    95,    98,     0,
       0,    74,    51,    46,    50,     0,    70,    71,    75,    79,
       0,     0,   556,   415,   555,     0,   548,   552,     0,     0,
       0,     0,   474,   476,   479,   320,     0,     0,   407,     0,
     441,   406,     0,     0,     0,   442,   408,   585,   585,   585,
       0,   424,   427,     0,   425,   429,   126,   124,   125,   122,
       0,     0,     0,     0,     0,     0,     0,   273,     0,   268,
     276,     0,     0,     0,   240,   307,    92,    43,    86,    43,
     510,     0,    87,    43,   244,   242,   302,   302,   308,   259,
      48,   422,   418,   554,     0,     0,   584,     0,     0,     0,
       0,     0,   320,   320,     0,     0,     0,   585,     0,     0,
       0,     0,   440,   166,   123,     0,   315,   311,   314,   312,
     269,     0,     0,     0,     0,    89,    93,    44,    92,   511,
     515,    92,     0,     0,     0,   245,   246,     0,   249,     0,
     303,     0,     0,   320,   320,     0,   320,    72,    72,   583,
     583,   583,     0,   436,     0,   437,   472,   471,   447,     0,
     423,     0,     0,   433,   432,   584,   584,   260,     0,   270,
     274,   278,     0,     0,   241,    88,    90,   253,     0,   252,
     243,   247,   248,   250,     0,     0,     0,   541,   540,     0,
       0,   320,     0,     0,     0,     0,     0,   435,     0,   218,
     219,   430,   431,     0,   277,   279,   251,   299,   300,   542,
       0,     0,     0,     0,   584,   477,   478,   582,   582,     0,
     262,   531,   530,     0,     0,   585,     0,   438,   439,   448,
     320,   320,   534,   320,     0,     0,     0,     0,     0,   585,
     538,   539,   535
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,   235,   236,    10,   237,   175,   176,   363,   178,   179,
     180,   364,   182,   183,   836,   350,   772,   647,   648,   240,
     241,   242,   243,   365,   649,   245,   464,   465,   246,   247,
     366,   367,   250,   368,   252,   885,   253,   254,   255,   256,
     257,   258,   259,   260,   369,   370,   376,   264,   560,   561,
     562,   419,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   455,   466,   609,   612,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   340,   341,   693,   694,
     275,   327,   328,   276,   277,   278,   613,   279,   280,   845,
     894,   895,   896,   897,   898,   281,   282,   283,   284,   285,
     601,   828,   928,   602,   829,   929,   603,   286,   287,   288,
     289,   290,   291,   421,   292,   293,   630,   631,   899,   632,
     294,   295,   296,   297,   639,   298,   737,   738,     2,     3,
     475,   133,    16,   136,   372,    12,   100,     4,     5,     6,
       7,   134,    18,    19,    50,    51,    52,    53,    62,   107,
      20,    21,   108,   109,   141,    57,    72,    73,    74,    75,
      76,    77,    78,   476,   112,   127,   477,   478,   479,   661,
     480,    79,   699,   811,   814,   700,   701,   925,    80,   861,
     862,   863,    81,   185,   345,    82,   186,   187,   545,   188,
      83,   189,   792,   793,    84,   356,   359,   322,   120,    22,
     152,   153,   323,   506,   507,   508,   695,   753,   754,    23,
     149,   150,   318,   488,   489,   490,   491,   669,   492,   493,
     973,   494,   948,    24,   146,   147,   314,   483,   484,   485,
      25,    26,    27,    28,    94,    95,    96,   129,   130,   301,
     302,    29,   469,   682,   955,   353,   870
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -780
static const short int yypact[] =
{
     -56,   476,   109,   -67,   -56,  -780,  -780,  -780,  -780,  -780,
      87,  -780,   476,    67,  -780,   440,  -780,    23,  -780,  -780,
    -780,   100,  -780,  -780,  -780,  -780,  -780,   -67,  -780,    -5,
    -780,  -780,   196,   476,  -780,  -780,  -780,  -780,   476,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
     217,   154,  -780,  -780,  3256,  -780,    41,  -780,  -780,   447,
    -780,   245,   263,    85,   514,   113,   318,   365,   545,  -780,
    3293,  -780,   131,    70,  -780,  -780,  -780,  -780,   297,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,   476,  -780,   360,  -780,   -56,    71,
     373,  -780,  -780,  -780,  -780,  -780,   197,   389,  -780,  -780,
    -780,   428,   504,   496,   515,  -780,  -780,  -780,  -780,  -780,
     518,  1402,  -780,  -780,  1998,  -780,  -780,  -780,   522,    16,
    -780,  -780,    71,   526,    78,  -780,  -780,  -780,  -780,   419,
     458,   478,  -780,   550,   571,   298,   589,  -780,   476,   591,
    -780,   476,   609,  -780,   614,   631,  -780,  -780,  -780,  1279,
    -780,  -780,  1279,   548,  -780,   552,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,   350,   306,  -780,   637,  -780,  -780,  -780,
    -780,  -780,  -780,   637,   316,  -780,   491,  -780,  -780,   502,
     635,  -780,  -780,  -780,  -780,  -780,  -780,  3049,  2583,  3049,
    3049,  -780,  3049,  3049,  3049,   208,   633,   425,  1279,   638,
    2118,  -780,   640,   648,   652,   175,   653,   655,  1235,  -780,
    3049,   656,   657,  -780,  3049,  -780,   658,   661,   542,   658,
     664,   645,   667,  3049,  3049,  -780,  -780,   388,   646,   649,
     211,   675,  -780,  -780,    46,  -780,  -780,  -780,    50,    75,
    -780,    96,  -780,  -780,  -780,  -780,  -780,  -780,  -780,   409,
    -780,   105,   117,   148,  -780,  -780,  -780,  -780,  -780,   676,
    1998,  -780,  -780,  -780,   669,   672,  -780,   673,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,    53,
    3049,  -780,  -780,    49,  -780,   682,  -780,   476,   476,   476,
      30,    30,  -780,   106,   373,   458,   478,   107,   373,   458,
     478,   111,   373,  -780,    30,   684,   388,    74,  -780,   316,
     173,   388,   284,  1279,  1279,  -780,   685,  -780,  1072,   564,
     116,  -780,   688,   272,   471,   567,  -780,  -780,  -780,  -780,
    -780,   119,   692,   691,  -780,  -780,  -780,  -780,  -780,  -780,
    1998,   694,   695,   646,   649,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,    22,   322,   285,   315,   148,   446,   464,   432,
     108,   472,   693,   689,   696,   557,    17,  -780,  -780,   701,
      58,  -780,  -780,  -780,  -780,  -780,   714,  3049,  -780,  3049,
    -780,   388,   580,   316,  -780,    45,  1279,  1760,  3068,   699,
    3049,   700,  3049,  3049,  3049,   403,   582,   337,    48,   469,
    -780,   705,  1279,  3049,   706,    56,  3135,  3049,  -780,  -780,
    2701,  3049,  -780,  -780,   581,   707,   729,   732,   733,  3049,
    2353,  -780,  -780,   734,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,  3049,  -780,  -780,  -780,  -780,
    -780,  2353,  3049,   581,   719,   600,  -780,  -780,  -780,  -780,
    -780,   458,   478,  -780,  -780,   414,   724,   602,  -780,  -780,
    -780,   726,   739,   727,   607,  -780,  -780,   660,   730,   120,
    -780,  -780,  -780,  -780,  -780,  -780,  3293,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,   735,   121,  -780,  -780,
     738,   740,   134,   728,  -780,   476,   139,  3049,   145,  -780,
     449,   454,    30,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,   743,   -67,  -780,   476,    30,
     742,  -780,  2468,   -67,  -780,    30,   -67,  -780,  -780,  -780,
     741,   322,  -780,   748,   749,  3049,  2819,  3049,  3049,  3049,
    3049,  3049,  3049,  3049,  1279,  1279,  3049,  3049,  3049,  3049,
    3049,  3049,  3049,  3049,  3049,  3049,  3221,   322,  -780,   331,
     751,   580,   580,  -780,   752,   340,   335,   754,  -780,  -780,
    -780,   747,  -780,   629,   697,   343,   364,  -780,  -780,   756,
    -780,  -780,  -780,   758,   759,   459,  2353,  3049,  2468,  -780,
    2353,  3049,  3049,  -780,   356,   358,   764,  -780,   587,   658,
      56,  -780,  -780,   408,   411,   392,   767,  -780,  -780,   768,
     769,  -780,  -780,  -780,   466,  3049,  3049,   647,  -780,   772,
    -780,  -780,  -780,   773,   470,  -780,  3049,  -780,  -780,  1279,
    -780,  1279,   766,   -67,   771,   763,  -780,   122,  -780,  1602,
    -780,  -780,  1523,  -780,  -780,   778,   658,  -780,  -780,  -780,
    -780,  -780,   779,  1279,  1279,   783,  1279,   473,  -780,   784,
     -67,  1279,  -780,  -780,  -780,  -780,   474,   785,   498,   786,
     123,   126,  3049,  -780,  3049,  3049,  -780,  3049,  -780,  -780,
    -780,   469,   469,   464,   464,   432,   432,   775,   284,   775,
     284,   432,   432,   108,   108,   472,   693,   689,   696,   787,
     557,  -780,   791,  -780,  -780,  3049,   776,    39,  -780,    64,
    -780,  3049,  3049,  3049,   737,   744,  -780,  2118,  2118,   637,
     793,   477,  -780,   792,   678,   795,   481,  -780,  -780,   801,
     197,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  2118,
    2118,  -780,  -780,  -780,  -780,  2353,  -780,  -780,  -780,  -780,
     393,   398,  -780,  -780,  -780,  3049,  -780,  -780,  1279,   406,
     176,    25,  -780,  -780,  -780,   -67,   410,   413,  -780,   415,
    -780,  -780,   794,    69,    47,  -780,  -780,  -780,  -780,  -780,
     686,  -780,  -780,   690,  -780,  -780,  -780,  -780,  -780,  -780,
    3049,  3049,   805,  3049,  2118,   823,  2118,  -780,   806,  -780,
    -780,   815,  3049,  3049,   770,  -780,   814,   637,  -780,   637,
    -780,  2238,  -780,   637,   326,  -780,   476,   476,  -780,  -780,
    -780,  -780,  -780,  -780,   452,   817,   820,   698,   825,   826,
     499,   830,   -67,   -67,   828,   833,    81,  -780,  3049,  3049,
     512,   512,  -780,  -780,  -780,   824,  -780,  -780,  -780,  -780,
    3049,  2118,   836,   837,  2118,  -780,  -780,  -780,   814,  -780,
    -780,   814,  2934,   840,   838,   326,  -780,  1878,  -780,   841,
    -780,   845,   521,    30,    30,   846,   -67,  2353,  2353,  -780,
    -780,  -780,   736,  -780,   750,  -780,  -780,  -780,  -780,  1279,
    -780,   723,   753,  -780,  -780,  -780,  -780,  -780,   851,  -780,
     629,  -780,  2118,  2118,  -780,  -780,  -780,  -780,   853,  -780,
    -780,  -780,  1998,  -780,   658,   658,   854,  -780,  -780,   855,
     857,   -67,   484,   859,   860,   658,   658,  -780,   453,  -780,
    -780,  -780,  -780,  2118,  -780,  -780,  -780,  -780,  -780,  -780,
     521,   521,   511,   866,  -780,  -780,  -780,  -780,  -780,   862,
    -780,  -780,  -780,   521,   521,  -780,   858,  -780,  -780,  -780,
     128,   130,  -780,   -67,   755,   765,   867,   521,   521,  -780,
    -780,  -780,  -780
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -780,  -780,  -780,  -780,   861,   671,  -780,   813,  -780,   746,
    -780,   731,  -780,   702,  -270,  -149,   248,  -780,   127,  -780,
    -780,  -780,  -780,  -102,  -433,  -780,  -780,  -371,  -780,  -780,
     -17,     3,  -780,    72,  -780,  -396,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,   317,   157,   226,  -117,  -780,  -354,  -780,
     345,  -183,    79,    19,    76,   327,   328,   329,   325,   332,
    -780,  -780,   237,  -780,   916,  -509,  -406,  -261,  -204,   -74,
    -780,    13,  -780,  -780,  -780,   -71,  -134,   366,  -601,  -780,
    -780,  -159,   397,  -780,  -404,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,    18,  -780,    21,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,    42,  -780,  -780,  -780,
    -780,  -780,  -780,   704,  -780,  -780,  -780,   291,    77,   293,
    -780,  -780,  -780,  -780,  -780,  -780,   334,   115,  -780,     6,
      -3,   799,  -780,   180,     0,   777,  -780,  -780,   928,  -780,
    -780,   930,    44,   -38,   -65,  -780,  -780,   887,     1,  -780,
    -780,  -780,   834,  -780,  -112,  -780,  -780,  -780,   870,  -290,
    -284,  -280,  -780,  -300,  -780,  -780,  -534,   281,  -780,  -780,
    -780,  -279,   257,  -780,  -780,   249,   254,    84,  -277,  -780,
      94,    97,  -276,  -780,  -780,  -275,  -780,  -780,  -780,  -780,
    -273,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,   451,  -401,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,  -780,   475,  -780,  -780,  -780,  -780,
     -33,  -780,  -606,  -780,  -780,  -780,  -780,  -780,  -780,   294,
    -780,  -780,  -780,   935,  -780,  -780,  -780,  -780,   662,  -780,
    -780,  -780,   500,  -321,  -248,  -332,  -779
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -581
static const short int yytable[] =
{
      15,    11,    13,   600,   126,   121,   405,   263,   680,   457,
     550,   481,   687,    32,    54,   377,   619,   752,    71,   696,
     563,   564,   244,  -317,   510,   640,   589,   347,   653,   871,
     872,   498,   584,    61,   348,    71,   316,   499,    63,   320,
     461,   500,   501,   615,   502,   503,   504,  -409,   505,   402,
     351,   346,   346,    70,     8,     9,   824,   346,     8,     9,
    -386,    55,   346,  -229,     1,   111,   620,  -232,   644,    99,
      70,   461,   593,  -229,  -580,   858,   461,  -232,   349,   349,
     371,   826,   391,   392,   349,   393,   394,   395,   920,  -387,
    -322,   654,  -233,   263,   128,    33,    54,  -323,   918,   557,
     337,   514,  -233,   434,   132,    98,   140,   248,   244,    14,
      34,   628,   355,  -230,    31,   358,   432,   433,     8,     9,
      56,   184,  -234,  -230,   299,  -549,  -522,   249,   629,    54,
    -497,    54,  -234,   400,  -235,   859,    59,   572,   573,  -523,
    -498,   786,  -426,   547,  -235,  -428,   554,  -536,   315,  -537,
     122,   319,   425,   263,   428,   429,   303,   574,   304,   329,
     330,   677,   332,   462,  -580,   463,   679,   512,   244,   594,
     516,  -580,   681,   336,   342,   344,   444,   585,    55,   825,
     409,   856,  -580,   750,   352,   344,  -229,   755,   869,   621,
    -232,   467,   575,   248,   462,   472,   251,   518,   390,   462,
    -227,   517,     8,     9,   825,     1,   992,   337,   403,   330,
     868,  -580,  -580,   249,   515,  -233,    34,   498,   418,  -580,
    1002,   919,   685,   499,   559,   559,   559,   500,   501,   410,
     502,   503,   504,   732,   505,   110,  -230,   411,   435,    60,
     890,   587,   591,   263,   592,  -234,   751,  -580,  -580,   689,
     756,   396,  -580,   248,   438,   697,   548,  -235,   244,   548,
      46,  -580,  -580,  -580,  -580,   576,   577,  -580,   348,  -580,
     299,  -580,    97,   249,   515,    64,   853,     8,     9,   515,
      65,   261,   251,   497,    66,   548,   857,   137,   346,   346,
     263,   445,   446,   447,   448,   449,   450,   451,   452,    67,
     435,   453,   454,   128,   138,   244,    34,   471,   473,   474,
     482,     8,     9,  -227,   487,   349,   558,   124,   496,   346,
     346,     8,     9,   113,   125,    68,   346,   513,   436,   822,
     513,   519,   344,   332,   332,   827,   599,   337,   830,   346,
     736,   346,   251,   248,    32,   736,   558,   349,   744,   397,
     262,   157,   439,   558,   158,     8,     9,   618,   437,   638,
     299,   265,   346,   249,   981,   982,   349,   261,   346,   745,
     114,   337,   952,   757,   337,   758,   131,   990,   991,   166,
     892,   335,   551,   938,   167,   711,   712,   337,   893,   349,
     248,  1000,  1001,     8,     9,   349,   346,   338,   851,   168,
     135,   169,   513,   852,   513,   106,   596,   299,   606,   767,
     249,   855,   559,   170,   171,   864,   339,   172,   865,   337,
     866,   616,   625,   349,   337,   765,   635,   261,   766,   337,
     299,   672,   251,   143,   337,   886,   262,   335,   559,   335,
    -316,   337,   337,   399,   337,   124,   337,   265,   706,   708,
     709,   710,   710,   710,   710,   710,   710,   902,   979,   710,
     710,   710,   710,   710,   710,   710,   710,   683,   710,   497,
     565,   656,   684,   733,   953,   954,   600,   566,   567,   251,
     337,     8,     9,   337,   337,   337,   487,   886,    35,  -327,
     886,  -327,   935,   565,   486,   936,   262,   568,   495,   552,
     622,   567,   509,   569,   496,   708,   658,   265,   659,   144,
      36,   124,   145,   660,    34,    85,   513,   261,   354,   101,
     102,   103,   124,    37,   905,   104,   105,    38,    39,   357,
     106,   148,   124,    40,   151,    41,    42,    43,    44,   923,
     300,   946,    45,   834,   835,   306,    46,    86,   947,   435,
     115,   116,   117,   698,   761,   762,   118,   119,    47,   307,
     427,    48,   124,    49,   261,   848,   849,   887,   310,   888,
     441,   442,   443,   891,   718,   720,    87,    88,    89,    90,
      91,    92,    93,   570,   571,   816,   262,   817,   818,   311,
     819,   715,   716,   961,   962,   721,   722,   265,   308,   656,
     837,   749,   794,   949,   950,   760,   656,   124,   771,   313,
     656,   317,   778,   663,   663,   800,   805,   656,   309,   839,
     877,   656,   879,   843,   663,   263,   974,   578,   579,   321,
     263,   263,   324,   262,   807,   808,   325,   909,   910,   333,
     244,   346,   986,   334,   265,   244,   244,   983,   984,   713,
     714,   360,   263,   263,   723,   724,   987,   988,   406,   332,
     398,   332,   956,   957,   482,   404,   407,   244,   244,   332,
     408,   412,   184,   413,   422,   423,   335,   931,   124,   426,
     934,   457,   430,   332,   332,   431,   332,   698,   837,   436,
     837,   804,   437,   440,   837,   456,   458,   810,   813,   459,
     460,   470,   511,   522,   874,   546,   549,   263,   553,   263,
     555,   556,   399,   427,   581,   580,   583,   582,   586,   588,
     515,   548,   244,   617,   244,   248,   607,   610,   964,   965,
     248,   248,   623,   627,   641,   552,   655,   642,   643,   651,
     656,   662,   663,   664,   665,   249,   666,   667,   668,   670,
     249,   249,   248,   248,   673,   675,   517,   676,   702,   980,
     847,   686,   690,   263,   263,   704,   705,   263,   734,   742,
     735,   740,   249,   249,   741,   747,   748,   743,   244,   244,
     263,   759,   244,   746,   768,   769,   770,   775,   332,   776,
     777,   785,   860,   782,   791,   244,   924,   924,   784,   795,
     798,   801,   806,   820,   823,   809,   337,   248,   821,   248,
     838,   840,   842,   867,   251,   263,   263,   832,   841,   251,
     251,   844,   875,   808,   833,   263,   807,   249,   736,   249,
     244,   244,   881,   880,   618,   903,   884,   139,   904,   906,
     244,   251,   251,   907,   908,   916,   263,   900,   900,   911,
     917,   927,   181,   932,   933,   239,   939,   940,   944,   912,
     914,   244,   945,   248,   248,   959,   951,   248,   963,   966,
     967,   968,   970,   969,   971,   910,   975,   976,   993,   989,
     248,   977,   978,   249,   249,   985,   999,   249,   909,   416,
     181,   312,   997,   181,   774,   960,   251,   299,   251,   261,
     249,   998,   850,   731,   261,   261,   703,   725,   728,   726,
     942,   727,   678,   941,   688,   248,   248,   730,   943,   332,
     417,   763,   930,   764,   901,   248,   261,   261,   424,   375,
     739,   305,    30,    17,   177,   249,   249,   238,    69,   181,
     878,   142,   299,   123,   783,   249,   248,   802,   972,   181,
     815,   343,   251,   251,   812,   926,   251,   915,   674,   913,
     996,   787,    58,     0,   671,   468,   249,   657,   262,   251,
       0,     0,   177,   262,   262,   177,     0,     0,     0,   265,
       0,   261,   174,   261,   265,   265,     0,   994,   995,     0,
     972,     0,     0,     0,     0,   262,   262,     0,     0,     0,
       0,   239,     0,     0,   251,   251,   265,   265,     0,     0,
       0,   374,     0,     0,   251,     0,     0,     0,     0,     0,
     326,   177,     0,   331,     0,     0,     0,     0,     0,     0,
       0,   177,     0,     0,     0,   251,     0,   261,   261,     0,
       0,   261,     0,     0,     0,     0,     0,     0,     0,     0,
     262,     0,   262,     0,   261,     0,     0,     0,     0,     0,
       0,   265,     0,   265,   181,   181,     0,     0,     0,   401,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   415,
       0,     0,     0,   238,     0,     0,   523,     0,     0,   261,
     261,   239,     0,   524,   525,     0,   526,   527,   528,   261,
       0,   529,   530,   531,   532,   533,   262,   262,     0,     0,
     262,   534,     0,     0,   389,     0,     0,   265,   265,     0,
     261,   265,     0,   262,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   265,     0,   420,   181,   239,   181,
     420,     0,     0,   535,     0,     0,   177,   177,     0,     0,
       0,     0,     0,   181,     0,     0,     0,   181,   262,   262,
       0,   239,     0,     0,     0,     0,     0,     0,   262,   265,
     265,     0,     0,   238,     0,     0,     0,     0,     0,   265,
       0,     0,     0,     0,   536,     0,     0,     0,     0,   262,
       0,     0,     0,     0,   520,   521,     0,     0,     0,     0,
     265,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   177,
     238,   177,     0,   537,   538,     0,     0,   539,   540,   541,
     542,     0,     0,   543,   544,   177,     0,     0,     0,   177,
       8,     9,     0,   238,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   595,     0,   605,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   624,     8,     9,   156,   634,   157,     0,
       0,   158,     0,     0,     0,     0,   160,     0,     0,     0,
     161,     0,     0,     0,     0,   181,   181,     0,     0,   164,
       0,     0,     0,     0,     0,   590,   166,     0,     0,     0,
       0,   167,     0,     0,     0,   137,   608,     0,   611,   614,
     156,     0,   157,     0,     0,   158,   168,     0,   169,   626,
     160,     0,   138,   636,   161,     0,   637,   611,     0,     0,
     170,   171,     0,   164,   172,     0,   650,   231,     0,     0,
     166,     0,     0,     0,     0,   167,     0,     0,     0,   137,
       0,   652,     0,     0,     0,     0,   414,   650,     0,     0,
     168,     0,   169,     0,     0,     0,   138,   177,   177,     0,
     181,     0,   181,     0,   170,   171,     0,     0,   172,     0,
     181,   231,     0,   181,     0,     0,     0,   154,     9,     0,
       0,     0,     0,     0,   181,   181,   155,   181,     0,     0,
       0,     0,   181,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   608,     0,   717,   719,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   156,     0,   157,     0,     0,   158,     0,
      64,   159,     0,   160,     0,    65,     0,   161,   692,    66,
     162,   163,   177,     0,   177,     0,   164,     0,     0,     0,
       0,   165,   177,   166,    67,   177,     0,     0,   167,     0,
       0,   846,   137,     0,     0,     0,   177,   177,     0,   177,
     729,     0,     0,   168,   177,   169,     0,     0,     0,   138,
      68,     0,     0,     0,     0,     0,     0,   170,   171,   181,
     780,   172,   781,     0,   173,     0,     0,     0,   154,     9,
     790,     0,   650,   174,   692,     0,   650,     0,     0,     0,
       0,     0,     0,     0,   796,   797,     0,   799,     0,     0,
       0,     0,   803,     0,     0,     0,     0,     0,     0,     0,
       0,   773,   773,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   779,     0,   156,     0,   157,     0,     0,   158,
       0,    64,   159,     0,   160,     0,    65,     0,   161,     0,
      66,   162,   163,     0,     0,     0,     0,   164,     0,     0,
       0,   177,   165,     0,   166,    67,     0,     8,     9,   167,
       0,     0,     0,   137,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   168,     0,   169,     0,   239,     0,
     138,    68,     0,     0,     0,     0,     0,     0,   170,   171,
       0,     0,   172,     0,     0,   173,     0,     0,     0,   854,
     181,   611,     0,   156,     0,   157,     0,   611,   158,   831,
       0,     0,     0,   160,     0,     0,     0,   161,     0,     0,
     788,     0,     0,   239,     0,     0,   164,     0,     0,     0,
       0,     0,     0,   166,     0,     0,     0,     0,   167,     0,
       0,   650,   137,     0,     0,     0,     0,     0,     0,     0,
       0,   608,     0,   168,     0,   169,     0,     0,     0,   138,
     238,     0,     0,     0,     0,     0,     0,   170,   171,     0,
       0,   172,     0,     0,   789,     0,     0,     0,     0,     0,
       0,     0,   177,     0,     0,     0,   873,     0,     0,   876,
       0,     0,     0,     0,     0,     0,     0,     0,   882,   883,
       0,     0,     0,     0,     0,   238,     0,   692,     0,     0,
       0,   597,     0,     0,     0,     8,     9,   191,   192,   193,
     194,     0,   195,   196,   197,     0,     0,   598,   198,     0,
     958,     0,   199,     0,   921,   922,   200,  -265,     0,     0,
       0,   202,     0,   203,     0,     0,     0,     0,     0,   204,
       0,     0,     0,     0,     0,     0,     0,     0,   608,     0,
     205,   156,     0,   157,     0,     0,   158,   361,     0,     0,
       0,   160,     0,   650,   650,   161,     0,     0,     0,     0,
       0,   211,     0,     0,   164,     0,     0,     0,     0,     0,
       0,   166,     0,     0,     0,     0,   167,     0,   218,   219,
     137,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   168,     0,   169,   221,     0,     0,   138,     0,     0,
     223,     0,   225,     0,   227,   170,   171,   362,     0,   172,
       0,     0,   231,   190,     9,   191,   192,   193,   194,     0,
     195,   196,   197,     0,     0,     0,   198,     0,   124,     0,
     199,     0,     0,     0,   200,   201,     0,     0,     0,   202,
       0,   203,     0,     0,     0,     0,     0,   204,     0,     0,
       0,   233,   234,     0,     0,     0,     0,     0,   205,   156,
     206,   157,   892,     0,   158,   207,     0,   208,   209,   160,
     893,     0,   210,   161,     0,     0,     0,     0,     0,   211,
       0,   212,   164,   213,   214,   215,   216,     0,     0,   166,
       0,     0,     0,   217,   167,     0,   218,   219,   137,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   220,   168,
       0,   169,   221,     0,     0,   138,     0,   222,   223,   224,
     225,   226,   227,   170,   171,   228,   229,   172,   230,     0,
     231,     0,   232,   190,     9,   191,   192,   193,   194,     0,
     195,   196,   197,     0,     0,     0,   198,     0,   124,     0,
     199,     0,     0,     0,   200,   201,     0,     0,     0,   202,
       0,   203,     0,     0,     0,     0,     0,   204,     0,   233,
     234,     0,     0,     0,     0,     0,     0,     0,   205,   156,
     206,   157,     0,     0,   158,   207,     0,   208,   209,   160,
       0,     0,   210,   161,     0,     0,     0,     0,     0,   211,
       0,   212,   164,   213,   214,   215,   216,     0,     0,   166,
       0,     0,     0,   217,   167,     0,   218,   219,   137,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   220,   168,
       0,   169,   221,     0,     0,   138,     0,   222,   223,   224,
     225,   226,   227,   170,   171,   228,   229,   172,   230,     0,
     231,     0,   232,     8,     9,   191,   192,   193,   194,     0,
     195,   196,   197,     0,     0,     0,   198,     0,   124,     0,
     199,     0,     0,     0,   200,   201,     0,     0,     0,   202,
       0,   203,     0,     0,     0,     0,     0,   204,     0,   233,
     234,     0,     0,     0,     0,     0,     0,     0,   205,   156,
     206,   157,     0,     0,   158,   207,     0,     0,   209,   160,
       0,     0,   210,   161,     0,     0,     0,     0,     0,   211,
       0,   212,   164,   213,   214,   215,   216,     0,     0,   166,
       0,     0,     0,   217,   167,     0,   218,   219,   137,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   220,   168,
       0,   169,   221,     0,     0,   138,     0,   222,   223,   224,
     225,   226,   227,   170,   171,   228,   229,   172,   230,     0,
       0,     0,   232,     8,     9,   191,   192,   193,   194,     0,
     195,   196,   197,     0,     0,     0,   198,   889,   618,     0,
     199,     0,     0,     0,   200,     0,     0,     0,     0,   202,
       0,   203,     0,     0,     0,     0,     0,   204,     0,   233,
     234,     0,     0,     0,     0,     0,     0,     0,   205,   156,
       0,   157,     0,     0,   158,   361,     0,     0,     0,   160,
       0,     0,     0,   161,     0,     0,     0,     0,     0,   211,
       0,     0,   164,     0,     0,     0,     0,     0,     0,   166,
       0,     0,     0,     0,   167,     0,   218,   219,   137,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   168,
       0,   169,   221,   691,     0,   138,     0,     0,   223,     0,
     225,     0,   227,   170,   171,   362,     0,   172,     8,     9,
     191,   192,   193,   194,     0,   195,   196,   197,     0,     0,
       0,   198,     0,     0,     0,   199,     0,     0,     0,   200,
       0,     0,     0,     0,   202,     0,   203,     0,     0,     0,
       0,     0,   204,     0,     0,     0,     0,     0,     0,   233,
     234,     0,     0,   205,   156,     0,   157,     0,     0,   158,
     361,     0,     0,     0,   160,     0,     0,     0,   161,     0,
       0,     0,     0,     0,   211,     0,     0,   164,     0,     0,
       0,     0,     0,     0,   166,     0,     0,     0,     0,   167,
       0,   218,   219,   137,     0,   645,     0,     0,     0,     0,
       0,     0,   646,     0,   168,     0,   169,   221,     0,     0,
     138,     0,     0,   223,     0,   225,     0,   227,   170,   171,
     362,     0,   172,     8,     9,   191,   192,   193,   194,     0,
     195,   196,   197,     0,     0,     0,   198,     0,   618,     0,
     199,     0,     0,     0,   200,     0,     0,     0,     0,   202,
       0,   203,     0,     0,     0,     0,     0,   204,     0,     0,
       0,     0,     0,     0,   233,   234,     0,     0,   205,   156,
       0,   157,     0,     0,   158,   361,     0,     0,     0,   160,
       0,     0,     0,   161,     0,     0,     0,     0,     0,   211,
       0,     0,   164,     0,     0,     0,     0,     0,     0,   166,
       0,     0,     0,     0,   167,     0,   218,   219,   137,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   168,
       0,   169,   221,   691,     0,   138,     0,     0,   223,     0,
     225,     0,   227,   170,   171,   362,     0,   172,     8,     9,
     191,   192,   193,   194,     0,   195,   196,   197,     0,     0,
       0,   198,     0,     0,     0,   199,     0,     0,     0,   200,
       0,     0,     0,     0,   202,     0,   203,     0,     0,     0,
       0,     0,   204,     0,     0,     0,     0,     0,     0,   233,
     234,     0,     0,   205,   156,     0,   157,     0,     0,   158,
     361,     0,     0,     0,   160,     0,     0,     0,   161,     0,
       0,     0,     0,     0,   211,     0,     0,   164,     0,     0,
       0,     0,     0,     0,   166,     0,     0,     0,     0,   167,
       0,   218,   219,   137,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   168,     0,   169,   221,     0,     0,
     138,     0,     0,   223,     0,   225,     0,   227,   170,   171,
     362,     0,   172,     0,     0,   373,     8,     9,   191,   192,
     193,   194,     0,   195,   196,   197,     0,     0,     0,   198,
       0,     0,     0,   199,     0,     0,     0,   200,     0,     0,
       0,     0,   202,     0,   203,     0,     0,     0,     0,     0,
     204,     0,     0,     0,   233,   234,     0,     0,     0,     0,
       0,   205,   156,     0,   157,     0,     0,   158,   361,     0,
       0,     0,   160,     0,     0,     0,   161,     0,     0,     0,
       0,     0,   211,     0,     0,   164,     0,     0,     0,     0,
       0,     0,   166,     0,     0,     0,     0,   167,     0,   218,
     219,   137,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   168,     0,   169,   221,     0,     0,   138,     0,
       0,   223,     0,   225,     0,   227,   170,   171,   362,     0,
     172,     0,     0,   231,     8,     9,   191,   192,   193,   194,
       0,   195,   196,   197,     0,     0,   707,   198,     0,     0,
       0,   199,     0,     0,     0,   200,     0,     0,     0,     0,
     202,     0,   203,     0,     0,     0,     0,     0,   204,     0,
       0,     0,   233,   234,     0,     0,     0,     0,     0,   205,
     156,     0,   157,     0,     0,   158,   361,     0,     0,     0,
     160,     0,     0,     0,   161,     0,     0,     0,     0,     0,
     211,     0,     0,   164,     0,     0,     0,     0,     0,     0,
     166,     0,     0,     0,     0,   167,     0,   218,   219,   137,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     168,     0,   169,   221,     0,     0,   138,     0,     0,   223,
       0,   225,     0,   227,   170,   171,   362,     0,   172,     8,
       9,   191,   192,   193,   194,     0,   195,   196,   197,     0,
     937,     0,   198,     0,     0,     0,   199,     0,     0,     0,
     200,     0,     0,     0,     0,   202,     0,   203,     0,     0,
       0,     0,     0,   204,     0,     0,     0,     0,     0,     0,
     233,   234,     0,     0,   205,   156,     0,   157,     0,     0,
     158,   361,     0,     0,     0,   160,     0,     0,     0,   161,
       0,     0,     0,     0,     0,   211,     0,     0,   164,     0,
       0,     0,     0,     0,     0,   166,     0,     0,     0,     0,
     167,     0,   218,   219,   137,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   168,     0,   169,   221,     0,
       0,   138,     0,     0,   223,     0,   225,     0,   227,   170,
     171,   362,     0,   172,     8,     9,   191,   192,   193,   194,
       0,   195,   196,   197,     0,     0,     0,   198,     0,     0,
       0,   199,     0,   604,     9,   200,     0,     0,     0,     0,
     202,     0,   203,     0,     0,     0,     0,     0,   204,     0,
       0,     0,     0,     0,     0,   233,   234,     0,     0,   205,
     156,     0,   157,     0,     0,   158,   361,     0,     0,     0,
     160,     0,     0,     0,   161,     0,     0,     0,     0,   156,
     211,   157,     0,   164,   158,     0,     0,     0,     0,   160,
     166,     0,     0,   161,     0,   167,     0,   218,   219,   137,
       8,     9,   164,     0,     0,     0,     0,     0,     0,   166,
     168,     0,   169,   221,   167,     0,   138,     0,   137,   223,
       0,   225,     0,   227,   170,   171,   362,     0,   172,   168,
       0,   169,     0,     0,     0,   138,     0,     0,     0,     0,
       0,     0,     0,   170,   171,     0,   156,   172,   157,     0,
     231,   158,     0,     0,     0,     0,   160,     0,     0,     0,
     161,     0,     0,     0,     0,     0,     0,     0,     0,   164,
     233,   234,     0,     0,     0,     0,   166,     0,     0,     0,
       0,   167,     0,     0,     0,   137,     8,     9,   191,   192,
     193,   194,     0,   195,   196,   197,   168,     0,   169,   198,
       0,     0,   138,     0,     0,     0,     0,   200,     0,     0,
     170,   171,     0,     0,   172,     0,     0,   633,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   205,   156,     0,   157,     0,     0,   158,   361,     0,
       0,     0,   160,     0,     0,     0,   161,     0,     0,     0,
       0,     0,   211,     0,     0,   164,     0,     0,     0,     0,
       0,     0,   166,     0,    35,     0,     0,   167,     0,   218,
     219,   137,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   168,     0,   169,   221,    36,     0,   138,     0,
       0,   223,     0,   225,     0,   227,   170,   171,   362,    37,
     172,    35,     0,    38,    39,     0,     0,     0,     0,    40,
       0,    41,    42,    43,    44,     0,     0,     0,    45,     0,
       0,     0,    46,    36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    47,     0,    37,    48,     0,    49,
       0,    39,     0,     0,     0,     0,    40,     0,    41,    42,
      43,    44,     0,     0,     0,    45,     0,     0,     0,    46,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    47,     0,     0,    48,     0,    49
};

static const short int yycheck[] =
{
       3,     1,     1,   407,    78,    70,   210,   124,   517,   270,
     342,   311,   546,    12,    17,   198,   417,   618,    56,   553,
     374,   375,   124,     0,   324,   431,   397,   176,   461,   808,
     809,   321,    15,    33,   183,    73,   148,   321,    38,   151,
      18,   321,   321,   414,   321,   321,   321,    17,   321,   208,
     184,     4,     4,    56,     5,     6,    17,     4,     5,     6,
      19,    17,     4,    17,   120,    65,    18,    17,   439,    63,
      73,    18,    27,    27,   141,    50,    18,    27,    31,    31,
     197,    17,   199,   200,    31,   202,   203,   204,   867,    19,
      19,   462,    17,   210,    94,    28,    99,    19,    17,   360,
      31,    27,    27,   237,    98,    20,   106,   124,   210,     0,
      43,    55,   186,    17,    27,   189,   233,   234,     5,     6,
      20,   121,    17,    27,   124,    19,    19,   124,    72,   132,
      19,   134,    27,   207,    17,   110,   141,    29,    30,    19,
      19,    19,    19,    27,    27,    19,    27,    19,   148,    19,
      19,   151,   226,   270,   228,   229,   140,    49,   142,   159,
     159,    27,   162,   141,   141,   299,    27,   326,   270,   124,
     329,   141,    27,   173,   174,   174,    28,   160,   134,   140,
       5,     5,   141,   616,   184,   184,   140,   620,   141,   141,
     140,   142,    84,   210,   141,   307,   124,   331,   198,   141,
      27,    28,     5,     6,   140,   120,   985,    31,   208,   208,
     141,   141,   141,   210,   140,   140,    43,   507,   218,   141,
     999,   140,   522,   507,   373,   374,   375,   507,   507,    54,
     507,   507,   507,   587,   507,   122,   140,    62,   237,    43,
     841,   390,   401,   360,   403,   140,   617,   141,   141,   549,
     621,    43,   141,   270,    43,   555,   140,   140,   360,   140,
     106,   141,   141,   141,   141,   157,   158,   141,   417,   141,
     270,   141,    27,   270,   140,    58,   785,     5,     6,   140,
      63,   124,   210,   321,    67,   140,   110,    90,     4,     4,
     407,   143,   144,   145,   146,   147,   148,   149,   150,    82,
     299,   153,   154,   303,   107,   407,    43,   307,   308,   309,
     313,     5,     6,   140,   317,    31,    31,    20,   321,     4,
       4,     5,     6,     5,    27,   108,     4,   326,    43,   735,
     329,   331,   331,   333,   334,   741,   407,    31,   742,     4,
       5,     4,   270,   360,   343,     5,    31,    31,     5,   141,
     124,    53,   141,    31,    56,     5,     6,    20,    43,   430,
     360,   124,     4,   360,   970,   971,    31,   210,     4,     5,
       5,    31,   906,    17,    31,    17,    16,   983,   984,    81,
      54,    31,   110,   892,    86,   568,   569,    31,    62,    31,
     407,   997,   998,     5,     6,    31,     4,    91,     5,   101,
      27,   103,   401,     5,   403,    16,   406,   407,   408,    17,
     407,     5,   561,   115,   116,     5,   110,   119,     5,    31,
       5,    18,   422,    31,    31,    17,   426,   270,    17,    31,
     430,   496,   360,     5,    31,   836,   210,    31,   587,    31,
       0,    31,    31,    18,    31,    20,    31,   210,   565,   566,
     567,   568,   569,   570,   571,   572,   573,     5,     5,   576,
     577,   578,   579,   580,   581,   582,   583,    18,   585,   507,
      24,   140,    18,   142,   907,   908,   880,    31,    32,   407,
      31,     5,     6,    31,    31,    31,   489,   888,    48,    18,
     891,    20,   888,    24,   314,   891,   270,    33,   318,    28,
      31,    32,   322,    39,   507,   622,    92,   270,    94,     5,
      70,    20,    16,    99,    43,    68,   515,   360,    27,     5,
       6,     7,    20,    83,   856,    11,    12,    87,    88,    27,
      16,    16,    20,    93,    16,    95,    96,    97,    98,    27,
      18,    20,   102,   747,   748,    19,   106,   100,    27,   548,
       5,     6,     7,   556,   628,   629,    11,    12,   118,   140,
      18,   121,    20,   123,   407,   769,   770,   837,    18,   839,
     161,   162,   163,   843,   574,   575,   129,   130,   131,   132,
     133,   134,   135,   151,   152,   702,   360,   704,   705,    18,
     707,   572,   573,   925,   926,   576,   577,   360,   140,   140,
     749,   142,   676,   903,   904,    18,   140,    20,   142,    20,
     140,    20,   142,   140,   140,   142,   142,   140,   140,   142,
     824,   140,   826,   142,   140,   742,   142,   155,   156,    20,
     747,   748,    18,   407,   136,   137,     5,   138,   139,    91,
     742,     4,   974,    91,   407,   747,   748,   136,   137,   570,
     571,    16,   769,   770,   578,   579,   977,   978,    18,   659,
      27,   661,   910,   911,   667,    27,    18,   769,   770,   669,
      18,    18,   672,    18,    18,    18,    31,   881,    20,    18,
     884,   942,    18,   683,   684,    18,   686,   690,   837,    43,
     839,   691,    43,    18,   843,    19,    27,   700,   701,    27,
      27,    19,    18,    18,   821,   141,    18,   824,   141,   826,
      18,    20,    18,    18,    25,    22,   159,    21,    17,     5,
     140,   140,   824,   141,   826,   742,    27,    27,   932,   933,
     747,   748,    27,    27,     5,    28,    17,     5,     5,     5,
     140,    17,   140,    17,     5,   742,    19,   140,    88,    19,
     747,   748,   769,   770,    19,    17,    28,    17,    17,   963,
     760,    18,    20,   880,   881,    17,    17,   884,    17,   140,
      18,    17,   769,   770,    27,    17,    17,    80,   880,   881,
     897,    17,   884,    27,    17,    17,    17,   140,   788,    17,
      17,    28,   795,    27,    16,   897,   870,   871,    27,    20,
      17,    17,    17,    16,    28,    19,    31,   824,    17,   826,
      17,    19,    17,    19,   742,   932,   933,    80,   140,   747,
     748,    20,    17,   137,    80,   942,   136,   824,     5,   826,
     932,   933,    17,    27,    20,    18,    66,   106,    18,   141,
     942,   769,   770,    18,    18,    17,   963,   846,   847,    19,
      17,    27,   121,    17,    17,   124,    16,    19,    17,   862,
     863,   963,    17,   880,   881,   142,    20,   884,    17,    16,
     944,   945,    17,    19,    17,   139,    17,    17,    20,    17,
     897,   955,   956,   880,   881,    19,    19,   884,   138,   218,
     159,   145,   137,   162,   646,   142,   824,   897,   826,   742,
     897,   136,   775,   586,   747,   748,   561,   580,   583,   581,
     897,   582,   515,   895,   548,   932,   933,   585,   897,   919,
     218,   630,   880,   630,   847,   942,   769,   770,   224,   198,
     596,   132,     4,     3,   121,   932,   933,   124,    51,   208,
     825,   107,   942,    73,   663,   942,   963,   690,   951,   218,
     701,   174,   880,   881,   700,   871,   884,   863,   507,   862,
     993,   667,    27,    -1,   489,   303,   963,   467,   742,   897,
      -1,    -1,   159,   747,   748,   162,    -1,    -1,    -1,   742,
      -1,   824,   121,   826,   747,   748,    -1,   990,   991,    -1,
     993,    -1,    -1,    -1,    -1,   769,   770,    -1,    -1,    -1,
      -1,   270,    -1,    -1,   932,   933,   769,   770,    -1,    -1,
      -1,   198,    -1,    -1,   942,    -1,    -1,    -1,    -1,    -1,
     159,   208,    -1,   162,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   218,    -1,    -1,    -1,   963,    -1,   880,   881,    -1,
      -1,   884,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     824,    -1,   826,    -1,   897,    -1,    -1,    -1,    -1,    -1,
      -1,   824,    -1,   826,   333,   334,    -1,    -1,    -1,   208,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   218,
      -1,    -1,    -1,   270,    -1,    -1,    14,    -1,    -1,   932,
     933,   360,    -1,    21,    22,    -1,    24,    25,    26,   942,
      -1,    29,    30,    31,    32,    33,   880,   881,    -1,    -1,
     884,    39,    -1,    -1,   198,    -1,    -1,   880,   881,    -1,
     963,   884,    -1,   897,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   897,    -1,   220,   406,   407,   408,
     224,    -1,    -1,    71,    -1,    -1,   333,   334,    -1,    -1,
      -1,    -1,    -1,   422,    -1,    -1,    -1,   426,   932,   933,
      -1,   430,    -1,    -1,    -1,    -1,    -1,    -1,   942,   932,
     933,    -1,    -1,   360,    -1,    -1,    -1,    -1,    -1,   942,
      -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,   963,
      -1,    -1,    -1,    -1,   333,   334,    -1,    -1,    -1,    -1,
     963,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   406,
     407,   408,    -1,   151,   152,    -1,    -1,   155,   156,   157,
     158,    -1,    -1,   161,   162,   422,    -1,    -1,    -1,   426,
       5,     6,    -1,   430,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   406,    -1,   408,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   422,     5,     6,    51,   426,    53,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,   574,   575,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    -1,   399,    81,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    90,   410,    -1,   412,   413,
      51,    -1,    53,    -1,    -1,    56,   101,    -1,   103,   423,
      61,    -1,   107,   427,    65,    -1,   430,   431,    -1,    -1,
     115,   116,    -1,    74,   119,    -1,   440,   122,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    90,
      -1,   455,    -1,    -1,    -1,    -1,   141,   461,    -1,    -1,
     101,    -1,   103,    -1,    -1,    -1,   107,   574,   575,    -1,
     659,    -1,   661,    -1,   115,   116,    -1,    -1,   119,    -1,
     669,   122,    -1,   672,    -1,    -1,    -1,     5,     6,    -1,
      -1,    -1,    -1,    -1,   683,   684,    14,   686,    -1,    -1,
      -1,    -1,   691,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   517,    -1,   574,   575,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    -1,    53,    -1,    -1,    56,    -1,
      58,    59,    -1,    61,    -1,    63,    -1,    65,   552,    67,
      68,    69,   659,    -1,   661,    -1,    74,    -1,    -1,    -1,
      -1,    79,   669,    81,    82,   672,    -1,    -1,    86,    -1,
      -1,   760,    90,    -1,    -1,    -1,   683,   684,    -1,   686,
     584,    -1,    -1,   101,   691,   103,    -1,    -1,    -1,   107,
     108,    -1,    -1,    -1,    -1,    -1,    -1,   115,   116,   788,
     659,   119,   661,    -1,   122,    -1,    -1,    -1,     5,     6,
     669,    -1,   616,   672,   618,    -1,   620,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   683,   684,    -1,   686,    -1,    -1,
      -1,    -1,   691,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   645,   646,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   656,    -1,    51,    -1,    53,    -1,    -1,    56,
      -1,    58,    59,    -1,    61,    -1,    63,    -1,    65,    -1,
      67,    68,    69,    -1,    -1,    -1,    -1,    74,    -1,    -1,
      -1,   788,    79,    -1,    81,    82,    -1,     5,     6,    86,
      -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   101,    -1,   103,    -1,   897,    -1,
     107,   108,    -1,    -1,    -1,    -1,    -1,    -1,   115,   116,
      -1,    -1,   119,    -1,    -1,   122,    -1,    -1,    -1,   788,
     919,   735,    -1,    51,    -1,    53,    -1,   741,    56,   743,
      -1,    -1,    -1,    61,    -1,    -1,    -1,    65,    -1,    -1,
      68,    -1,    -1,   942,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    86,    -1,
      -1,   775,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   785,    -1,   101,    -1,   103,    -1,    -1,    -1,   107,
     897,    -1,    -1,    -1,    -1,    -1,    -1,   115,   116,    -1,
      -1,   119,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   919,    -1,    -1,    -1,   820,    -1,    -1,   823,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   832,   833,
      -1,    -1,    -1,    -1,    -1,   942,    -1,   841,    -1,    -1,
      -1,     1,    -1,    -1,    -1,     5,     6,     7,     8,     9,
      10,    -1,    12,    13,    14,    -1,    -1,    17,    18,    -1,
     919,    -1,    22,    -1,   868,   869,    26,    27,    -1,    -1,
      -1,    31,    -1,    33,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   892,    -1,
      50,    51,    -1,    53,    -1,    -1,    56,    57,    -1,    -1,
      -1,    61,    -1,   907,   908,    65,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    -1,    86,    -1,    88,    89,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,    -1,   103,   104,    -1,    -1,   107,    -1,    -1,
     110,    -1,   112,    -1,   114,   115,   116,   117,    -1,   119,
      -1,    -1,   122,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    14,    -1,    -1,    -1,    18,    -1,    20,    -1,
      22,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,   161,   162,    -1,    -1,    -1,    -1,    -1,    50,    51,
      52,    53,    54,    -1,    56,    57,    -1,    59,    60,    61,
      62,    -1,    64,    65,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    73,    74,    75,    76,    77,    78,    -1,    -1,    81,
      -1,    -1,    -1,    85,    86,    -1,    88,    89,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,   101,
      -1,   103,   104,    -1,    -1,   107,    -1,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,    -1,
     122,    -1,   124,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    14,    -1,    -1,    -1,    18,    -1,    20,    -1,
      22,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    39,    -1,   161,
     162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      52,    53,    -1,    -1,    56,    57,    -1,    59,    60,    61,
      -1,    -1,    64,    65,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    73,    74,    75,    76,    77,    78,    -1,    -1,    81,
      -1,    -1,    -1,    85,    86,    -1,    88,    89,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,   101,
      -1,   103,   104,    -1,    -1,   107,    -1,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,    -1,
     122,    -1,   124,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    14,    -1,    -1,    -1,    18,    -1,    20,    -1,
      22,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    39,    -1,   161,
     162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      52,    53,    -1,    -1,    56,    57,    -1,    -1,    60,    61,
      -1,    -1,    64,    65,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    73,    74,    75,    76,    77,    78,    -1,    -1,    81,
      -1,    -1,    -1,    85,    86,    -1,    88,    89,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,   101,
      -1,   103,   104,    -1,    -1,   107,    -1,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,    -1,
      -1,    -1,   124,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    14,    -1,    -1,    -1,    18,    19,    20,    -1,
      22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    31,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    39,    -1,   161,
     162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      -1,    53,    -1,    -1,    56,    57,    -1,    -1,    -1,    61,
      -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    -1,    86,    -1,    88,    89,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,
      -1,   103,   104,   105,    -1,   107,    -1,    -1,   110,    -1,
     112,    -1,   114,   115,   116,   117,    -1,   119,     5,     6,
       7,     8,     9,    10,    -1,    12,    13,    14,    -1,    -1,
      -1,    18,    -1,    -1,    -1,    22,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    31,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,   161,
     162,    -1,    -1,    50,    51,    -1,    53,    -1,    -1,    56,
      57,    -1,    -1,    -1,    61,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    86,
      -1,    88,    89,    90,    -1,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    99,    -1,   101,    -1,   103,   104,    -1,    -1,
     107,    -1,    -1,   110,    -1,   112,    -1,   114,   115,   116,
     117,    -1,   119,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    14,    -1,    -1,    -1,    18,    -1,    20,    -1,
      22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    31,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,   161,   162,    -1,    -1,    50,    51,
      -1,    53,    -1,    -1,    56,    57,    -1,    -1,    -1,    61,
      -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    -1,    86,    -1,    88,    89,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,
      -1,   103,   104,   105,    -1,   107,    -1,    -1,   110,    -1,
     112,    -1,   114,   115,   116,   117,    -1,   119,     5,     6,
       7,     8,     9,    10,    -1,    12,    13,    14,    -1,    -1,
      -1,    18,    -1,    -1,    -1,    22,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    31,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,   161,
     162,    -1,    -1,    50,    51,    -1,    53,    -1,    -1,    56,
      57,    -1,    -1,    -1,    61,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    86,
      -1,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   101,    -1,   103,   104,    -1,    -1,
     107,    -1,    -1,   110,    -1,   112,    -1,   114,   115,   116,
     117,    -1,   119,    -1,    -1,   122,     5,     6,     7,     8,
       9,    10,    -1,    12,    13,    14,    -1,    -1,    -1,    18,
      -1,    -1,    -1,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    31,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    -1,   161,   162,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    53,    -1,    -1,    56,    57,    -1,
      -1,    -1,    61,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    86,    -1,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   101,    -1,   103,   104,    -1,    -1,   107,    -1,
      -1,   110,    -1,   112,    -1,   114,   115,   116,   117,    -1,
     119,    -1,    -1,   122,     5,     6,     7,     8,     9,    10,
      -1,    12,    13,    14,    -1,    -1,    17,    18,    -1,    -1,
      -1,    22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      31,    -1,    33,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,   161,   162,    -1,    -1,    -1,    -1,    -1,    50,
      51,    -1,    53,    -1,    -1,    56,    57,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    86,    -1,    88,    89,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     101,    -1,   103,   104,    -1,    -1,   107,    -1,    -1,   110,
      -1,   112,    -1,   114,   115,   116,   117,    -1,   119,     5,
       6,     7,     8,     9,    10,    -1,    12,    13,    14,    -1,
      16,    -1,    18,    -1,    -1,    -1,    22,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    31,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
     161,   162,    -1,    -1,    50,    51,    -1,    53,    -1,    -1,
      56,    57,    -1,    -1,    -1,    61,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      86,    -1,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,    -1,   103,   104,    -1,
      -1,   107,    -1,    -1,   110,    -1,   112,    -1,   114,   115,
     116,   117,    -1,   119,     5,     6,     7,     8,     9,    10,
      -1,    12,    13,    14,    -1,    -1,    -1,    18,    -1,    -1,
      -1,    22,    -1,     5,     6,    26,    -1,    -1,    -1,    -1,
      31,    -1,    33,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,   161,   162,    -1,    -1,    50,
      51,    -1,    53,    -1,    -1,    56,    57,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    51,
      71,    53,    -1,    74,    56,    -1,    -1,    -1,    -1,    61,
      81,    -1,    -1,    65,    -1,    86,    -1,    88,    89,    90,
       5,     6,    74,    -1,    -1,    -1,    -1,    -1,    -1,    81,
     101,    -1,   103,   104,    86,    -1,   107,    -1,    90,   110,
      -1,   112,    -1,   114,   115,   116,   117,    -1,   119,   101,
      -1,   103,    -1,    -1,    -1,   107,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   115,   116,    -1,    51,   119,    53,    -1,
     122,    56,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,
     161,   162,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    90,     5,     6,     7,     8,
       9,    10,    -1,    12,    13,    14,   101,    -1,   103,    18,
      -1,    -1,   107,    -1,    -1,    -1,    -1,    26,    -1,    -1,
     115,   116,    -1,    -1,   119,    -1,    -1,   122,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    53,    -1,    -1,    56,    57,    -1,
      -1,    -1,    61,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    48,    -1,    -1,    86,    -1,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   101,    -1,   103,   104,    70,    -1,   107,    -1,
      -1,   110,    -1,   112,    -1,   114,   115,   116,   117,    83,
     119,    48,    -1,    87,    88,    -1,    -1,    -1,    -1,    93,
      -1,    95,    96,    97,    98,    -1,    -1,    -1,   102,    -1,
      -1,    -1,   106,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,    -1,    83,   121,    -1,   123,
      -1,    88,    -1,    -1,    -1,    -1,    93,    -1,    95,    96,
      97,    98,    -1,    -1,    -1,   102,    -1,    -1,    -1,   106,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   118,    -1,    -1,   121,    -1,   123
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,   120,   292,   293,   301,   302,   303,   304,     5,     6,
     167,   298,   299,   312,     0,   294,   296,   305,   306,   307,
     314,   315,   363,   373,   387,   394,   395,   396,   397,   405,
     302,    27,   312,    28,    43,    48,    70,    83,    87,    88,
      93,    95,    96,    97,    98,   102,   106,   118,   121,   123,
     308,   309,   310,   311,   294,   306,    20,   319,   397,   141,
      43,   298,   312,   298,    58,    63,    67,    82,   108,   311,
     294,   307,   320,   321,   322,   323,   324,   325,   326,   335,
     342,   346,   349,   354,   358,    68,   100,   129,   130,   131,
     132,   133,   134,   135,   398,   399,   400,    27,    20,   293,
     300,     5,     6,     7,    11,    12,    16,   313,   316,   317,
     122,   298,   328,     5,     5,     5,     6,     7,    11,    12,
     362,   308,    19,   322,    20,    27,   233,   329,   298,   401,
     402,    16,   293,   295,   305,    27,   297,    90,   107,   175,
     298,   318,   316,     5,     5,    16,   388,   389,    16,   374,
     375,    16,   364,   365,     5,    14,    51,    53,    56,    59,
      61,    65,    68,    69,    74,    79,    81,    86,   101,   103,
     115,   116,   119,   122,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   298,   347,   350,   351,   353,   355,
       5,     7,     8,     9,    10,    12,    13,    14,    18,    22,
      26,    27,    31,    33,    39,    50,    52,    57,    59,    60,
      64,    71,    73,    75,    76,    77,    78,    85,    88,    89,
     100,   104,   109,   110,   111,   112,   113,   114,   117,   118,
     120,   122,   124,   161,   162,   165,   166,   168,   171,   175,
     183,   184,   185,   186,   187,   189,   192,   193,   194,   195,
     196,   197,   198,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   226,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   244,   247,   248,   249,   251,
     252,   259,   260,   261,   262,   263,   271,   272,   273,   274,
     275,   276,   278,   279,   284,   285,   286,   287,   289,   298,
      18,   403,   404,   140,   142,   295,    19,   140,   140,   140,
      18,    18,   173,    20,   390,   298,   318,    20,   376,   298,
     318,    20,   361,   366,    18,     5,   168,   245,   246,   298,
     312,   168,   298,    91,    91,    31,   298,    31,    91,   110,
     240,   241,   298,   299,   312,   348,     4,   179,   179,    31,
     179,   240,   298,   409,    27,   233,   359,    27,   233,   360,
      16,    57,   117,   171,   175,   187,   194,   195,   197,   208,
     209,   210,   298,   122,   171,   175,   210,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   228,
     298,   210,   210,   210,   210,   210,    43,   141,    27,    18,
     233,   168,   245,   298,    27,   232,    18,    18,    18,     5,
      54,    62,    18,    18,   141,   168,   169,   177,   298,   215,
     228,   277,    18,    18,   277,   233,    18,    18,   233,   233,
      18,    18,   210,   210,   240,   312,    43,    43,    43,   141,
      18,   161,   162,   163,    28,   143,   144,   145,   146,   147,
     148,   149,   150,   153,   154,   227,    19,   231,    27,    27,
      27,    18,   141,   240,   190,   191,   228,   142,   402,   406,
      19,   298,   318,   298,   298,   294,   327,   330,   331,   332,
     334,   327,   294,   391,   392,   393,   297,   294,   377,   378,
     379,   380,   382,   383,   385,   297,   294,   307,   323,   324,
     325,   335,   342,   346,   349,   354,   367,   368,   369,   297,
     327,    18,   245,   312,    27,   140,   245,    28,   240,   298,
     168,   168,    18,    14,    21,    22,    24,    25,    26,    29,
      30,    31,    32,    33,    39,    71,   112,   151,   152,   155,
     156,   157,   158,   161,   162,   352,   141,    27,   140,    18,
     409,   110,    28,   141,    27,    18,    20,   231,    31,   179,
     212,   213,   214,   212,   212,    24,    31,    32,    33,    39,
     151,   152,    29,    30,    49,    84,   157,   158,   155,   156,
      22,    25,    21,   159,    15,   160,    17,   179,     5,   191,
     228,   245,   245,    27,   124,   168,   298,     1,    17,   239,
     248,   264,   267,   270,     5,   168,   298,    27,   228,   229,
      27,   228,   230,   250,   228,   191,    18,   141,    20,   370,
      18,   141,    31,    27,   168,   298,   228,    27,    55,    72,
     280,   281,   283,   122,   168,   298,   228,   228,   239,   288,
     230,     5,     5,     5,   191,    92,    99,   181,   182,   188,
     228,     5,   228,   188,   191,    17,   140,   406,    92,    94,
      99,   333,    17,   140,    17,     5,    19,   140,    88,   381,
      19,   379,   308,    19,   369,    17,    17,    27,   246,    27,
     229,    27,   407,    18,    18,   327,    18,   330,   241,   327,
      20,   105,   228,   242,   243,   370,   330,   327,   294,   336,
     339,   340,    17,   214,    17,    17,   210,    17,   210,   210,
     210,   215,   215,   216,   216,   217,   217,   168,   298,   168,
     298,   217,   217,   218,   218,   219,   220,   221,   222,   228,
     223,   207,   212,   142,    17,    18,     5,   290,   291,   290,
      17,    27,   140,    80,     5,     5,    27,    17,    17,   142,
     188,   191,   242,   371,   372,   188,   191,    17,    17,    17,
      18,   233,   233,   281,   283,    17,    17,    17,    17,    17,
      17,   142,   180,   228,   180,   140,    17,    17,   142,   228,
     168,   168,    27,   331,    27,    28,    19,   393,    68,   122,
     168,    16,   356,   357,   233,    20,   168,   168,    17,   168,
     142,    17,   336,   168,   298,   142,    17,   136,   137,    19,
     294,   337,   340,   294,   338,   339,   210,   210,   210,   210,
      16,    17,   230,    28,    17,   140,    17,   230,   265,   268,
     248,   228,    80,    80,   232,   232,   178,   179,    17,   142,
      19,   140,    17,   142,    20,   253,   175,   298,   232,   232,
     182,     5,     5,   229,   168,     5,     5,   110,    50,   110,
     294,   343,   344,   345,     5,     5,     5,    19,   141,   141,
     410,   410,   410,   228,   210,    17,   228,   232,   291,   232,
      27,    17,   228,   228,    66,   199,   370,   178,   178,    19,
     242,   178,    54,    62,   254,   255,   256,   257,   258,   282,
     312,   282,     5,    18,    18,   409,   141,    18,    18,   138,
     139,    19,   294,   345,   294,   344,    17,    17,    17,   140,
     410,   228,   228,    27,   233,   341,   341,    27,   266,   269,
     270,   232,    17,    17,   232,   199,   199,    16,   229,    16,
      19,   256,   235,   258,    17,    17,    20,    27,   386,   327,
     327,    20,   330,   188,   188,   408,   408,   408,   168,   142,
     142,   409,   409,    17,   232,   232,    16,   233,   233,    19,
      17,    17,   294,   384,   142,    17,    17,   233,   233,     5,
     232,   386,   386,   136,   137,    19,   409,   407,   407,    17,
     386,   386,   410,    20,   294,   294,   384,   137,   136,    19,
     386,   386,   410
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

  case 367:
#line 792 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_NOT_IDENTIFIER) ","");;}
    break;

  case 369:
#line 797 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_INTEGER) ","");;}
    break;

  case 370:
#line 798 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_INTEGER) ","");;}
    break;

  case 371:
#line 799 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_INTEGER) ","");;}
    break;

  case 372:
#line 800 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_NOT_IDENTIFIER) ","");;}
    break;

  case 373:
#line 806 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
												if (errorRec.errQ->isEmpty()) {
													(yyval.clas) = p->finish_class_declaration((yyvsp[-1].clas), NULL, NULL);
												}
											;}
    break;

  case 374:
#line 813 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
												if (errorRec.errQ->isEmpty()) {
													(yyval.clas) = p->create_class((yyvsp[0].r.str), NULL);
												}
											;}
    break;

  case 375:
#line 818 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[-5].r.myLineNo),(yyvsp[-5].r.myColNo),"error not identifier (T_NOT_IDENTIFIER) ","");;}
    break;

  case 377:
#line 822 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { cout << "\t\t Added class base\n";;}
    break;

  case 385:
#line 839 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { cout << "\t\t Added class body\n"; ;}
    break;

  case 401:
#line 865 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[-5].r.myLineNo),(yyvsp[-5].r.myColNo),"error const ","can't const with out type ");;}
    break;

  case 485:
#line 1047 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[-1].r.myLineNo),(yyvsp[-1].r.myColNo),"type error expected no struct body ","");;}
    break;

  case 487:
#line 1051 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"type error expected not id ","");;}
    break;

  case 488:
#line 1052 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_INTEGER) ","");;}
    break;

  case 489:
#line 1053 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_INTEGER) ","");;}
    break;

  case 490:
#line 1054 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_INTEGER) ","");;}
    break;

  case 516:
#line 1109 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { cout << "FINISHED INTERFACE WITH NO EERRORS." << endl ;}
    break;

  case 518:
#line 1113 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { cout << "\t\t Added interface base\n"; ;}
    break;

  case 521:
#line 1120 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { cout << "\t\t Added interface body"; ;}
    break;

  case 558:
#line 1214 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {cout << "\t\t added attribute\n";;}
    break;

  case 580:
#line 1265 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { 
		//lex_enter_attrib();
    ;}
    break;

  case 581:
#line 1270 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
		//lex_exit_attrib();
	;}
    break;

  case 582:
#line 1275 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
		//lex_enter_accessor();
    ;}
    break;

  case 583:
#line 1280 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
		//lex_exit_accessor();
	;}
    break;

  case 584:
#line 1285 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
		//lex_enter_getset();
	;}
    break;

  case 585:
#line 1290 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { 
		//lex_exit_getset();
	;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 3255 "yacc.cpp"

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


#line 1296 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"


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

