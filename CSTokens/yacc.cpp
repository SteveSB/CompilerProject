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
#define YYLAST   3457

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  165
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  264
/* YYNRULES -- Number of rules. */
#define YYNRULES  613
/* YYNRULES -- Number of states. */
#define YYNSTATES  1045

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
    1313,  1317,  1319,  1321,  1326,  1333,  1334,  1336,  1338,  1343,
    1353,  1356,  1359,  1360,  1362,  1363,  1365,  1371,  1377,  1379,
    1381,  1388,  1399,  1402,  1405,  1411,  1417,  1426,  1432,  1438,
    1441,  1446,  1448,  1450,  1458,  1469,  1471,  1473,  1475,  1477,
    1479,  1481,  1483,  1485,  1487,  1489,  1491,  1493,  1495,  1497,
    1499,  1501,  1503,  1505,  1507,  1509,  1511,  1513,  1521,  1529,
    1532,  1538,  1542,  1543,  1545,  1551,  1557,  1565,  1567,  1569,
    1571,  1573,  1575,  1576,  1578,  1580,  1582,  1584,  1586,  1594,
    1595,  1597,  1600,  1603,  1607,  1608,  1610,  1612,  1615,  1617,
    1619,  1621,  1623,  1625,  1627,  1629,  1631,  1633,  1637,  1642,
    1643,  1645,  1647,  1651,  1654,  1661,  1662,  1664,  1667,  1670,
    1675,  1676,  1678,  1680,  1683,  1685,  1687,  1689,  1691,  1700,
    1709,  1710,  1712,  1722,  1735,  1739,  1743,  1750,  1757,  1764,
    1766,  1769,  1777,  1778,  1780,  1783,  1787,  1792,  1793,  1795,
    1797,  1801,  1804,  1809,  1819,  1829,  1831,  1833,  1836,  1843,
    1851,  1852,  1854,  1857,  1859,  1861,  1863,  1865,  1867,  1869,
    1871,  1873,  1875,  1877,  1881,  1884,  1885,  1887,  1891,  1892,
    1893,  1894,  1895,  1896
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
     306,    -1,   305,   317,    -1,    -1,   313,    -1,    -1,   413,
      -1,    -1,   317,    -1,   306,    88,   310,   312,   309,    -1,
      -1,    28,    -1,   324,    -1,   311,   324,    -1,   324,    44,
      -1,   311,   324,    44,    -1,    21,   305,   307,    20,    -1,
     305,   307,    20,    -1,   314,    -1,   313,   314,    -1,   315,
      -1,   316,    -1,   121,   324,    29,   310,    28,    -1,   121,
     168,    28,    -1,   318,    -1,   317,   318,    -1,   308,    -1,
     319,    -1,   326,    -1,   380,    -1,   390,    -1,   405,    -1,
     412,    -1,   323,    -1,   321,   323,    -1,   322,    -1,   321,
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
      -1,   306,   349,   169,     5,    -1,   306,   349,   169,     5,
      29,   166,    -1,    -1,   100,    -1,    93,    -1,   306,    95,
     169,     5,    -1,   306,   320,   169,   310,   427,    21,   352,
      20,   428,    -1,   355,   353,    -1,   356,   354,    -1,    -1,
     356,    -1,    -1,   355,    -1,   306,   137,   428,   357,   427,
      -1,   306,   138,   428,   357,   427,    -1,   235,    -1,    28,
      -1,   306,   320,    69,   169,   242,    28,    -1,   306,   320,
      69,   169,   310,   425,    21,   359,    20,   426,    -1,   360,
     361,    -1,   361,   360,    -1,   306,   139,   426,   235,   425,
      -1,   306,   140,   426,   235,   425,    -1,   306,   320,   363,
     427,    21,   352,    20,   428,    -1,   169,   111,   142,   346,
     143,    -1,   169,   364,   142,   346,   143,    -1,   311,   111,
      -1,   306,   320,   366,   376,    -1,   367,    -1,   369,    -1,
     169,    92,   368,    19,   169,     5,    18,    -1,   169,    92,
     368,    19,   169,     5,   141,   169,     5,    18,    -1,    40,
      -1,    34,    -1,    27,    -1,    15,    -1,   162,    -1,   163,
      -1,   113,    -1,    72,    -1,    32,    -1,    33,    -1,    25,
      -1,    23,    -1,    22,    -1,    26,    -1,   152,    -1,   153,
      -1,   156,    -1,   157,    -1,    30,    -1,    31,    -1,   159,
      -1,   158,    -1,    80,    92,   169,    19,   169,     5,    18,
      -1,    70,    92,   169,    19,   169,     5,    18,    -1,   371,
     377,    -1,   372,    19,   343,    18,   373,    -1,   306,   320,
       5,    -1,    -1,   374,    -1,    17,    51,    19,   189,    18,
      -1,    17,   111,    19,   189,    18,    -1,   306,   320,    15,
       5,    19,    18,   235,    -1,   235,    -1,    28,    -1,   235,
      -1,    28,    -1,   383,    -1,    -1,     5,    -1,     6,    -1,
      13,    -1,    12,    -1,     7,    -1,   306,   320,   109,   379,
     381,   378,   309,    -1,    -1,   382,    -1,    17,   331,    -1,
      17,   310,    -1,    21,   384,    20,    -1,    -1,   385,    -1,
     386,    -1,   385,   386,    -1,   336,    -1,   337,    -1,   338,
      -1,   351,    -1,   358,    -1,   362,    -1,   365,    -1,   370,
      -1,   319,    -1,    21,   388,    20,    -1,    21,   389,   141,
      20,    -1,    -1,   389,    -1,   244,    -1,   389,   141,   244,
      -1,   391,   394,    -1,   306,   320,    83,   324,   328,   392,
      -1,    -1,   393,    -1,    17,   331,    -1,    17,   310,    -1,
      21,   395,    20,   309,    -1,    -1,   396,    -1,   397,    -1,
     396,   397,    -1,   398,    -1,   400,    -1,   403,    -1,   401,
      -1,   306,   399,   169,     5,    19,   343,    18,   404,    -1,
     306,   399,   123,     5,    19,   343,    18,   404,    -1,    -1,
      89,    -1,   306,   399,   169,     5,   427,    21,   402,    20,
     428,    -1,   306,   399,   169,   111,   142,   346,   143,   427,
      21,   402,    20,   428,    -1,   306,   137,   404,    -1,   306,
     138,   404,    -1,   306,   137,   404,   306,   138,   404,    -1,
     306,   138,   404,   306,   137,   404,    -1,   306,   399,    69,
     169,     5,   404,    -1,    28,    -1,    21,    20,    -1,   306,
     320,    68,     5,   406,   408,   309,    -1,    -1,   407,    -1,
      17,   174,    -1,    21,   409,    20,    -1,    21,   410,   141,
      20,    -1,    -1,   410,    -1,   411,    -1,   410,   141,   411,
      -1,   306,     5,    -1,   306,     5,    29,   231,    -1,   306,
     320,    64,   344,     5,    19,   343,    18,    28,    -1,   306,
     320,    64,   310,     5,    19,   343,    18,    28,    -1,   414,
      -1,   415,    -1,   414,   415,    -1,   423,   142,   416,   419,
     143,   424,    -1,   423,   142,   416,   419,   141,   143,   424,
      -1,    -1,   417,    -1,   418,    17,    -1,   130,    -1,   131,
      -1,    69,    -1,   132,    -1,   133,    -1,   134,    -1,   135,
      -1,   101,    -1,   136,    -1,   420,    -1,   419,   141,   420,
      -1,   310,   421,    -1,    -1,   422,    -1,    19,   191,    18,
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
     889,   890,   891,   892,   897,   902,   908,   916,   918,   920,
     923,   924,   925,   926,   927,   930,   931,   934,   937,   939,
     942,   943,   946,   947,   948,   949,   950,   951,   952,   953,
     954,   956,   959,   960,   961,   964,   968,   974,   981,   986,
     991,   998,  1004,  1010,  1015,  1017,  1021,  1024,  1025,  1028,
    1029,  1032,  1033,  1036,  1039,  1043,  1045,  1046,  1050,  1053,
    1059,  1060,  1062,  1064,  1066,  1068,  1071,  1077,  1083,  1084,
    1087,  1088,  1094,  1095,  1098,  1104,  1110,  1116,  1118,  1121,
    1125,  1128,  1129,  1132,  1133,  1136,  1136,  1137,  1137,  1137,
    1137,  1137,  1137,  1138,  1138,  1138,  1138,  1138,  1138,  1139,
    1139,  1139,  1139,  1139,  1139,  1139,  1139,  1142,  1143,  1146,
    1151,  1157,  1162,  1164,  1167,  1168,  1184,  1187,  1188,  1191,
    1192,  1195,  1196,  1199,  1200,  1201,  1202,  1203,  1206,  1209,
    1211,  1214,  1215,  1218,  1220,  1222,  1225,  1226,  1229,  1230,
    1231,  1232,  1233,  1234,  1235,  1236,  1238,  1243,  1244,  1247,
    1249,  1252,  1253,  1258,  1261,  1268,  1270,  1273,  1274,  1277,
    1279,  1281,  1284,  1285,  1288,  1289,  1290,  1291,  1295,  1296,
    1298,  1300,  1303,  1309,  1317,  1318,  1319,  1320,  1323,  1328,
    1329,  1334,  1336,  1338,  1341,  1344,  1345,  1347,  1349,  1352,
    1353,  1356,  1357,  1362,  1363,  1368,  1371,  1372,  1375,  1376,
    1378,  1380,  1383,  1386,  1387,  1388,  1389,  1390,  1391,  1392,
    1393,  1394,  1397,  1398,  1402,  1404,  1406,  1415,  1422,  1427,
    1432,  1437,  1442,  1447
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
  "class_h", "inheritance_list_initializer", "class_base_opt",
  "class_base", "interface_type_list", "class_body",
  "class_member_declarations_opt", "class_member_declarations",
  "class_member_declaration", "constant_declaration", "field_declaration",
  "method_declaration", "method_header", "method_1", "method_2",
  "method_3", "formal_parameter_list_opt", "return_type", "method_body",
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
  "interface_declaration", "interface_header", "interface_base_opt",
  "interface_base", "interface_body", "interface_member_declarations_opt",
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
     346,   347,   347,   348,   348,   349,   349,   349,   350,   351,
     352,   352,   353,   353,   354,   354,   355,   356,   357,   357,
     358,   358,   359,   359,   360,   361,   362,   363,   363,   364,
     365,   366,   366,   367,   367,   368,   368,   368,   368,   368,
     368,   368,   368,   368,   368,   368,   368,   368,   368,   368,
     368,   368,   368,   368,   368,   368,   368,   369,   369,   370,
     371,   372,   373,   373,   374,   374,   375,   376,   376,   377,
     377,   378,   378,   379,   379,   379,   379,   379,   380,   381,
     381,   382,   382,   383,   384,   384,   385,   385,   386,   386,
     386,   386,   386,   386,   386,   386,   386,   387,   387,   388,
     388,   389,   389,   390,   391,   392,   392,   393,   393,   394,
     395,   395,   396,   396,   397,   397,   397,   397,   398,   398,
     399,   399,   400,   401,   402,   402,   402,   402,   403,   404,
     404,   405,   406,   406,   407,   408,   408,   409,   409,   410,
     410,   411,   411,   412,   412,   413,   414,   414,   415,   415,
     416,   416,   417,   418,   418,   418,   418,   418,   418,   418,
     418,   418,   419,   419,   420,   421,   421,   422,   423,   424,
     425,   426,   427,   428
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
       3,     1,     1,     4,     6,     0,     1,     1,     4,     9,
       2,     2,     0,     1,     0,     1,     5,     5,     1,     1,
       6,    10,     2,     2,     5,     5,     8,     5,     5,     2,
       4,     1,     1,     7,    10,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     7,     7,     2,
       5,     3,     0,     1,     5,     5,     7,     1,     1,     1,
       1,     1,     0,     1,     1,     1,     1,     1,     7,     0,
       1,     2,     2,     3,     0,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     4,     0,
       1,     1,     3,     2,     6,     0,     1,     2,     2,     4,
       0,     1,     1,     2,     1,     1,     1,     1,     8,     8,
       0,     1,     9,    12,     3,     3,     6,     6,     6,     1,
       2,     7,     0,     1,     2,     3,     4,     0,     1,     1,
       3,     2,     4,     9,     9,     1,     1,     2,     6,     7,
       0,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     2,     0,     1,     3,     0,     0,
       0,     0,     0,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
     337,     0,     0,   339,   338,   352,   354,   355,   387,   388,
       0,    12,     0,   346,     1,   383,   360,   339,   358,   361,
     362,     0,   363,   364,     0,   365,   366,   340,   585,   586,
       0,   353,   357,   347,     0,   348,   371,   372,   373,     0,
     374,   375,   376,   377,   378,   379,   384,   385,   380,   381,
     382,     0,   383,   369,   367,   383,   359,   339,   394,   339,
     543,   587,   590,   349,     0,   346,   337,   386,   397,     0,
       0,     0,     0,   370,   368,   383,   421,     0,   339,   410,
     412,   413,   414,     0,     0,     0,     0,   415,   416,   417,
     418,   419,     0,     0,   420,   560,     0,   339,   552,   554,
     555,   557,   556,   595,   600,   593,   594,   596,   597,   598,
     599,   601,     0,   591,     0,   356,   337,   339,   344,   389,
     393,   392,   391,   390,   397,   398,   436,     0,     0,   572,
     397,   513,   514,   517,   516,   515,   519,     0,   407,   411,
     203,   438,   437,   427,   339,   339,   339,   510,   509,   499,
     339,   561,     0,   344,   553,   605,     0,   602,   592,   339,
       0,   339,   345,   343,   398,     0,   396,   399,     0,     0,
       0,     0,   573,   545,     0,   512,   520,   387,     0,    20,
      25,    32,     0,    23,    34,     0,     0,    33,     0,    28,
      30,    35,    24,    26,    36,    29,    31,    27,     0,     0,
      13,    15,    16,    19,    21,    22,    17,    18,    14,     0,
     612,     0,   471,   472,   387,     3,     4,     5,     6,     7,
       8,     0,     0,     0,     0,   207,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,     0,     0,     0,     0,
       0,     0,     0,     9,   310,     0,     0,    80,   310,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    54,
       2,     0,    16,    17,   106,    53,    52,    56,    57,    58,
      59,    60,   108,   109,    61,    85,    55,    62,    64,    65,
     110,   123,    63,   111,   117,   121,   122,     0,   114,   240,
     205,   188,   189,     0,   204,   190,   186,   187,     0,     0,
     191,     0,   192,   245,   248,   246,     0,   193,   200,   267,
       0,   268,   269,     0,   270,     0,   194,   299,   300,   301,
     302,   303,   195,   196,   197,   198,   199,   201,   107,   445,
       0,   435,   439,   441,   442,     0,     0,     0,     0,     0,
       0,     0,   549,    76,   604,   606,     0,   609,     0,   351,
     395,   400,   403,   401,   339,   339,   574,   339,   344,     0,
     544,   546,   522,   521,   339,   344,   511,     0,     0,     0,
     232,     0,   346,     0,     0,     0,    39,   432,    37,     0,
       0,     0,     0,   213,   431,     0,   215,     0,    45,    41,
      40,    38,    42,     0,   433,     0,   508,   507,   470,     0,
       0,     0,     0,     0,    57,   108,   109,    85,   121,   122,
     113,   107,   130,   130,   130,   136,   140,   143,   146,   155,
     158,   160,   162,   164,   166,   168,   182,   183,     0,   107,
     103,   112,   120,   119,   118,     0,     0,   304,     0,   324,
       0,   230,     0,   305,     0,     0,   278,   295,     0,     0,
       0,   250,     0,    76,     0,    13,    14,     0,   140,   311,
       0,     0,   254,     0,     0,     0,     0,   325,   271,     0,
     273,   115,   116,   211,   215,     0,     0,     0,     0,    72,
      83,    84,     0,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,     0,   202,   206,   209,   210,   237,
     185,   247,     0,   249,     0,   253,     0,   272,     0,   280,
     288,   292,   277,     0,   283,   289,   387,     0,   294,     0,
      72,     0,   212,   447,     0,   446,     0,   428,   339,   429,
     430,   502,     0,     0,   612,     0,     0,    77,    78,   609,
     603,   588,   350,     0,     0,     0,     0,     0,     0,     0,
     578,   579,   571,   548,   547,   383,   536,   528,   529,   530,
     531,   532,   533,   534,   535,     0,   339,   526,   518,     0,
       0,   236,   423,     0,     0,   235,     0,   610,     0,     0,
     478,   487,   486,   485,   488,   477,   493,   494,   483,   484,
     476,   475,   482,   481,   489,   490,   491,   492,   496,   495,
     479,   480,     0,   339,     0,   425,     0,     0,   469,   217,
     339,   426,   339,   208,     0,   135,   134,     0,   131,   132,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    66,   130,    81,     0,     0,   229,   231,
     276,     0,     0,     0,   306,   184,     0,   308,     0,     0,
      72,    76,    92,   539,    91,    72,    76,     0,   309,     0,
       0,   312,     0,     0,   313,   316,   314,     0,     0,     0,
       0,   329,   328,     0,    68,    69,    67,     0,     0,     0,
      73,    47,     0,    49,   102,   170,     0,     0,     0,   281,
     284,     0,     0,     0,     0,     0,     0,     0,     0,   440,
       0,   500,   503,     0,   339,   339,     0,   339,   607,     0,
     589,   404,   402,   406,   405,     0,     0,   581,   575,   339,
       0,   523,   527,     0,   422,   233,   424,   234,   460,     0,
       0,     0,     0,     0,     0,   218,   214,   339,     0,   224,
     216,   226,   225,     0,     0,     0,   339,   339,     0,   133,
       0,     0,   139,     0,   137,   138,   136,   142,   141,   144,
     145,   148,   147,   152,   154,   151,   153,   149,   150,   156,
     157,   159,   161,   163,   165,     0,   167,   124,     0,    82,
     100,     0,     0,     0,   332,     0,   307,     0,    43,     0,
       0,   541,     0,   540,     0,     0,   104,   105,     0,   320,
     323,   317,   315,    99,    97,    98,   101,     0,    74,    51,
      46,    50,     0,    70,   251,   257,   255,   274,   290,     0,
     285,   293,     0,     0,     0,    71,    75,   448,   443,     0,
       0,     0,   569,   568,     0,     0,   339,     0,    79,   584,
     583,     0,   576,   580,   506,   339,     0,     0,     0,   467,
       0,   219,     0,     0,     0,   468,   613,   613,   613,     0,
     450,   453,     0,   451,   455,   129,   127,   128,   125,     0,
       0,     0,     0,     0,     0,     0,   326,    95,    43,    86,
      43,   537,     0,    87,    43,   321,   321,   327,    48,     0,
       0,     0,     0,   258,   259,     0,   262,   286,     0,     0,
       0,     0,    72,    72,   570,     0,     0,     0,     0,   612,
     582,     0,     0,   339,   339,     0,     0,     0,   221,   220,
     613,     0,     0,     0,     0,   466,   169,   126,     0,   334,
     330,   333,   331,    89,    96,    44,     0,    95,   538,   542,
      95,     0,   322,     0,   252,   266,     0,   265,   256,   260,
     261,   263,     0,   287,   291,   297,     0,     0,   444,     0,
       0,   559,   558,     0,     0,   613,     0,   611,   611,   611,
       0,   462,     0,   463,   498,   497,   473,     0,   222,   449,
       0,     0,   459,   458,   612,   612,   275,    43,     0,    88,
      90,     0,     0,   264,     0,   296,   298,   504,   505,   339,
     339,   562,   339,     0,     0,   461,     0,   223,   227,   228,
     456,   457,    95,    43,   318,   319,   279,     0,     0,     0,
     610,   610,     0,    93,    95,     0,     0,   613,   464,   465,
     474,    94,   566,   567,   563
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,   259,   260,    10,   261,   200,   201,   402,   203,   204,
     205,   403,   207,   208,   887,   392,   819,   690,   691,   264,
     265,   266,   267,   404,   692,   269,   536,   537,   270,   271,
     405,   406,   274,   407,   276,   662,   943,   277,   278,   279,
     280,   281,   282,   283,   284,   408,   409,   415,   288,   617,
     618,   619,   458,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   494,   538,   656,   501,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   382,   383,   750,
     751,   299,   369,   370,   300,   301,   302,   502,   303,   304,
     503,   305,   306,   505,   826,   902,   903,   904,   905,   906,
     307,   308,   309,   310,   507,   311,   312,   313,   512,   513,
     829,   962,   514,   830,   963,   515,   314,   315,   518,   316,
     317,   318,   319,   320,   460,   321,   322,   674,   675,   951,
     676,   323,   324,   325,   326,   683,   327,   793,   794,     2,
       3,   329,   160,    16,   163,   411,    12,   118,     4,     5,
       6,     7,   161,    18,    19,    51,    52,    53,    54,    65,
     124,    20,    21,   125,   166,   167,   353,    58,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,   330,   128,
     143,   331,   332,   333,   526,   334,    87,   755,   870,   873,
     756,   757,   994,    88,   922,   923,   924,    89,   210,   387,
      90,   211,   212,   602,   213,    91,    92,    93,   711,   712,
      94,   398,   149,   365,   136,    22,   175,   176,   366,   565,
     566,   567,   752,   802,   803,    23,    24,   360,   361,    60,
      96,    97,    98,    99,   152,   100,   101,   918,   102,   843,
      25,   171,   172,   358,   549,   550,   551,    26,    27,    28,
      29,   112,   113,   114,   156,   157,   344,   345,    30,   541,
     739,  1013,   395,   933
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -823
static const short int yypact[] =
{
     -91,   430,    86,   -23,   -91,  -823,  -823,  -823,  -823,  -823,
     297,  -823,   430,   283,  -823,  1081,  -823,    53,  -823,  -823,
    -823,   114,  -823,  -823,   148,  -823,  -823,  -823,   -23,  -823,
     205,  -823,  -823,   306,   430,  -823,  -823,  -823,  -823,   430,
    -823,  -823,  -823,  -823,  -823,  -823,   255,  -823,  -823,  -823,
    -823,   416,  3333,  -823,  -823,  3249,  -823,    42,  -823,   104,
    -823,  -823,   469,  -823,   338,   326,   250,  -823,   577,   299,
     406,   430,   664,  -823,  -823,  3333,  -823,   372,   124,  -823,
    -823,  -823,  -823,   419,   478,   523,   528,  -823,  -823,  -823,
    -823,  -823,   544,   532,  -823,   399,   554,   141,  -823,  -823,
    -823,  -823,  -823,  -823,  -823,  -823,  -823,  -823,  -823,  -823,
    -823,  -823,   430,  -823,   560,  -823,   -91,   144,   583,  -823,
    -823,  -823,  -823,  -823,  -823,   609,  -823,   587,   630,   638,
    -823,  -823,  -823,  -823,  -823,  -823,   646,  3028,  -823,  -823,
    1848,  -823,  -823,  -823,    37,    37,    37,  -823,  -823,  -823,
      37,  -823,  1409,   583,  -823,   647,   387,  -823,  -823,   144,
     691,   147,  -823,  -823,   609,   415,  -823,  -823,   665,   700,
     698,   696,  -823,   704,   430,   713,  -823,   706,   730,  -823,
    -823,  -823,  3141,  -823,  -823,  3141,   645,  -823,   651,  -823,
    -823,  -823,  -823,  -823,  -823,  -823,  -823,  -823,   421,   215,
    -823,   734,  -823,  -823,  -823,  -823,  -823,  -823,   734,    60,
    -823,   565,  -823,  -823,   722,  -823,  -823,  -823,  -823,  -823,
    -823,  2906,  2202,  2906,  2906,  -823,  2906,  2906,  2906,   236,
     718,   151,  3141,   719,  1969,  -823,   731,   732,   738,    58,
     739,   740,   392,  -823,  2906,   742,   745,  -823,  2906,  -823,
     728,   750,   543,   728,   751,   741,   752,  2906,  2906,  -823,
    -823,    93,   735,   743,   253,   753,  -823,  -823,    72,  -823,
    -823,  -823,    73,   108,  -823,   123,  -823,  -823,  -823,  -823,
    -823,  -823,  -823,   459,  -823,   131,   132,   498,  -823,  -823,
    -823,  -823,  -823,   756,  1848,  -823,  -823,  -823,   754,   761,
    -823,   762,  -823,  -823,  2906,  -823,  2906,  -823,  -823,  -823,
    2906,  -823,  -823,  1210,  -823,  3184,  -823,  -823,  -823,  -823,
    -823,  -823,  -823,  -823,  -823,  -823,  -823,  -823,    55,   453,
     760,   643,  -823,  -823,  -823,   774,   775,   776,  3141,    46,
     355,   107,  -823,  2906,  -823,  -823,    62,  -823,   778,  -823,
    -823,   655,   658,   660,    37,    37,  -823,   160,   583,   430,
    -823,  -823,   658,   660,   192,   583,  -823,   786,   428,    88,
    -823,   425,   300,    93,  3141,  3141,  -823,  -823,  -823,  3005,
     668,   663,   140,  -823,   792,   312,   550,   674,  -823,  -823,
    -823,  -823,  -823,   247,  -823,   800,  -823,  -823,  -823,  1848,
     804,   807,   735,   743,  -823,  -823,  -823,  -823,  -823,  -823,
    -823,    29,   310,   101,   336,   498,   592,   477,   320,    98,
     494,   805,   803,   808,   671,    28,  -823,  -823,   815,    39,
    -823,  -823,  -823,  -823,  -823,   827,  2906,  -823,  2906,  -823,
     428,   694,   425,  -823,    52,  3141,  -823,  -823,   809,  2906,
     810,  -823,  2906,  2906,    65,   702,   327,    77,   640,  -823,
     812,  3141,  -823,   817,    59,  3208,  2906,  -823,  -823,  2321,
    -823,  -823,  -823,   701,   818,   841,   843,   845,  2906,  1538,
    -823,  -823,   848,  -823,  -823,  -823,  -823,  -823,  -823,  -823,
    -823,  -823,  -823,  -823,  2906,  -823,  -823,  -823,  -823,  -823,
    -823,  -823,   836,  -823,   837,  -823,   840,  -823,   842,  -823,
    -823,  -823,  -823,   831,  -823,   721,   782,   381,  -823,    99,
    1538,  2440,   701,  -823,  3141,  -823,  3141,  -823,   -23,  -823,
    -823,   850,   438,   851,   857,   744,   859,   747,  -823,  -823,
    -823,  -823,  -823,   430,   430,   430,   862,   864,   878,   865,
     748,  -823,  -823,   658,   660,  3333,  -823,  -823,  -823,  -823,
    -823,  -823,  -823,  -823,  -823,   870,   225,  -823,  -823,   873,
     248,   863,  -823,   430,   249,  2906,   267,  -823,   420,   484,
    -823,  -823,  -823,  -823,  -823,  -823,  -823,  -823,  -823,  -823,
    -823,  -823,  -823,  -823,  -823,  -823,  -823,  -823,  -823,  -823,
    -823,  -823,   874,   -23,   112,  -823,   117,   875,  -823,  2086,
     -23,  -823,   -23,  -823,  2906,  -823,  -823,   876,   310,  -823,
     877,   879,  2906,  2557,  2906,  2906,  2906,  2906,  2906,  2906,
    2906,  3141,  3141,  2906,  2906,  2906,  2906,  2906,  2906,  2906,
    2906,  2906,  2906,  3308,   310,  -823,   437,   880,   694,   694,
    -823,   881,   454,   305,  -823,  -823,   871,  -823,   883,   759,
    1538,  2906,  -823,  2086,  -823,  1538,  2906,  2906,  -823,   410,
     351,  -823,   619,   728,    59,  -823,  -823,   450,   475,   460,
     888,  -823,  -823,   891,  -823,  -823,  -823,   518,  2906,  2906,
     770,  -823,   894,  -823,  -823,  -823,  1969,   892,  1969,  -823,
    2906,  2906,  2906,   833,   834,   899,   564,   472,   497,  -823,
      31,  -823,  -823,   570,    37,    37,   897,   -23,  -823,  2906,
    -823,   658,   660,  -823,  -823,   895,   901,   890,  -823,   254,
    3117,  -823,  -823,   728,  -823,  -823,  -823,  -823,  -823,   906,
    3141,  3141,  3141,   567,   779,   905,  -823,   -23,  3141,  -823,
    -823,  -823,  -823,   571,   537,   910,   262,   264,  2906,  -823,
    2906,  2906,  -823,  2906,  -823,  -823,  -823,   640,   640,   477,
     477,   320,   320,   907,   107,   907,   107,   320,   320,    98,
      98,   494,   805,   803,   808,   924,   671,  -823,   927,  -823,
    -823,  2906,   913,   109,  -823,   120,  -823,  1969,   734,   928,
     811,  -823,   930,   816,   933,   813,  -823,  -823,   415,  -823,
    -823,  -823,  -823,  -823,  -823,  -823,  -823,  1969,  -823,  -823,
    -823,  -823,  1538,  -823,   885,    47,  -823,  -823,  -823,   920,
    -823,  -823,   935,  2906,  2906,  -823,  -823,  -823,   929,   940,
     942,   944,  -823,  -823,   948,   949,   -23,   572,  -823,  -823,
    -823,  2906,  -823,  -823,  -823,   -23,   517,   527,   534,  -823,
     430,  2086,   954,   221,    45,  -823,  -823,  -823,  -823,   824,
    -823,  -823,   839,  -823,  -823,  -823,  -823,  -823,  -823,  2906,
    2906,   950,  2906,  1969,   972,  1969,  -823,   957,   734,  -823,
      68,  -823,  1330,  -823,   734,   430,   430,  -823,  -823,  1969,
    2673,   962,   960,    47,  -823,  1702,  -823,  2906,  1969,   963,
     964,   547,  1538,  1538,  -823,   570,   570,   558,   968,  -823,
    -823,   467,   970,   -23,   -23,   965,   966,   129,   971,  -823,
    -823,  2906,  2906,   599,   599,  -823,  -823,  -823,   973,  -823,
    -823,  -823,  -823,  -823,  -823,  -823,  2789,   957,  -823,  -823,
     957,   974,  -823,   975,  -823,  -823,   982,  -823,  -823,  -823,
    1848,  -823,   984,  -823,   721,  -823,  1969,  1969,  -823,   985,
     986,  -823,  -823,   570,   570,  -823,   987,  -823,  -823,  -823,
     872,  -823,   852,  -823,  -823,  -823,  -823,  3141,  2086,  -823,
     868,   882,  -823,  -823,  -823,  -823,  -823,   734,   575,  -823,
    -823,   728,   728,  -823,  1969,  -823,  -823,  -823,  -823,   273,
     276,  -823,   -23,   728,   728,  -823,   536,  -823,  -823,  -823,
    -823,  -823,   957,   734,  -823,  -823,  -823,   867,   889,   994,
    -823,  -823,   997,  -823,   957,   570,   570,  -823,  -823,  -823,
    -823,  -823,  -823,  -823,  -823
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -823,   106,  -823,  -823,  -112,   780,  -823,    26,  -823,   858,
    -823,   932,  -823,   785,  -805,  -113,   331,  -823,   207,  -823,
    -823,  -823,  -823,   -88,  -503,  -823,  -425,  -428,  -823,  -823,
     -34,    90,  -823,   111,  -823,  -823,  -615,  -823,  -823,  -823,
    -823,  -823,  -823,  -823,   389,   138,   168,    64,  -823,  -392,
    -823,   417,  -209,    96,    49,    92,   396,   400,   395,   401,
     398,  -823,  -823,   242,  -823,   814,  -548,  -306,  -292,  -163,
     -77,  -823,   137,  -823,  -823,  -823,  -275,  -185,   441,  -637,
    -823,  -823,  -175,   471,  -823,  -310,  -823,  -823,  -823,  -823,
    -823,  -823,  -823,  -823,  -823,  -823,  -823,   145,  -823,   149,
    -823,  -823,  -823,  -823,  -823,  -823,  -823,  -823,  -823,  -823,
    -823,  -823,  -823,  -823,  -823,   142,  -823,  -823,  -823,  -823,
    -823,  -823,  -823,  -823,   822,  -823,  -823,  -823,   378,   159,
     386,  -823,  -823,  -823,  -823,  -823,  -823,   408,   179,  -823,
     240,    -3,   915,  -823,  -142,     0,   866,  -823,  -823,  1060,
    -823,  -823,  1063,    30,   -45,   -65,  -823,  1027,  1028,     8,
    -823,  -823,  -823,   509,   918,  -823,  -158,  -823,  -823,  -823,
    1005,  -335,  -333,  -332,  -823,  -823,  -823,  -823,  -127,  -823,
    -823,  -280,   557,  -823,  -823,  -823,  -329,   339,  -823,  -823,
     330,   332,   155,  -328,  -823,   166,   169,  -327,  -823,  -823,
    -323,  -823,  -823,  -823,  -823,  -322,  -823,  -823,  -823,  -823,
    -823,  -823,  -823,  -823,  -823,  -823,  -823,  -823,  -823,  -823,
    -823,   525,  -449,  -823,  -823,  -823,  -823,  -823,  -823,  -823,
    -823,  -823,   996,  -823,  -823,  -823,  -823,    83,  -823,  -460,
    -823,  -823,  -823,  -823,  -823,  -823,   367,  -823,  -823,  -823,
    1071,  -823,  -823,  -823,  -823,   755,  -823,  -823,  -823,   561,
    -350,  -246,  -379,  -822
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -613
static const short int yytable[] =
{
      15,    11,   496,   511,   506,   607,   142,   664,   646,    13,
     137,   342,    76,   416,    55,   148,   363,   705,   335,   336,
      33,   620,   621,   337,   393,   199,   801,   737,   659,   557,
       1,   558,   559,    76,    64,   560,   561,   562,   510,    66,
     340,   563,   564,   388,   641,   934,   935,    56,   520,   388,
     687,   533,   268,  -336,    75,  -434,    95,   441,   520,   388,
       8,     9,  -408,   448,   388,     8,     9,     8,     9,   127,
     368,   444,   388,   373,   520,    75,   473,   391,   376,   130,
     650,   388,   839,   945,   660,   947,    14,   391,   389,   950,
    -238,  -241,   391,   706,    95,   390,   665,   378,     8,     9,
    -238,  -241,   900,   388,   704,   388,   272,   613,   989,   391,
     901,   388,   155,   449,    55,   672,   572,     8,     9,  -608,
     440,   450,     8,     9,  -550,   378,  -242,   883,   629,   630,
     454,   391,   673,   615,   397,    57,  -242,   209,   885,   391,
     328,  -239,   840,   522,  -409,   475,   268,   986,   631,  -243,
    -244,  -239,   341,  1011,   439,   716,    55,   799,    55,  -243,
    -244,  -551,   804,   202,  -341,   352,   262,  -342,   605,    59,
     438,   614,   140,   464,   362,   467,   468,   651,   202,  -608,
    -577,   614,   371,   632,  -608,   341,   706,   932,   576,   642,
     372,    56,  1022,   570,   682,  -608,   574,   521,   377,   384,
     272,   554,   381,   517,   287,   539,   268,   386,   202,   394,
     946,   202,  -524,  -238,  -241,  1044,   552,   386,  1034,   666,
       8,     9,   429,   568,   929,   268,   532,   546,   547,   573,
     273,   557,   442,   558,   559,   381,   800,   560,   561,   562,
     372,   805,   457,   563,   564,  -525,  -608,   378,   413,  -242,
     884,   275,   788,   378,   744,   949,   633,   634,   202,   381,
     272,   884,   578,   579,  -239,   648,  -608,   649,   202,   474,
     987,   116,  -243,  -244,   852,   611,   734,   736,   285,   272,
     435,   606,  -452,  -608,  -454,   410,  -608,   430,   431,  -608,
     432,   433,   434,  -564,   328,   738,  -565,   477,   287,   616,
     616,   616,  -608,   920,     8,     9,   117,   379,   286,   388,
     792,   268,    34,   328,   388,   519,   644,     8,     9,   556,
     262,   471,   472,   743,   273,    32,   380,    35,  -236,   575,
     753,   388,   999,   652,  -608,  1000,   474,   391,   341,   262,
     388,   202,   615,   390,    35,   275,   155,    62,   663,   669,
      63,  1017,   956,   678,   548,   388,   159,   381,   287,   553,
     534,   555,    67,   931,   202,   272,   115,  -608,   615,   807,
      35,     1,   285,   577,   341,   341,   571,   287,   436,   571,
     476,   386,   289,   391,   273,   722,   703,   378,   606,   573,
     573,   831,   138,    33,   828,   478,  -608,     8,     9,   328,
     202,   202,   286,   273,  -608,   275,  -608,  1033,   606,   969,
     970,   129,   707,   378,   708,  -608,   767,   768,  -608,  1041,
       8,     9,   126,   608,   275,   262,     8,     9,   806,   388,
       8,     9,   285,     8,     9,     8,     9,   847,   944,   740,
     140,  -236,   378,   713,   179,   653,   180,   141,   571,   181,
     571,   285,   378,   376,   183,   971,   972,   391,   184,   792,
     378,   670,   286,   287,   388,   679,   535,   187,   813,   328,
     378,   202,   627,   628,   189,    68,   289,   837,   815,   190,
      69,   286,   376,   191,    70,   881,   378,   202,   151,   273,
     730,   202,   391,   814,   192,   262,   193,   144,   944,    71,
     194,   944,   838,   741,   378,   616,   191,   378,   195,   196,
     275,   625,   197,  1009,  1010,   255,   378,   626,   998,   773,
     775,   556,   925,   194,   341,    72,   341,   483,   346,   378,
     347,   616,   926,   824,   453,   827,   289,   285,   103,   927,
     976,  1032,   145,   721,   723,   724,   523,   146,   524,   378,
     202,   150,   202,   525,   215,   289,   216,   217,   218,   378,
     219,   220,   466,   555,   140,   140,   378,   286,   378,  -346,
     104,  -346,   147,   944,   153,  1042,  1043,   158,   719,   609,
     789,   571,   119,   120,   121,   944,   140,   844,   845,   122,
     123,   841,   168,   396,    35,   809,   810,   511,   842,   105,
     106,   107,   108,   109,   110,   111,   977,   978,   268,   754,
     268,   162,   745,   268,   474,  1020,  1021,   622,   199,   235,
     140,   480,   481,   482,   623,   624,   165,   992,   856,   857,
     858,   774,   776,   164,   886,   169,   863,   243,   808,   173,
     140,   289,   484,   485,   486,   487,   488,   489,   490,   491,
     635,   636,   492,   493,   897,   170,   854,   202,   202,   719,
     249,   818,   272,   174,   272,   622,   343,   272,   496,   131,
     132,   133,   667,   624,   866,   867,   134,   135,   771,   772,
    1038,  1039,   777,   778,   354,   888,   762,   764,   765,   766,
     766,   766,   766,   766,   766,   973,   974,   766,   766,   766,
     766,   766,   766,   766,   766,   719,   766,   836,   528,   268,
     859,   349,   528,   528,   865,   919,   719,   357,  1023,   355,
     940,   359,   942,   769,   770,  -501,   548,   779,   780,   268,
     209,   764,  1014,  1015,   364,   367,   954,   374,   388,   399,
     341,   341,   341,   375,   754,   965,   437,   443,   864,   140,
     445,   446,   180,   869,   872,   181,   202,   447,   451,   452,
     287,   461,   287,   272,   462,   287,   202,   202,   202,   465,
     469,   470,   479,   376,   202,   888,   495,   888,   527,   475,
     189,   888,   497,   272,   528,   190,   273,   476,   273,   498,
     499,   273,   529,   530,   531,   268,   543,   268,   542,   544,
     192,   545,   193,  1005,  1006,   569,   604,   275,   896,   275,
     603,   268,   275,  -612,   195,   196,   610,   268,   197,   268,
     268,   612,   875,   438,   876,   877,   466,   878,   637,   638,
     639,   640,   645,   643,   285,   573,   285,   654,   657,   285,
     668,  1026,   606,   917,   661,   671,   684,   609,   685,   272,
     686,   272,   921,   694,   696,   697,   993,   993,   698,   700,
     699,   287,   701,   702,   286,   272,   286,   710,   928,   286,
     714,   272,   268,   272,   272,  1016,   715,   718,   268,   268,
     725,   287,   726,   727,   888,   728,   717,   273,   719,   729,
     731,   733,   575,   742,   758,   760,   747,   761,   790,   796,
     791,   797,   798,   952,   952,   328,   816,   273,   275,   817,
     888,   822,   823,   825,   833,   834,   268,   835,   846,   851,
     980,   982,   860,   849,  1024,  1025,   272,   855,   275,   850,
     868,   262,   272,   272,   861,   285,  1030,  1031,   289,   378,
     289,   879,   882,   289,   937,   880,   889,   287,   907,   287,
     891,   893,   899,   908,   890,   285,   894,   892,   911,   912,
     328,   913,   867,   287,   914,   286,   915,   916,   938,   287,
     272,   287,   287,   273,   930,   273,   866,   792,   663,   957,
     958,   966,   967,   984,   985,   286,   262,   341,   975,   273,
     979,   977,  1001,  1002,   275,   273,   275,   273,   273,  1003,
     988,   996,  1004,  1007,  1008,  1035,  1027,  1028,  1012,   917,
     275,  1018,   978,   202,  1037,  1040,   275,   968,   275,   275,
     821,   285,   455,   285,   287,  1019,  1036,   456,   356,   898,
     287,   287,   787,   781,   783,   759,   428,   285,   782,   289,
     786,   784,   960,   285,   735,   285,   285,   746,   959,   964,
     273,   286,   811,   286,   961,   953,   273,   273,   459,   289,
     812,   795,   459,   941,    31,   385,    17,   286,   287,   206,
     463,   275,   263,   286,   348,   286,   286,   275,   275,    73,
      74,  -335,   350,   139,   206,   709,   862,   874,   871,   995,
     983,   732,   981,   154,   273,  1029,   853,   351,   285,    61,
     720,   540,     0,     0,   285,   285,     0,     0,     0,     0,
       0,     0,     0,     0,   206,   275,     0,   206,   500,     0,
     504,     0,     0,     0,   500,   289,     0,   289,   286,     0,
      36,     0,     0,     0,   286,   286,     0,     0,     0,     0,
       0,   289,   285,     0,     0,     0,     0,   289,     0,   289,
     289,     0,    37,     0,   414,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   206,    38,     0,     0,     0,    39,
      40,     0,   286,     0,   206,    41,     0,    42,    43,    44,
      45,     0,     0,     0,    46,     0,     0,     0,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,     0,   289,    49,     0,    50,     0,     0,   289,   289,
       0,   508,     0,     0,     0,     8,     9,   215,     0,   216,
     217,   218,     0,   219,   220,   221,   263,     0,   509,   222,
       0,     0,     0,   223,     0,     0,     0,   224,  -282,     0,
       0,     0,   226,     0,   227,   263,   289,   206,     0,     0,
     228,     0,   647,     0,     0,     0,     0,     0,     0,     0,
       0,   229,   179,   655,   180,     0,   658,   181,   400,     0,
     206,     0,   183,     0,     0,     0,   184,     0,     0,     0,
     680,     0,   235,   681,     0,   187,     0,     0,     0,     0,
       0,     0,   189,   693,     0,     0,     0,   190,     0,   242,
     243,   191,     0,     0,     0,     0,   206,   206,   695,     0,
       0,     0,   192,     0,   193,   245,     0,     0,   194,     0,
       0,   247,     0,   249,     0,   251,   195,   196,   401,     0,
     197,   263,     0,   255,   693,     8,     9,   215,     0,   216,
     217,   218,     0,   219,   220,   221,     0,     0,     0,   222,
     948,   663,     0,   223,     0,     0,     0,   224,     0,     0,
       0,     0,   226,     0,   227,     0,     0,     0,     0,     0,
     228,     0,   257,   258,     0,     0,     0,   206,     0,     0,
       0,   229,   179,     0,   180,     0,     0,   181,   400,   655,
       0,     0,   183,   206,     0,     0,   184,   206,     0,     0,
       0,   263,   235,     0,     0,   187,     0,     0,     0,     0,
       0,     0,   189,     0,     8,     9,     0,   190,     0,   242,
     243,   191,     0,   749,     0,     0,     0,     0,     0,     0,
       0,     0,   192,     0,   193,   245,   748,     0,   194,     0,
       0,   247,     0,   249,     0,   251,   195,   196,   401,     0,
     197,     0,     0,     0,     0,   785,   206,     0,   206,     0,
       0,   179,     0,   180,     0,     0,   181,     0,     0,     0,
       0,   183,     0,     0,   693,   184,     0,   749,   338,   693,
       0,     0,     0,     0,   187,     0,     0,     0,     0,     0,
       0,   189,   257,   258,     0,     0,   190,     0,     0,     0,
     191,     0,   820,   820,     0,     0,     0,     0,     0,     0,
       0,   192,     0,   193,   500,     0,   832,   194,     0,     0,
       0,     0,     0,     0,     0,   195,   196,     0,     0,   197,
       0,     0,   339,   848,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     8,     9,   215,     0,   216,   217,   218,
       0,   219,   220,   221,     0,     0,     0,   222,     0,     0,
       0,   223,     0,   206,   206,   224,     0,     0,     0,     0,
     226,     0,   227,     0,     0,     0,     0,     0,   228,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   229,
     179,     0,   180,     0,     0,   181,   400,     0,     0,     0,
     183,     0,     0,     0,   184,   500,     0,     0,     0,     0,
     235,     0,     0,   187,     0,     0,     0,     0,     0,     0,
     189,     0,     0,     0,     0,   190,     0,   242,   243,   191,
       0,   688,     0,     0,     0,     0,   693,     0,   689,     0,
     192,     0,   193,   245,     0,     0,   194,   909,   910,   247,
       0,   249,     0,   251,   195,   196,   401,     0,   197,     0,
       0,     0,   206,     0,     0,   655,     0,     0,     0,     0,
       0,     0,   206,   206,   206,   749,     0,     0,     0,     0,
     206,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   936,     0,     0,   939,     0,     0,     0,
     257,   258,     0,     0,     0,     0,   749,   214,     9,   215,
       0,   216,   217,   218,   655,   219,   220,   221,     0,     0,
       0,   222,     0,   140,     0,   223,   693,   693,     0,   224,
     225,     0,     0,     0,   226,     0,   227,     0,     0,     0,
     895,     0,   228,     0,     0,   990,   991,     0,     0,     0,
       0,     0,     0,   229,   179,   230,   180,   900,     0,   181,
     231,     0,   232,   233,   183,   901,     0,   234,   184,     0,
       0,     0,     0,     0,   235,     0,   236,   187,   237,   238,
     239,   240,     0,     0,   189,     0,     0,     0,   241,   190,
       0,   242,   243,   191,     0,     0,     0,     0,     0,     0,
       0,     0,   749,   244,   192,     0,   193,   245,     0,     0,
     194,     0,   246,   247,   248,   249,   250,   251,   195,   196,
     252,   253,   197,   254,     0,   255,     0,   256,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   263,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   214,     9,   215,     0,   216,   217,   218,
       0,   219,   220,   221,   257,   258,     0,   222,     0,   140,
       0,   223,     0,     0,     0,   224,   225,     0,     0,     0,
     226,     0,   227,     0,     0,     0,     0,     0,   228,     0,
       0,     0,   263,     0,     0,     0,     0,     0,     0,   229,
     179,   230,   180,     0,     0,   181,   231,     0,   232,   233,
     183,     0,     0,   234,   184,     0,     0,     0,     0,   206,
     235,     0,   236,   187,   237,   238,   239,   240,     0,     0,
     189,     0,     0,     0,   241,   190,     0,   242,   243,   191,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   244,
     192,     0,   193,   245,     0,     0,   194,     0,   246,   247,
     248,   249,   250,   251,   195,   196,   252,   253,   197,   254,
       0,   255,     0,   256,     8,     9,   215,     0,   216,   217,
     218,     0,   219,   220,   221,     0,     0,     0,   222,     0,
     140,     0,   223,     0,     0,     0,   224,   225,     0,     0,
       0,   226,     0,   227,     0,     0,     0,     0,     0,   228,
     257,   258,     0,     0,     0,     0,     0,     0,     0,     0,
     229,   179,   230,   180,     0,     0,   181,   231,     0,     0,
     233,   183,     0,     0,   234,   184,     0,     0,     0,     0,
       0,   235,     0,   236,   187,   237,   238,   239,   240,     0,
       0,   189,     0,     0,     0,   241,   190,     0,   242,   243,
     191,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     244,   192,     0,   193,   245,     0,     0,   194,     0,   246,
     247,   248,   249,   250,   251,   195,   196,   252,   253,   197,
     254,     8,     9,   215,   256,   216,   217,   218,     0,   219,
     220,   221,     0,     0,     0,   222,     0,   663,     0,   223,
       0,     0,     0,   224,     0,     0,     0,     0,   226,     0,
     227,     0,     0,     0,     0,     0,   228,     0,     0,     0,
       0,   257,   258,     0,     0,     0,     0,   229,   179,     0,
     180,     0,     0,   181,   400,     0,     0,     0,   183,     0,
       0,     0,   184,     0,     0,     0,     0,     0,   235,     0,
       0,   187,     0,     0,     0,     0,     0,     0,   189,     0,
       0,     0,     0,   190,     0,   242,   243,   191,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   192,     0,
     193,   245,   748,     0,   194,     0,     0,   247,     0,   249,
       0,   251,   195,   196,   401,     0,   197,     8,     9,   215,
       0,   216,   217,   218,     0,   219,   220,   221,     0,     0,
       0,   222,     0,     0,     0,   223,     0,     0,     0,   224,
       0,     0,     0,     0,   226,     0,   227,     0,     0,     0,
       0,     0,   228,     0,     0,     0,     0,     0,   257,   258,
       0,     0,     0,   229,   179,     0,   180,     0,     0,   181,
     400,     0,     0,     0,   183,     0,     0,     0,   184,     0,
       0,     0,     0,     0,   235,     0,     0,   187,     0,     0,
       0,     0,     0,     0,   189,     0,     0,     0,     0,   190,
       0,   242,   243,   191,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   192,     0,   193,   245,     0,     0,
     194,     0,     0,   247,     0,   249,     0,   251,   195,   196,
     401,     0,   197,     0,     0,   412,     8,     9,   215,     0,
     216,   217,   218,     0,   219,   220,   221,     0,     0,     0,
     222,     0,     0,     0,   223,     0,     0,     0,   224,     0,
       0,     0,     0,   226,     0,   227,     0,     0,     0,     0,
       0,   228,     0,     0,   257,   258,     0,     0,     0,     0,
       0,     0,   229,   179,     0,   180,     0,     0,   181,   400,
       0,     0,     0,   183,     0,     0,     0,   184,     0,     0,
       0,     0,     0,   235,     0,     0,   187,     0,     0,     0,
       0,     0,     0,   189,     0,     0,     0,     0,   190,     0,
     242,   243,   191,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   192,     0,   193,   245,     0,     0,   194,
       0,     0,   247,     0,   249,     0,   251,   195,   196,   401,
       0,   197,     0,     0,   255,     8,     9,   215,     0,   216,
     217,   218,     0,   219,   220,   221,     0,     0,     0,   222,
       0,     0,     0,   223,     0,     0,     0,   224,     0,     0,
       0,     0,   226,     0,   227,     0,     0,     0,     0,     0,
     228,     0,     0,   257,   258,     0,     0,     0,     0,     0,
       0,   229,   179,     0,   180,     0,     0,   181,   400,     0,
       0,     0,   183,     0,     0,     0,   184,     0,     0,     0,
       0,     0,   235,     0,     0,   187,     0,     0,     0,     0,
       0,     0,   189,     0,     0,     0,     0,   190,     0,   242,
     243,   191,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   192,     0,   193,   245,     0,     0,   194,     0,
       0,   247,     0,   249,     0,   251,   195,   196,   401,     0,
     197,     0,     8,     9,   215,     0,   216,   217,   218,     0,
     219,   220,   221,     0,     0,   763,   222,     0,     0,     0,
     223,     0,     0,   604,   224,     0,     0,     0,     0,   226,
       0,   227,     0,     0,     0,     0,     0,   228,     0,     0,
       0,     0,   257,   258,     0,     0,     0,     0,   229,   179,
       0,   180,     0,     0,   181,   400,     0,     0,     0,   183,
       0,     0,     0,   184,     0,     0,     0,     0,     0,   235,
       0,     0,   187,     0,     0,     0,     0,     0,     0,   189,
       0,     0,     0,     0,   190,     0,   242,   243,   191,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   192,
       0,   193,   245,     0,     0,   194,     0,     0,   247,     0,
     249,     0,   251,   195,   196,   401,     0,   197,     8,     9,
     215,     0,   216,   217,   218,     0,   219,   220,   221,     0,
     955,     0,   222,     0,     0,     0,   223,     0,     0,     0,
     224,     0,     0,     0,     0,   226,     0,   227,     0,     0,
       0,     0,     0,   228,     0,     0,     0,     0,     0,   257,
     258,     0,     0,     0,   229,   179,     0,   180,     0,     0,
     181,   400,     0,     0,     0,   183,     0,     0,     0,   184,
       0,     0,     0,     0,     0,   235,     0,     0,   187,     0,
       0,     0,     0,     0,     0,   189,     0,     0,     0,     0,
     190,     0,   242,   243,   191,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   192,     0,   193,   245,     0,
       0,   194,     0,     0,   247,     0,   249,     0,   251,   195,
     196,   401,     0,   197,     8,     9,   215,     0,   216,   217,
     218,     0,   219,   220,   221,     0,     0,     0,   222,     0,
       0,     0,   223,     0,     0,     0,   224,     0,     0,     0,
       0,   226,     0,   227,     0,     0,     0,     0,     0,   228,
       0,     0,     0,     0,     0,   257,   258,     0,     0,     0,
     229,   179,     0,   180,     0,     0,   181,   400,     0,     0,
       0,   183,     0,     0,     0,   184,     0,     0,     0,     0,
       0,   235,     0,     0,   187,     0,     0,     0,     0,     0,
       0,   189,     0,     0,     0,     0,   190,     0,   242,   243,
     191,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   192,     0,   193,   245,     0,     0,   194,     0,     0,
     247,     0,   249,     0,   251,   195,   196,   401,     0,   197,
       0,     8,     9,   215,     0,   216,   217,   218,     0,   219,
     220,   221,     0,     0,     0,   222,     0,     0,     0,   223,
       0,     0,   997,   224,     0,     0,     0,     0,   226,     0,
     227,     0,     0,     0,     0,     0,   228,     0,     0,     0,
       0,   257,   258,     0,     0,     0,     0,   229,   179,     0,
     180,     0,     0,   181,   400,     0,     0,     0,   183,     0,
       0,     0,   184,     0,     0,     0,     0,     0,   235,     0,
       0,   187,     0,     0,     0,     0,     0,     0,   189,     0,
       0,     0,     0,   190,     0,   242,   243,   191,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   192,     0,
     193,   245,     0,     0,   194,     0,     0,   247,     0,   249,
     580,   251,   195,   196,   401,     0,   197,   581,   582,     0,
     583,   584,   585,   177,     9,   586,   587,   588,   589,   590,
       0,     0,     0,   178,     0,   591,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   257,   258,
       0,     0,     0,     0,     0,     0,     0,   592,     0,     0,
     179,     0,   180,     0,     0,   181,     0,    68,   182,     0,
     183,     0,    69,     0,   184,     0,    70,   185,   186,     0,
       0,     0,     0,   187,     0,     0,     0,     0,   188,     0,
     189,    71,     0,     0,     0,   190,     0,     0,   593,   191,
       0,     0,   177,     9,     0,     0,     0,     0,     0,     0,
     192,     0,   193,     0,     0,     0,   194,    72,     0,     0,
       0,     0,     0,     0,   195,   196,     8,     9,   197,     0,
       0,   198,     0,     0,     0,     0,     0,   594,   595,     0,
       0,   596,   597,   598,   599,     0,     0,   600,   601,   179,
       0,   180,     0,     0,   181,     0,    68,   182,     0,   183,
       0,    69,     0,   184,     0,    70,   185,   186,     0,   516,
       9,     0,   187,   179,     0,   180,     0,   188,   181,   189,
      71,     0,     0,   183,   190,     0,     0,   184,   191,     0,
       0,     0,     0,     8,     9,     0,   187,     0,     0,   192,
       0,   193,     0,   189,     0,   194,    72,     0,   190,     0,
       0,     0,   191,   195,   196,     0,   179,   197,   180,     0,
     198,   181,     0,   192,     0,   193,   183,     0,     0,   194,
     184,     0,     0,     0,     0,     0,     0,   195,   196,   187,
     179,   197,   180,     0,   255,   181,   189,     0,     0,     0,
     183,   190,     0,     0,   184,   191,     0,     0,     0,     0,
       0,     0,     0,   187,     0,     0,   192,     0,   193,     0,
     189,     0,   194,     0,     0,   190,     0,     0,    36,   191,
     195,   196,     0,     0,   197,     0,     0,   255,     0,     0,
     192,     0,   193,     8,     9,   215,   194,   216,   217,   218,
      37,   219,   220,   221,   195,   196,     0,   222,   197,     0,
       0,   677,     0,    38,     0,   224,     0,    39,    40,     0,
       0,     0,     0,    41,     0,    42,    43,    44,    45,     0,
       0,     0,    46,     0,     0,     0,    47,     0,     0,   229,
     179,     0,   180,     0,     0,   181,   400,     0,    48,     0,
     183,    49,     0,    50,   184,     0,     0,     0,     0,     0,
     235,     0,    36,   187,     0,     0,     0,     0,     0,     0,
     189,     0,     0,     0,     0,   190,     0,   242,   243,   191,
       0,     0,     0,     0,    37,     0,     0,     0,     0,     0,
     192,     0,   193,   245,     0,     0,   194,    38,     0,   247,
       0,   249,    40,   251,   195,   196,   401,    41,   197,    42,
      43,    44,    45,     0,     0,     0,    46,     0,     0,     0,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,     0,     0,    49,     0,    50
};

static const short int yycheck[] =
{
       3,     1,   294,   313,   310,   384,    83,   456,   436,     1,
      75,   153,    57,   222,    17,    92,   174,   520,   145,   146,
      12,   413,   414,   150,   209,   137,   663,   575,   453,   364,
     121,   364,   364,    78,    34,   364,   364,   364,   313,    39,
     152,   364,   364,     4,    16,   867,   868,    17,    19,     4,
     478,     5,   140,     0,    57,    18,    59,   232,    19,     4,
       5,     6,    20,     5,     4,     5,     6,     5,     6,    69,
     182,   234,     4,   185,    19,    78,   261,    32,    32,    71,
      28,     4,    51,   888,    19,   890,     0,    32,   201,   894,
      18,    18,    32,   521,    97,   208,    19,    32,     5,     6,
      28,    28,    55,     4,     5,     4,   140,   399,   930,    32,
      63,     4,   112,    55,   117,    56,    28,     5,     6,   142,
     232,    63,     5,     6,    20,    32,    18,    18,    30,    31,
     242,    32,    73,    32,   211,    21,    28,   137,    18,    32,
     140,    18,   111,   328,    20,    44,   234,    18,    50,    18,
      18,    28,   152,   975,   231,   534,   159,   660,   161,    28,
      28,    20,   665,   137,    20,   165,   140,    20,    28,    21,
      19,   142,    21,   250,   174,   252,   253,   125,   152,   142,
      20,   142,   182,    85,   142,   185,   614,   142,   373,   161,
     182,   161,   997,   368,   469,   142,   371,   142,   198,   199,
     234,   359,   142,   315,   140,   143,   294,   199,   182,   209,
     142,   185,    20,   141,   141,  1037,   358,   209,  1023,   142,
       5,     6,   222,   365,   861,   313,   338,   354,   355,   141,
     140,   566,   232,   566,   566,   142,   661,   566,   566,   566,
     232,   666,   242,   566,   566,    20,   142,    32,   222,   141,
     141,   140,   644,    32,   142,   892,   158,   159,   232,   142,
     294,   141,   374,   375,   141,   440,   142,   442,   242,   261,
     141,    21,   141,   141,    20,    28,    28,    28,   140,   313,
      44,   141,    20,   142,    20,   221,   142,   223,   224,   142,
     226,   227,   228,    20,   294,    28,    20,    44,   234,   412,
     413,   414,   142,   851,     5,     6,    66,    92,   140,     4,
       5,   399,    29,   313,     4,   315,   429,     5,     6,   364,
     294,   257,   258,   603,   234,    28,   111,    44,    28,    29,
     610,     4,   947,   445,   142,   950,   328,    32,   338,   313,
       4,   315,    32,   456,    44,   234,   346,   142,    21,   461,
      44,   988,   900,   465,   357,     4,   116,   142,   294,   359,
       5,   364,   107,   142,   338,   399,    28,   142,    32,    18,
      44,   121,   234,   373,   374,   375,   368,   313,   142,   371,
      44,   373,   140,    32,   294,   543,     5,    32,   141,   141,
     141,   701,    20,   385,   700,   142,   142,     5,     6,   399,
     374,   375,   234,   313,   142,   294,   142,  1022,   141,   912,
     913,     5,   524,    32,   526,   142,   625,   626,   142,  1034,
       5,     6,   123,   111,   313,   399,     5,     6,    18,     4,
       5,     6,   294,     5,     6,     5,     6,   717,   887,    19,
      21,   141,    32,     5,    52,   445,    54,    28,   440,    57,
     442,   313,    32,    32,    62,   915,   916,    32,    66,     5,
      32,   461,   294,   399,     4,   465,   111,    75,    18,   469,
      32,   445,   152,   153,    82,    59,   234,     5,    18,    87,
      64,   313,    32,    91,    68,   791,    32,   461,    89,   399,
     555,   465,    32,    18,   102,   469,   104,    19,   947,    83,
     108,   950,     5,    19,    32,   618,    91,    32,   116,   117,
     399,    34,   120,   973,   974,   123,    32,    40,   946,   631,
     632,   566,     5,   108,   524,   109,   526,    29,   141,    32,
     143,   644,     5,   696,   142,   698,   294,   399,    69,     5,
     919,     5,    19,   543,   544,   545,    93,    19,    95,    32,
     524,    19,   526,   100,     7,   313,     9,    10,    11,    32,
      13,    14,    19,   566,    21,    21,    32,   399,    32,    19,
     101,    21,    28,  1022,    20,  1035,  1036,    17,   141,    29,
     143,   573,     5,     6,     7,  1034,    21,   714,   715,    12,
      13,    21,     5,    28,    44,   672,   673,   907,    28,   130,
     131,   132,   133,   134,   135,   136,   139,   140,   696,   612,
     698,    28,   604,   701,   606,   994,   995,    25,   730,    72,
      21,   162,   163,   164,    32,    33,    17,    28,   740,   741,
     742,   631,   632,   124,   797,     5,   748,    90,    19,   130,
      21,   399,   144,   145,   146,   147,   148,   149,   150,   151,
     156,   157,   154,   155,   817,    17,   733,   631,   632,   141,
     113,   143,   696,    17,   698,    25,    19,   701,   960,     5,
       6,     7,    32,    33,   137,   138,    12,    13,   629,   630,
    1030,  1031,   633,   634,    19,   798,   622,   623,   624,   625,
     626,   627,   628,   629,   630,   137,   138,   633,   634,   635,
     636,   637,   638,   639,   640,   141,   642,   143,   141,   797,
     143,    20,   141,   141,   143,   143,   141,    21,   143,    19,
     883,    17,   885,   627,   628,    19,   729,   635,   636,   817,
     730,   667,   978,   979,    21,     5,   899,    92,     4,    17,
     740,   741,   742,    92,   747,   908,    28,    28,   748,    21,
      19,    19,    54,   756,   757,    57,   730,    19,    19,    19,
     696,    19,   698,   797,    19,   701,   740,   741,   742,    19,
      19,    19,    19,    32,   748,   888,    20,   890,    18,    44,
      82,   894,    28,   817,   141,    87,   696,    44,   698,    28,
      28,   701,    18,    18,    18,   883,   141,   885,    20,   141,
     102,   141,   104,   966,   967,    19,   143,   696,   808,   698,
     142,   899,   701,    21,   116,   117,   142,   905,   120,   907,
     908,    21,   758,    19,   760,   761,    19,   763,    23,    26,
      22,   160,     5,    18,   696,   141,   698,    28,    28,   701,
      28,  1004,   141,   846,   142,    28,     5,    29,     5,   883,
       5,   885,   855,     5,    18,    18,   933,   934,    18,    28,
      18,   797,   141,    81,   696,   899,   698,    17,   860,   701,
      19,   905,   960,   907,   908,   987,    19,    18,   966,   967,
      18,   817,    18,     5,   997,    20,   142,   797,   141,   141,
      20,    18,    29,    19,    18,    18,    21,    18,    18,    28,
      19,    18,   143,   895,   896,   905,    18,   817,   797,    18,
    1023,   141,    18,    21,    81,    81,  1004,    18,    21,    29,
     923,   924,   143,    28,  1001,  1002,   960,    21,   817,    28,
      20,   905,   966,   967,    29,   797,  1013,  1014,   696,    32,
     698,    17,    29,   701,   880,    18,    18,   883,    28,   885,
      20,    18,    67,    18,   143,   817,   143,   141,    29,    19,
     960,    19,   138,   899,    20,   797,    18,    18,    18,   905,
    1004,   907,   908,   883,    20,   885,   137,     5,    21,    17,
      20,    18,    18,    18,    18,   817,   960,   987,    20,   899,
      20,   139,    18,    18,   883,   905,   885,   907,   908,    17,
      29,    28,    18,    18,    18,   138,  1009,  1010,    21,  1012,
     899,   143,   140,   987,    20,    18,   905,   911,   907,   908,
     689,   883,   242,   885,   960,   143,   137,   242,   170,   822,
     966,   967,   643,   637,   639,   618,   222,   899,   638,   797,
     642,   640,   905,   905,   573,   907,   908,   606,   903,   907,
     960,   883,   674,   885,   905,   896,   966,   967,   244,   817,
     674,   653,   248,   884,     4,   199,     3,   899,  1004,   137,
     248,   960,   140,   905,   159,   907,   908,   966,   967,    52,
      52,     0,   164,    78,   152,   528,   747,   757,   756,   934,
     924,   566,   923,    97,  1004,  1012,   729,   165,   960,    28,
     539,   346,    -1,    -1,   966,   967,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   182,  1004,    -1,   185,   304,    -1,
     306,    -1,    -1,    -1,   310,   883,    -1,   885,   960,    -1,
      49,    -1,    -1,    -1,   966,   967,    -1,    -1,    -1,    -1,
      -1,   899,  1004,    -1,    -1,    -1,    -1,   905,    -1,   907,
     908,    -1,    71,    -1,   222,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   232,    84,    -1,    -1,    -1,    88,
      89,    -1,  1004,    -1,   242,    94,    -1,    96,    97,    98,
      99,    -1,    -1,    -1,   103,    -1,    -1,    -1,   107,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     119,    -1,   960,   122,    -1,   124,    -1,    -1,   966,   967,
      -1,     1,    -1,    -1,    -1,     5,     6,     7,    -1,     9,
      10,    11,    -1,    13,    14,    15,   294,    -1,    18,    19,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    28,    -1,
      -1,    -1,    32,    -1,    34,   313,  1004,   315,    -1,    -1,
      40,    -1,   438,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    52,   449,    54,    -1,   452,    57,    58,    -1,
     338,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,    -1,
     466,    -1,    72,   469,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    82,   479,    -1,    -1,    -1,    87,    -1,    89,
      90,    91,    -1,    -1,    -1,    -1,   374,   375,   494,    -1,
      -1,    -1,   102,    -1,   104,   105,    -1,    -1,   108,    -1,
      -1,   111,    -1,   113,    -1,   115,   116,   117,   118,    -1,
     120,   399,    -1,   123,   520,     5,     6,     7,    -1,     9,
      10,    11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,
      20,    21,    -1,    23,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      40,    -1,   162,   163,    -1,    -1,    -1,   445,    -1,    -1,
      -1,    51,    52,    -1,    54,    -1,    -1,    57,    58,   575,
      -1,    -1,    62,   461,    -1,    -1,    66,   465,    -1,    -1,
      -1,   469,    72,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,     5,     6,    -1,    87,    -1,    89,
      90,    91,    -1,   609,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   102,    -1,   104,   105,   106,    -1,   108,    -1,
      -1,   111,    -1,   113,    -1,   115,   116,   117,   118,    -1,
     120,    -1,    -1,    -1,    -1,   641,   524,    -1,   526,    -1,
      -1,    52,    -1,    54,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    62,    -1,    -1,   660,    66,    -1,   663,    69,   665,
      -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    82,   162,   163,    -1,    -1,    87,    -1,    -1,    -1,
      91,    -1,   688,   689,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   102,    -1,   104,   700,    -1,   702,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,   117,    -1,    -1,   120,
      -1,    -1,   123,   719,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,     6,     7,    -1,     9,    10,    11,
      -1,    13,    14,    15,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    23,    -1,   631,   632,    27,    -1,    -1,    -1,    -1,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      52,    -1,    54,    -1,    -1,    57,    58,    -1,    -1,    -1,
      62,    -1,    -1,    -1,    66,   791,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    87,    -1,    89,    90,    91,
      -1,    93,    -1,    -1,    -1,    -1,   822,    -1,   100,    -1,
     102,    -1,   104,   105,    -1,    -1,   108,   833,   834,   111,
      -1,   113,    -1,   115,   116,   117,   118,    -1,   120,    -1,
      -1,    -1,   730,    -1,    -1,   851,    -1,    -1,    -1,    -1,
      -1,    -1,   740,   741,   742,   861,    -1,    -1,    -1,    -1,
     748,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   879,    -1,    -1,   882,    -1,    -1,    -1,
     162,   163,    -1,    -1,    -1,    -1,   892,     5,     6,     7,
      -1,     9,    10,    11,   900,    13,    14,    15,    -1,    -1,
      -1,    19,    -1,    21,    -1,    23,   912,   913,    -1,    27,
      28,    -1,    -1,    -1,    32,    -1,    34,    -1,    -1,    -1,
     808,    -1,    40,    -1,    -1,   931,   932,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    52,    53,    54,    55,    -1,    57,
      58,    -1,    60,    61,    62,    63,    -1,    65,    66,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    75,    76,    77,
      78,    79,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,
      -1,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   988,   101,   102,    -1,   104,   105,    -1,    -1,
     108,    -1,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,    -1,   123,    -1,   125,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   905,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,     6,     7,    -1,     9,    10,    11,
      -1,    13,    14,    15,   162,   163,    -1,    19,    -1,    21,
      -1,    23,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,   960,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      52,    53,    54,    -1,    -1,    57,    58,    -1,    60,    61,
      62,    -1,    -1,    65,    66,    -1,    -1,    -1,    -1,   987,
      72,    -1,    74,    75,    76,    77,    78,    79,    -1,    -1,
      82,    -1,    -1,    -1,    86,    87,    -1,    89,    90,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,
     102,    -1,   104,   105,    -1,    -1,   108,    -1,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
      -1,   123,    -1,   125,     5,     6,     7,    -1,     9,    10,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,    -1,
      21,    -1,    23,    -1,    -1,    -1,    27,    28,    -1,    -1,
      -1,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    40,
     162,   163,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    53,    54,    -1,    -1,    57,    58,    -1,    -1,
      61,    62,    -1,    -1,    65,    66,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    74,    75,    76,    77,    78,    79,    -1,
      -1,    82,    -1,    -1,    -1,    86,    87,    -1,    89,    90,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     101,   102,    -1,   104,   105,    -1,    -1,   108,    -1,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,     5,     6,     7,   125,     9,    10,    11,    -1,    13,
      14,    15,    -1,    -1,    -1,    19,    -1,    21,    -1,    23,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,   162,   163,    -1,    -1,    -1,    -1,    51,    52,    -1,
      54,    -1,    -1,    57,    58,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    87,    -1,    89,    90,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,
     104,   105,   106,    -1,   108,    -1,    -1,   111,    -1,   113,
      -1,   115,   116,   117,   118,    -1,   120,     5,     6,     7,
      -1,     9,    10,    11,    -1,    13,    14,    15,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,   162,   163,
      -1,    -1,    -1,    51,    52,    -1,    54,    -1,    -1,    57,
      58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    87,
      -1,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,    -1,   104,   105,    -1,    -1,
     108,    -1,    -1,   111,    -1,   113,    -1,   115,   116,   117,
     118,    -1,   120,    -1,    -1,   123,     5,     6,     7,    -1,
       9,    10,    11,    -1,    13,    14,    15,    -1,    -1,    -1,
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
      -1,   120,    -1,    -1,   123,     5,     6,     7,    -1,     9,
      10,    11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,   162,   163,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    52,    -1,    54,    -1,    -1,    57,    58,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    87,    -1,    89,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   102,    -1,   104,   105,    -1,    -1,   108,    -1,
      -1,   111,    -1,   113,    -1,   115,   116,   117,   118,    -1,
     120,    -1,     5,     6,     7,    -1,     9,    10,    11,    -1,
      13,    14,    15,    -1,    -1,    18,    19,    -1,    -1,    -1,
      23,    -1,    -1,   143,    27,    -1,    -1,    -1,    -1,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,   162,   163,    -1,    -1,    -1,    -1,    51,    52,
      -1,    54,    -1,    -1,    57,    58,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    87,    -1,    89,    90,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,
      -1,   104,   105,    -1,    -1,   108,    -1,    -1,   111,    -1,
     113,    -1,   115,   116,   117,   118,    -1,   120,     5,     6,
       7,    -1,     9,    10,    11,    -1,    13,    14,    15,    -1,
      17,    -1,    19,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    32,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,   162,
     163,    -1,    -1,    -1,    51,    52,    -1,    54,    -1,    -1,
      57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      87,    -1,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   102,    -1,   104,   105,    -1,
      -1,   108,    -1,    -1,   111,    -1,   113,    -1,   115,   116,
     117,   118,    -1,   120,     5,     6,     7,    -1,     9,    10,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,    -1,
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
      -1,     5,     6,     7,    -1,     9,    10,    11,    -1,    13,
      14,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    23,
      -1,    -1,   143,    27,    -1,    -1,    -1,    -1,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,   162,   163,    -1,    -1,    -1,    -1,    51,    52,    -1,
      54,    -1,    -1,    57,    58,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    87,    -1,    89,    90,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,
     104,   105,    -1,    -1,   108,    -1,    -1,   111,    -1,   113,
      15,   115,   116,   117,   118,    -1,   120,    22,    23,    -1,
      25,    26,    27,     5,     6,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    15,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,   163,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      52,    -1,    54,    -1,    -1,    57,    -1,    59,    60,    -1,
      62,    -1,    64,    -1,    66,    -1,    68,    69,    70,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    80,    -1,
      82,    83,    -1,    -1,    -1,    87,    -1,    -1,   113,    91,
      -1,    -1,     5,     6,    -1,    -1,    -1,    -1,    -1,    -1,
     102,    -1,   104,    -1,    -1,    -1,   108,   109,    -1,    -1,
      -1,    -1,    -1,    -1,   116,   117,     5,     6,   120,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,   152,   153,    -1,
      -1,   156,   157,   158,   159,    -1,    -1,   162,   163,    52,
      -1,    54,    -1,    -1,    57,    -1,    59,    60,    -1,    62,
      -1,    64,    -1,    66,    -1,    68,    69,    70,    -1,     5,
       6,    -1,    75,    52,    -1,    54,    -1,    80,    57,    82,
      83,    -1,    -1,    62,    87,    -1,    -1,    66,    91,    -1,
      -1,    -1,    -1,     5,     6,    -1,    75,    -1,    -1,   102,
      -1,   104,    -1,    82,    -1,   108,   109,    -1,    87,    -1,
      -1,    -1,    91,   116,   117,    -1,    52,   120,    54,    -1,
     123,    57,    -1,   102,    -1,   104,    62,    -1,    -1,   108,
      66,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,    75,
      52,   120,    54,    -1,   123,    57,    82,    -1,    -1,    -1,
      62,    87,    -1,    -1,    66,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,   102,    -1,   104,    -1,
      82,    -1,   108,    -1,    -1,    87,    -1,    -1,    49,    91,
     116,   117,    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,
     102,    -1,   104,     5,     6,     7,   108,     9,    10,    11,
      71,    13,    14,    15,   116,   117,    -1,    19,   120,    -1,
      -1,   123,    -1,    84,    -1,    27,    -1,    88,    89,    -1,
      -1,    -1,    -1,    94,    -1,    96,    97,    98,    99,    -1,
      -1,    -1,   103,    -1,    -1,    -1,   107,    -1,    -1,    51,
      52,    -1,    54,    -1,    -1,    57,    58,    -1,   119,    -1,
      62,   122,    -1,   124,    66,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    49,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    87,    -1,    89,    90,    91,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,
     102,    -1,   104,   105,    -1,    -1,   108,    84,    -1,   111,
      -1,   113,    89,   115,   116,   117,   118,    94,   120,    96,
      97,    98,    99,    -1,    -1,    -1,   103,    -1,    -1,    -1,
     107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   119,    -1,    -1,   122,    -1,   124
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,   121,   304,   305,   313,   314,   315,   316,     5,     6,
     168,   310,   311,   324,     0,   306,   308,   317,   318,   319,
     326,   327,   380,   390,   391,   405,   412,   413,   414,   415,
     423,   314,    28,   324,    29,    44,    49,    71,    84,    88,
      89,    94,    96,    97,    98,    99,   103,   107,   119,   122,
     124,   320,   321,   322,   323,   306,   318,    21,   332,    21,
     394,   415,   142,    44,   310,   324,   310,   107,    59,    64,
      68,    83,   109,   322,   323,   306,   319,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   351,   358,   362,
     365,   370,   371,   372,   375,   306,   395,   396,   397,   398,
     400,   401,   403,    69,   101,   130,   131,   132,   133,   134,
     135,   136,   416,   417,   418,    28,    21,   305,   312,     5,
       6,     7,    12,    13,   325,   328,   123,   310,   344,     5,
     324,     5,     6,     7,    12,    13,   379,   320,    20,   335,
      21,    28,   235,   345,    19,    19,    19,    28,   235,   377,
      19,    89,   399,    20,   397,   310,   419,   420,    17,   305,
     307,   317,    28,   309,   328,    17,   329,   330,     5,     5,
      17,   406,   407,   328,    17,   381,   382,     5,    15,    52,
      54,    57,    60,    62,    66,    69,    70,    75,    80,    82,
      87,    91,   102,   104,   108,   116,   117,   120,   123,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   310,
     363,   366,   367,   369,     5,     7,     9,    10,    11,    13,
      14,    15,    19,    23,    27,    28,    32,    34,    40,    51,
      53,    58,    60,    61,    65,    72,    74,    76,    77,    78,
      79,    86,    89,    90,   101,   105,   110,   111,   112,   113,
     114,   115,   118,   119,   121,   123,   125,   162,   163,   166,
     167,   169,   172,   176,   184,   185,   186,   187,   188,   190,
     193,   194,   195,   196,   197,   198,   199,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   228,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   246,
     249,   250,   251,   253,   254,   256,   257,   265,   266,   267,
     268,   270,   271,   272,   281,   282,   284,   285,   286,   287,
     288,   290,   291,   296,   297,   298,   299,   301,   310,   306,
     343,   346,   347,   348,   350,   343,   343,   343,    69,   123,
     169,   310,   309,    19,   421,   422,   141,   143,   307,    20,
     329,   176,   310,   331,    19,    19,   174,    21,   408,    17,
     392,   393,   310,   331,    21,   378,   383,     5,   169,   247,
     248,   310,   324,   169,    92,    92,    32,   310,    32,    92,
     111,   142,   242,   243,   310,   311,   324,   364,     4,   180,
     180,    32,   180,   242,   310,   427,    28,   235,   376,    17,
      58,   118,   172,   176,   188,   195,   196,   198,   210,   211,
     212,   310,   123,   172,   176,   212,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   230,   310,
     212,   212,   212,   212,   212,    44,   142,    28,    19,   235,
     169,   247,   310,    28,   234,    19,    19,    19,     5,    55,
      63,    19,    19,   142,   169,   170,   178,   310,   217,   230,
     289,    19,    19,   289,   235,    19,    19,   235,   235,    19,
      19,   212,   212,   242,   324,    44,    44,    44,   142,    19,
     162,   163,   164,    29,   144,   145,   146,   147,   148,   149,
     150,   151,   154,   155,   229,    20,   233,    28,    28,    28,
     230,   232,   252,   255,   230,   258,   232,   269,     1,    18,
     241,   250,   273,   274,   277,   280,     5,   169,   283,   310,
      19,   142,   242,    93,    95,   100,   349,    18,   141,    18,
      18,    18,   169,     5,     5,   111,   191,   192,   230,   143,
     420,   424,    20,   141,   141,   141,   343,   343,   306,   409,
     410,   411,   309,   310,   331,   306,   319,   336,   337,   338,
     351,   358,   362,   365,   370,   384,   385,   386,   309,    19,
     247,   324,    28,   141,   247,    29,   242,   310,   169,   169,
      15,    22,    23,    25,    26,    27,    30,    31,    32,    33,
      34,    40,    72,   113,   152,   153,   156,   157,   158,   159,
     162,   163,   368,   142,   143,    28,   141,   427,   111,    29,
     142,    28,    21,   233,   142,    32,   180,   214,   215,   216,
     214,   214,    25,    32,    33,    34,    40,   152,   153,    30,
      31,    50,    85,   158,   159,   156,   157,    23,    26,    22,
     160,    16,   161,    18,   180,     5,   192,   230,   247,   247,
      28,   125,   169,   310,    28,   230,   231,    28,   230,   191,
      19,   142,   200,    21,   387,    19,   142,    32,    28,   169,
     310,    28,    56,    73,   292,   293,   295,   123,   169,   310,
     230,   230,   241,   300,     5,     5,     5,   192,    93,   100,
     182,   183,   189,   230,     5,   230,    18,    18,    18,    18,
      28,   141,    81,     5,     5,   189,   192,   169,   169,   347,
      17,   373,   374,     5,    19,    19,   427,   142,    18,   141,
     424,   310,   331,   310,   310,    18,    18,     5,    20,   141,
     320,    20,   386,    18,    28,   248,    28,   231,    28,   425,
      19,    19,    19,   346,   142,   324,   243,    21,   106,   230,
     244,   245,   387,   346,   306,   352,   355,   356,    18,   216,
      18,    18,   212,    18,   212,   212,   212,   217,   217,   218,
     218,   219,   219,   169,   310,   169,   310,   219,   219,   220,
     220,   221,   222,   223,   224,   230,   225,   209,   214,   143,
      18,    19,     5,   302,   303,   302,    28,    18,   143,   189,
     191,   244,   388,   389,   189,   191,    18,    18,    19,   235,
     235,   293,   295,    18,    18,    18,    18,    18,   143,   181,
     230,   181,   141,    18,   234,    21,   259,   234,   232,   275,
     278,   250,   230,    81,    81,    18,   143,     5,     5,    51,
     111,    21,    28,   404,   343,   343,    21,   346,   230,    28,
      28,    29,    20,   411,   235,    21,   169,   169,   169,   143,
     143,    29,   352,   169,   310,   143,   137,   138,    20,   306,
     353,   356,   306,   354,   355,   212,   212,   212,   212,    17,
      18,   232,    29,    18,   141,    18,   234,   179,   180,    18,
     143,    20,   141,    18,   143,   176,   310,   234,   183,    67,
      55,    63,   260,   261,   262,   263,   264,    28,    18,   230,
     230,    29,    19,    19,    20,    18,    18,   306,   402,   143,
     231,   306,   359,   360,   361,     5,     5,     5,   324,   244,
      20,   142,   142,   428,   428,   428,   230,   212,    18,   230,
     234,   303,   234,   201,   387,   179,   142,   179,    20,   244,
     179,   294,   324,   294,   234,    17,   231,    17,    20,   262,
     237,   264,   276,   279,   280,   234,    18,    18,   166,   189,
     189,   404,   404,   137,   138,    20,   427,   139,   140,    20,
     306,   361,   306,   360,    18,    18,    18,   141,    29,   428,
     230,   230,    28,   235,   357,   357,    28,   143,   192,   201,
     201,    18,    18,    17,    18,   234,   234,    18,    18,   404,
     404,   428,    21,   426,   426,   426,   169,   244,   143,   143,
     427,   427,   179,   143,   235,   235,   234,   306,   306,   402,
     235,   235,     5,   201,   179,   138,   137,    20,   425,   425,
      18,   201,   404,   404,   428
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
													(yyval.clas) = p->create_class((yyvsp[-2].r.str), false, il, access_modifier, data_storage, (yyvsp[-5].r.myColNo), (yyvsp[-5].r.myLineNo));
													access_modifier = nullptr;
													data_storage = nullptr;
													isLocal = false;
											;}
    break;

  case 396:
#line 908 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { 
													errorRec.errQ->enqueue((yyvsp[-6].r.myLineNo),(yyvsp[-6].r.myColNo),"error not identifier (T_NOT_IDENTIFIER) ","");
													access_modifier = nullptr;
													data_storage = nullptr;
													isLocal = false;
											  ;}
    break;

  case 397:
#line 916 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	il = new InheritanceList();	;}
    break;

  case 399:
#line 920 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { cout << "\t\t Added class base\n";;}
    break;

  case 400:
#line 923 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {;}
    break;

  case 401:
#line 924 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	il = p->add_class_list((yyvsp[0].r.str), il);;}
    break;

  case 402:
#line 925 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {;}
    break;

  case 403:
#line 926 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {  il = p->add_class_list((yyvsp[0].r.str), il);   ;}
    break;

  case 404:
#line 927 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {;}
    break;

  case 405:
#line 930 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	il = p->add_class_list((yyvsp[0].r.str), il);	;}
    break;

  case 406:
#line 931 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	il = p->add_class_list((yyvsp[0].r.str), il);	;}
    break;

  case 407:
#line 934 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { cout << "\t\t Added class body\n"; ;}
    break;

  case 423:
#line 960 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[-5].r.myLineNo),(yyvsp[-5].r.myColNo),"error const ","can't const with out type ");;}
    break;

  case 425:
#line 964 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	
																							access_modifier = nullptr;	
																							data_storage = nullptr;
																						;}
    break;

  case 426:
#line 968 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
															  								access_modifier = nullptr;	
																							data_storage = nullptr;
																						;}
    break;

  case 427:
#line 974 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
												(yyval.func) = p->finish_function_declaration((yyvsp[-1].func));
												isLocal = false;
											;}
    break;

  case 428:
#line 981 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	
													access_modifier = nullptr;
													data_storage = nullptr;
													isLocal = true;
											;}
    break;

  case 429:
#line 986 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
													access_modifier = nullptr;
													data_storage = nullptr;
													isLocal = true;
											;}
    break;

  case 430:
#line 991 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
													access_modifier = nullptr;
													data_storage = nullptr;
													isLocal = true;
											;}
    break;

  case 431:
#line 998 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
																		lp = new List_Parameters();
																		(yyval.func) = p->create_function((yyvsp[0].r.str), lp, access_modifier, data_storage, false, (yyvsp[-3].r.myColNo), (yyvsp[-3].r.myLineNo));
																;}
    break;

  case 432:
#line 1004 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
																		lp = new List_Parameters();
																		(yyval.func) = p->create_function((yyvsp[0].r.str), lp, access_modifier, data_storage, false, (yyvsp[-3].r.myColNo), (yyvsp[-3].r.myLineNo));
																;}
    break;

  case 433:
#line 1010 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
																		lp = new List_Parameters();
																		(yyval.func) = p->create_function((yyvsp[0].r.str), lp, access_modifier, data_storage, false, (yyvsp[-3].r.myColNo), (yyvsp[-3].r.myLineNo));
																;}
    break;

  case 443:
#line 1036 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
																				lp = p->add_parameters((yyvsp[0].r.str) , false , lp);
																			;}
    break;

  case 444:
#line 1039 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
																				lp = p->add_parameters((yyvsp[-2].r.str) , true , lp);
																			;}
    break;

  case 499:
#line 1146 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
													(yyval.func) = p->finish_function_declaration((yyvsp[-1].func));
												;}
    break;

  case 500:
#line 1151 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
													access_modifier = nullptr;
													data_storage = nullptr;
												;}
    break;

  case 501:
#line 1157 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
													lp = new List_Parameters();
													(yyval.func) = p->create_function((yyvsp[0].r.str), lp, access_modifier, data_storage, true, (yyvsp[-2].r.myColNo), (yyvsp[-2].r.myLineNo));
												;}
    break;

  case 512:
#line 1196 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[-1].r.myLineNo),(yyvsp[-1].r.myColNo),"type error expected no struct body ","");;}
    break;

  case 514:
#line 1200 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"type error expected not id ","");;}
    break;

  case 515:
#line 1201 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_INTEGER) ","");;}
    break;

  case 516:
#line 1202 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_INTEGER) ","");;}
    break;

  case 517:
#line 1203 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_INTEGER) ","");;}
    break;

  case 543:
#line 1258 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	(yyval.clas) = p->finish_class_declaration((yyvsp[-1].clas));	;}
    break;

  case 544:
#line 1261 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
  																					(yyval.clas) = p->create_class((yyvsp[-2].r.str), true, il, access_modifier, data_storage, (yyvsp[-5].r.myColNo), (yyvsp[-5].r.myLineNo));
																					access_modifier = nullptr;
																					data_storage = nullptr;
																					isLocal = false;
																				;}
    break;

  case 546:
#line 1270 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { cout << "\t\t Added interface base\n"; ;}
    break;

  case 549:
#line 1277 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { cout << "\t\t Added interface body"; ;}
    break;

  case 586:
#line 1371 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {cout << "\t\t added attribute\n";;}
    break;

  case 608:
#line 1422 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { 
		//lex_enter_attrib();
    ;}
    break;

  case 609:
#line 1427 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
		//lex_exit_attrib();
	;}
    break;

  case 610:
#line 1432 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
		//lex_enter_accessor();
    ;}
    break;

  case 611:
#line 1437 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
		//lex_exit_accessor();
	;}
    break;

  case 612:
#line 1442 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
		//lex_enter_getset();
	;}
    break;

  case 613:
#line 1447 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { 
		//lex_exit_getset();
	;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 3660 "yacc.cpp"

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


#line 1453 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"


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

