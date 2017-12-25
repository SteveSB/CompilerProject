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
  #include <string.h>
  #include <fstream>   // file I/O
  #include <iomanip>   // format manipulation
  #include "dirent.h" //new lib for dirctor
  #include<conio.h>
  #include <vector>
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
#line 42 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
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
#line 471 "yacc.cpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 483 "yacc.cpp"

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
#define YYLAST   3599

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  165
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  268
/* YYNRULES -- Number of rules. */
#define YYNRULES  617
/* YYNRULES -- Number of states. */
#define YYNSTATES  1049

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
     770,   773,   776,   778,   780,   783,   787,   790,   793,   795,
     797,   799,   801,   804,   807,   810,   814,   822,   826,   829,
     832,   840,   842,   845,   846,   848,   849,   851,   852,   854,
     856,   858,   860,   862,   864,   868,   871,   874,   881,   887,
     894,   896,   898,   900,   902,   904,   907,   910,   914,   919,
     923,   927,   928,   930,   934,   938,   942,   947,   949,   952,
     959,   966,   969,   970,   972,   975,   978,   981,   987,   993,
     995,   997,  1004,  1011,  1013,  1017,  1021,  1024,  1027,  1028,
    1030,  1031,  1033,  1034,  1036,  1042,  1043,  1045,  1047,  1050,
    1053,  1057,  1062,  1066,  1068,  1071,  1073,  1075,  1081,  1085,
    1087,  1090,  1092,  1094,  1096,  1098,  1100,  1102,  1104,  1106,
    1109,  1111,  1114,  1116,  1118,  1120,  1122,  1124,  1126,  1128,
    1130,  1132,  1134,  1136,  1138,  1139,  1141,  1143,  1146,  1148,
    1150,  1152,  1154,  1156,  1158,  1160,  1163,  1170,  1176,  1177,
    1178,  1180,  1183,  1186,  1191,  1194,  1199,  1203,  1207,  1211,
    1212,  1214,  1216,  1219,  1221,  1223,  1225,  1227,  1229,  1231,
    1233,  1235,  1237,  1239,  1246,  1252,  1259,  1265,  1271,  1274,
    1279,  1284,  1289,  1294,  1299,  1304,  1305,  1307,  1309,  1311,
    1313,  1315,  1319,  1321,  1323,  1328,  1335,  1336,  1338,  1340,
    1345,  1355,  1358,  1361,  1362,  1364,  1365,  1367,  1373,  1379,
    1381,  1383,  1390,  1401,  1404,  1407,  1413,  1419,  1428,  1434,
    1440,  1443,  1448,  1450,  1452,  1460,  1471,  1473,  1475,  1477,
    1479,  1481,  1483,  1485,  1487,  1489,  1491,  1493,  1495,  1497,
    1499,  1501,  1503,  1505,  1507,  1509,  1511,  1513,  1515,  1523,
    1531,  1534,  1540,  1544,  1545,  1547,  1553,  1559,  1567,  1569,
    1571,  1573,  1575,  1577,  1578,  1580,  1582,  1584,  1586,  1588,
    1596,  1597,  1599,  1602,  1605,  1609,  1610,  1612,  1614,  1617,
    1619,  1621,  1623,  1625,  1627,  1629,  1631,  1633,  1635,  1639,
    1644,  1645,  1647,  1649,  1653,  1656,  1663,  1664,  1666,  1669,
    1672,  1677,  1678,  1680,  1682,  1685,  1687,  1689,  1691,  1693,
    1696,  1701,  1706,  1711,  1716,  1717,  1719,  1729,  1742,  1746,
    1750,  1757,  1764,  1771,  1773,  1776,  1784,  1785,  1787,  1790,
    1794,  1799,  1800,  1802,  1804,  1808,  1811,  1816,  1826,  1836,
    1838,  1840,  1843,  1850,  1858,  1859,  1861,  1864,  1866,  1868,
    1870,  1872,  1874,  1876,  1878,  1880,  1882,  1884,  1888,  1891,
    1892,  1894,  1898,  1899,  1900,  1901,  1902,  1903
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
     305,     0,    -1,   167,    -1,     7,    -1,     9,    -1,    10,
      -1,    11,    -1,    13,    -1,    14,    -1,    90,    -1,   113,
      -1,    72,    -1,   311,    -1,   170,    -1,   178,    -1,   171,
      -1,   172,    -1,   176,    -1,   177,    -1,   173,    -1,    52,
      -1,   174,    -1,   175,    -1,    62,    -1,   102,    -1,    54,
      -1,   104,    -1,   120,    -1,    82,    -1,   116,    -1,    87,
      -1,   117,    -1,    57,    -1,    75,    -1,    66,    -1,    91,
      -1,   108,    -1,   169,    32,    -1,   311,    32,    -1,   123,
      32,    -1,   178,   180,    -1,   171,   180,    -1,   311,   180,
      -1,    -1,   180,   179,    -1,     4,    -1,   230,    -1,   183,
      -1,   182,   141,   183,    -1,   230,    -1,   100,   181,    -1,
      93,   181,    -1,   186,    -1,   185,    -1,   166,    -1,   199,
      -1,   187,    -1,   188,    -1,   190,    -1,   193,    -1,   194,
      -1,   197,    -1,   202,    -1,   207,    -1,   203,    -1,   204,
      -1,    19,   230,    18,    -1,   184,    44,     5,    -1,   172,
      44,     5,    -1,   176,    44,     5,    -1,   185,    19,   189,
      18,    -1,   311,    19,   189,    18,    -1,    -1,   182,    -1,
     184,   142,   192,   143,    -1,   311,   142,   192,   143,    -1,
      -1,   192,    -1,   230,    -1,   192,   141,   230,    -1,   111,
      -1,    51,    44,     5,    -1,    51,   142,   192,   143,    -1,
     208,   162,    -1,   208,   163,    -1,   198,    -1,    89,   169,
      19,   189,    18,    -1,    89,   311,    19,   189,    18,    -1,
      89,   170,   142,   191,   143,   179,   201,    -1,    89,   142,
     191,   143,   179,   201,    -1,    89,   311,   142,   191,   143,
     179,   201,    -1,    89,   178,   388,    -1,    89,   170,   200,
      -1,   142,   191,   143,   142,   143,   179,   201,    -1,   142,
     191,   143,   142,   192,   143,   179,   201,    -1,    -1,   388,
      -1,   115,    19,   169,    18,    -1,   115,    19,   311,    18,
      -1,   115,    19,   123,    18,    -1,    58,    19,   230,    18,
      -1,   118,    19,   230,    18,    -1,   208,   164,     5,    -1,
      23,   212,    -1,   105,    19,   169,    18,    -1,   105,    19,
     311,    18,    -1,   184,    -1,   311,    -1,   195,    -1,   196,
      -1,   205,    -1,   208,    -1,    27,   212,    -1,    15,   212,
      -1,   213,    -1,   162,   212,    -1,   163,   212,    -1,   209,
      -1,    40,   212,    -1,    34,   212,    -1,    32,   212,    -1,
     210,    -1,   211,    -1,   206,    -1,    19,   230,    18,   209,
      -1,    19,   217,    32,    18,   212,    -1,    19,   311,   180,
     214,    18,   212,    -1,    19,   172,   214,    18,   212,    -1,
      19,   176,   214,    18,   212,    -1,    19,   123,   214,    18,
     212,    -1,    -1,   215,    -1,   216,    -1,   215,   216,    -1,
     180,    -1,    32,    -1,   212,    -1,   217,    32,   212,    -1,
     217,    33,   212,    -1,   217,    25,   212,    -1,   217,    -1,
     218,    40,   217,    -1,   218,    34,   217,    -1,   218,    -1,
     219,   152,   218,    -1,   219,   153,   218,    -1,   219,    -1,
     220,    31,   219,    -1,   220,    30,   219,    -1,   220,   158,
     219,    -1,   220,   159,   219,    -1,   220,    85,   169,    -1,
     220,    50,   169,    -1,   220,    85,   311,    -1,   220,    50,
     311,    -1,   220,    -1,   221,   156,   220,    -1,   221,   157,
     220,    -1,   221,    -1,   222,    23,   221,    -1,   222,    -1,
     223,    26,   222,    -1,   223,    -1,   224,    22,   223,    -1,
     224,    -1,   225,   160,   224,    -1,   225,    -1,   226,   161,
     225,    -1,   226,    -1,   226,    16,   230,    17,   230,    -1,
     212,   229,   230,    -1,    29,    -1,   144,    -1,   145,    -1,
     146,    -1,   147,    -1,   148,    -1,   149,    -1,   150,    -1,
     151,    -1,   154,    -1,   155,    -1,   227,    -1,   228,    -1,
     230,    -1,   230,    -1,   239,    -1,   240,    -1,   234,    -1,
     235,    -1,   238,    -1,   249,    -1,   251,    -1,   266,    -1,
     285,    -1,   292,    -1,   297,    -1,   298,    -1,   299,    -1,
     300,    -1,   267,    -1,   302,    -1,    21,   236,    20,    -1,
      -1,   237,    -1,   233,    -1,   237,   233,    -1,    28,    -1,
       5,    17,   233,    -1,   241,    28,    -1,   246,    28,    -1,
     169,   242,    -1,   311,   242,    -1,   243,    -1,   242,   141,
     243,    -1,   325,    -1,   325,    29,   244,    -1,   325,    29,
      -1,   142,   143,   325,    -1,   142,   143,   325,    29,    -1,
     142,   143,   325,    29,   244,    -1,   142,   143,   142,   143,
     325,    -1,   142,   143,   142,   143,   325,    29,    -1,   142,
     143,   142,   143,   325,    29,   244,    -1,   230,    -1,   388,
      -1,   245,    -1,   106,   169,   142,   230,   143,    -1,   106,
     311,   142,   230,   143,    -1,    60,   169,   247,    -1,    60,
     247,    -1,    60,   311,   247,    -1,   248,    -1,   247,   141,
     248,    -1,   325,    29,   231,    -1,   325,    29,    -1,   325,
      -1,   250,    28,    -1,   188,    -1,   198,    -1,   228,    -1,
     195,    -1,   196,    -1,   210,    -1,   211,    -1,   253,    -1,
     256,    -1,   232,    -1,    -1,   254,   255,    -1,    79,    19,
      -1,   252,    18,   234,    -1,   252,    18,   234,    67,   234,
      -1,   257,   258,    -1,   110,    19,    -1,   230,    18,   259,
      -1,    21,   260,    20,    -1,    -1,   261,    -1,   262,    -1,
     261,   262,    -1,   264,   263,    -1,   237,    -1,   265,    -1,
     264,   265,    -1,    55,   231,    17,    -1,    63,    17,    -1,
      55,    17,    -1,   268,    -1,   271,    -1,   272,    -1,   282,
      -1,   119,   235,    -1,   269,   270,    -1,   125,    19,    -1,
     232,    18,   234,    -1,    65,   234,   125,    19,   232,    18,
      28,    -1,    65,   234,    28,    -1,   273,   274,    -1,    76,
      19,    -1,   275,    28,   276,    28,   277,    18,   234,    -1,
      18,    -1,     1,    18,    -1,    -1,   278,    -1,    -1,   279,
      -1,    -1,   280,    -1,   241,    -1,   281,    -1,   232,    -1,
     281,    -1,   250,    -1,   281,   141,   250,    -1,   283,   284,
      -1,    77,    19,    -1,   169,     5,    81,   230,    18,   234,
      -1,     5,    81,   230,    18,   234,    -1,   311,     5,    81,
     230,    18,   234,    -1,   286,    -1,   287,    -1,   288,    -1,
     289,    -1,   291,    -1,    53,    28,    -1,    61,    28,    -1,
      78,     5,    28,    -1,    78,    55,   231,    28,    -1,    78,
      63,    28,    -1,   101,   290,    28,    -1,    -1,   230,    -1,
     112,   290,    28,    -1,   114,   235,   293,    -1,   114,   235,
     296,    -1,   114,   235,   293,   296,    -1,   294,    -1,   293,
     294,    -1,    56,    19,   176,   295,    18,   235,    -1,    56,
      19,   311,   295,    18,   235,    -1,    56,   235,    -1,    -1,
     325,    -1,    73,   235,    -1,    58,   235,    -1,   118,   235,
      -1,    86,    19,   230,    18,   234,    -1,   121,    19,   301,
      18,   234,    -1,   241,    -1,   230,    -1,    74,    19,   169,
     303,    18,   234,    -1,    74,    19,   311,   303,    18,   234,
      -1,   304,    -1,   303,   141,   304,    -1,     5,    29,   230,
      -1,   306,   307,    -1,   306,   318,    -1,    -1,   314,    -1,
      -1,   417,    -1,    -1,   318,    -1,   307,    88,   311,   313,
     310,    -1,    -1,    28,    -1,   325,    -1,   312,   325,    -1,
     325,    44,    -1,   312,   325,    44,    -1,    21,   306,   308,
      20,    -1,   306,   308,    20,    -1,   315,    -1,   314,   315,
      -1,   316,    -1,   317,    -1,   121,   325,    29,   311,    28,
      -1,   121,   168,    28,    -1,   319,    -1,   318,   319,    -1,
     309,    -1,   320,    -1,   327,    -1,   381,    -1,   391,    -1,
     409,    -1,   416,    -1,   324,    -1,   322,   324,    -1,   323,
      -1,   322,   323,    -1,    49,    -1,    71,    -1,    84,    -1,
      89,    -1,    94,    -1,    96,    -1,    97,    -1,    98,    -1,
      99,    -1,   119,    -1,   122,    -1,   124,    -1,    -1,   103,
      -1,   107,    -1,   103,   107,    -1,     5,    -1,     6,    -1,
       5,    -1,    13,    -1,    12,    -1,     7,    -1,     6,    -1,
     328,   333,    -1,   307,   321,    59,   326,   329,   330,    -1,
     307,   321,    59,   329,   330,    -1,    -1,    -1,   331,    -1,
      17,   176,    -1,    17,   332,    -1,    17,   176,   141,   332,
      -1,    17,   311,    -1,    17,   176,   141,   311,    -1,   332,
     141,   311,    -1,   311,   141,   311,    -1,    21,   334,    20,
      -1,    -1,   335,    -1,   336,    -1,   335,   336,    -1,   337,
      -1,   338,    -1,   339,    -1,   352,    -1,   359,    -1,   363,
      -1,   366,    -1,   371,    -1,   376,    -1,   320,    -1,   307,
     321,    60,   169,   247,    28,    -1,   307,   321,    60,   247,
      28,    -1,   307,   321,    60,   311,   247,    28,    -1,   307,
     321,   169,   242,    28,    -1,   307,   321,   311,   242,    28,
      -1,   340,   346,    -1,   341,    19,   344,    18,    -1,   342,
      19,   344,    18,    -1,   343,    19,   344,    18,    -1,   307,
     321,   169,   311,    -1,   307,   321,   123,   311,    -1,   307,
     321,   311,   311,    -1,    -1,   347,    -1,   123,    -1,   235,
      -1,    28,    -1,   348,    -1,   347,   141,   348,    -1,   349,
      -1,   351,    -1,   307,   350,   169,     5,    -1,   307,   350,
     169,     5,    29,   166,    -1,    -1,   100,    -1,    93,    -1,
     307,    95,   169,     5,    -1,   307,   321,   169,   311,   431,
      21,   353,    20,   432,    -1,   356,   354,    -1,   357,   355,
      -1,    -1,   357,    -1,    -1,   356,    -1,   307,   137,   432,
     358,   431,    -1,   307,   138,   432,   358,   431,    -1,   235,
      -1,    28,    -1,   307,   321,    69,   169,   242,    28,    -1,
     307,   321,    69,   169,   311,   429,    21,   360,    20,   430,
      -1,   361,   362,    -1,   362,   361,    -1,   307,   139,   430,
     235,   429,    -1,   307,   140,   430,   235,   429,    -1,   307,
     321,   364,   431,    21,   353,    20,   432,    -1,   169,   111,
     142,   347,   143,    -1,   169,   365,   142,   347,   143,    -1,
     312,   111,    -1,   307,   321,   367,   377,    -1,   368,    -1,
     370,    -1,   169,    92,   369,    19,   169,     5,    18,    -1,
     169,    92,   369,    19,   169,     5,   141,   169,     5,    18,
      -1,    40,    -1,    34,    -1,    27,    -1,    15,    -1,   162,
      -1,   163,    -1,   113,    -1,    72,    -1,    32,    -1,    33,
      -1,    25,    -1,    23,    -1,    22,    -1,    26,    -1,   152,
      -1,   153,    -1,   156,    -1,   157,    -1,    30,    -1,    31,
      -1,   159,    -1,   158,    -1,    80,    92,   169,    19,   169,
       5,    18,    -1,    70,    92,   169,    19,   169,     5,    18,
      -1,   372,   378,    -1,   373,    19,   344,    18,   374,    -1,
     307,   321,     5,    -1,    -1,   375,    -1,    17,    51,    19,
     189,    18,    -1,    17,   111,    19,   189,    18,    -1,   307,
     321,    15,     5,    19,    18,   235,    -1,   235,    -1,    28,
      -1,   235,    -1,    28,    -1,   384,    -1,    -1,     5,    -1,
       6,    -1,    13,    -1,    12,    -1,     7,    -1,   307,   321,
     109,   380,   382,   379,   310,    -1,    -1,   383,    -1,    17,
     332,    -1,    17,   311,    -1,    21,   385,    20,    -1,    -1,
     386,    -1,   387,    -1,   386,   387,    -1,   337,    -1,   338,
      -1,   339,    -1,   352,    -1,   359,    -1,   363,    -1,   366,
      -1,   371,    -1,   320,    -1,    21,   389,    20,    -1,    21,
     390,   141,    20,    -1,    -1,   390,    -1,   244,    -1,   390,
     141,   244,    -1,   392,   395,    -1,   307,   321,    83,   325,
     329,   393,    -1,    -1,   394,    -1,    17,   332,    -1,    17,
     311,    -1,    21,   396,    20,   310,    -1,    -1,   397,    -1,
     398,    -1,   397,   398,    -1,   399,    -1,   404,    -1,   407,
      -1,   405,    -1,   400,   408,    -1,   401,    19,   344,    18,
      -1,   402,    19,   344,    18,    -1,   307,   403,   169,   325,
      -1,   307,   403,   123,   325,    -1,    -1,    89,    -1,   307,
     403,   169,     5,   431,    21,   406,    20,   432,    -1,   307,
     403,   169,   111,   142,   347,   143,   431,    21,   406,    20,
     432,    -1,   307,   137,   408,    -1,   307,   138,   408,    -1,
     307,   137,   408,   307,   138,   408,    -1,   307,   138,   408,
     307,   137,   408,    -1,   307,   403,    69,   169,     5,   408,
      -1,    28,    -1,    21,    20,    -1,   307,   321,    68,     5,
     410,   412,   310,    -1,    -1,   411,    -1,    17,   174,    -1,
      21,   413,    20,    -1,    21,   414,   141,    20,    -1,    -1,
     414,    -1,   415,    -1,   414,   141,   415,    -1,   307,     5,
      -1,   307,     5,    29,   231,    -1,   307,   321,    64,   345,
       5,    19,   344,    18,    28,    -1,   307,   321,    64,   311,
       5,    19,   344,    18,    28,    -1,   418,    -1,   419,    -1,
     418,   419,    -1,   427,   142,   420,   423,   143,   428,    -1,
     427,   142,   420,   423,   141,   143,   428,    -1,    -1,   421,
      -1,   422,    17,    -1,   130,    -1,   131,    -1,    69,    -1,
     132,    -1,   133,    -1,   134,    -1,   135,    -1,   101,    -1,
     136,    -1,   424,    -1,   423,   141,   424,    -1,   311,   425,
      -1,    -1,   426,    -1,    19,   191,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   116,   116,   117,   118,   119,   120,   121,   122,   123,
     126,   127,   133,   142,   143,   146,   151,   152,   153,   156,
     157,   160,   161,   162,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   168,   168,   171,   171,   174,   175,   176,
     179,   180,   181,   183,   185,   188,   192,   196,   197,   200,
     201,   202,   205,   206,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   223,   226,   227,   228,
     231,   232,   234,   236,   239,   240,   243,   245,   248,   249,
     252,   255,   256,   259,   262,   265,   268,   269,   273,   274,
     275,   276,   277,   280,   281,   283,   285,   288,   289,   290,
     293,   296,   299,   302,   305,   306,   309,   310,   311,   312,
     313,   316,   317,   318,   319,   322,   325,   328,   329,   330,
     331,   332,   333,   334,   342,   343,   344,   345,   346,   347,
     349,   351,   354,   355,   358,   359,   362,   363,   364,   365,
     368,   369,   370,   373,   374,   375,   378,   379,   380,   381,
     382,   383,   384,   385,   386,   389,   390,   391,   394,   395,
     398,   399,   402,   403,   406,   407,   410,   411,   414,   415,
     418,   421,   421,   421,   421,   421,   421,   422,   422,   422,
     422,   422,   425,   426,   429,   432,   436,   437,   438,   441,
     442,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   456,   458,   460,   464,   465,   468,   471,   474,
     478,   481,   482,   485,   486,   489,   496,   503,   504,   505,
     506,   507,   508,   509,   512,   513,   514,   517,   518,   522,
     523,   524,   527,   528,   531,   532,   533,   536,   539,   540,
     541,   542,   543,   544,   545,   548,   549,   552,   553,   557,
     561,   564,   565,   568,   571,   574,   577,   579,   581,   584,
     585,   588,   591,   597,   598,   601,   604,   607,   612,   613,
     614,   615,   618,   621,   624,   627,   630,   631,   635,   640,
     647,   648,   649,   651,   653,   655,   657,   659,   661,   664,
     665,   668,   671,   674,   675,   678,   681,   684,   685,   686,
     689,   690,   691,   692,   693,   696,   699,   702,   703,   704,
     707,   710,   712,   715,   718,   719,   720,   723,   724,   727,
     729,   730,   732,   734,   737,   740,   743,   746,   749,   752,
     753,   757,   758,   761,   762,   765,   768,   769,   776,   778,
     780,   782,   784,   786,   790,   792,   794,   803,   804,   807,
     808,   811,   812,   817,   818,   821,   822,   825,   828,   831,
     832,   835,   836,   839,   840,   841,   842,   843,   854,   855,
     858,   859,   862,   863,   864,   865,   866,   867,   871,   875,
     879,   880,   881,   882,   884,   886,   890,   894,   900,   901,
     905,   906,   907,   908,   909,   914,   919,   925,   933,   935,
     937,   940,   941,   942,   943,   944,   947,   948,   951,   954,
     956,   959,   960,   963,   964,   965,   966,   967,   968,   969,
     970,   971,   973,   976,   977,   978,   981,   985,   991,   998,
    1003,  1008,  1015,  1021,  1027,  1032,  1034,  1038,  1041,  1042,
    1045,  1046,  1049,  1050,  1053,  1056,  1060,  1062,  1063,  1067,
    1070,  1076,  1077,  1079,  1081,  1083,  1085,  1088,  1094,  1100,
    1101,  1104,  1105,  1111,  1112,  1115,  1121,  1127,  1133,  1135,
    1138,  1142,  1145,  1146,  1149,  1150,  1153,  1153,  1154,  1154,
    1154,  1154,  1154,  1154,  1155,  1155,  1155,  1155,  1155,  1155,
    1156,  1156,  1156,  1156,  1156,  1156,  1156,  1156,  1159,  1160,
    1163,  1168,  1174,  1179,  1181,  1184,  1185,  1201,  1204,  1205,
    1208,  1209,  1212,  1213,  1216,  1217,  1218,  1219,  1220,  1223,
    1226,  1228,  1231,  1232,  1235,  1237,  1239,  1242,  1243,  1246,
    1247,  1248,  1249,  1250,  1251,  1252,  1253,  1255,  1260,  1261,
    1264,  1266,  1269,  1270,  1275,  1278,  1285,  1287,  1290,  1291,
    1294,  1296,  1298,  1301,  1302,  1305,  1306,  1307,  1308,  1312,
    1315,  1320,  1327,  1333,  1338,  1340,  1343,  1349,  1357,  1358,
    1359,  1360,  1363,  1368,  1369,  1374,  1376,  1378,  1381,  1384,
    1385,  1387,  1389,  1392,  1393,  1396,  1397,  1402,  1403,  1408,
    1411,  1412,  1415,  1416,  1418,  1420,  1423,  1426,  1427,  1428,
    1429,  1430,  1431,  1432,  1433,  1434,  1437,  1438,  1442,  1444,
    1446,  1455,  1462,  1467,  1472,  1477,  1482,  1487
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
  "switch_sections", "switch_section", "statment_ff", "switch_labels",
  "switch_label", "iteration_statement", "unsafe_statement",
  "while_statement", "while_statement_1", "while_statement_2",
  "do_statement", "for_statement", "for_statement_1", "for_statement_2",
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
  "interface_method_declaration", "interface_method_header",
  "interface_method_1", "interface_method_2", "new_opt",
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
     261,   262,   263,   264,   264,   265,   265,   265,   266,   266,
     266,   266,   267,   268,   269,   270,   271,   271,   272,   273,
     274,   274,   274,   275,   275,   276,   276,   277,   277,   278,
     278,   279,   280,   281,   281,   282,   283,   284,   284,   284,
     285,   285,   285,   285,   285,   286,   287,   288,   288,   288,
     289,   290,   290,   291,   292,   292,   292,   293,   293,   294,
     294,   294,   295,   295,   296,   297,   298,   299,   300,   301,
     301,   302,   302,   303,   303,   304,   305,   305,   306,   306,
     307,   307,   308,   308,   309,   310,   310,   311,   311,   312,
     312,   313,   313,   314,   314,   315,   315,   316,   317,   318,
     318,   319,   319,   320,   320,   320,   320,   320,   321,   321,
     322,   322,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   324,   324,   324,   324,   325,   325,
     326,   326,   326,   326,   326,   327,   328,   328,   329,   330,
     330,   331,   331,   331,   331,   331,   332,   332,   333,   334,
     334,   335,   335,   336,   336,   336,   336,   336,   336,   336,
     336,   336,   336,   337,   337,   337,   338,   338,   339,   340,
     340,   340,   341,   342,   343,   344,   344,   345,   346,   346,
     347,   347,   348,   348,   349,   349,   350,   350,   350,   351,
     352,   353,   353,   354,   354,   355,   355,   356,   357,   358,
     358,   359,   359,   360,   360,   361,   362,   363,   364,   364,
     365,   366,   367,   367,   368,   368,   369,   369,   369,   369,
     369,   369,   369,   369,   369,   369,   369,   369,   369,   369,
     369,   369,   369,   369,   369,   369,   369,   369,   370,   370,
     371,   372,   373,   374,   374,   375,   375,   376,   377,   377,
     378,   378,   379,   379,   380,   380,   380,   380,   380,   381,
     382,   382,   383,   383,   384,   385,   385,   386,   386,   387,
     387,   387,   387,   387,   387,   387,   387,   387,   388,   388,
     389,   389,   390,   390,   391,   392,   393,   393,   394,   394,
     395,   396,   396,   397,   397,   398,   398,   398,   398,   399,
     400,   400,   401,   402,   403,   403,   404,   405,   406,   406,
     406,   406,   407,   408,   408,   409,   410,   410,   411,   412,
     412,   413,   413,   414,   414,   415,   415,   416,   416,   417,
     418,   418,   419,   419,   420,   420,   421,   422,   422,   422,
     422,   422,   422,   422,   422,   422,   423,   423,   424,   425,
     425,   426,   427,   428,   429,   430,   431,   432
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
       2,     2,     1,     1,     2,     3,     2,     2,     1,     1,
       1,     1,     2,     2,     2,     3,     7,     3,     2,     2,
       7,     1,     2,     0,     1,     0,     1,     0,     1,     1,
       1,     1,     1,     1,     3,     2,     2,     6,     5,     6,
       1,     1,     1,     1,     1,     2,     2,     3,     4,     3,
       3,     0,     1,     3,     3,     3,     4,     1,     2,     6,
       6,     2,     0,     1,     2,     2,     2,     5,     5,     1,
       1,     6,     6,     1,     3,     3,     2,     2,     0,     1,
       0,     1,     0,     1,     5,     0,     1,     1,     2,     2,
       3,     4,     3,     1,     2,     1,     1,     5,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     2,     6,     5,     0,     0,
       1,     2,     2,     4,     2,     4,     3,     3,     3,     0,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     6,     5,     6,     5,     5,     2,     4,
       4,     4,     4,     4,     4,     0,     1,     1,     1,     1,
       1,     3,     1,     1,     4,     6,     0,     1,     1,     4,
       9,     2,     2,     0,     1,     0,     1,     5,     5,     1,
       1,     6,    10,     2,     2,     5,     5,     8,     5,     5,
       2,     4,     1,     1,     7,    10,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     7,     7,
       2,     5,     3,     0,     1,     5,     5,     7,     1,     1,
       1,     1,     1,     0,     1,     1,     1,     1,     1,     7,
       0,     1,     2,     2,     3,     0,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     4,
       0,     1,     1,     3,     2,     6,     0,     1,     2,     2,
       4,     0,     1,     1,     2,     1,     1,     1,     1,     2,
       4,     4,     4,     4,     0,     1,     9,    12,     3,     3,
       6,     6,     6,     1,     2,     7,     0,     1,     2,     3,
       4,     0,     1,     1,     3,     2,     4,     9,     9,     1,
       1,     2,     6,     7,     0,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     0,
       1,     3,     0,     0,     0,     0,     0,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
     338,     0,     0,   340,   339,   353,   355,   356,   388,   389,
       0,    12,     0,   347,     1,   384,   361,   340,   359,   362,
     363,     0,   364,   365,     0,   366,   367,   341,   589,   590,
       0,   354,   358,   348,     0,   349,   372,   373,   374,     0,
     375,   376,   377,   378,   379,   380,   385,   386,   381,   382,
     383,     0,   384,   370,   368,   384,   360,   340,   395,   340,
     544,   591,   594,   350,     0,   347,   338,   387,   398,     0,
       0,     0,     0,   371,   369,   384,   422,     0,   340,   411,
     413,   414,   415,     0,     0,     0,     0,   416,   417,   418,
     419,   420,     0,     0,   421,   564,     0,   340,   553,   555,
       0,     0,     0,   556,   558,   557,   599,   604,   597,   598,
     600,   601,   602,   603,   605,     0,   595,     0,   357,   338,
     340,   345,   390,   394,   393,   392,   391,   398,   399,   437,
       0,     0,   576,   398,   514,   515,   518,   517,   516,   520,
       0,   408,   412,   203,   439,   438,   428,   340,   340,   340,
     511,   510,   500,   340,   565,     0,   345,   554,     0,   573,
     559,   340,   340,   609,     0,   606,   596,   340,     0,   340,
     346,   344,   399,     0,   397,   400,     0,     0,     0,     0,
     577,   546,     0,   513,   521,   388,     0,    20,    25,    32,
       0,    23,    34,     0,     0,    33,     0,    28,    30,    35,
      24,    26,    36,    29,    31,    27,     0,     0,    13,    15,
      16,    19,    21,    22,    17,    18,    14,     0,   616,     0,
     472,   473,   388,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,   207,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,     0,     0,     0,     0,     0,     0,
       0,     9,   311,     0,     0,    80,   311,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    54,     2,     0,
      16,    17,   106,    53,    52,    56,    57,    58,    59,    60,
     108,   109,    61,    85,    55,    62,    64,    65,   110,   123,
      63,   111,   117,   121,   122,     0,   114,   240,   205,   188,
     189,     0,   204,   190,   186,   187,     0,     0,   191,     0,
     192,   245,   248,   246,     0,   193,   200,   268,     0,   269,
     270,     0,   271,     0,   194,   300,   301,   302,   303,   304,
     195,   196,   197,   198,   199,   201,   107,   446,     0,   436,
     440,   442,   443,     0,     0,     0,     0,     0,     0,     0,
     550,   574,     0,     0,    76,   608,   610,     0,   613,     0,
     352,   396,   401,   404,   402,   340,   340,   578,   340,   345,
       0,   545,   547,   523,   522,   340,   345,   512,     0,     0,
       0,   232,     0,   347,     0,     0,     0,    39,   433,    37,
       0,     0,     0,     0,   213,   432,     0,   215,     0,    45,
      41,    40,    38,    42,     0,   434,     0,   509,   508,   471,
       0,     0,     0,     0,     0,    57,   108,   109,    85,   121,
     122,   113,   107,   130,   130,   130,   136,   140,   143,   146,
     155,   158,   160,   162,   164,   166,   168,   182,   183,     0,
     107,   103,   112,   120,   119,   118,     0,     0,   305,     0,
     325,     0,   230,     0,   306,     0,     0,   279,   296,     0,
       0,     0,   250,     0,    76,     0,    13,    14,     0,   140,
     312,     0,     0,   254,     0,     0,     0,     0,   326,   272,
       0,   274,   115,   116,   211,   215,     0,     0,     0,     0,
      72,    83,    84,     0,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,     0,   202,   206,   209,   210,
     237,   185,   247,     0,   249,     0,   253,     0,   273,     0,
     281,   289,   293,   278,     0,   284,   290,   388,     0,   295,
       0,    72,     0,   212,   448,     0,   447,     0,   429,   340,
     430,   431,   503,     0,   563,   388,     0,   562,   560,   561,
       0,    77,    78,   613,   607,   592,   351,     0,     0,     0,
       0,     0,     0,     0,   582,   583,   575,   549,   548,   384,
     537,   529,   530,   531,   532,   533,   534,   535,   536,     0,
     340,   527,   519,     0,     0,   236,   424,     0,     0,   235,
       0,   614,     0,     0,   479,   488,   487,   486,   489,   478,
     494,   495,   484,   485,   477,   476,   483,   482,   490,   491,
     492,   493,   497,   496,   480,   481,     0,   340,     0,   426,
       0,     0,   470,   217,   340,   427,   340,   208,     0,   135,
     134,     0,   131,   132,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    66,   130,    81,
       0,     0,   229,   231,   277,     0,     0,     0,   307,   184,
       0,   309,     0,     0,    72,    76,    92,   540,    91,    72,
      76,     0,   310,     0,     0,   313,     0,     0,   314,   317,
     315,     0,     0,     0,     0,   330,   329,     0,    68,    69,
      67,     0,     0,     0,    73,    47,     0,    49,   102,   170,
       0,     0,     0,   282,   285,     0,     0,     0,     0,     0,
       0,     0,     0,   441,     0,   501,   504,     0,     0,   340,
     611,     0,   593,   405,   403,   407,   406,     0,     0,   585,
     579,   340,     0,   524,   528,     0,   423,   233,   425,   234,
     461,     0,     0,     0,     0,     0,     0,   218,   214,   340,
       0,   224,   216,   226,   225,     0,     0,     0,   340,   340,
       0,   133,     0,     0,   139,     0,   137,   138,   136,   142,
     141,   144,   145,   148,   147,   152,   154,   151,   153,   149,
     150,   156,   157,   159,   161,   163,   165,     0,   167,   124,
       0,    82,   100,     0,     0,     0,   333,     0,   308,     0,
      43,     0,     0,   542,     0,   541,     0,     0,   104,   105,
       0,   321,   324,   318,   316,    99,    97,    98,   101,     0,
      74,    51,    46,    50,     0,    70,   251,   257,   255,   275,
     291,     0,   286,   294,     0,     0,     0,    71,    75,   449,
     444,     0,     0,   572,   340,     0,    79,   588,   587,     0,
     580,   584,   507,   340,     0,     0,     0,   468,     0,   219,
       0,     0,     0,   469,   617,   617,   617,     0,   451,   454,
       0,   452,   456,   129,   127,   128,   125,     0,     0,     0,
       0,     0,     0,     0,   327,    95,    43,    86,    43,   538,
       0,    87,    43,   322,   322,   328,    48,     0,     0,     0,
       0,   258,   259,     0,   263,   287,     0,     0,     0,     0,
      72,    72,     0,     0,   616,   586,     0,     0,   340,   340,
       0,     0,     0,   221,   220,   617,     0,     0,     0,     0,
     467,   169,   126,     0,   335,   331,   334,   332,    89,    96,
      44,     0,    95,   539,   543,    95,     0,   323,     0,   252,
     267,     0,   266,   256,   260,   262,   261,   264,     0,   288,
     292,   298,     0,     0,   445,     0,     0,     0,     0,   617,
       0,   615,   615,   615,     0,   463,     0,   464,   499,   498,
     474,     0,   222,   450,     0,     0,   460,   459,   616,   616,
     276,    43,     0,    88,    90,     0,     0,   265,     0,   297,
     299,   505,   506,   340,   340,   566,   340,     0,     0,   462,
       0,   223,   227,   228,   457,   458,    95,    43,   319,   320,
     280,     0,     0,     0,   614,   614,     0,    93,    95,     0,
       0,   617,   465,   466,   475,    94,   570,   571,   567
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,   267,   268,    10,   269,   208,   209,   413,   211,   212,
     213,   414,   215,   216,   895,   403,   831,   704,   705,   272,
     273,   274,   275,   415,   706,   277,   550,   551,   278,   279,
     416,   417,   282,   418,   284,   676,   948,   285,   286,   287,
     288,   289,   290,   291,   292,   419,   420,   426,   296,   631,
     632,   633,   469,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   505,   552,   670,   512,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   393,   394,   762,
     763,   307,   380,   381,   308,   309,   310,   513,   311,   312,
     514,   313,   314,   516,   838,   910,   911,   912,   966,   913,
     914,   315,   316,   317,   318,   518,   319,   320,   321,   523,
     524,   841,   968,   525,   842,   969,   526,   322,   323,   529,
     324,   325,   326,   327,   328,   471,   329,   330,   688,   689,
     956,   690,   331,   332,   333,   334,   697,   335,   805,   806,
       2,     3,   337,   168,    16,   171,   422,    12,   121,     4,
       5,     6,     7,   169,    18,    19,    51,    52,    53,    54,
      65,   127,    20,    21,   128,   174,   175,   364,    58,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,   338,
     131,   146,   339,   340,   341,   537,   342,    87,   767,   878,
     881,   768,   769,   998,    88,   927,   928,   929,    89,   218,
     398,    90,   219,   220,   616,   221,    91,    92,    93,   725,
     726,    94,   409,   152,   376,   139,    22,   183,   184,   377,
     579,   580,   581,   764,   814,   815,    23,    24,   371,   372,
      60,    96,    97,    98,    99,   100,   101,   102,   155,   103,
     104,   923,   105,   160,    25,   179,   180,   369,   563,   564,
     565,    26,    27,    28,    29,   115,   116,   117,   164,   165,
     355,   356,    30,   555,   751,  1017,   406,   938
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -841
static const short int yypact[] =
{
     -34,   322,   100,   -32,   -34,  -841,  -841,  -841,  -841,  -841,
     151,  -841,   322,   329,  -841,  1145,  -841,    47,  -841,  -841,
    -841,    99,  -841,  -841,   120,  -841,  -841,  -841,   -32,  -841,
      29,  -841,  -841,   230,   322,  -841,  -841,  -841,  -841,   322,
    -841,  -841,  -841,  -841,  -841,  -841,   210,  -841,  -841,  -841,
    -841,   369,  1387,  -841,  -841,  1209,  -841,    44,  -841,    82,
    -841,  -841,   394,  -841,   305,   327,    70,  -841,   573,   144,
     378,   322,   587,  -841,  -841,  1387,  -841,   388,   112,  -841,
    -841,  -841,  -841,   528,   412,   436,   465,  -841,  -841,  -841,
    -841,  -841,   561,   469,  -841,   415,   526,   124,  -841,  -841,
     563,   548,   568,  -841,  -841,  -841,  -841,  -841,  -841,  -841,
    -841,  -841,  -841,  -841,  -841,   322,  -841,   584,  -841,   -34,
     127,   579,  -841,  -841,  -841,  -841,  -841,  -841,   595,  -841,
     616,   633,   631,  -841,  -841,  -841,  -841,  -841,  -841,   641,
    3175,  -841,  -841,  1928,  -841,  -841,  -841,    25,    25,    25,
    -841,  -841,  -841,    25,  -841,  3266,   579,  -841,   644,  -841,
    -841,    25,    25,   650,   360,  -841,  -841,   127,   657,   128,
    -841,  -841,   595,   362,  -841,  -841,   668,   669,   486,   670,
    -841,   672,   322,   671,  -841,   674,   685,  -841,  -841,  -841,
    3309,  -841,  -841,  3309,   612,  -841,   613,  -841,  -841,  -841,
    -841,  -841,  -841,  -841,  -841,  -841,   502,    76,  -841,   710,
    -841,  -841,  -841,  -841,  -841,  -841,   710,    66,  -841,   596,
    -841,  -841,   700,  -841,  -841,  -841,  -841,  -841,  -841,  3102,
    2398,  3102,  3102,  -841,  3102,  3102,  3102,    79,   690,   543,
    3309,   692,  2049,  -841,   702,   703,   704,   364,   705,   706,
    1473,  -841,  3102,   707,   708,  -841,  3102,  -841,   709,   712,
     551,   709,   713,   696,   714,  3102,  3102,  -841,  -841,   113,
     691,   693,   200,   715,  -841,  -841,    68,  -841,  -841,  -841,
      86,    88,  -841,   106,  -841,  -841,  -841,  -841,  -841,  -841,
    -841,   480,  -841,   110,   118,   368,  -841,  -841,  -841,  -841,
    -841,   716,  1928,  -841,  -841,  -841,   701,   717,  -841,   718,
    -841,  -841,  3102,  -841,  3102,  -841,  -841,  -841,  3102,  -841,
    -841,  1352,  -841,  3333,  -841,  -841,  -841,  -841,  -841,  -841,
    -841,  -841,  -841,  -841,  -841,  -841,    57,    12,   723,   602,
    -841,  -841,  -841,   726,   729,   730,  3309,   502,   343,    93,
    -841,  -841,   731,   732,  3102,  -841,  -841,    60,  -841,   735,
    -841,  -841,   610,   617,   620,    25,    25,  -841,   133,   579,
     322,  -841,  -841,   617,   620,   134,   579,  -841,   738,   539,
     123,  -841,   461,   301,   113,  3309,  3309,  -841,  -841,  -841,
     282,   621,   619,   191,  -841,   743,   294,   532,   625,  -841,
    -841,  -841,  -841,  -841,   233,  -841,   747,  -841,  -841,  -841,
    1928,   751,   753,   691,   693,  -841,  -841,  -841,  -841,  -841,
    -841,  -841,    32,   278,   307,   454,   368,   572,   160,   402,
     253,   196,   750,   749,   754,   618,    24,  -841,  -841,   759,
      80,  -841,  -841,  -841,  -841,  -841,   775,  3102,  -841,  3102,
    -841,   539,   640,   461,  -841,    55,  3309,  -841,  -841,   755,
    3102,   756,  -841,  3102,  3102,   357,   643,   105,    69,   586,
    -841,   758,  3309,  -841,   760,   291,  3400,  3102,  -841,  -841,
    2517,  -841,  -841,  -841,   649,   762,   777,   788,   789,  3102,
    2166,  -841,  -841,   790,  -841,  -841,  -841,  -841,  -841,  -841,
    -841,  -841,  -841,  -841,  -841,  3102,  -841,  -841,  -841,  -841,
    -841,  -841,  -841,   778,  -841,   779,  -841,   780,  -841,   781,
    -841,  -841,  -841,  -841,   772,  -841,   664,   725,    98,  -841,
     443,  2166,  2636,   649,  -841,  3309,  -841,  3309,  -841,   -32,
    -841,  -841,   791,   330,  -841,   743,   667,  -841,  -841,  -841,
     792,   673,  -841,  -841,  -841,  -841,  -841,   322,   322,   322,
     793,   794,   808,   795,   675,  -841,  -841,   617,   620,  1387,
    -841,  -841,  -841,  -841,  -841,  -841,  -841,  -841,  -841,   798,
     138,  -841,  -841,   801,   237,   799,  -841,   322,   240,  3102,
     258,  -841,   374,   432,  -841,  -841,  -841,  -841,  -841,  -841,
    -841,  -841,  -841,  -841,  -841,  -841,  -841,  -841,  -841,  -841,
    -841,  -841,  -841,  -841,  -841,  -841,   802,   -32,    62,  -841,
     116,   803,  -841,  2282,   -32,  -841,   -32,  -841,  3102,  -841,
    -841,   804,   278,  -841,   809,   812,  3102,  2753,  3102,  3102,
    3102,  3102,  3102,  3102,  3102,  3309,  3309,  3102,  3102,  3102,
    3102,  3102,  3102,  3102,  3102,  3102,  3102,  3479,   278,  -841,
     440,   815,   640,   640,  -841,   816,   345,   478,  -841,  -841,
     810,  -841,   818,   694,  2166,  3102,  -841,  2282,  -841,  2166,
    3102,  3102,  -841,   397,   453,  -841,   634,   709,   291,  -841,
    -841,   518,   534,   473,   821,  -841,  -841,   822,  -841,  -841,
    -841,   513,  3102,  3102,   711,  -841,   824,  -841,  -841,  -841,
    2049,   823,  2049,  -841,  3102,  3102,  3102,   764,   765,   829,
     516,   418,   441,  -841,   255,  -841,  -841,   563,   827,   -32,
    -841,  3102,  -841,   617,   620,  -841,  -841,   825,   826,   820,
    -841,   139,  3242,  -841,  -841,   709,  -841,  -841,  -841,  -841,
    -841,   834,  3309,  3309,  3309,   520,   721,   838,  -841,   -32,
    3309,  -841,  -841,  -841,  -841,   529,   496,   830,   143,   150,
    3102,  -841,  3102,  3102,  -841,  3102,  -841,  -841,  -841,   586,
     586,   160,   160,   402,   402,   837,    93,   837,    93,   402,
     402,   253,   253,   196,   750,   749,   754,   839,   618,  -841,
     840,  -841,  -841,  3102,   841,    34,  -841,    56,  -841,  2049,
     710,   853,   737,  -841,   852,   733,   855,   741,  -841,  -841,
     362,  -841,  -841,  -841,  -841,  -841,  -841,  -841,  -841,  2049,
    -841,  -841,  -841,  -841,  2166,  -841,   814,   405,  -841,  -841,
    -841,   859,  -841,  -841,   871,  3102,  3102,  -841,  -841,  -841,
     861,   872,   873,  -841,   -32,   530,  -841,  -841,  -841,  3102,
    -841,  -841,  -841,   -32,   489,   533,   537,  -841,   322,  2282,
     874,    23,    53,  -841,  -841,  -841,  -841,   757,  -841,  -841,
     767,  -841,  -841,  -841,  -841,  -841,  -841,  3102,  3102,   875,
    3102,  2049,   891,  2049,  -841,   876,   710,  -841,    74,  -841,
    1624,  -841,   710,   322,   322,  -841,  -841,  2049,  2869,   882,
     885,   405,  -841,  1807,  -841,  3102,  2049,   884,   889,   407,
    2166,  2166,   544,   888,  -841,  -841,   476,   890,   -32,   -32,
     896,   898,   115,   880,  -841,  -841,  3102,  3102,   609,   609,
    -841,  -841,  -841,   892,  -841,  -841,  -841,  -841,  -841,  -841,
    -841,  2985,   876,  -841,  -841,   876,   899,  -841,   901,  -841,
    -841,   907,  -841,  -841,  -841,  1928,  -841,  -841,   909,  -841,
     664,  -841,  2049,  2049,  -841,   912,   913,   563,   563,  -841,
     911,  -841,  -841,  -841,   796,  -841,   800,  -841,  -841,  -841,
    -841,  3309,  2282,  -841,   813,   819,  -841,  -841,  -841,  -841,
    -841,   710,   535,  -841,  -841,   709,   709,  -841,  2049,  -841,
    -841,  -841,  -841,   156,   176,  -841,   -32,   709,   709,  -841,
     542,  -841,  -841,  -841,  -841,  -841,   876,   710,  -841,  -841,
    -841,   797,   806,   914,  -841,  -841,   915,  -841,   876,   563,
     563,  -841,  -841,  -841,  -841,  -841,  -841,  -841,  -841
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -841,    18,  -841,  -841,  -113,   688,  -841,   846,  -841,   766,
    -841,   805,  -841,   719,  -767,   227,   243,  -841,   108,  -841,
    -841,  -841,  -841,   -90,  -518,  -841,  -452,  -440,  -841,  -841,
     -50,    77,  -841,    92,  -841,  -841,  -564,  -841,  -841,  -841,
    -841,  -841,  -841,  -841,   296,   188,   239,    59,  -841,  -401,
    -841,   323,  -214,    33,   -12,    30,   308,   309,   304,   310,
     311,  -841,  -841,   306,  -841,   864,  -572,  -307,  -299,   167,
     -77,  -841,    50,  -841,  -841,  -841,  -303,  -179,   351,  -655,
    -841,  -841,  -210,   386,  -841,  -319,  -841,  -841,  -841,  -841,
    -841,  -841,  -841,  -841,  -841,  -841,  -841,    71,  -841,  -841,
      64,  -841,  -841,  -841,  -841,  -841,  -841,  -841,  -841,  -841,
    -841,  -841,  -841,  -841,  -841,  -841,    65,  -841,  -841,  -841,
    -841,  -841,  -841,  -841,  -841,   744,  -841,  -841,  -841,   293,
      75,   299,  -841,  -841,  -841,  -841,  -841,  -841,   321,   102,
    -841,    -6,    -3,   835,  -841,  -137,     0,   807,  -841,  -841,
     999,  -841,  -841,  1001,     9,   -49,   -70,  -841,   954,   957,
       8,  -841,  -841,  -841,   373,   843,  -841,  -157,  -841,  -841,
    -841,   934,  -354,  -344,  -343,  -841,  -841,  -841,  -841,  -103,
    -841,  -841,  -328,   481,  -841,  -841,  -841,  -342,   260,  -841,
    -841,   254,   257,    83,  -338,  -841,    97,   101,  -334,  -841,
    -841,  -331,  -841,  -841,  -841,  -841,  -327,  -841,  -841,  -841,
    -841,  -841,  -841,  -841,  -841,  -841,  -841,  -841,  -841,  -841,
    -841,  -841,   447,  -463,  -841,  -841,  -841,  -841,  -841,  -841,
    -841,  -841,  -841,   931,  -841,  -841,  -841,  -841,  -841,  -841,
    -841,    14,  -841,  -699,  -841,  -841,  -841,  -841,  -841,  -841,
     292,  -841,  -841,  -841,  1006,  -841,  -841,  -841,  -841,   681,
    -841,  -841,  -841,   487,  -351,  -297,  -385,  -840
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -617
static const short int yytable[] =
{
      15,    11,   522,   507,   678,   140,   145,   660,    76,    13,
     621,   517,   673,   719,    55,   151,   427,   749,   521,   350,
      33,   571,   813,   634,   635,   374,    56,   207,   853,    76,
     452,   572,   573,   574,    64,   939,   940,   575,   404,    66,
     655,   576,   348,  -435,   577,   343,   344,  -337,   578,   701,
     345,   531,   891,   276,    75,   389,    95,   399,   352,   353,
     120,   399,     8,     9,  -409,     8,     9,     8,     9,   130,
     399,     8,     9,   399,   893,    75,   531,   379,   399,   133,
     384,     8,     9,   664,   399,   402,  -238,     1,   679,   402,
     484,   119,   720,   280,    95,   993,  -238,   399,   402,   531,
      14,   402,  -551,   717,  -241,   534,  -242,   535,   389,   399,
    -612,   627,   536,   167,  -241,   163,  -242,    55,     8,     9,
      57,     8,     9,   446,  -239,   402,   677,   451,  -243,   950,
     389,   952,  -410,   990,  -239,   955,  -244,   465,  -243,  1015,
     217,    59,   408,   336,  -552,   389,  -244,  -342,  -343,     8,
       9,   586,   276,  -581,  -525,   349,   811,   533,  -526,   860,
     728,   816,   450,  -453,    55,   936,    55,  -612,   390,   584,
    -455,    62,   588,   363,   628,   892,  -568,   696,    56,    32,
     665,   475,   373,   478,   479,   656,  -612,   391,   720,  -612,
     382,     1,   280,   349,   639,   937,  -569,   892,   383,   532,
     640,  1048,   295,   553,   756,   590,   388,   395,   392,  -238,
     528,   680,   276,   568,   934,   397,   951,   405,   392,   619,
     281,   447,   628,   812,  -612,   397,   571,  -241,   817,  -242,
     440,   276,   566,   543,  1026,   283,   572,   573,   574,   582,
     453,   662,   575,   663,   488,   954,   576,  -239,   383,   577,
     468,  -243,   280,   578,  -612,   392,   991,   800,   392,  -244,
    1038,   625,   560,   561,   587,   746,  -612,   129,   748,  -612,
    -612,   280,   592,   593,    63,  -612,  -612,   485,  1013,  1014,
    -612,  -612,   399,   643,   644,  -612,   750,   925,   421,   755,
     441,   442,  -612,   443,   444,   445,   765,   594,  -612,     8,
       9,   295,   336,   645,   595,   596,   851,   597,   598,   599,
     629,   399,   600,   601,   602,   603,   604,    67,  -612,   281,
     276,   336,   605,   530,   482,   483,   570,     8,     9,  -236,
     589,   293,   620,   118,   283,   727,   961,  1021,   646,   629,
    1046,  1047,   489,   666,   485,    35,   349,   686,   545,     9,
     804,   486,   649,   650,   606,   544,   547,   163,    34,   683,
     280,   295,   389,   692,   687,   562,   852,     8,     9,   459,
     567,    35,   569,    35,   620,   389,   674,   389,   587,   281,
     295,   587,   294,   132,   591,   349,   349,   585,  1003,   389,
     585,  1004,   397,   752,   283,   607,   843,   494,   281,   620,
     734,   855,   975,   976,    33,   622,   389,   840,   141,   455,
     336,   647,   648,   283,   223,   818,   224,   225,   226,   460,
     227,   228,   721,   849,   722,   779,   780,   461,    68,   389,
     293,   147,   949,    69,   608,   609,   400,    70,   610,   611,
     612,   613,  -236,   401,   614,   615,   850,   399,   718,   297,
     389,   753,    71,   199,   546,   148,   667,   399,   399,   585,
     908,   585,  1037,   106,   389,   399,     8,     9,   909,   295,
     202,   819,   684,   389,  1045,   402,   693,   399,    72,   243,
     336,   294,   399,   804,   149,   402,   629,   281,   153,   949,
     293,   827,   949,   402,   930,   107,   889,   251,   487,   742,
     172,   357,   283,   358,   154,   402,   181,     8,     9,   293,
     402,  1002,   495,   496,   497,   498,   499,   500,   501,   502,
     257,   389,   503,   504,   108,   109,   110,   111,   112,   113,
     114,   570,   785,   787,   387,   349,   825,   349,   931,   980,
     188,   294,   932,   189,     8,     9,   156,  1036,   297,   143,
     387,  -347,   826,  -347,   641,   642,   144,   733,   735,   736,
     294,   623,   449,   949,   143,   389,   389,   161,   197,   389,
     477,   389,   143,   198,   389,   949,    35,   569,   122,   123,
     124,   731,   143,   801,   158,   125,   126,   162,   200,   150,
     201,   159,   134,   135,   136,   585,   522,   636,   293,   137,
     138,   166,   203,   204,   637,   638,   205,   170,   297,   821,
     822,   636,   173,  1024,  1025,   981,   982,   143,   681,   638,
     276,   176,   276,   766,   407,   276,   757,   297,   485,   207,
     143,   783,   784,   874,   875,   789,   790,   996,   177,   864,
     865,   866,   491,   492,   493,   786,   788,   871,   178,   294,
     630,   630,   630,   820,   731,   143,   830,   731,   182,   848,
     280,   539,   280,   867,   351,   280,   507,   658,   862,   354,
     539,   539,   873,   924,   781,   782,   731,   360,  1027,   791,
     792,   977,   978,  1042,  1043,  1018,  1019,   365,   366,   370,
     378,   368,   375,  -502,   401,   774,   776,   777,   778,   778,
     778,   778,   778,   778,   385,   386,   778,   778,   778,   778,
     778,   778,   778,   778,   399,   778,   297,   410,   448,   276,
     454,   456,   457,   458,   462,   463,   472,   473,   387,   508,
     143,   476,   480,   481,   490,   486,   506,   487,   562,   276,
     776,   538,   217,   539,   540,   509,   510,   541,   542,   548,
     549,   557,   349,   349,   349,   556,   766,   583,   558,   280,
     872,   559,   618,   617,  -616,   877,   880,   624,   626,   295,
     449,   295,   477,   651,   295,   652,   653,   657,   654,   280,
     659,   587,   698,   668,   671,   675,   682,   281,   685,   281,
     620,   623,   281,   699,   700,   708,   710,   711,   712,   713,
     714,   276,   283,   276,   283,   715,   716,   283,   724,   729,
     730,   737,   738,   739,   731,   740,   741,   276,   743,   745,
     904,   754,   770,   276,   759,   276,   276,   772,   589,   883,
     773,   884,   885,   802,   886,   803,   809,   810,   808,   828,
     829,   280,   835,   280,   837,   845,   846,   847,   854,   859,
     876,   922,   834,   857,   858,   863,   887,   280,   888,   630,
     926,   997,   997,   280,   868,   280,   280,   869,   295,   389,
     890,   897,   899,   901,   900,   276,   933,   836,  1020,   839,
     898,   907,   276,   276,   902,   630,   281,   915,   295,   916,
     919,   920,   921,   943,   935,   875,   804,   677,   293,   962,
     293,   283,   972,   293,   874,   963,   281,   973,   979,   992,
     983,   957,   957,   336,   988,   280,   989,  1005,   276,  1006,
    1000,   283,   280,   280,  1007,   984,   986,  1008,  1028,  1029,
    1011,  1012,  1016,  1044,  1041,  1039,   982,   974,   466,   981,
    1034,  1035,   906,  1040,   367,   214,   833,   942,   271,   294,
     295,   294,   295,   799,   294,   771,  1022,   795,   280,   793,
     214,   794,  1023,   965,   796,   336,   295,   798,   281,   467,
     281,   758,   295,   747,   295,   295,   894,   967,   362,   958,
     970,   823,   964,   283,   281,   283,   210,   824,   807,   270,
     281,   349,   281,   281,   946,   214,   905,   293,   214,   283,
     474,   210,   359,    31,    17,   283,    73,   283,   283,    74,
    1031,  1032,   142,   922,   396,   361,   297,   293,   297,   870,
     723,   297,   999,   882,   295,   879,   987,   744,   157,   985,
    1033,   295,   295,   861,    61,   425,   210,   896,   554,   210,
     732,     0,   281,     0,     0,   214,     0,     0,   294,   281,
     281,     0,     0,     0,     0,   214,     0,   283,   945,     0,
     947,     0,     0,     0,   283,   283,     0,   295,   294,     0,
       0,     0,     0,     0,   959,     0,   424,     0,     0,   293,
       0,   293,     0,   971,     0,   281,   210,     0,     0,     0,
       0,     0,     0,     0,   439,   293,   210,     0,     0,     0,
     283,   293,     0,   293,   293,     0,     0,   271,     0,     0,
       0,     0,     0,     0,     0,   297,   470,     0,     0,     0,
     470,     0,     0,   896,     0,   896,   271,     0,   214,   896,
     294,     0,   294,     0,     0,   297,     0,     0,     0,  1009,
    1010,     0,     0,     0,     0,  -336,   294,     0,   270,     0,
       0,   214,   294,   293,   294,   294,     0,     0,     0,     0,
     293,   293,     0,     0,     0,     0,     0,   270,     0,   210,
       0,     0,     0,     0,     0,  1030,   511,     0,   515,     0,
       0,     0,   511,     0,     0,     0,     0,     0,     0,     0,
     214,   214,   210,     0,    36,     0,   293,   297,     0,   297,
       0,     0,     0,     0,   294,     0,     0,     0,     0,     0,
       0,   294,   294,   297,     0,   271,    37,     0,     0,   297,
       0,   297,   297,     0,     0,     0,     0,     0,   896,    38,
       0,   210,   210,    39,    40,     0,     0,     0,     0,    41,
       0,    42,    43,    44,    45,     0,     0,   294,    46,     0,
       0,     0,    47,     0,   896,     0,   270,     0,    36,     0,
       0,   214,     0,     0,    48,     0,     0,    49,     0,    50,
       0,   297,     0,     0,     0,     0,     0,   214,   297,   297,
      37,   214,     0,     0,     0,   271,     0,     0,     0,     0,
       0,     0,     0,    38,     0,     0,     0,    39,    40,     0,
       0,     0,   210,    41,     0,    42,    43,    44,    45,     0,
       0,     0,    46,   661,   297,     0,    47,     0,   210,     0,
       0,     0,   210,     0,   669,     0,   270,   672,    48,     0,
       0,    49,     0,    50,     0,     0,     0,     0,     0,     0,
     214,   694,   214,     0,   695,     0,     0,     0,     0,     0,
       0,     0,     0,   519,   707,     0,     0,     8,     9,   223,
       0,   224,   225,   226,     0,   227,   228,   229,     0,   709,
     520,   230,     0,     0,     0,   231,     0,     0,     0,   232,
    -283,   210,     0,   210,   234,     0,   235,     0,     0,     0,
       0,     0,   236,     0,     0,   707,     0,     0,     0,     0,
       0,     0,     0,   237,   187,     0,   188,     0,     0,   189,
     411,     0,     0,     0,   191,     0,     0,     0,   192,     0,
       0,     0,     0,     0,   243,     0,     0,   195,     0,     0,
       0,     0,     0,     0,   197,     0,    36,     0,     0,   198,
       0,   250,   251,   199,     0,     0,     0,     0,     0,     0,
     214,   214,     0,   669,   200,     0,   201,   253,    37,     0,
     202,     0,     0,   255,     0,   257,     0,   259,   203,   204,
     412,    38,   205,     0,     0,   263,    40,     0,     8,     9,
       0,    41,     0,    42,    43,    44,    45,   761,     0,     0,
      46,   210,   210,     0,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,     0,     0,    49,
       0,    50,     0,     0,   265,   266,     0,     0,     0,   797,
       0,     0,     0,     0,     0,   187,     0,   188,     0,     0,
     189,     0,     0,     0,     0,   191,     0,     0,   707,   192,
       0,   761,     0,   707,     0,     0,     0,   214,   195,     0,
       0,     0,     0,     0,     0,   197,     0,   214,   214,   214,
     198,     0,     0,     0,   199,   214,   832,   832,     0,     0,
       0,     0,     0,     0,     0,   200,     0,   201,   511,     0,
     844,   202,     0,     0,     0,     0,     0,     0,   210,   203,
     204,     0,     0,   205,     0,   856,   263,     0,   210,   210,
     210,     0,     0,     0,     0,     0,   210,     0,     0,     0,
       0,     0,     0,     0,     0,   464,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   903,     0,     0,     0,     8,
       9,   223,     0,   224,   225,   226,     0,   227,   228,   229,
       0,     0,     0,   230,   953,   677,     0,   231,     0,     0,
       0,   232,     0,     0,     0,     0,   234,     0,   235,     0,
       0,     0,     0,     0,   236,     0,     0,   511,     0,     0,
       0,     0,     0,     0,     0,   237,   187,     0,   188,     0,
       0,   189,   411,     0,     0,     0,   191,     0,     0,     0,
     192,     0,     0,     0,     0,     0,   243,     0,   707,   195,
       0,     0,     0,     0,     0,     0,   197,     0,     0,   917,
     918,   198,     0,   250,   251,   199,     0,     0,   271,     0,
       0,     0,     0,   669,     0,     0,   200,     0,   201,   253,
     760,     0,   202,   761,     0,   255,     0,   257,     0,   259,
     203,   204,   412,     0,   205,     0,     0,     0,     0,     0,
       0,   941,     0,     0,   944,     0,     0,     0,     0,   270,
       0,     0,     0,     0,   761,     0,     0,     0,     0,     0,
     271,     0,   669,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   707,   707,   265,   266,     0,     0,
       0,     0,     0,     0,     0,     0,   214,     0,     0,     0,
     994,   995,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   270,   222,     9,   223,     0,   224,   225,   226,     0,
     227,   228,   229,     0,     0,     0,   230,     0,   143,     0,
     231,     0,     0,     0,   232,   233,     0,   210,     0,   234,
       0,   235,     0,     0,     0,     0,     0,   236,     0,     0,
       0,     0,     0,     0,     0,     0,   761,     0,   237,   187,
     238,   188,   908,     0,   189,   239,     0,   240,   241,   191,
     909,     0,   242,   192,     0,     0,     0,     0,     0,   243,
       0,   244,   195,   245,   246,   247,   248,     0,     0,   197,
       0,     0,     0,   249,   198,     0,   250,   251,   199,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   252,   200,
       0,   201,   253,     0,     0,   202,     0,   254,   255,   256,
     257,   258,   259,   203,   204,   260,   261,   205,   262,     0,
     263,     0,   264,   222,     9,   223,     0,   224,   225,   226,
       0,   227,   228,   229,     0,     0,     0,   230,     0,   143,
       0,   231,     0,     0,     0,   232,   233,     0,     0,     0,
     234,     0,   235,     0,     0,     0,     0,     0,   236,   265,
     266,     0,     0,     0,     0,     0,     0,     0,     0,   237,
     187,   238,   188,     0,     0,   189,   239,     0,   240,   241,
     191,     0,     0,   242,   192,     0,     0,     0,     0,     0,
     243,     0,   244,   195,   245,   246,   247,   248,     0,     0,
     197,     0,     0,     0,   249,   198,     0,   250,   251,   199,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   252,
     200,     0,   201,   253,     0,     0,   202,     0,   254,   255,
     256,   257,   258,   259,   203,   204,   260,   261,   205,   262,
       0,   263,     0,   264,     8,     9,   223,     0,   224,   225,
     226,     0,   227,   228,   229,     0,     0,     0,   230,     0,
     143,     0,   231,     0,     0,     0,   232,   233,     0,     0,
       0,   234,     0,   235,     0,     0,     0,     0,     0,   236,
     265,   266,     0,     0,     0,     0,     0,     0,     0,     0,
     237,   187,   238,   188,     0,     0,   189,   239,     0,     0,
     241,   191,     0,     0,   242,   192,     0,     0,     0,     0,
       0,   243,     0,   244,   195,   245,   246,   247,   248,     0,
       0,   197,     0,     0,     0,   249,   198,     0,   250,   251,
     199,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     252,   200,     0,   201,   253,     0,     0,   202,     0,   254,
     255,   256,   257,   258,   259,   203,   204,   260,   261,   205,
     262,     8,     9,   223,   264,   224,   225,   226,     0,   227,
     228,   229,     0,     0,     0,   230,     0,     0,     0,   231,
       0,     0,     0,   232,     0,     0,     0,     0,   234,     0,
     235,     0,     0,     0,     0,     0,   236,     0,     0,     0,
       0,   265,   266,     0,     0,     0,     0,   237,   187,     0,
     188,     0,     0,   189,   411,     0,     0,     0,   191,     0,
       0,     0,   192,     0,     0,     0,     0,     0,   243,     0,
       0,   195,     0,     0,     0,     0,     0,     0,   197,     0,
       0,     0,     0,   198,     0,   250,   251,   199,     0,   702,
       0,     0,     0,     0,     0,     0,   703,     0,   200,     0,
     201,   253,     0,     0,   202,     0,     0,   255,     0,   257,
       0,   259,   203,   204,   412,     0,   205,     8,     9,   223,
       0,   224,   225,   226,     0,   227,   228,   229,     0,     0,
       0,   230,     0,   677,     0,   231,     0,     0,     0,   232,
       0,     0,     0,     0,   234,     0,   235,     0,     0,     0,
       0,     0,   236,     0,     0,     0,     0,     0,   265,   266,
       0,     0,     0,   237,   187,     0,   188,     0,     0,   189,
     411,     0,     0,     0,   191,     0,     0,     0,   192,     0,
       0,     0,     0,     0,   243,     0,     0,   195,     0,     0,
       0,     0,     0,     0,   197,     0,     0,     0,     0,   198,
       0,   250,   251,   199,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   200,     0,   201,   253,   760,     0,
     202,     0,     0,   255,     0,   257,     0,   259,   203,   204,
     412,     0,   205,     8,     9,   223,     0,   224,   225,   226,
       0,   227,   228,   229,     0,     0,     0,   230,     0,     0,
       0,   231,     0,     0,     0,   232,     0,     0,     0,     0,
     234,     0,   235,     0,     0,     0,     0,     0,   236,     0,
       0,     0,     0,     0,   265,   266,     0,     0,     0,   237,
     187,     0,   188,     0,     0,   189,   411,     0,     0,     0,
     191,     0,     0,     0,   192,     0,     0,     0,     0,     0,
     243,     0,     0,   195,     0,     0,     0,     0,     0,     0,
     197,     0,     0,     0,     0,   198,     0,   250,   251,   199,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     200,     0,   201,   253,     0,     0,   202,     0,     0,   255,
       0,   257,     0,   259,   203,   204,   412,     0,   205,     0,
       0,   423,     8,     9,   223,     0,   224,   225,   226,     0,
     227,   228,   229,     0,     0,     0,   230,     0,     0,     0,
     231,     0,     0,     0,   232,     0,     0,     0,     0,   234,
       0,   235,     0,     0,     0,     0,     0,   236,     0,     0,
     265,   266,     0,     0,     0,     0,     0,     0,   237,   187,
       0,   188,     0,     0,   189,   411,     0,     0,     0,   191,
       0,     0,     0,   192,     0,     0,     0,     0,     0,   243,
       0,     0,   195,     0,     0,     0,     0,     0,     0,   197,
       0,     0,     0,     0,   198,     0,   250,   251,   199,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   200,
       0,   201,   253,     0,     0,   202,     0,     0,   255,     0,
     257,     0,   259,   203,   204,   412,     0,   205,     0,     0,
     263,     8,     9,   223,     0,   224,   225,   226,     0,   227,
     228,   229,     0,     0,     0,   230,     0,     0,     0,   231,
       0,     0,     0,   232,     0,     0,     0,     0,   234,     0,
     235,     0,     0,     0,     0,     0,   236,     0,     0,   265,
     266,     0,     0,     0,     0,     0,     0,   237,   187,     0,
     188,     0,     0,   189,   411,     0,     0,     0,   191,     0,
       0,     0,   192,     0,     0,     0,     0,     0,   243,     0,
       0,   195,     0,     0,     0,     0,     0,     0,   197,     0,
       0,     0,     0,   198,     0,   250,   251,   199,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   200,     0,
     201,   253,     0,     0,   202,     0,     0,   255,     0,   257,
       0,   259,   203,   204,   412,     0,   205,     0,     8,     9,
     223,     0,   224,   225,   226,     0,   227,   228,   229,     0,
       0,   775,   230,     0,     0,     0,   231,     0,     0,   618,
     232,     0,     0,     0,     0,   234,     0,   235,     0,     0,
       0,     0,     0,   236,     0,     0,     0,     0,   265,   266,
       0,     0,     0,     0,   237,   187,     0,   188,     0,     0,
     189,   411,     0,     0,     0,   191,     0,     0,     0,   192,
       0,     0,     0,     0,     0,   243,     0,     0,   195,     0,
       0,     0,     0,     0,     0,   197,     0,     0,     0,     0,
     198,     0,   250,   251,   199,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   200,     0,   201,   253,     0,
       0,   202,     0,     0,   255,     0,   257,     0,   259,   203,
     204,   412,     0,   205,     8,     9,   223,     0,   224,   225,
     226,     0,   227,   228,   229,     0,   960,     0,   230,     0,
       0,     0,   231,     0,     0,     0,   232,     0,     0,     0,
       0,   234,     0,   235,     0,     0,     0,     0,     0,   236,
       0,     0,     0,     0,     0,   265,   266,     0,     0,     0,
     237,   187,     0,   188,     0,     0,   189,   411,     0,     0,
       0,   191,     0,     0,     0,   192,     0,     0,     0,     0,
       0,   243,     0,     0,   195,     0,     0,     0,     0,     0,
       0,   197,     0,     0,     0,     0,   198,     0,   250,   251,
     199,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   200,     0,   201,   253,     0,     0,   202,     0,     0,
     255,     0,   257,     0,   259,   203,   204,   412,     0,   205,
       8,     9,   223,     0,   224,   225,   226,     0,   227,   228,
     229,     0,     0,     0,   230,     0,     0,     0,   231,     0,
       0,     0,   232,     0,     0,     0,     0,   234,     0,   235,
       0,     0,     0,     0,     0,   236,     0,     0,     0,     0,
       0,   265,   266,     0,     0,     0,   237,   187,     0,   188,
       0,     0,   189,   411,     0,     0,     0,   191,     0,     0,
       0,   192,     0,     0,     0,     0,     0,   243,     0,     0,
     195,     0,     0,     0,     0,     0,     0,   197,     0,     0,
       0,     0,   198,     0,   250,   251,   199,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   200,     0,   201,
     253,     0,     0,   202,     0,     0,   255,     0,   257,     0,
     259,   203,   204,   412,     0,   205,     0,     8,     9,   223,
       0,   224,   225,   226,     0,   227,   228,   229,     0,     0,
       0,   230,     0,     0,     0,   231,     0,     0,  1001,   232,
       0,     0,     0,     0,   234,     0,   235,     0,     0,     0,
       0,     0,   236,     0,     0,     0,     0,   265,   266,     0,
       0,     0,     0,   237,   187,     0,   188,     0,     0,   189,
     411,     0,     0,     0,   191,     0,     0,     0,   192,     0,
       0,     0,     0,     0,   243,     0,     0,   195,     0,     0,
     185,     9,     0,     0,   197,     0,     0,     0,     0,   198,
     186,   250,   251,   199,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   200,     0,   201,   253,     0,     0,
     202,     0,     0,   255,     0,   257,     0,   259,   203,   204,
     412,     0,   205,     0,     0,     0,     0,   187,     0,   188,
       0,     0,   189,     0,    68,   190,     0,   191,     0,    69,
       0,   192,     0,    70,   193,   194,     0,   185,     9,     0,
     195,     0,     0,     0,     0,   196,     0,   197,    71,     0,
       0,     0,   198,     0,   265,   266,   199,     0,     0,     0,
       0,     8,     9,     0,     0,     0,     0,   200,     0,   201,
       0,     0,     0,   202,    72,     0,     0,     0,     0,     0,
       0,   203,   204,     0,   187,   205,   188,     0,   206,   189,
       0,    68,   190,     0,   191,     0,    69,     0,   192,     0,
      70,   193,   194,     0,     8,     9,     0,   195,   187,     0,
     188,     0,   196,   189,   197,    71,     0,     0,   191,   198,
       0,     0,   192,   199,     0,   346,     0,     0,   527,     9,
       0,   195,     0,     0,   200,     0,   201,     0,   197,     0,
     202,    72,     0,   198,     0,     0,     0,   199,   203,   204,
       0,   187,   205,   188,     0,   206,   189,     0,   200,     0,
     201,   191,     0,     0,   202,   192,     0,     0,     0,     0,
       0,     0,   203,   204,   195,   187,   205,   188,     0,   347,
     189,   197,     0,     0,     0,   191,   198,     0,     0,   192,
     199,     0,     0,     0,     0,     8,     9,     0,   195,     0,
       0,   200,     0,   201,     0,   197,     0,   202,     0,     0,
     198,     0,     0,     0,   199,   203,   204,     0,     0,   205,
       0,     0,   263,     0,     0,   200,     0,   201,     0,     0,
       0,   202,     0,     0,     0,     0,     0,     0,     0,   203,
     204,     0,   187,   205,   188,     0,   263,   189,     0,     0,
       0,     0,   191,     0,     0,     0,   192,     0,     0,     0,
       0,     0,     0,     0,     0,   195,     0,     0,     0,     0,
       0,     0,   197,     0,     8,     9,   223,   198,   224,   225,
     226,   199,   227,   228,   229,     0,     0,     0,   230,     0,
       0,     0,   200,     0,   201,     0,   232,     0,   202,     0,
       0,     0,     0,     0,     0,     0,   203,   204,     0,     0,
     205,     0,     0,   691,     0,     0,     0,     0,     0,     0,
     237,   187,     0,   188,     0,     0,   189,   411,     0,     0,
       0,   191,     0,     0,     0,   192,     0,     0,     0,     0,
       0,   243,     0,     0,   195,     0,     0,     0,     0,     0,
       0,   197,     0,     0,     0,     0,   198,     0,   250,   251,
     199,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   200,     0,   201,   253,     0,     0,   202,     0,     0,
     255,     0,   257,     0,   259,   203,   204,   412,     0,   205
};

static const short int yycheck[] =
{
       3,     1,   321,   302,   467,    75,    83,   447,    57,     1,
     395,   318,   464,   531,    17,    92,   230,   589,   321,   156,
      12,   375,   677,   424,   425,   182,    17,   140,   727,    78,
     240,   375,   375,   375,    34,   875,   876,   375,   217,    39,
      16,   375,   155,    18,   375,   148,   149,     0,   375,   489,
     153,    19,    18,   143,    57,    32,    59,     4,   161,   162,
      66,     4,     5,     6,    20,     5,     6,     5,     6,    69,
       4,     5,     6,     4,    18,    78,    19,   190,     4,    71,
     193,     5,     6,    28,     4,    32,    18,   121,    19,    32,
     269,    21,   532,   143,    97,   935,    28,     4,    32,    19,
       0,    32,    20,     5,    18,    93,    18,    95,    32,     4,
     142,   410,   100,   119,    28,   115,    28,   120,     5,     6,
      21,     5,     6,    44,    18,    32,    21,   240,    18,   896,
      32,   898,    20,    18,    28,   902,    18,   250,    28,   979,
     140,    21,   219,   143,    20,    32,    28,    20,    20,     5,
       6,    28,   242,    20,    20,   155,   674,   336,    20,    20,
     545,   679,   239,    20,   167,   142,   169,   142,    92,   379,
      20,   142,   382,   173,   142,   141,    20,   480,   169,    28,
     125,   258,   182,   260,   261,   161,   142,   111,   628,   142,
     190,   121,   242,   193,    34,   142,    20,   141,   190,   142,
      40,  1041,   143,   143,   142,   384,   206,   207,   142,   141,
     323,   142,   302,   370,   869,   207,   142,   217,   142,    28,
     143,   142,   142,   675,   142,   217,   580,   141,   680,   141,
     230,   321,   369,   346,  1001,   143,   580,   580,   580,   376,
     240,   451,   580,   453,    44,   900,   580,   141,   240,   580,
     250,   141,   302,   580,   142,   142,   141,   658,   142,   141,
    1027,    28,   365,   366,   141,    28,   142,   123,    28,   142,
     142,   321,   385,   386,    44,   142,   142,   269,   977,   978,
     142,   142,     4,    30,    31,   142,    28,   859,   229,   617,
     231,   232,   142,   234,   235,   236,   624,    15,   142,     5,
       6,   242,   302,    50,    22,    23,    51,    25,    26,    27,
      32,     4,    30,    31,    32,    33,    34,   107,   142,   242,
     410,   321,    40,   323,   265,   266,   375,     5,     6,    28,
      29,   143,   141,    28,   242,     5,   908,   992,    85,    32,
    1039,  1040,   142,   456,   336,    44,   346,    56,     5,     6,
       5,    44,   156,   157,    72,   347,   348,   357,    29,   472,
     410,   302,    32,   476,    73,   368,   111,     5,     6,     5,
     370,    44,   375,    44,   141,    32,    19,    32,   141,   302,
     321,   141,   143,     5,   384,   385,   386,   379,   952,    32,
     382,   955,   384,    19,   302,   113,   715,    29,   321,   141,
     557,   729,   920,   921,   396,   111,    32,   714,    20,   242,
     410,   158,   159,   321,     7,    18,     9,    10,    11,    55,
      13,    14,   535,     5,   537,   639,   640,    63,    59,    32,
     242,    19,   895,    64,   152,   153,   209,    68,   156,   157,
     158,   159,   141,   216,   162,   163,     5,     4,     5,   143,
      32,    19,    83,    91,   111,    19,   456,     4,     4,   451,
      55,   453,  1026,    69,    32,     4,     5,     6,    63,   410,
     108,    18,   472,    32,  1038,    32,   476,     4,   109,    72,
     480,   242,     4,     5,    19,    32,    32,   410,    19,   952,
     302,    18,   955,    32,     5,   101,   803,    90,    44,   569,
     127,   141,   410,   143,    89,    32,   133,     5,     6,   321,
      32,   951,   144,   145,   146,   147,   148,   149,   150,   151,
     113,    32,   154,   155,   130,   131,   132,   133,   134,   135,
     136,   580,   645,   646,    32,   535,    18,   537,     5,   924,
      54,   302,     5,    57,     5,     6,    20,     5,   242,    21,
      32,    19,    18,    21,   152,   153,    28,   557,   558,   559,
     321,    29,    19,  1026,    21,    32,    32,    19,    82,    32,
      19,    32,    21,    87,    32,  1038,    44,   580,     5,     6,
       7,   141,    21,   143,    21,    12,    13,    19,   102,    28,
     104,    28,     5,     6,     7,   587,   915,    25,   410,    12,
      13,    17,   116,   117,    32,    33,   120,    28,   302,   686,
     687,    25,    17,   998,   999,   139,   140,    21,    32,    33,
     710,     5,   712,   626,    28,   715,   618,   321,   620,   742,
      21,   643,   644,   137,   138,   647,   648,    28,     5,   752,
     753,   754,   162,   163,   164,   645,   646,   760,    17,   410,
     423,   424,   425,    19,   141,    21,   143,   141,    17,   143,
     710,   141,   712,   143,    20,   715,   965,   440,   745,    19,
     141,   141,   143,   143,   641,   642,   141,    20,   143,   649,
     650,   137,   138,  1034,  1035,   982,   983,    19,    19,    17,
       5,    21,    21,    19,   467,   636,   637,   638,   639,   640,
     641,   642,   643,   644,    92,    92,   647,   648,   649,   650,
     651,   652,   653,   654,     4,   656,   410,    17,    28,   809,
      28,    19,    19,    19,    19,    19,    19,    19,    32,    28,
      21,    19,    19,    19,    19,    44,    20,    44,   741,   829,
     681,    18,   742,   141,    18,    28,    28,    18,    18,    18,
      18,   141,   752,   753,   754,    20,   759,    19,   141,   809,
     760,   141,   143,   142,    21,   768,   769,   142,    21,   710,
      19,   712,    19,    23,   715,    26,    22,    18,   160,   829,
       5,   141,     5,    28,    28,   142,    28,   710,    28,   712,
     141,    29,   715,     5,     5,     5,    18,    18,    18,    18,
      28,   891,   710,   893,   712,   141,    81,   715,    17,   142,
      18,    18,    18,     5,   141,    20,   141,   907,    20,    18,
     820,    19,    18,   913,    21,   915,   916,    18,    29,   770,
      18,   772,   773,    18,   775,    19,    18,   143,    28,    18,
      18,   891,    18,   893,    21,    81,    81,    18,    21,    29,
      20,   854,   141,    28,    28,    21,    17,   907,    18,   632,
     863,   938,   939,   913,   143,   915,   916,    29,   809,    32,
      29,    18,    20,    18,   141,   965,   868,   710,   991,   712,
     143,    67,   972,   973,   143,   658,   809,    28,   829,    18,
      29,    19,    19,    18,    20,   138,     5,    21,   710,    17,
     712,   809,    18,   715,   137,    20,   829,    18,    20,    29,
      20,   903,   904,   913,    18,   965,    18,    18,  1008,    18,
      28,   829,   972,   973,    17,   928,   929,    18,  1005,  1006,
      18,    18,    21,    18,    20,   138,   140,   919,   250,   139,
    1017,  1018,   834,   137,   178,   140,   703,   888,   143,   710,
     891,   712,   893,   657,   715,   632,   143,   653,  1008,   651,
     155,   652,   143,   913,   654,   965,   907,   656,   891,   250,
     893,   620,   913,   587,   915,   916,   809,   913,   173,   904,
     915,   688,   911,   891,   907,   893,   140,   688,   667,   143,
     913,   991,   915,   916,   892,   190,   829,   809,   193,   907,
     256,   155,   167,     4,     3,   913,    52,   915,   916,    52,
    1013,  1014,    78,  1016,   207,   172,   710,   829,   712,   759,
     539,   715,   939,   769,   965,   768,   929,   580,    97,   928,
    1016,   972,   973,   741,    28,   230,   190,   810,   357,   193,
     553,    -1,   965,    -1,    -1,   240,    -1,    -1,   809,   972,
     973,    -1,    -1,    -1,    -1,   250,    -1,   965,   891,    -1,
     893,    -1,    -1,    -1,   972,   973,    -1,  1008,   829,    -1,
      -1,    -1,    -1,    -1,   907,    -1,   230,    -1,    -1,   891,
      -1,   893,    -1,   916,    -1,  1008,   240,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   230,   907,   250,    -1,    -1,    -1,
    1008,   913,    -1,   915,   916,    -1,    -1,   302,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   809,   252,    -1,    -1,    -1,
     256,    -1,    -1,   896,    -1,   898,   321,    -1,   323,   902,
     891,    -1,   893,    -1,    -1,   829,    -1,    -1,    -1,   972,
     973,    -1,    -1,    -1,    -1,     0,   907,    -1,   302,    -1,
      -1,   346,   913,   965,   915,   916,    -1,    -1,    -1,    -1,
     972,   973,    -1,    -1,    -1,    -1,    -1,   321,    -1,   323,
      -1,    -1,    -1,    -1,    -1,  1008,   312,    -1,   314,    -1,
      -1,    -1,   318,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     385,   386,   346,    -1,    49,    -1,  1008,   891,    -1,   893,
      -1,    -1,    -1,    -1,   965,    -1,    -1,    -1,    -1,    -1,
      -1,   972,   973,   907,    -1,   410,    71,    -1,    -1,   913,
      -1,   915,   916,    -1,    -1,    -1,    -1,    -1,  1001,    84,
      -1,   385,   386,    88,    89,    -1,    -1,    -1,    -1,    94,
      -1,    96,    97,    98,    99,    -1,    -1,  1008,   103,    -1,
      -1,    -1,   107,    -1,  1027,    -1,   410,    -1,    49,    -1,
      -1,   456,    -1,    -1,   119,    -1,    -1,   122,    -1,   124,
      -1,   965,    -1,    -1,    -1,    -1,    -1,   472,   972,   973,
      71,   476,    -1,    -1,    -1,   480,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    -1,    -1,    88,    89,    -1,
      -1,    -1,   456,    94,    -1,    96,    97,    98,    99,    -1,
      -1,    -1,   103,   449,  1008,    -1,   107,    -1,   472,    -1,
      -1,    -1,   476,    -1,   460,    -1,   480,   463,   119,    -1,
      -1,   122,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
     535,   477,   537,    -1,   480,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,   490,    -1,    -1,     5,     6,     7,
      -1,     9,    10,    11,    -1,    13,    14,    15,    -1,   505,
      18,    19,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,
      28,   535,    -1,   537,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,   531,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    52,    -1,    54,    -1,    -1,    57,
      58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    49,    -1,    -1,    87,
      -1,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
     645,   646,    -1,   589,   102,    -1,   104,   105,    71,    -1,
     108,    -1,    -1,   111,    -1,   113,    -1,   115,   116,   117,
     118,    84,   120,    -1,    -1,   123,    89,    -1,     5,     6,
      -1,    94,    -1,    96,    97,    98,    99,   623,    -1,    -1,
     103,   645,   646,    -1,   107,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,   122,
      -1,   124,    -1,    -1,   162,   163,    -1,    -1,    -1,   655,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    54,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    62,    -1,    -1,   674,    66,
      -1,   677,    -1,   679,    -1,    -1,    -1,   742,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,   752,   753,   754,
      87,    -1,    -1,    -1,    91,   760,   702,   703,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   102,    -1,   104,   714,    -1,
     716,   108,    -1,    -1,    -1,    -1,    -1,    -1,   742,   116,
     117,    -1,    -1,   120,    -1,   731,   123,    -1,   752,   753,
     754,    -1,    -1,    -1,    -1,    -1,   760,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   820,    -1,    -1,    -1,     5,
       6,     7,    -1,     9,    10,    11,    -1,    13,    14,    15,
      -1,    -1,    -1,    19,    20,    21,    -1,    23,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,   803,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    54,    -1,
      -1,    57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    72,    -1,   834,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,   845,
     846,    87,    -1,    89,    90,    91,    -1,    -1,   913,    -1,
      -1,    -1,    -1,   859,    -1,    -1,   102,    -1,   104,   105,
     106,    -1,   108,   869,    -1,   111,    -1,   113,    -1,   115,
     116,   117,   118,    -1,   120,    -1,    -1,    -1,    -1,    -1,
      -1,   887,    -1,    -1,   890,    -1,    -1,    -1,    -1,   913,
      -1,    -1,    -1,    -1,   900,    -1,    -1,    -1,    -1,    -1,
     965,    -1,   908,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   920,   921,   162,   163,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   991,    -1,    -1,    -1,
     936,   937,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   965,     5,     6,     7,    -1,     9,    10,    11,    -1,
      13,    14,    15,    -1,    -1,    -1,    19,    -1,    21,    -1,
      23,    -1,    -1,    -1,    27,    28,    -1,   991,    -1,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   992,    -1,    51,    52,
      53,    54,    55,    -1,    57,    58,    -1,    60,    61,    62,
      63,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    72,
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
      52,    53,    54,    -1,    -1,    57,    58,    -1,    60,    61,
      62,    -1,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,
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
      14,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,   162,   163,    -1,    -1,    -1,    -1,    51,    52,    -1,
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
       5,     6,    -1,    -1,    82,    -1,    -1,    -1,    -1,    87,
      15,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,    -1,   104,   105,    -1,    -1,
     108,    -1,    -1,   111,    -1,   113,    -1,   115,   116,   117,
     118,    -1,   120,    -1,    -1,    -1,    -1,    52,    -1,    54,
      -1,    -1,    57,    -1,    59,    60,    -1,    62,    -1,    64,
      -1,    66,    -1,    68,    69,    70,    -1,     5,     6,    -1,
      75,    -1,    -1,    -1,    -1,    80,    -1,    82,    83,    -1,
      -1,    -1,    87,    -1,   162,   163,    91,    -1,    -1,    -1,
      -1,     5,     6,    -1,    -1,    -1,    -1,   102,    -1,   104,
      -1,    -1,    -1,   108,   109,    -1,    -1,    -1,    -1,    -1,
      -1,   116,   117,    -1,    52,   120,    54,    -1,   123,    57,
      -1,    59,    60,    -1,    62,    -1,    64,    -1,    66,    -1,
      68,    69,    70,    -1,     5,     6,    -1,    75,    52,    -1,
      54,    -1,    80,    57,    82,    83,    -1,    -1,    62,    87,
      -1,    -1,    66,    91,    -1,    69,    -1,    -1,     5,     6,
      -1,    75,    -1,    -1,   102,    -1,   104,    -1,    82,    -1,
     108,   109,    -1,    87,    -1,    -1,    -1,    91,   116,   117,
      -1,    52,   120,    54,    -1,   123,    57,    -1,   102,    -1,
     104,    62,    -1,    -1,   108,    66,    -1,    -1,    -1,    -1,
      -1,    -1,   116,   117,    75,    52,   120,    54,    -1,   123,
      57,    82,    -1,    -1,    -1,    62,    87,    -1,    -1,    66,
      91,    -1,    -1,    -1,    -1,     5,     6,    -1,    75,    -1,
      -1,   102,    -1,   104,    -1,    82,    -1,   108,    -1,    -1,
      87,    -1,    -1,    -1,    91,   116,   117,    -1,    -1,   120,
      -1,    -1,   123,    -1,    -1,   102,    -1,   104,    -1,    -1,
      -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,
     117,    -1,    52,   120,    54,    -1,   123,    57,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,     5,     6,     7,    87,     9,    10,
      11,    91,    13,    14,    15,    -1,    -1,    -1,    19,    -1,
      -1,    -1,   102,    -1,   104,    -1,    27,    -1,   108,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   116,   117,    -1,    -1,
     120,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    54,    -1,    -1,    57,    58,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    87,    -1,    89,    90,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   102,    -1,   104,   105,    -1,    -1,   108,    -1,    -1,
     111,    -1,   113,    -1,   115,   116,   117,   118,    -1,   120
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,   121,   305,   306,   314,   315,   316,   317,     5,     6,
     168,   311,   312,   325,     0,   307,   309,   318,   319,   320,
     327,   328,   381,   391,   392,   409,   416,   417,   418,   419,
     427,   315,    28,   325,    29,    44,    49,    71,    84,    88,
      89,    94,    96,    97,    98,    99,   103,   107,   119,   122,
     124,   321,   322,   323,   324,   307,   319,    21,   333,    21,
     395,   419,   142,    44,   311,   325,   311,   107,    59,    64,
      68,    83,   109,   323,   324,   307,   320,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   352,   359,   363,
     366,   371,   372,   373,   376,   307,   396,   397,   398,   399,
     400,   401,   402,   404,   405,   407,    69,   101,   130,   131,
     132,   133,   134,   135,   136,   420,   421,   422,    28,    21,
     306,   313,     5,     6,     7,    12,    13,   326,   329,   123,
     311,   345,     5,   325,     5,     6,     7,    12,    13,   380,
     321,    20,   336,    21,    28,   235,   346,    19,    19,    19,
      28,   235,   378,    19,    89,   403,    20,   398,    21,    28,
     408,    19,    19,   311,   423,   424,    17,   306,   308,   318,
      28,   310,   329,    17,   330,   331,     5,     5,    17,   410,
     411,   329,    17,   382,   383,     5,    15,    52,    54,    57,
      60,    62,    66,    69,    70,    75,    80,    82,    87,    91,
     102,   104,   108,   116,   117,   120,   123,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   311,   364,   367,
     368,   370,     5,     7,     9,    10,    11,    13,    14,    15,
      19,    23,    27,    28,    32,    34,    40,    51,    53,    58,
      60,    61,    65,    72,    74,    76,    77,    78,    79,    86,
      89,    90,   101,   105,   110,   111,   112,   113,   114,   115,
     118,   119,   121,   123,   125,   162,   163,   166,   167,   169,
     172,   176,   184,   185,   186,   187,   188,   190,   193,   194,
     195,   196,   197,   198,   199,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   228,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   246,   249,   250,
     251,   253,   254,   256,   257,   266,   267,   268,   269,   271,
     272,   273,   282,   283,   285,   286,   287,   288,   289,   291,
     292,   297,   298,   299,   300,   302,   311,   307,   344,   347,
     348,   349,   351,   344,   344,   344,    69,   123,   169,   311,
     310,    20,   344,   344,    19,   425,   426,   141,   143,   308,
      20,   330,   176,   311,   332,    19,    19,   174,    21,   412,
      17,   393,   394,   311,   332,    21,   379,   384,     5,   169,
     247,   248,   311,   325,   169,    92,    92,    32,   311,    32,
      92,   111,   142,   242,   243,   311,   312,   325,   365,     4,
     180,   180,    32,   180,   242,   311,   431,    28,   235,   377,
      17,    58,   118,   172,   176,   188,   195,   196,   198,   210,
     211,   212,   311,   123,   172,   176,   212,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   230,
     311,   212,   212,   212,   212,   212,    44,   142,    28,    19,
     235,   169,   247,   311,    28,   234,    19,    19,    19,     5,
      55,    63,    19,    19,   142,   169,   170,   178,   311,   217,
     230,   290,    19,    19,   290,   235,    19,    19,   235,   235,
      19,    19,   212,   212,   242,   325,    44,    44,    44,   142,
      19,   162,   163,   164,    29,   144,   145,   146,   147,   148,
     149,   150,   151,   154,   155,   229,    20,   233,    28,    28,
      28,   230,   232,   252,   255,   230,   258,   232,   270,     1,
      18,   241,   250,   274,   275,   278,   281,     5,   169,   284,
     311,    19,   142,   242,    93,    95,   100,   350,    18,   141,
      18,    18,    18,   169,   325,     5,   111,   325,    18,    18,
     191,   192,   230,   143,   424,   428,    20,   141,   141,   141,
     344,   344,   307,   413,   414,   415,   310,   311,   332,   307,
     320,   337,   338,   339,   352,   359,   363,   366,   371,   385,
     386,   387,   310,    19,   247,   325,    28,   141,   247,    29,
     242,   311,   169,   169,    15,    22,    23,    25,    26,    27,
      30,    31,    32,    33,    34,    40,    72,   113,   152,   153,
     156,   157,   158,   159,   162,   163,   369,   142,   143,    28,
     141,   431,   111,    29,   142,    28,    21,   233,   142,    32,
     180,   214,   215,   216,   214,   214,    25,    32,    33,    34,
      40,   152,   153,    30,    31,    50,    85,   158,   159,   156,
     157,    23,    26,    22,   160,    16,   161,    18,   180,     5,
     192,   230,   247,   247,    28,   125,   169,   311,    28,   230,
     231,    28,   230,   191,    19,   142,   200,    21,   388,    19,
     142,    32,    28,   169,   311,    28,    56,    73,   293,   294,
     296,   123,   169,   311,   230,   230,   241,   301,     5,     5,
       5,   192,    93,   100,   182,   183,   189,   230,     5,   230,
      18,    18,    18,    18,    28,   141,    81,     5,     5,   189,
     192,   169,   169,   348,    17,   374,   375,     5,   431,   142,
      18,   141,   428,   311,   332,   311,   311,    18,    18,     5,
      20,   141,   321,    20,   387,    18,    28,   248,    28,   231,
      28,   429,    19,    19,    19,   347,   142,   325,   243,    21,
     106,   230,   244,   245,   388,   347,   307,   353,   356,   357,
      18,   216,    18,    18,   212,    18,   212,   212,   212,   217,
     217,   218,   218,   219,   219,   169,   311,   169,   311,   219,
     219,   220,   220,   221,   222,   223,   224,   230,   225,   209,
     214,   143,    18,    19,     5,   303,   304,   303,    28,    18,
     143,   189,   191,   244,   389,   390,   189,   191,    18,    18,
      19,   235,   235,   294,   296,    18,    18,    18,    18,    18,
     143,   181,   230,   181,   141,    18,   234,    21,   259,   234,
     232,   276,   279,   250,   230,    81,    81,    18,   143,     5,
       5,    51,   111,   408,    21,   347,   230,    28,    28,    29,
      20,   415,   235,    21,   169,   169,   169,   143,   143,    29,
     353,   169,   311,   143,   137,   138,    20,   307,   354,   357,
     307,   355,   356,   212,   212,   212,   212,    17,    18,   232,
      29,    18,   141,    18,   234,   179,   180,    18,   143,    20,
     141,    18,   143,   176,   311,   234,   183,    67,    55,    63,
     260,   261,   262,   264,   265,    28,    18,   230,   230,    29,
      19,    19,   307,   406,   143,   231,   307,   360,   361,   362,
       5,     5,     5,   325,   244,    20,   142,   142,   432,   432,
     432,   230,   212,    18,   230,   234,   304,   234,   201,   388,
     179,   142,   179,    20,   244,   179,   295,   325,   295,   234,
      17,   231,    17,    20,   262,   237,   263,   265,   277,   280,
     281,   234,    18,    18,   166,   189,   189,   137,   138,    20,
     431,   139,   140,    20,   307,   362,   307,   361,    18,    18,
      18,   141,    29,   432,   230,   230,    28,   235,   358,   358,
      28,   143,   192,   201,   201,    18,    18,    17,    18,   234,
     234,    18,    18,   408,   408,   432,    21,   430,   430,   430,
     169,   244,   143,   143,   431,   431,   179,   143,   235,   235,
     234,   307,   307,   406,   235,   235,     5,   201,   179,   138,
     137,    20,   429,   429,    18,   201,   408,   408,   432
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
#line 274 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[-5].r.myLineNo),(yyvsp[-5].r.myColNo),"expecting type,you can\'t declare array without type","");;}
    break;

  case 94:
#line 281 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[-7].r.myLineNo),(yyvsp[-7].r.myColNo),"second number not allowed","");;}
    break;

  case 209:
#line 474 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	
															access_modifier = nullptr;	
															data_storage = nullptr;
														;}
    break;

  case 215:
#line 489 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
												if (isLocal) {
													(yyval.lv) = p->create_local_variable((yyvsp[0].r.str), (yyvsp[0].r.myColNo), (yyvsp[0].r.myLineNo));
												} else {
													(yyval.dm) = p->create_data_member((yyvsp[0].r.str), access_modifier, data_storage, (yyvsp[0].r.myColNo), (yyvsp[0].r.myLineNo));
												}
											;}
    break;

  case 216:
#line 496 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
												if (isLocal) {
													(yyval.lv) = p->create_local_variable((yyvsp[-2].r.str), (yyvsp[-2].r.myColNo), (yyvsp[-2].r.myLineNo));
												} else {
													(yyval.dm) = p->create_data_member((yyvsp[-2].r.str), access_modifier, data_storage, (yyvsp[-2].r.myColNo), (yyvsp[-2].r.myLineNo));
												}
											;}
    break;

  case 217:
#line 503 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[-1].r.myLineNo),(yyvsp[-1].r.myColNo),"type error expected value of var ","");;}
    break;

  case 218:
#line 504 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	cout << "WTF1";	;}
    break;

  case 219:
#line 505 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	cout << "WTF2";	;}
    break;

  case 220:
#line 506 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	cout << "WTF3";	;}
    break;

  case 221:
#line 507 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	cout << "WTF4";	;}
    break;

  case 222:
#line 508 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	cout << "WTF5";	;}
    break;

  case 223:
#line 509 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	cout << "WTF6";	;}
    break;

  case 230:
#line 523 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"expecting local type,you can\'t declare constant without type","");;}
    break;

  case 235:
#line 532 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"expecting value,you can\'t declare constant without value","");;}
    break;

  case 236:
#line 533 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"expecting value,you can\'t declare constant without value","");;}
    break;

  case 248:
#line 553 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"expecting type without boolean expression","");;}
    break;

  case 249:
#line 557 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { bs = p->finish_scope_declaration(bs, 10);	;}
    break;

  case 250:
#line 561 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {  bs = p->create_scope(10); cout<<"Add if"<<endl;	;}
    break;

  case 251:
#line 564 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { cout << "\t if without else\n"; ;}
    break;

  case 252:
#line 565 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { cout << "\t if with else\n"; ;}
    break;

  case 253:
#line 568 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	bs = p->finish_scope_declaration(bs, 7);	;}
    break;

  case 254:
#line 571 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	bs = p->create_scope(7); cout<<"Add switch"<<endl;	;}
    break;

  case 262:
#line 591 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
	bs = p->create_scope(11);
  ;}
    break;

  case 265:
#line 601 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
		cout<<"Add case"<<endl;bs = p->finish_scope_declaration(bs, 11);
  ;}
    break;

  case 266:
#line 604 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
		cout<<"Add case"<<endl;bs = p->finish_scope_declaration(bs,11);
  ;}
    break;

  case 267:
#line 607 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { cout<<"Add case "<<endl;bs = p->finish_scope_declaration(bs, 11);
  errorRec.errQ->enqueue((yyvsp[-1].r.myLineNo),(yyvsp[-1].r.myColNo),"expecting type,you can\'t  without type case ('')","");;}
    break;

  case 273:
#line 621 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	bs = p->finish_scope_declaration(bs, 6);	;}
    break;

  case 274:
#line 624 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	bs = p->create_scope(6); cout<<"Add while"<<endl;	;}
    break;

  case 277:
#line 631 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[-2].r.myLineNo),(yyvsp[-2].r.myColNo),"expecting type,you can\'t declare constant without while","");;}
    break;

  case 278:
#line 635 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
											bs=p->finish_scope_declaration(bs, 5);
										;}
    break;

  case 279:
#line 640 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
											//cout<<"her father"<<p-> Symbol_Table->get_current_scope()<<"???"<<endl;
											bs= p->create_scope(5);
											cout<<"Add for "<<endl;
										;}
    break;

  case 281:
#line 648 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	errorRec.errQ->enqueue((yyvsp[0].r.myLineNo), (yyvsp[0].r.myColNo), "expecting type,you can\'t in for", "");	;}
    break;

  case 295:
#line 678 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	bs = p->finish_scope_declaration(bs, 9);	;}
    break;

  case 296:
#line 681 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	bs = p->create_scope(9); cout<<"Add foreach"<<endl;	;}
    break;

  case 298:
#line 685 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	errorRec.errQ->enqueue((yyvsp[-3].r.myLineNo), (yyvsp[-3].r.myColNo), "error type ", "");	;}
    break;

  case 337:
#line 769 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
																p->print(p->Symbol_Table);
																p->set_Inheritance_pointers(p->Symbol_Table->get_root_scope()->get_map()); 
																p->check_all(p->Symbol_Table);
																cout << "TESTING" <<endl;
															;}
    break;

  case 352:
#line 812 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {cout<<"error in the open brackets ";;}
    break;

  case 370:
#line 858 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { cout << "\t\t Added modifier\n";	;}
    break;

  case 371:
#line 859 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[-1].r.myLineNo),(yyvsp[-1].r.myColNo),"error modifer can't type more the modifier","");;}
    break;

  case 377:
#line 867 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	
									(yyval.am) = p->set_access_modifier(3, (yyvsp[0].r.myColNo), (yyvsp[0].r.myLineNo));
									access_modifier = (yyval.am);
							;}
    break;

  case 378:
#line 871 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	
									(yyval.am) = p->set_access_modifier(2, (yyvsp[0].r.myColNo), (yyvsp[0].r.myLineNo));
									access_modifier = (yyval.am);
							;}
    break;

  case 379:
#line 875 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	
									(yyval.am) = p->set_access_modifier(1, (yyvsp[0].r.myColNo), (yyvsp[0].r.myLineNo));
									access_modifier = (yyval.am);
							;}
    break;

  case 385:
#line 886 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	
									(yyval.ds) = p->set_data_storage(2, (yyvsp[0].r.myColNo), (yyvsp[0].r.myLineNo));
									data_storage = (yyval.ds);
								;}
    break;

  case 386:
#line 890 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	
									(yyval.ds) = p->set_data_storage(1, (yyvsp[0].r.myColNo), (yyvsp[0].r.myLineNo));
									data_storage = (yyval.ds);
								;}
    break;

  case 387:
#line 894 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
									(yyval.ds) = p->set_data_storage(3, (yyvsp[-1].r.myColNo), (yyvsp[-1].r.myLineNo));
									data_storage = (yyval.ds);
								;}
    break;

  case 389:
#line 901 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_NOT_IDENTIFIER) ","");;}
    break;

  case 391:
#line 906 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_INTEGER) ","");;}
    break;

  case 392:
#line 907 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_INTEGER) ","");;}
    break;

  case 393:
#line 908 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_INTEGER) ","");;}
    break;

  case 394:
#line 909 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_NOT_IDENTIFIER) ","");;}
    break;

  case 395:
#line 914 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
													(yyval.clas) = p->finish_class_declaration((yyvsp[-1].clas));
											;}
    break;

  case 396:
#line 919 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
													(yyval.clas) = p->create_class((yyvsp[-2].r.str), false, il, access_modifier, data_storage, (yyvsp[-5].r.myColNo), (yyvsp[-5].r.myLineNo));
													access_modifier = nullptr;
													data_storage = nullptr;
													isLocal = false;
											;}
    break;

  case 397:
#line 925 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { 
													errorRec.errQ->enqueue((yyvsp[-6].r.myLineNo),(yyvsp[-6].r.myColNo),"error not identifier (T_NOT_IDENTIFIER) ","");
													access_modifier = nullptr;
													data_storage = nullptr;
													isLocal = false;
											  ;}
    break;

  case 398:
#line 933 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	il = new InheritanceList();	;}
    break;

  case 400:
#line 937 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { cout << "\t\t Added class base\n";;}
    break;

  case 401:
#line 940 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {;}
    break;

  case 402:
#line 941 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	il = p->add_class_list((yyvsp[0].r.str), il);;}
    break;

  case 403:
#line 942 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {;}
    break;

  case 404:
#line 943 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {  il = p->add_class_list((yyvsp[0].r.str), il);   ;}
    break;

  case 405:
#line 944 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {;}
    break;

  case 406:
#line 947 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	il = p->add_class_list((yyvsp[0].r.str), il);	;}
    break;

  case 407:
#line 948 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	il = p->add_class_list((yyvsp[0].r.str), il);	;}
    break;

  case 408:
#line 951 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { cout << "\t\t Added class body\n"; ;}
    break;

  case 424:
#line 977 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[-5].r.myLineNo),(yyvsp[-5].r.myColNo),"error const ","can't const with out type ");;}
    break;

  case 426:
#line 981 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	
																							access_modifier = nullptr;	
																							data_storage = nullptr;
																						;}
    break;

  case 427:
#line 985 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
															  								access_modifier = nullptr;	
																							data_storage = nullptr;
																						;}
    break;

  case 428:
#line 991 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
												(yyval.func) = p->finish_function_declaration((yyvsp[-1].func));
												isLocal = false;
											;}
    break;

  case 429:
#line 998 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	
													access_modifier = nullptr;
													data_storage = nullptr;
													isLocal = true;
											;}
    break;

  case 430:
#line 1003 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
													access_modifier = nullptr;
													data_storage = nullptr;
													isLocal = true;
											;}
    break;

  case 431:
#line 1008 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
													access_modifier = nullptr;
													data_storage = nullptr;
													isLocal = true;
											;}
    break;

  case 432:
#line 1015 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
																		lp = new List_Parameters();
																		(yyval.func) = p->create_function((yyvsp[0].r.str), lp, access_modifier, data_storage, false, (yyvsp[-3].r.myColNo), (yyvsp[-3].r.myLineNo));
																;}
    break;

  case 433:
#line 1021 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
																		lp = new List_Parameters();
																		(yyval.func) = p->create_function((yyvsp[0].r.str), lp, access_modifier, data_storage, false, (yyvsp[-3].r.myColNo), (yyvsp[-3].r.myLineNo));
																;}
    break;

  case 434:
#line 1027 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
																		lp = new List_Parameters();
																		(yyval.func) = p->create_function((yyvsp[0].r.str), lp, access_modifier, data_storage, false, (yyvsp[-3].r.myColNo), (yyvsp[-3].r.myLineNo));
																;}
    break;

  case 444:
#line 1053 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
																				lp = p->add_parameters((yyvsp[0].r.str) , false , lp);
																			;}
    break;

  case 445:
#line 1056 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
																				lp = p->add_parameters((yyvsp[-2].r.str) , true , lp);
																			;}
    break;

  case 500:
#line 1163 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
													(yyval.func) = p->finish_function_declaration((yyvsp[-1].func));
												;}
    break;

  case 501:
#line 1168 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
													access_modifier = nullptr;
													data_storage = nullptr;
												;}
    break;

  case 502:
#line 1174 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
													lp = new List_Parameters();
													(yyval.func) = p->create_function((yyvsp[0].r.str), lp, access_modifier, data_storage, true, (yyvsp[-2].r.myColNo), (yyvsp[-2].r.myLineNo));
												;}
    break;

  case 513:
#line 1213 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[-1].r.myLineNo),(yyvsp[-1].r.myColNo),"type error expected no struct body ","");;}
    break;

  case 515:
#line 1217 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"type error expected not id ","");;}
    break;

  case 516:
#line 1218 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_INTEGER) ","");;}
    break;

  case 517:
#line 1219 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_INTEGER) ","");;}
    break;

  case 518:
#line 1220 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_INTEGER) ","");;}
    break;

  case 544:
#line 1275 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	(yyval.clas) = p->finish_class_declaration((yyvsp[-1].clas));	;}
    break;

  case 545:
#line 1278 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
  																					(yyval.clas) = p->create_class((yyvsp[-2].r.str), true, il, access_modifier, data_storage, (yyvsp[-5].r.myColNo), (yyvsp[-5].r.myLineNo));
																					access_modifier = nullptr;
																					data_storage = nullptr;
																					isLocal = false;
																				;}
    break;

  case 547:
#line 1287 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { cout << "\t\t Added interface base\n"; ;}
    break;

  case 550:
#line 1294 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { cout << "\t\t Added interface body\n"; ;}
    break;

  case 559:
#line 1312 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {	(yyval.func) = p->finish_function_declaration((yyvsp[-1].func));	;}
    break;

  case 560:
#line 1315 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
																	access_modifier = nullptr;
																	data_storage = nullptr;
																	isLocal = true;
																;}
    break;

  case 561:
#line 1320 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
  																	access_modifier = nullptr;
																	data_storage = nullptr;
																	isLocal = true;
																;}
    break;

  case 562:
#line 1327 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
  												lp = new List_Parameters();
												(yyval.func) = p->create_function((yyvsp[0].r.str), lp, NULL, NULL, false, (yyvsp[-3].r.myColNo), (yyvsp[-3].r.myLineNo));										
											;}
    break;

  case 563:
#line 1333 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
  												lp = new List_Parameters();
												(yyval.func) = p->create_function((yyvsp[0].r.str), lp, NULL, NULL, false, (yyvsp[-3].r.myColNo), (yyvsp[-3].r.myLineNo));										
											;}
    break;

  case 590:
#line 1411 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {cout << "\t\t added attribute\n";;}
    break;

  case 612:
#line 1462 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { 
		//lex_enter_attrib();
    ;}
    break;

  case 613:
#line 1467 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
		//lex_exit_attrib();
	;}
    break;

  case 614:
#line 1472 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
		//lex_enter_accessor();
    ;}
    break;

  case 615:
#line 1477 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
		//lex_exit_accessor();
	;}
    break;

  case 616:
#line 1482 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    {
		//lex_enter_getset();
	;}
    break;

  case 617:
#line 1487 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"
    { 
		//lex_exit_getset();
	;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 3757 "yacc.cpp"

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


#line 1493 "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\yacc.y"


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
	vector<MyParser*> symbol(100);	
	yydebug = 1;
	int done, i = 1, j=0;
	DIR *dir;
	dirent *pdir;
	string dirc = "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\CSTokens\\input\\";
	dir = opendir("input");
	if(!freopen("C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\out.txt", "w", stdout)) {
		cout << "can't open output file!" << endl;
	} 
	Parser* par = new Parser();
	while (pdir = readdir(dir))
	{	
		ifstream myfile;
		char * s = pdir->d_name;	
		if (i > 2){
			string  temp = dirc;
		    temp.append(s);
			cout << s <<endl;
			cout<<"=============================================================="<<endl;
			ifstream myfile;
			streambuf *cinbuf = std::cin.rdbuf(); //save old buf
			cin.rdbuf(myfile.rdbuf()); //redirect std::cin to in.txt!
			myfile.open(temp.c_str(), ios::in);
			if (!myfile) {
					cout << "cant't open input file!" << endl;
				}
				par->parse();
				p->filename=s;
				symbol[i]=p;
		}
		i++;
		p= new MyParser();
		myfile.close();
	}
	p->start(symbol);
	fclose(stdout);
	closedir(dir);
	errorRec.printErrQueue();
}

