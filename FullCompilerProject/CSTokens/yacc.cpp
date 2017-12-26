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
#line 2 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"

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
#line 42 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
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
#define YYLAST   3722

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  165
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  269
/* YYNRULES -- Number of rules. */
#define YYNRULES  624
/* YYNRULES -- Number of states. */
#define YYNSTATES  1060

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
    1696,  1701,  1706,  1711,  1717,  1722,  1728,  1730,  1732,  1734,
    1736,  1738,  1739,  1741,  1751,  1764,  1768,  1772,  1779,  1786,
    1793,  1795,  1798,  1806,  1807,  1809,  1812,  1816,  1821,  1822,
    1824,  1826,  1830,  1833,  1838,  1848,  1858,  1860,  1862,  1865,
    1872,  1880,  1881,  1883,  1886,  1888,  1890,  1892,  1894,  1896,
    1898,  1900,  1902,  1904,  1906,  1910,  1913,  1914,  1916,  1920,
    1921,  1922,  1923,  1924,  1925
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
      -1,   418,    -1,    -1,   318,    -1,   307,    88,   311,   313,
     310,    -1,    -1,    28,    -1,   325,    -1,   312,   325,    -1,
     325,    44,    -1,   312,   325,    44,    -1,    21,   306,   308,
      20,    -1,   306,   308,    20,    -1,   315,    -1,   314,   315,
      -1,   316,    -1,   317,    -1,   121,   325,    29,   311,    28,
      -1,   121,   168,    28,    -1,   319,    -1,   318,   319,    -1,
     309,    -1,   320,    -1,   327,    -1,   381,    -1,   391,    -1,
     410,    -1,   417,    -1,   324,    -1,   322,   324,    -1,   323,
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
     307,    95,   169,     5,    -1,   307,   321,   169,   311,   432,
      21,   353,    20,   433,    -1,   356,   354,    -1,   357,   355,
      -1,    -1,   357,    -1,    -1,   356,    -1,   307,   137,   433,
     358,   432,    -1,   307,   138,   433,   358,   432,    -1,   235,
      -1,    28,    -1,   307,   321,    69,   169,   242,    28,    -1,
     307,   321,    69,   169,   311,   430,    21,   360,    20,   431,
      -1,   361,   362,    -1,   362,   361,    -1,   307,   139,   431,
     235,   430,    -1,   307,   140,   431,   235,   430,    -1,   307,
     321,   364,   432,    21,   353,    20,   433,    -1,   169,   111,
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
     398,    -1,   397,   398,    -1,   399,    -1,   405,    -1,   408,
      -1,   406,    -1,   400,   409,    -1,   401,    19,   344,    18,
      -1,   402,    19,   344,    18,    -1,   307,   404,   169,   325,
      -1,   307,   403,   404,   169,   325,    -1,   307,   404,   123,
     325,    -1,   307,   403,   404,   123,   325,    -1,   107,    -1,
     103,    -1,    98,    -1,    96,    -1,    97,    -1,    -1,    89,
      -1,   307,   404,   169,     5,   432,    21,   407,    20,   433,
      -1,   307,   404,   169,   111,   142,   347,   143,   432,    21,
     407,    20,   433,    -1,   307,   137,   409,    -1,   307,   138,
     409,    -1,   307,   137,   409,   307,   138,   409,    -1,   307,
     138,   409,   307,   137,   409,    -1,   307,   404,    69,   169,
       5,   409,    -1,    28,    -1,    21,    20,    -1,   307,   321,
      68,     5,   411,   413,   310,    -1,    -1,   412,    -1,    17,
     174,    -1,    21,   414,    20,    -1,    21,   415,   141,    20,
      -1,    -1,   415,    -1,   416,    -1,   415,   141,   416,    -1,
     307,     5,    -1,   307,     5,    29,   231,    -1,   307,   321,
      64,   345,     5,    19,   344,    18,    28,    -1,   307,   321,
      64,   311,     5,    19,   344,    18,    28,    -1,   419,    -1,
     420,    -1,   419,   420,    -1,   428,   142,   421,   424,   143,
     429,    -1,   428,   142,   421,   424,   141,   143,   429,    -1,
      -1,   422,    -1,   423,    17,    -1,   130,    -1,   131,    -1,
      69,    -1,   132,    -1,   133,    -1,   134,    -1,   135,    -1,
     101,    -1,   136,    -1,   425,    -1,   424,   141,   425,    -1,
     311,   426,    -1,    -1,   427,    -1,    19,   191,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1
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
     937,   940,   941,   942,   943,   944,   947,   948,   954,   957,
     959,   962,   963,   966,   967,   968,   969,   970,   971,   972,
     973,   974,   976,   979,   980,   981,   984,   988,   994,  1001,
    1006,  1011,  1018,  1024,  1030,  1035,  1037,  1041,  1044,  1045,
    1048,  1049,  1052,  1053,  1056,  1059,  1063,  1065,  1066,  1070,
    1073,  1079,  1080,  1082,  1084,  1086,  1088,  1091,  1097,  1103,
    1104,  1107,  1108,  1114,  1115,  1118,  1124,  1130,  1136,  1138,
    1141,  1145,  1148,  1149,  1152,  1153,  1156,  1156,  1157,  1157,
    1157,  1157,  1157,  1157,  1158,  1158,  1158,  1158,  1158,  1158,
    1159,  1159,  1159,  1159,  1159,  1159,  1159,  1159,  1162,  1163,
    1166,  1171,  1177,  1182,  1184,  1187,  1188,  1204,  1207,  1208,
    1211,  1212,  1215,  1216,  1219,  1220,  1221,  1222,  1223,  1226,
    1229,  1231,  1234,  1235,  1238,  1240,  1242,  1245,  1246,  1249,
    1250,  1251,  1252,  1253,  1254,  1255,  1256,  1258,  1263,  1264,
    1267,  1269,  1272,  1273,  1278,  1281,  1288,  1290,  1293,  1294,
    1297,  1299,  1301,  1304,  1305,  1308,  1309,  1310,  1311,  1315,
    1318,  1323,  1330,  1334,  1340,  1344,  1350,  1351,  1352,  1353,
    1354,  1356,  1358,  1361,  1367,  1375,  1376,  1377,  1378,  1381,
    1386,  1387,  1392,  1394,  1396,  1399,  1402,  1403,  1405,  1407,
    1410,  1411,  1414,  1415,  1420,  1421,  1426,  1429,  1430,  1433,
    1434,  1436,  1438,  1441,  1444,  1445,  1446,  1447,  1448,  1449,
    1450,  1451,  1452,  1455,  1456,  1460,  1462,  1464,  1473,  1480,
    1485,  1490,  1495,  1500,  1505
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
  "interface_method_1", "interface_method_2",
  "interface_data_modifier_error_opt", "new_opt",
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
     400,   400,   401,   401,   402,   402,   403,   403,   403,   403,
     403,   404,   404,   405,   406,   407,   407,   407,   407,   408,
     409,   409,   410,   411,   411,   412,   413,   413,   414,   414,
     415,   415,   416,   416,   417,   417,   418,   419,   419,   420,
     420,   421,   421,   422,   423,   423,   423,   423,   423,   423,
     423,   423,   423,   424,   424,   425,   426,   426,   427,   428,
     429,   430,   431,   432,   433
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
       4,     4,     4,     5,     4,     5,     1,     1,     1,     1,
       1,     0,     1,     9,    12,     3,     3,     6,     6,     6,
       1,     2,     7,     0,     1,     2,     3,     4,     0,     1,
       1,     3,     2,     4,     9,     9,     1,     1,     2,     6,
       7,     0,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     0,     1,     3,     0,
       0,     0,     0,     0,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
     338,     0,     0,   340,   339,   353,   355,   356,   388,   389,
       0,    12,     0,   347,     1,   384,   361,   340,   359,   362,
     363,     0,   364,   365,     0,   366,   367,   341,   596,   597,
       0,   354,   358,   348,     0,   349,   372,   373,   374,     0,
     375,   376,   377,   378,   379,   380,   385,   386,   381,   382,
     383,     0,   384,   370,   368,   384,   360,   340,   395,   340,
     544,   598,   601,   350,     0,   347,   338,   387,   398,     0,
       0,     0,     0,   371,   369,   384,   422,     0,   340,   411,
     413,   414,   415,     0,     0,     0,     0,   416,   417,   418,
     419,   420,     0,     0,   421,   571,     0,   340,   553,   555,
       0,     0,     0,   556,   558,   557,   606,   611,   604,   605,
     607,   608,   609,   610,   612,     0,   602,     0,   357,   338,
     340,   345,   390,   394,   393,   392,   391,   398,   399,   437,
       0,     0,   583,   398,   514,   515,   518,   517,   516,   520,
       0,   408,   412,   203,   439,   438,   428,   340,   340,   340,
     511,   510,   500,   340,   572,   569,   570,   568,   567,   566,
     571,     0,   345,   554,     0,   580,   559,   340,   340,   616,
       0,   613,   603,   340,     0,   340,   346,   344,   399,     0,
     397,   400,     0,     0,     0,     0,   584,   546,     0,   513,
     521,   388,     0,    20,    25,    32,     0,    23,    34,     0,
       0,    33,     0,    28,    30,    35,    24,    26,    36,    29,
      31,    27,     0,     0,    13,    15,    16,    19,    21,    22,
      17,    18,    14,     0,   623,     0,   472,   473,   388,     3,
       4,     5,     6,     7,     8,     0,     0,     0,     0,   207,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
       0,     0,     0,     0,     0,     0,     0,     9,   311,     0,
       0,    80,   311,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    54,     2,     0,    16,    17,   106,    53,
      52,    56,    57,    58,    59,    60,   108,   109,    61,    85,
      55,    62,    64,    65,   110,   123,    63,   111,   117,   121,
     122,     0,   114,   240,   205,   188,   189,     0,   204,   190,
     186,   187,     0,     0,   191,     0,   192,   245,   248,   246,
       0,   193,   200,   268,     0,   269,   270,     0,   271,     0,
     194,   300,   301,   302,   303,   304,   195,   196,   197,   198,
     199,   201,   107,   446,     0,   436,   440,   442,   443,     0,
       0,     0,     0,     0,     0,     0,     0,   550,   581,     0,
       0,    76,   615,   617,     0,   620,     0,   352,   396,   401,
     404,   402,   340,   340,   585,   340,   345,     0,   545,   547,
     523,   522,   340,   345,   512,     0,     0,     0,   232,     0,
     347,     0,     0,     0,    39,   433,    37,     0,     0,     0,
       0,   213,   432,     0,   215,     0,    45,    41,    40,    38,
      42,     0,   434,     0,   509,   508,   471,     0,     0,     0,
       0,     0,    57,   108,   109,    85,   121,   122,   113,   107,
     130,   130,   130,   136,   140,   143,   146,   155,   158,   160,
     162,   164,   166,   168,   182,   183,     0,   107,   103,   112,
     120,   119,   118,     0,     0,   305,     0,   325,     0,   230,
       0,   306,     0,     0,   279,   296,     0,     0,     0,   250,
       0,    76,     0,    13,    14,     0,   140,   312,     0,     0,
     254,     0,     0,     0,     0,   326,   272,     0,   274,   115,
     116,   211,   215,     0,     0,     0,     0,    72,    83,    84,
       0,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,     0,   202,   206,   209,   210,   237,   185,   247,
       0,   249,     0,   253,     0,   273,     0,   281,   289,   293,
     278,     0,   284,   290,   388,     0,   295,     0,    72,     0,
     212,   448,     0,   447,     0,   429,   340,   430,   431,   503,
       0,     0,     0,   564,   388,     0,   562,   560,   561,     0,
      77,    78,   620,   614,   599,   351,     0,     0,     0,     0,
       0,     0,     0,   589,   590,   582,   549,   548,   384,   537,
     529,   530,   531,   532,   533,   534,   535,   536,     0,   340,
     527,   519,     0,     0,   236,   424,     0,     0,   235,     0,
     621,     0,     0,   479,   488,   487,   486,   489,   478,   494,
     495,   484,   485,   477,   476,   483,   482,   490,   491,   492,
     493,   497,   496,   480,   481,     0,   340,     0,   426,     0,
       0,   470,   217,   340,   427,   340,   208,     0,   135,   134,
       0,   131,   132,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    66,   130,    81,     0,
       0,   229,   231,   277,     0,     0,     0,   307,   184,     0,
     309,     0,     0,    72,    76,    92,   540,    91,    72,    76,
       0,   310,     0,     0,   313,     0,     0,   314,   317,   315,
       0,     0,     0,     0,   330,   329,     0,    68,    69,    67,
       0,     0,     0,    73,    47,     0,    49,   102,   170,     0,
       0,     0,   282,   285,     0,     0,     0,     0,     0,     0,
       0,     0,   441,     0,   501,   504,   565,   563,     0,     0,
     340,   618,     0,   600,   405,   403,   407,   406,     0,     0,
     592,   586,   340,     0,   524,   528,     0,   423,   233,   425,
     234,   461,     0,     0,     0,     0,     0,     0,   218,   214,
     340,     0,   224,   216,   226,   225,     0,     0,     0,   340,
     340,     0,   133,     0,     0,   139,     0,   137,   138,   136,
     142,   141,   144,   145,   148,   147,   152,   154,   151,   153,
     149,   150,   156,   157,   159,   161,   163,   165,     0,   167,
     124,     0,    82,   100,     0,     0,     0,   333,     0,   308,
       0,    43,     0,     0,   542,     0,   541,     0,     0,   104,
     105,     0,   321,   324,   318,   316,    99,    97,    98,   101,
       0,    74,    51,    46,    50,     0,    70,   251,   257,   255,
     275,   291,     0,   286,   294,     0,     0,     0,    71,    75,
     449,   444,     0,     0,   579,   340,     0,    79,   595,   594,
       0,   587,   591,   507,   340,     0,     0,     0,   468,     0,
     219,     0,     0,     0,   469,   624,   624,   624,     0,   451,
     454,     0,   452,   456,   129,   127,   128,   125,     0,     0,
       0,     0,     0,     0,     0,   327,    95,    43,    86,    43,
     538,     0,    87,    43,   322,   322,   328,    48,     0,     0,
       0,     0,   258,   259,     0,   263,   287,     0,     0,     0,
       0,    72,    72,     0,     0,   623,   593,     0,     0,   340,
     340,     0,     0,     0,   221,   220,   624,     0,     0,     0,
       0,   467,   169,   126,     0,   335,   331,   334,   332,    89,
      96,    44,     0,    95,   539,   543,    95,     0,   323,     0,
     252,   267,     0,   266,   256,   260,   262,   261,   264,     0,
     288,   292,   298,     0,     0,   445,     0,     0,     0,     0,
     624,     0,   622,   622,   622,     0,   463,     0,   464,   499,
     498,   474,     0,   222,   450,     0,     0,   460,   459,   623,
     623,   276,    43,     0,    88,    90,     0,     0,   265,     0,
     297,   299,   505,   506,   340,   340,   573,   340,     0,     0,
     462,     0,   223,   227,   228,   457,   458,    95,    43,   319,
     320,   280,     0,     0,     0,   621,   621,     0,    93,    95,
       0,     0,   624,   465,   466,   475,    94,   577,   578,   574
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,   273,   274,    10,   275,   214,   215,   420,   217,   218,
     219,   421,   221,   222,   906,   410,   842,   713,   714,   278,
     279,   280,   281,   422,   715,   283,   559,   560,   284,   285,
     423,   424,   288,   425,   290,   685,   959,   291,   292,   293,
     294,   295,   296,   297,   298,   426,   427,   433,   302,   640,
     641,   642,   476,   435,   436,   437,   438,   439,   440,   441,
     442,   443,   444,   445,   512,   561,   679,   519,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   400,   401,   773,
     774,   313,   387,   388,   314,   315,   316,   520,   317,   318,
     521,   319,   320,   523,   849,   921,   922,   923,   977,   924,
     925,   321,   322,   323,   324,   525,   325,   326,   327,   530,
     531,   852,   979,   532,   853,   980,   533,   328,   329,   536,
     330,   331,   332,   333,   334,   478,   335,   336,   697,   698,
     967,   699,   337,   338,   339,   340,   706,   341,   816,   817,
       2,     3,   343,   174,    16,   177,   429,    12,   121,     4,
       5,     6,     7,   175,    18,    19,    51,    52,    53,    54,
      65,   127,    20,    21,   128,   180,   181,   371,    58,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,   344,
     131,   146,   345,   346,   347,   544,   348,    87,   778,   889,
     892,   779,   780,  1009,    88,   938,   939,   940,    89,   224,
     405,    90,   225,   226,   625,   227,    91,    92,    93,   734,
     735,    94,   416,   152,   383,   139,    22,   189,   190,   384,
     588,   589,   590,   775,   825,   826,    23,    24,   378,   379,
      60,    96,    97,    98,    99,   100,   101,   102,   160,   161,
     103,   104,   934,   105,   166,    25,   185,   186,   376,   572,
     573,   574,    26,    27,    28,    29,   115,   116,   117,   170,
     171,   362,   363,    30,   564,   762,  1028,   413,   949
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -824
static const short int yypact[] =
{
      71,   397,   137,    32,    71,  -824,  -824,  -824,  -824,  -824,
     274,  -824,   397,   317,  -824,   636,  -824,    40,  -824,  -824,
    -824,   305,  -824,  -824,   322,  -824,  -824,  -824,    32,  -824,
     165,  -824,  -824,   304,   397,  -824,  -824,  -824,  -824,   397,
    -824,  -824,  -824,  -824,  -824,  -824,   258,  -824,  -824,  -824,
    -824,   468,   544,  -824,  -824,  1214,  -824,    78,  -824,   119,
    -824,  -824,   448,  -824,   350,   354,   269,  -824,   670,   273,
     410,   397,   681,  -824,  -824,   544,  -824,   416,   138,  -824,
    -824,  -824,  -824,    98,   404,   412,   445,  -824,  -824,  -824,
    -824,  -824,   498,   450,  -824,   510,   457,   139,  -824,  -824,
     502,   455,   470,  -824,  -824,  -824,  -824,  -824,  -824,  -824,
    -824,  -824,  -824,  -824,  -824,   397,  -824,   496,  -824,    71,
     142,   500,  -824,  -824,  -824,  -824,  -824,  -824,   507,  -824,
     547,   559,   517,  -824,  -824,  -824,  -824,  -824,  -824,   543,
    3344,  -824,  -824,  1981,  -824,  -824,  -824,    31,    31,    31,
    -824,  -824,  -824,    31,  -824,  -824,  -824,  -824,  -824,  -824,
     508,  1652,   500,  -824,   585,  -824,  -824,    31,    31,   556,
     318,  -824,  -824,   142,   609,   143,  -824,  -824,   507,   339,
    -824,  -824,   582,   615,   453,   618,  -824,   628,   397,   643,
    -824,   630,   673,  -824,  -824,  -824,  1170,  -824,  -824,  1170,
     592,  -824,   612,  -824,  -824,  -824,  -824,  -824,  -824,  -824,
    -824,  -824,   403,    60,  -824,   702,  -824,  -824,  -824,  -824,
    -824,  -824,   702,    72,  -824,   593,  -824,  -824,   692,  -824,
    -824,  -824,  -824,  -824,  -824,  3271,  2567,  3271,  3271,  -824,
    3271,  3271,  3271,   242,   683,   581,  1170,   687,  2102,  -824,
     698,   699,   700,   286,   703,   704,   380,  -824,  3271,   707,
     708,  -824,  3271,  -824,   710,   709,   625,   710,   717,   697,
     721,  3271,  3271,  -824,  -824,    68,   701,   706,   279,   723,
    -824,  -824,    81,  -824,  -824,  -824,   100,   116,  -824,   127,
    -824,  -824,  -824,  -824,  -824,  -824,  -824,   384,  -824,   129,
     132,   149,  -824,  -824,  -824,  -824,  -824,   724,  1981,  -824,
    -824,  -824,   718,   719,  -824,   720,  -824,  -824,  3271,  -824,
    3271,  -824,  -824,  -824,  3271,  -824,  -824,  1410,  -824,  3435,
    -824,  -824,  -824,  -824,  -824,  -824,  -824,  -824,  -824,  -824,
    -824,  -824,    53,   503,   733,   611,  -824,  -824,  -824,   736,
     738,   739,  3478,  1170,   403,   307,   110,  -824,  -824,   741,
     743,  3271,  -824,  -824,    62,  -824,   742,  -824,  -824,   627,
     631,   633,    31,    31,  -824,   145,   500,   397,  -824,  -824,
     631,   633,   163,   500,  -824,   747,   433,    25,  -824,   486,
     281,    68,  1170,  1170,  -824,  -824,  -824,  1668,   645,   626,
      74,  -824,   749,   315,   566,   646,  -824,  -824,  -824,  -824,
    -824,   235,  -824,   754,  -824,  -824,  -824,  1981,   778,   780,
     701,   706,  -824,  -824,  -824,  -824,  -824,  -824,  -824,    33,
     285,    92,   109,   149,   334,   302,   -46,   101,   435,   777,
     775,   785,   642,    15,  -824,  -824,   791,    43,  -824,  -824,
    -824,  -824,  -824,   805,  3271,  -824,  3271,  -824,   433,   671,
     486,  -824,   294,  1170,  -824,  -824,   786,  3271,   788,  -824,
    3271,  3271,    97,   675,    99,    51,   529,  -824,   790,  1170,
    -824,   792,    49,  3502,  3271,  -824,  -824,  2686,  -824,  -824,
    -824,   672,   793,   816,   821,   824,  3271,  2335,  -824,  -824,
     825,  -824,  -824,  -824,  -824,  -824,  -824,  -824,  -824,  -824,
    -824,  -824,  3271,  -824,  -824,  -824,  -824,  -824,  -824,  -824,
     814,  -824,   815,  -824,   817,  -824,   818,  -824,  -824,  -824,
    -824,   806,  -824,   696,   757,   319,  -824,   106,  2335,  2805,
     672,  -824,  1170,  -824,  1170,  -824,    32,  -824,  -824,   822,
     403,   433,   326,  -824,   749,   705,  -824,  -824,  -824,   826,
     712,  -824,  -824,  -824,  -824,  -824,   397,   397,   397,   828,
     830,   838,   829,   714,  -824,  -824,   631,   633,   544,  -824,
    -824,  -824,  -824,  -824,  -824,  -824,  -824,  -824,   831,   164,
    -824,  -824,   832,   239,   827,  -824,   397,   241,  3271,   246,
    -824,   282,   328,  -824,  -824,  -824,  -824,  -824,  -824,  -824,
    -824,  -824,  -824,  -824,  -824,  -824,  -824,  -824,  -824,  -824,
    -824,  -824,  -824,  -824,  -824,   839,    32,    83,  -824,    85,
     840,  -824,  2451,    32,  -824,    32,  -824,  3271,  -824,  -824,
     841,   285,  -824,   842,   845,  3271,  2922,  3271,  3271,  3271,
    3271,  3271,  3271,  3271,  1170,  1170,  3271,  3271,  3271,  3271,
    3271,  3271,  3271,  3271,  3271,  3271,  3602,   285,  -824,   422,
     846,   671,   671,  -824,   847,   411,   351,  -824,  -824,   837,
    -824,   849,   725,  2335,  3271,  -824,  2451,  -824,  2335,  3271,
    3271,  -824,   488,   454,  -824,   629,   710,    49,  -824,  -824,
     511,   513,   477,   851,  -824,  -824,   852,  -824,  -824,  -824,
     516,  3271,  3271,   734,  -824,   858,  -824,  -824,  -824,  2102,
     853,  2102,  -824,  3271,  3271,  3271,   797,   798,   862,   524,
     444,   446,  -824,    35,  -824,  -824,  -824,  -824,   502,   860,
      32,  -824,  3271,  -824,   631,   633,  -824,  -824,   854,   855,
     861,  -824,   174,  3411,  -824,  -824,   710,  -824,  -824,  -824,
    -824,  -824,   868,  1170,  1170,  1170,   548,   751,   863,  -824,
      32,  1170,  -824,  -824,  -824,  -824,   549,   515,   877,   177,
     186,  3271,  -824,  3271,  3271,  -824,  3271,  -824,  -824,  -824,
     529,   529,   302,   302,   -46,   -46,   866,   110,   866,   110,
     -46,   -46,   101,   101,   435,   777,   775,   785,   878,   642,
    -824,   881,  -824,  -824,  3271,   871,    66,  -824,   103,  -824,
    2102,   702,   883,   760,  -824,   884,   764,   891,   763,  -824,
    -824,   339,  -824,  -824,  -824,  -824,  -824,  -824,  -824,  -824,
    2102,  -824,  -824,  -824,  -824,  2335,  -824,   848,    70,  -824,
    -824,  -824,   885,  -824,  -824,   894,  3271,  3271,  -824,  -824,
    -824,   889,   902,   906,  -824,    32,   554,  -824,  -824,  -824,
    3271,  -824,  -824,  -824,    32,   480,   489,   493,  -824,   397,
    2451,   908,    39,    76,  -824,  -824,  -824,  -824,   794,  -824,
    -824,   789,  -824,  -824,  -824,  -824,  -824,  -824,  3271,  3271,
     911,  3271,  2102,   925,  2102,  -824,   910,   702,  -824,    77,
    -824,  2219,  -824,   702,   397,   397,  -824,  -824,  2102,  3038,
     916,   915,    70,  -824,  1860,  -824,  3271,  2102,   920,   924,
     443,  2335,  2335,   523,   923,  -824,  -824,   530,   926,    32,
      32,   927,   929,   112,   905,  -824,  -824,  3271,  3271,   595,
     595,  -824,  -824,  -824,   921,  -824,  -824,  -824,  -824,  -824,
    -824,  -824,  3154,   910,  -824,  -824,   910,   930,  -824,   932,
    -824,  -824,   937,  -824,  -824,  -824,  1981,  -824,  -824,   938,
    -824,   696,  -824,  2102,  2102,  -824,   939,   940,   502,   502,
    -824,   934,  -824,  -824,  -824,   804,  -824,   820,  -824,  -824,
    -824,  -824,  1170,  2451,  -824,   819,   834,  -824,  -824,  -824,
    -824,  -824,   702,   555,  -824,  -824,   710,   710,  -824,  2102,
    -824,  -824,  -824,  -824,   188,   196,  -824,    32,   710,   710,
    -824,   509,  -824,  -824,  -824,  -824,  -824,   910,   702,  -824,
    -824,  -824,   833,   835,   943,  -824,  -824,   947,  -824,   910,
     502,   502,  -824,  -824,  -824,  -824,  -824,  -824,  -824,  -824
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -824,    44,  -824,  -824,   914,   722,  -824,   856,  -824,   795,
    -824,   888,  -824,   727,  -812,  -197,   268,  -824,   125,  -824,
    -824,  -824,  -824,   -99,  -519,  -824,  -442,  -446,  -824,  -824,
     -16,    87,  -824,   121,  -824,  -824,  -609,  -824,  -824,  -824,
    -824,  -824,  -824,  -824,   309,   172,   245,   133,  -824,  -405,
    -824,   340,  -224,    23,   -26,    41,   325,   327,   324,   330,
     329,  -824,  -824,   263,  -824,   875,  -582,  -313,  -305,  -246,
     -77,  -824,    73,  -824,  -824,  -824,  -289,  -188,   361,  -663,
    -824,  -824,  -209,   399,  -824,  -317,  -824,  -824,  -824,  -824,
    -824,  -824,  -824,  -824,  -824,  -824,  -824,    79,  -824,  -824,
      80,  -824,  -824,  -824,  -824,  -824,  -824,  -824,  -824,  -824,
    -824,  -824,  -824,  -824,  -824,  -824,    82,  -824,  -824,  -824,
    -824,  -824,  -824,  -824,  -824,   744,  -824,  -824,  -824,   301,
      94,   303,  -824,  -824,  -824,  -824,  -824,  -824,   331,   107,
    -824,    16,    -3,   843,  -824,  -138,     0,   802,  -824,  -824,
    1014,  -824,  -824,  1016,    26,   -50,   -70,  -824,   968,   974,
       8,  -824,  -824,  -824,   300,   864,  -824,  -166,  -824,  -824,
    -824,   949,  -365,  -352,  -350,  -824,  -824,  -824,  -824,  -107,
    -824,  -824,  -351,   483,  -824,  -824,  -824,  -349,   260,  -824,
    -824,   253,   255,    86,  -346,  -824,   104,   102,  -337,  -824,
    -824,  -334,  -824,  -824,  -824,  -824,  -331,  -824,  -824,  -824,
    -824,  -824,  -824,  -824,  -824,  -824,  -824,  -824,  -824,  -824,
    -824,  -824,   449,  -461,  -824,  -824,  -824,  -824,  -824,  -824,
    -824,  -824,  -824,   946,  -824,  -824,  -824,  -824,  -824,   880,
    -824,  -824,    19,  -824,  -717,  -824,  -824,  -824,  -824,  -824,
    -824,   298,  -824,  -824,  -824,  1025,  -824,  -824,  -824,  -824,
     694,  -824,  -824,  -824,   494,  -344,  -280,  -398,  -823
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -624
static const short int yytable[] =
{
      15,    11,   462,   514,   630,   140,   145,    76,   669,    13,
     529,   524,   434,   687,    55,   151,   760,   580,   407,   728,
      33,   864,   381,   824,   357,   408,   643,   644,    76,   682,
     581,   664,   582,   583,    64,   411,   584,   459,   528,    66,
    -337,   349,   350,    56,   282,   585,   351,   406,   586,  -435,
     710,   587,   538,   595,    75,   406,    95,   406,     8,     9,
     359,   360,   538,   950,   951,     8,     9,     8,     9,   130,
     688,   396,   538,     8,     9,    75,   406,     8,     9,   133,
     406,   406,   120,   409,   902,   409,   862,   491,     8,     9,
       8,     9,   396,   729,    95,   961,   406,   963,  -409,  -238,
     396,   966,   628,   406,   409,   695,   650,   651,   409,  -238,
     406,   727,   636,   406,   406,   169,   683,    55,  -241,   143,
     686,   904,   696,  1004,   638,   919,   144,   286,  -241,   396,
    1001,   652,   653,   920,  -242,   173,   493,    14,   409,  -551,
     223,   638,   409,   342,  -242,  -239,   863,  -243,   415,   282,
    -244,   654,   397,   494,   540,  -239,   739,  -243,  -410,  -552,
    -244,   356,  -342,  -343,   822,  -588,   596,  1026,   457,   827,
      55,   398,    55,  -619,  -619,   637,   665,   593,   501,   370,
     597,   947,  -619,  -525,  -526,   637,   655,   482,   380,   485,
     486,   729,     1,   689,   871,   539,   389,  -453,   705,   356,
    1037,    56,   399,   599,   390,   562,  -455,   903,  -575,   282,
     399,   577,   395,   402,   399,   629,  -576,   945,   948,   962,
    -619,   404,  -238,   412,   580,   767,  1049,   399,   282,  1059,
     287,   404,   286,   639,   639,   639,   447,   581,   575,   582,
     583,  -241,   823,   584,   903,   591,   460,   828,   965,   671,
     667,   672,   585,  1002,   390,   586,   475,  -242,   587,   656,
     657,  -619,   811,   634,   289,   569,   570,   757,  -239,   759,
    -243,  1024,  1025,  -244,   761,   766,   301,   408,     8,     9,
    -619,  -619,   776,   492,  -619,  -619,   453,  -619,   936,   406,
     119,   466,   286,   502,   503,   504,   505,   506,   507,   508,
     509,   763,    32,   510,   511,  -619,  -619,    62,   342,  -236,
     598,   286,   554,     9,   396,   299,  -619,   638,   282,  -619,
       8,     9,   673,   495,   726,    35,    57,   342,  -619,   537,
    -619,   738,   579,  1057,  1058,   287,   648,   972,  -619,   396,
    1032,   467,   649,    59,     8,     9,    34,   764,    63,   468,
     492,   396,   356,   356,  1014,   406,   815,  1015,   396,   645,
     396,    35,   553,   556,   169,    67,   646,   647,   428,   289,
     448,   449,   571,   450,   451,   452,   629,   576,   118,   578,
     596,   301,   596,   409,   454,     8,     9,   629,   300,   866,
       1,   600,   356,   356,   594,   287,   129,   594,    35,   404,
     745,   286,     8,     9,   489,   490,   303,   854,     8,     9,
     851,    33,   986,   987,   287,   132,   815,   342,   555,   674,
     299,   496,  -236,   147,   790,   791,   631,   178,  1048,   289,
     205,   148,   193,   187,   194,   394,   141,   195,     8,     9,
    1056,   301,   197,   396,   639,   960,   198,   208,   289,   860,
     229,   861,   230,   231,   232,   201,   233,   234,   406,   364,
     301,   365,   203,   676,   149,   396,   594,   204,   594,   153,
     639,   205,   830,   847,   167,   850,   396,   162,   396,   693,
     299,   406,   206,   702,   207,   941,   409,   342,   208,   168,
     406,     8,     9,   300,   942,   838,   209,   210,   943,   299,
     211,   900,   960,   269,   287,   960,   829,   194,   753,   409,
     195,   303,   396,   172,  1047,   249,  1013,   106,   409,   143,
     396,   396,   471,   164,   179,   396,   150,    68,   176,   836,
     165,   837,    69,   257,   184,   203,    70,   991,   289,   579,
     204,   396,   356,   394,   356,   396,   498,   499,   500,   107,
     301,    71,   182,   300,   645,   206,   263,   207,   736,   737,
     188,   690,   647,   742,   183,   812,   744,   746,   747,   209,
     210,   303,   300,   211,   905,   361,   960,    72,   108,   109,
     110,   111,   112,   113,   114,  -347,   578,  -347,   960,   299,
     303,   658,   659,    36,   916,   632,   541,   154,   542,   154,
     456,   372,   143,   543,   594,   358,   155,   156,   157,   529,
      35,  1035,  1036,   158,   143,    37,   143,   159,   832,   833,
     282,   414,   282,  1007,   907,   282,   794,   795,    38,   367,
     800,   801,   777,    40,   373,   768,  -336,   492,    41,   375,
      42,    43,    44,    45,   484,   377,   143,    46,   831,  -502,
     143,    47,   885,   886,   797,   799,   956,   742,   958,   841,
     988,   989,   300,    48,   382,   742,    49,   859,    50,   992,
     993,   514,   970,   792,   793,   122,   123,   124,   385,   873,
     303,   982,   125,   126,   392,    36,   134,   135,   136,   546,
     546,   878,   884,   137,   138,   546,   742,   935,  1038,   802,
     803,  1053,  1054,   286,   393,   286,   406,    37,   286,   417,
     907,   455,   907,  1029,  1030,   461,   907,   463,   464,   465,
      38,   282,   469,   470,    39,    40,   479,   480,   483,   394,
      41,   143,    42,    43,    44,    45,   487,  1020,  1021,    46,
     488,   282,   497,    47,   513,   493,   515,   516,   517,   571,
     494,   545,   546,   223,   547,    48,   548,   549,    49,   557,
      50,   558,   565,   356,   356,   356,   592,   777,   566,   627,
    -623,   883,   567,  1041,   568,   635,   888,   891,   785,   787,
     788,   789,   789,   789,   789,   789,   789,   626,   633,   789,
     789,   789,   789,   789,   789,   789,   789,   456,   789,   484,
     660,   661,   663,   282,   286,   282,   287,   662,   287,   666,
     668,   287,   596,   629,   677,   907,   680,   684,   691,   282,
     694,   707,   632,   787,   286,   282,   708,   282,   282,   709,
     717,   915,   719,   720,   723,   721,   722,   724,   725,   733,
     289,   907,   289,   750,   741,   289,   748,   740,   749,   751,
     756,   754,   301,   742,   301,   752,   598,   301,   765,   781,
     783,   770,   933,   784,   813,   819,   814,   820,   821,   839,
     840,   937,  1008,  1008,   848,   845,   846,   282,   856,   857,
     858,   865,   868,   869,   282,   282,   286,   944,   286,   874,
     870,   299,   880,   299,   879,   898,   299,   887,   396,   899,
     901,   908,   286,   909,   910,   911,   913,   287,   286,   912,
     286,   286,   927,   926,   894,   918,   895,   896,   930,   897,
     282,   931,   968,   968,   342,   932,   885,   287,   946,   954,
     815,   686,   886,   973,  1003,   974,   995,   997,   983,  1039,
    1040,   289,   984,   990,   993,   999,   994,  1000,  1016,  1011,
    1017,  1045,  1046,   301,  1018,  1027,  1019,  1022,  1023,   992,
     286,   289,  1033,  1052,   300,  1055,   300,   286,   286,   300,
     917,  1050,  1051,   301,   985,   810,   342,  1034,   473,   374,
     844,   782,   303,   474,   303,   804,   806,   303,   805,   287,
     769,   287,   299,   807,   809,   758,   216,   976,   834,   276,
     835,   975,   356,   286,   978,   287,   481,   818,   981,   969,
     957,   287,   299,   287,   287,   403,   366,   216,    31,    17,
      73,  1042,  1043,   289,   933,   289,    74,   142,   220,   732,
     881,   277,   953,   893,   890,   301,  1010,   301,   755,   289,
     352,   996,   368,   163,   998,   289,  1044,   289,   289,   220,
     872,   301,   216,    61,   213,   216,   743,   301,   563,   301,
     301,     0,     0,   287,     0,   300,     0,   369,     0,     0,
     287,   287,     0,     0,   299,   355,   299,     0,     0,     0,
       0,     0,     0,   303,   220,   300,     0,   220,     0,     0,
     299,     0,   431,     0,     0,     0,   299,   289,   299,   299,
       0,     0,   216,   303,   289,   289,   287,     0,     0,   301,
     386,   446,   216,   391,     0,     0,   301,   301,     0,     0,
       0,     0,     0,     0,   432,     0,     0,     0,     0,     0,
       0,     0,     0,   477,   220,     0,     0,   477,     0,     0,
     289,     0,     0,     0,   220,     0,     0,   300,   299,   300,
       0,     0,   301,     0,     0,   299,   299,     0,     0,     0,
     458,     0,     0,   300,   276,   303,     0,   303,     0,   300,
     472,   300,   300,     0,     0,     8,     9,     0,     0,     0,
       0,   303,     0,   276,     0,   216,     0,   303,     0,   303,
     303,   299,     0,   518,     0,   522,   277,     0,     0,   518,
       0,     0,     0,     0,     0,     0,     0,     0,   216,   216,
       0,     0,     0,     0,     0,   277,     0,   220,     0,     0,
       0,   300,   193,     0,   194,     0,     0,   195,   300,   300,
       0,     0,   197,     0,     0,     0,   198,     0,     0,   303,
     220,   220,     0,   535,     0,   201,   303,   303,   216,   216,
       0,     0,   203,     0,     0,     0,     0,   204,     0,     0,
       0,   205,     0,    36,   300,     0,   551,   552,     0,     0,
       0,     0,   206,   276,   207,     0,     0,     0,   208,     0,
     220,   220,   303,     0,     0,    37,   209,   210,     0,     0,
     211,     0,     0,   269,     0,     0,     0,     0,    38,     0,
       0,     0,    39,    40,     0,   277,   601,   602,    41,     0,
      42,    43,    44,    45,     0,     0,     0,    46,     0,   216,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   670,     0,    48,     0,   216,    49,     0,    50,   216,
       0,     0,   678,   276,     0,   681,     0,     0,     0,     0,
       0,   220,     0,     0,     0,     0,     0,     0,     0,   703,
       0,     0,   704,     0,     0,     0,     0,   220,     0,     0,
       0,   220,   716,     0,     0,   277,     0,   675,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   718,     0,     0,
       0,     0,     0,   692,     0,     0,     0,   701,   216,     0,
     216,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   526,     0,   716,     0,     8,     9,   229,     0,   230,
     231,   232,     0,   233,   234,   235,     0,     0,   527,   236,
     220,     0,   220,   237,     0,     0,     0,   238,  -283,     0,
       0,     0,   240,     0,   241,     0,     0,     0,     0,     0,
     242,     0,     0,     0,     0,     0,   730,     0,   731,     0,
       0,   243,   193,     0,   194,     0,     0,   195,   418,     0,
       0,     0,   197,   678,     0,     0,   198,     0,     0,     0,
       0,     0,   249,     0,     0,   201,     0,     0,     0,     0,
       0,     0,   203,     0,     0,     0,     0,   204,     0,   256,
     257,   205,     0,     0,     0,     0,     0,   772,     0,     0,
     216,   216,   206,     0,   207,   259,     0,     0,   208,     0,
       0,   261,     0,   263,     0,   265,   209,   210,   419,     0,
     211,     0,     0,   269,     0,     0,     0,     0,     0,   808,
       0,     0,   220,   220,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   716,     0,
       0,   772,     0,   716,     0,     0,     0,     0,   796,   798,
       0,     0,   271,   272,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   843,   843,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   518,     0,
     855,     0,     0,     0,     0,     0,     0,     0,     0,   216,
       0,     0,     0,     0,     0,     0,     0,   867,     0,   216,
     216,   216,     0,     0,     0,     0,     0,   216,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   220,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   220,   220,   220,     0,     0,     0,     8,     9,   220,
       0,     0,     0,     0,     0,     0,     0,   213,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   875,   876,   877,
       0,     0,     0,   603,     0,   882,     0,     0,     0,   518,
     604,   605,     0,   606,   607,   608,     0,     0,   609,   610,
     611,   612,   613,     0,   193,     0,   194,     0,   614,   195,
       0,     0,     0,     0,   197,     0,     0,     0,   198,   914,
     716,   353,     0,     0,     0,     0,     0,   201,     0,     0,
       0,   928,   929,     0,   203,     0,     0,     0,     0,   204,
     615,     0,     0,   205,     0,   678,     0,     0,     0,     0,
       0,     0,     0,     0,   206,   772,   207,     0,     0,     0,
     208,     0,     0,     0,     0,     0,     0,     0,   209,   210,
       0,     0,   211,   952,     0,   354,   955,     0,     0,     0,
     276,   616,     0,     0,     0,     0,   772,     0,     0,     0,
       0,     0,     0,     0,   678,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   716,   716,     0,     0,
       0,     0,   277,     0,     0,     0,     0,     0,     0,     0,
     617,   618,  1005,  1006,   619,   620,   621,   622,     0,     0,
     623,   624,   276,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   216,     0,
       0,     0,     0,     0,   277,   228,     9,   229,     0,   230,
     231,   232,     0,   233,   234,   235,     0,     0,   772,   236,
       0,   143,     0,   237,     0,     0,     0,   238,   239,     0,
     220,     0,   240,     0,   241,     0,     0,     0,     0,     0,
     242,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   243,   193,   244,   194,   919,  1031,   195,   245,     0,
     246,   247,   197,   920,     0,   248,   198,     0,     0,     0,
       0,     0,   249,     0,   250,   201,   251,   252,   253,   254,
       0,     0,   203,     0,     0,     0,   255,   204,     0,   256,
     257,   205,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   258,   206,     0,   207,   259,     0,     0,   208,     0,
     260,   261,   262,   263,   264,   265,   209,   210,   266,   267,
     211,   268,     0,   269,     0,   270,   228,     9,   229,     0,
     230,   231,   232,     0,   233,   234,   235,     0,     0,     0,
     236,     0,   143,     0,   237,     0,     0,     0,   238,   239,
       0,     0,     0,   240,     0,   241,     0,     0,     0,     0,
       0,   242,   271,   272,     0,     0,     0,     0,     0,     0,
       0,     0,   243,   193,   244,   194,     0,     0,   195,   245,
       0,   246,   247,   197,     0,     0,   248,   198,     0,     0,
       0,     0,     0,   249,     0,   250,   201,   251,   252,   253,
     254,     0,     0,   203,     0,     0,     0,   255,   204,     0,
     256,   257,   205,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   258,   206,     0,   207,   259,     0,     0,   208,
       0,   260,   261,   262,   263,   264,   265,   209,   210,   266,
     267,   211,   268,     0,   269,     0,   270,     8,     9,   229,
       0,   230,   231,   232,     0,   233,   234,   235,     0,     0,
       0,   236,     0,   143,     0,   237,     0,     0,     0,   238,
     239,     0,     0,     0,   240,     0,   241,     0,     0,     0,
       0,     0,   242,   271,   272,     0,     0,     0,     0,     0,
       0,     0,     0,   243,   193,   244,   194,     0,     0,   195,
     245,     0,     0,   247,   197,     0,     0,   248,   198,     0,
       0,     0,     0,     0,   249,     0,   250,   201,   251,   252,
     253,   254,     0,     0,   203,     0,     0,     0,   255,   204,
       0,   256,   257,   205,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   258,   206,     0,   207,   259,     0,     0,
     208,     0,   260,   261,   262,   263,   264,   265,   209,   210,
     266,   267,   211,   268,     8,     9,   229,   270,   230,   231,
     232,     0,   233,   234,   235,     0,     0,     0,   236,   964,
     686,     0,   237,     0,     0,     0,   238,     0,     0,     0,
       0,   240,     0,   241,     0,     0,     0,     0,     0,   242,
       0,     0,     0,     0,   271,   272,     0,     0,     0,     0,
     243,   193,     0,   194,     0,     0,   195,   418,     0,     0,
       0,   197,     0,     0,     0,   198,     0,     0,     0,     0,
       0,   249,     0,     0,   201,     0,     0,     0,     0,     0,
       0,   203,     0,     0,     0,     0,   204,     0,   256,   257,
     205,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   206,     0,   207,   259,   771,     0,   208,     0,     0,
     261,     0,   263,     0,   265,   209,   210,   419,     0,   211,
       8,     9,   229,     0,   230,   231,   232,     0,   233,   234,
     235,     0,     0,     0,   236,     0,     0,     0,   237,     0,
       0,     0,   238,     0,     0,     0,     0,   240,     0,   241,
       0,     0,     0,     0,     0,   242,     0,     0,     0,     0,
       0,   271,   272,     0,     0,     0,   243,   193,     0,   194,
       0,     0,   195,   418,     0,     0,     0,   197,     0,     0,
       0,   198,     0,     0,     0,     0,     0,   249,     0,     0,
     201,     0,     0,     0,     0,     0,     0,   203,     0,     0,
       0,     0,   204,     0,   256,   257,   205,     0,   711,     0,
       0,     0,     0,     0,     0,   712,     0,   206,     0,   207,
     259,     0,     0,   208,     0,     0,   261,     0,   263,     0,
     265,   209,   210,   419,     0,   211,     8,     9,   229,     0,
     230,   231,   232,     0,   233,   234,   235,     0,     0,     0,
     236,     0,   686,     0,   237,     0,     0,     0,   238,     0,
       0,     0,     0,   240,     0,   241,     0,     0,     0,     0,
       0,   242,     0,     0,     0,     0,     0,   271,   272,     0,
       0,     0,   243,   193,     0,   194,     0,     0,   195,   418,
       0,     0,     0,   197,     0,     0,     0,   198,     0,     0,
       0,     0,     0,   249,     0,     0,   201,     0,     0,     0,
       0,     0,     0,   203,     0,     0,     0,     0,   204,     0,
     256,   257,   205,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   206,     0,   207,   259,   771,     0,   208,
       0,     0,   261,     0,   263,     0,   265,   209,   210,   419,
       0,   211,     8,     9,   229,     0,   230,   231,   232,     0,
     233,   234,   235,     0,     0,     0,   236,     0,     0,     0,
     237,     0,     0,     0,   238,     0,     0,     0,     0,   240,
       0,   241,     0,     0,     0,     0,     0,   242,     0,     0,
       0,     0,     0,   271,   272,     0,     0,     0,   243,   193,
       0,   194,     0,     0,   195,   418,     0,     0,     0,   197,
       0,     0,     0,   198,     0,     0,     0,     0,     0,   249,
       0,     0,   201,     0,     0,     0,     0,     0,     0,   203,
       0,     0,     0,     0,   204,     0,   256,   257,   205,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   206,
       0,   207,   259,     0,     0,   208,     0,     0,   261,     0,
     263,     0,   265,   209,   210,   419,     0,   211,     0,     0,
     430,     8,     9,   229,     0,   230,   231,   232,     0,   233,
     234,   235,     0,     0,     0,   236,     0,     0,     0,   237,
       0,     0,     0,   238,     0,     0,     0,     0,   240,     0,
     241,     0,     0,     0,     0,     0,   242,     0,     0,   271,
     272,     0,     0,     0,     0,     0,     0,   243,   193,     0,
     194,     0,     0,   195,   418,     0,     0,     0,   197,     0,
       0,     0,   198,     0,     0,     0,     0,     0,   249,     0,
       0,   201,     0,     0,     0,     0,     0,     0,   203,     0,
       0,     0,     0,   204,     0,   256,   257,   205,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   206,     0,
     207,   259,     0,     0,   208,     0,     0,   261,     0,   263,
       0,   265,   209,   210,   419,     0,   211,     0,     0,   269,
       8,     9,   229,     0,   230,   231,   232,     0,   233,   234,
     235,     0,     0,     0,   236,     0,     0,     0,   237,     0,
       0,     0,   238,     0,     0,     0,     0,   240,     0,   241,
       0,     0,     0,     0,     0,   242,     0,     0,   271,   272,
       0,     0,     0,     0,     0,     0,   243,   193,     0,   194,
       0,     0,   195,   418,     0,     0,     0,   197,     0,     0,
       0,   198,     0,     0,     0,     0,     0,   249,     0,     0,
     201,     0,     0,     0,     0,     0,     0,   203,     0,     0,
       0,     0,   204,     0,   256,   257,   205,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   206,     0,   207,
     259,     0,     0,   208,     0,     0,   261,     0,   263,     0,
     265,   209,   210,   419,     0,   211,     0,     8,     9,   229,
       0,   230,   231,   232,     0,   233,   234,   235,     0,     0,
     786,   236,     0,     0,     0,   237,     0,     0,   627,   238,
       0,     0,     0,     0,   240,     0,   241,     0,     0,     0,
       0,     0,   242,     0,     0,     0,     0,   271,   272,     0,
       0,     0,     0,   243,   193,     0,   194,     0,     0,   195,
     418,     0,     0,     0,   197,     0,     0,     0,   198,     0,
       0,     0,     0,     0,   249,     0,     0,   201,     0,     0,
       0,     0,     0,     0,   203,     0,     0,     0,     0,   204,
       0,   256,   257,   205,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   206,     0,   207,   259,     0,     0,
     208,     0,     0,   261,     0,   263,     0,   265,   209,   210,
     419,     0,   211,     8,     9,   229,     0,   230,   231,   232,
       0,   233,   234,   235,     0,   971,     0,   236,     0,     0,
       0,   237,     0,     0,     0,   238,     0,     0,     0,     0,
     240,     0,   241,     0,     0,     0,     0,     0,   242,     0,
       0,     0,     0,     0,   271,   272,     0,     0,     0,   243,
     193,     0,   194,     0,     0,   195,   418,     0,     0,     0,
     197,     0,     0,     0,   198,     0,     0,     0,     0,     0,
     249,     0,     0,   201,     0,     0,     0,     0,     0,     0,
     203,     0,     0,     0,     0,   204,     0,   256,   257,   205,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     206,     0,   207,   259,     0,     0,   208,     0,     0,   261,
       0,   263,     0,   265,   209,   210,   419,     0,   211,     8,
       9,   229,     0,   230,   231,   232,     0,   233,   234,   235,
       0,     0,     0,   236,     0,     0,     0,   237,     0,     0,
       0,   238,     0,     0,     0,     0,   240,     0,   241,     0,
       0,     0,     0,     0,   242,     0,     0,     0,     0,     0,
     271,   272,     0,     0,     0,   243,   193,     0,   194,     0,
       0,   195,   418,     0,     0,     0,   197,     0,     0,     0,
     198,     0,     0,     0,     0,     0,   249,     0,     0,   201,
       0,     0,     0,     0,     0,     0,   203,     0,     0,     0,
       0,   204,     0,   256,   257,   205,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   206,     0,   207,   259,
       0,     0,   208,     0,     0,   261,     0,   263,     0,   265,
     209,   210,   419,     0,   211,     0,     8,     9,   229,     0,
     230,   231,   232,     0,   233,   234,   235,     0,     0,     0,
     236,     0,     0,     0,   237,     0,     0,  1012,   238,     0,
       0,     0,     0,   240,     0,   241,     0,     0,     0,     0,
       0,   242,     0,     0,     0,     0,   271,   272,     0,     0,
       0,     0,   243,   193,     0,   194,     0,     0,   195,   418,
       0,     0,     0,   197,     0,     0,     0,   198,     0,     0,
       0,     0,     0,   249,     0,     0,   201,     0,     0,   191,
       9,     0,     0,   203,     0,     0,     0,     0,   204,   192,
     256,   257,   205,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   206,     0,   207,   259,     0,     0,   208,
       0,     0,   261,     0,   263,     0,   265,   209,   210,   419,
       0,   211,     0,     0,     0,     0,   193,     0,   194,     0,
       0,   195,     0,    68,   196,     0,   197,     0,    69,     0,
     198,     0,    70,   199,   200,     0,   191,     9,     0,   201,
       0,     0,     0,     0,   202,     0,   203,    71,     0,     0,
       0,   204,     0,   271,   272,   205,     0,     0,     0,     0,
     534,     9,     0,     0,     0,     0,   206,     0,   207,     0,
       0,     0,   208,    72,     0,     0,     0,     0,     0,     0,
     209,   210,     0,   193,   211,   194,     0,   212,   195,     0,
      68,   196,     0,   197,     0,    69,     0,   198,     0,    70,
     199,   200,     0,     8,     9,     0,   201,   193,     0,   194,
       0,   202,   195,   203,    71,     0,     0,   197,   204,     0,
       0,   198,   205,     0,     0,     0,     0,     8,     9,     0,
     201,     0,     0,   206,     0,   207,     0,   203,     0,   208,
      72,     0,   204,     0,     0,     0,   205,   209,   210,     0,
     193,   211,   194,     0,   212,   195,     0,   206,     0,   207,
     197,     0,     0,   208,   198,     0,     0,     0,     0,     0,
       0,   209,   210,   201,   193,   211,   194,     0,   269,   195,
     203,     0,     0,     0,   197,   204,     0,     0,   198,   205,
       0,     0,     0,     0,     0,     0,     0,   201,     0,     0,
     206,     0,   207,     0,   203,     0,   208,     0,     0,   204,
       0,     0,     0,   205,   209,   210,     0,     0,   211,     0,
       0,   550,     0,     0,   206,     0,   207,     8,     9,   229,
     208,   230,   231,   232,     0,   233,   234,   235,   209,   210,
       0,   236,   211,     0,     0,   700,     0,     0,     0,   238,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   243,   193,     0,   194,     0,     0,   195,
     418,     0,     0,     0,   197,     0,     0,     0,   198,     0,
       0,     0,     0,     0,   249,     0,     0,   201,     0,     0,
       0,     0,     0,     0,   203,     0,     0,     0,     0,   204,
       0,   256,   257,   205,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   206,     0,   207,   259,     0,     0,
     208,     0,     0,   261,     0,   263,     0,   265,   209,   210,
     419,     0,   211
};

static const short int yycheck[] =
{
       3,     1,   248,   308,   402,    75,    83,    57,   454,     1,
     327,   324,   236,   474,    17,    92,   598,   382,   215,   538,
      12,   738,   188,   686,   162,   222,   431,   432,    78,   471,
     382,    16,   382,   382,    34,   223,   382,   246,   327,    39,
       0,   148,   149,    17,   143,   382,   153,     4,   382,    18,
     496,   382,    19,    28,    57,     4,    59,     4,     5,     6,
     167,   168,    19,   886,   887,     5,     6,     5,     6,    69,
      19,    32,    19,     5,     6,    78,     4,     5,     6,    71,
       4,     4,    66,    32,    18,    32,    51,   275,     5,     6,
       5,     6,    32,   539,    97,   907,     4,   909,    20,    18,
      32,   913,    28,     4,    32,    56,   152,   153,    32,    28,
       4,     5,   417,     4,     4,   115,    19,   120,    18,    21,
      21,    18,    73,   946,    32,    55,    28,   143,    28,    32,
      18,    30,    31,    63,    18,   119,    44,     0,    32,    20,
     140,    32,    32,   143,    28,    18,   111,    18,   225,   248,
      18,    50,    92,    44,   342,    28,   554,    28,    20,    20,
      28,   161,    20,    20,   683,    20,   141,   990,   245,   688,
     173,   111,   175,   142,   142,   142,   161,   386,    29,   179,
     389,   142,   142,    20,    20,   142,    85,   264,   188,   266,
     267,   637,   121,   142,    20,   142,   196,    20,   487,   199,
    1012,   175,   142,   391,   196,   143,    20,   141,    20,   308,
     142,   377,   212,   213,   142,   141,    20,   880,   142,   142,
     142,   213,   141,   223,   589,   142,  1038,   142,   327,  1052,
     143,   223,   248,   430,   431,   432,   236,   589,   376,   589,
     589,   141,   684,   589,   141,   383,   246,   689,   911,   458,
     447,   460,   589,   141,   246,   589,   256,   141,   589,   158,
     159,   142,   667,    28,   143,   372,   373,    28,   141,    28,
     141,   988,   989,   141,    28,   626,   143,   474,     5,     6,
     142,   142,   633,   275,   142,   142,    44,   142,   870,     4,
      21,     5,   308,   144,   145,   146,   147,   148,   149,   150,
     151,    19,    28,   154,   155,   142,   142,   142,   308,    28,
      29,   327,     5,     6,    32,   143,   142,    32,   417,   142,
       5,     6,    28,    44,     5,    44,    21,   327,   142,   329,
     142,     5,   382,  1050,  1051,   248,    34,   919,   142,    32,
    1003,    55,    40,    21,     5,     6,    29,    19,    44,    63,
     342,    32,   352,   353,   963,     4,     5,   966,    32,    25,
      32,    44,   354,   355,   364,   107,    32,    33,   235,   248,
     237,   238,   375,   240,   241,   242,   141,   377,    28,   382,
     141,   248,   141,    32,   142,     5,     6,   141,   143,   740,
     121,   391,   392,   393,   386,   308,   123,   389,    44,   391,
     566,   417,     5,     6,   271,   272,   143,   724,     5,     6,
     723,   403,   931,   932,   327,     5,     5,   417,   111,   125,
     248,   142,   141,    19,   648,   649,   111,   127,  1037,   308,
      91,    19,    52,   133,    54,    32,    20,    57,     5,     6,
    1049,   308,    62,    32,   641,   906,    66,   108,   327,     5,
       7,     5,     9,    10,    11,    75,    13,    14,     4,   141,
     327,   143,    82,   463,    19,    32,   458,    87,   460,    19,
     667,    91,    18,   719,    19,   721,    32,    20,    32,   479,
     308,     4,   102,   483,   104,     5,    32,   487,   108,    19,
       4,     5,     6,   248,     5,    18,   116,   117,     5,   327,
     120,   814,   963,   123,   417,   966,    18,    54,   578,    32,
      57,   248,    32,    17,     5,    72,   962,    69,    32,    21,
      32,    32,   142,    21,    17,    32,    28,    59,    28,    18,
      28,    18,    64,    90,    17,    82,    68,   935,   417,   589,
      87,    32,   542,    32,   544,    32,   162,   163,   164,   101,
     417,    83,     5,   308,    25,   102,   113,   104,   550,   551,
      17,    32,    33,   141,     5,   143,   566,   567,   568,   116,
     117,   308,   327,   120,   820,    19,  1037,   109,   130,   131,
     132,   133,   134,   135,   136,    19,   589,    21,  1049,   417,
     327,   156,   157,    49,   840,    29,    93,    89,    95,    89,
      19,    19,    21,   100,   596,    20,    96,    97,    98,   926,
      44,  1009,  1010,   103,    21,    71,    21,   107,   695,   696,
     719,    28,   721,    28,   821,   724,   652,   653,    84,    20,
     656,   657,   635,    89,    19,   627,     0,   629,    94,    21,
      96,    97,    98,    99,    19,    17,    21,   103,    19,    19,
      21,   107,   137,   138,   654,   655,   902,   141,   904,   143,
     137,   138,   417,   119,    21,   141,   122,   143,   124,   139,
     140,   976,   918,   650,   651,     5,     6,     7,     5,   756,
     417,   927,    12,    13,    92,    49,     5,     6,     7,   141,
     141,   143,   143,    12,    13,   141,   141,   143,   143,   658,
     659,  1045,  1046,   719,    92,   721,     4,    71,   724,    17,
     907,    28,   909,   993,   994,    28,   913,    19,    19,    19,
      84,   820,    19,    19,    88,    89,    19,    19,    19,    32,
      94,    21,    96,    97,    98,    99,    19,   983,   984,   103,
      19,   840,    19,   107,    20,    44,    28,    28,    28,   752,
      44,    18,   141,   753,    18,   119,    18,    18,   122,    18,
     124,    18,    20,   763,   764,   765,    19,   770,   141,   143,
      21,   771,   141,  1019,   141,    21,   779,   780,   645,   646,
     647,   648,   649,   650,   651,   652,   653,   142,   142,   656,
     657,   658,   659,   660,   661,   662,   663,    19,   665,    19,
      23,    26,   160,   902,   820,   904,   719,    22,   721,    18,
       5,   724,   141,   141,    28,  1012,    28,   142,    28,   918,
      28,     5,    29,   690,   840,   924,     5,   926,   927,     5,
       5,   831,    18,    18,    28,    18,    18,   141,    81,    17,
     719,  1038,   721,     5,    18,   724,    18,   142,    18,    20,
      18,    20,   719,   141,   721,   141,    29,   724,    19,    18,
      18,    21,   865,    18,    18,    28,    19,    18,   143,    18,
      18,   874,   949,   950,    21,   141,    18,   976,    81,    81,
      18,    21,    28,    28,   983,   984,   902,   879,   904,    21,
      29,   719,    29,   721,   143,    17,   724,    20,    32,    18,
      29,    18,   918,   143,    20,   141,   143,   820,   924,    18,
     926,   927,    18,    28,   781,    67,   783,   784,    29,   786,
    1019,    19,   914,   915,   924,    19,   137,   840,    20,    18,
       5,    21,   138,    17,    29,    20,   939,   940,    18,  1016,
    1017,   820,    18,    20,   140,    18,    20,    18,    18,    28,
      18,  1028,  1029,   820,    17,    21,    18,    18,    18,   139,
     976,   840,   143,    20,   719,    18,   721,   983,   984,   724,
     845,   138,   137,   840,   930,   666,   976,   143,   256,   184,
     712,   641,   719,   256,   721,   660,   662,   724,   661,   902,
     629,   904,   820,   663,   665,   596,   140,   924,   697,   143,
     697,   922,  1002,  1019,   924,   918,   262,   676,   926,   915,
     903,   924,   840,   926,   927,   213,   173,   161,     4,     3,
      52,  1024,  1025,   902,  1027,   904,    52,    78,   140,   546,
     770,   143,   899,   780,   779,   902,   950,   904,   589,   918,
     160,   939,   178,    97,   940,   924,  1027,   926,   927,   161,
     752,   918,   196,    28,   140,   199,   562,   924,   364,   926,
     927,    -1,    -1,   976,    -1,   820,    -1,   179,    -1,    -1,
     983,   984,    -1,    -1,   902,   161,   904,    -1,    -1,    -1,
      -1,    -1,    -1,   820,   196,   840,    -1,   199,    -1,    -1,
     918,    -1,   236,    -1,    -1,    -1,   924,   976,   926,   927,
      -1,    -1,   246,   840,   983,   984,  1019,    -1,    -1,   976,
     196,   236,   256,   199,    -1,    -1,   983,   984,    -1,    -1,
      -1,    -1,    -1,    -1,   236,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   258,   246,    -1,    -1,   262,    -1,    -1,
    1019,    -1,    -1,    -1,   256,    -1,    -1,   902,   976,   904,
      -1,    -1,  1019,    -1,    -1,   983,   984,    -1,    -1,    -1,
     246,    -1,    -1,   918,   308,   902,    -1,   904,    -1,   924,
     256,   926,   927,    -1,    -1,     5,     6,    -1,    -1,    -1,
      -1,   918,    -1,   327,    -1,   329,    -1,   924,    -1,   926,
     927,  1019,    -1,   318,    -1,   320,   308,    -1,    -1,   324,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   352,   353,
      -1,    -1,    -1,    -1,    -1,   327,    -1,   329,    -1,    -1,
      -1,   976,    52,    -1,    54,    -1,    -1,    57,   983,   984,
      -1,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,   976,
     352,   353,    -1,   329,    -1,    75,   983,   984,   392,   393,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      -1,    91,    -1,    49,  1019,    -1,   352,   353,    -1,    -1,
      -1,    -1,   102,   417,   104,    -1,    -1,    -1,   108,    -1,
     392,   393,  1019,    -1,    -1,    71,   116,   117,    -1,    -1,
     120,    -1,    -1,   123,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    -1,    88,    89,    -1,   417,   392,   393,    94,    -1,
      96,    97,    98,    99,    -1,    -1,    -1,   103,    -1,   463,
      -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   456,    -1,   119,    -1,   479,   122,    -1,   124,   483,
      -1,    -1,   467,   487,    -1,   470,    -1,    -1,    -1,    -1,
      -1,   463,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   484,
      -1,    -1,   487,    -1,    -1,    -1,    -1,   479,    -1,    -1,
      -1,   483,   497,    -1,    -1,   487,    -1,   463,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   512,    -1,    -1,
      -1,    -1,    -1,   479,    -1,    -1,    -1,   483,   542,    -1,
     544,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,   538,    -1,     5,     6,     7,    -1,     9,
      10,    11,    -1,    13,    14,    15,    -1,    -1,    18,    19,
     542,    -1,   544,    23,    -1,    -1,    -1,    27,    28,    -1,
      -1,    -1,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,   542,    -1,   544,    -1,
      -1,    51,    52,    -1,    54,    -1,    -1,    57,    58,    -1,
      -1,    -1,    62,   598,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    87,    -1,    89,
      90,    91,    -1,    -1,    -1,    -1,    -1,   632,    -1,    -1,
     654,   655,   102,    -1,   104,   105,    -1,    -1,   108,    -1,
      -1,   111,    -1,   113,    -1,   115,   116,   117,   118,    -1,
     120,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,   664,
      -1,    -1,   654,   655,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   683,    -1,
      -1,   686,    -1,   688,    -1,    -1,    -1,    -1,   654,   655,
      -1,    -1,   162,   163,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   711,   712,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   723,    -1,
     725,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   753,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   742,    -1,   763,
     764,   765,    -1,    -1,    -1,    -1,    -1,   771,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   753,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   763,   764,   765,    -1,    -1,    -1,     5,     6,   771,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   753,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   763,   764,   765,
      -1,    -1,    -1,    15,    -1,   771,    -1,    -1,    -1,   814,
      22,    23,    -1,    25,    26,    27,    -1,    -1,    30,    31,
      32,    33,    34,    -1,    52,    -1,    54,    -1,    40,    57,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,   831,
     845,    69,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      -1,   856,   857,    -1,    82,    -1,    -1,    -1,    -1,    87,
      72,    -1,    -1,    91,    -1,   870,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,   880,   104,    -1,    -1,    -1,
     108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,
      -1,    -1,   120,   898,    -1,   123,   901,    -1,    -1,    -1,
     924,   113,    -1,    -1,    -1,    -1,   911,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   919,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   931,   932,    -1,    -1,
      -1,    -1,   924,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     152,   153,   947,   948,   156,   157,   158,   159,    -1,    -1,
     162,   163,   976,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1002,    -1,
      -1,    -1,    -1,    -1,   976,     5,     6,     7,    -1,     9,
      10,    11,    -1,    13,    14,    15,    -1,    -1,  1003,    19,
      -1,    21,    -1,    23,    -1,    -1,    -1,    27,    28,    -1,
    1002,    -1,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    52,    53,    54,    55,  1002,    57,    58,    -1,
      60,    61,    62,    63,    -1,    65,    66,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    74,    75,    76,    77,    78,    79,
      -1,    -1,    82,    -1,    -1,    -1,    86,    87,    -1,    89,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,   102,    -1,   104,   105,    -1,    -1,   108,    -1,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,    -1,   123,    -1,   125,     5,     6,     7,    -1,
       9,    10,    11,    -1,    13,    14,    15,    -1,    -1,    -1,
      19,    -1,    21,    -1,    23,    -1,    -1,    -1,    27,    28,
      -1,    -1,    -1,    32,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    40,   162,   163,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    53,    54,    -1,    -1,    57,    58,
      -1,    60,    61,    62,    -1,    -1,    65,    66,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    74,    75,    76,    77,    78,
      79,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,    -1,
      89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   101,   102,    -1,   104,   105,    -1,    -1,   108,
      -1,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,    -1,   123,    -1,   125,     5,     6,     7,
      -1,     9,    10,    11,    -1,    13,    14,    15,    -1,    -1,
      -1,    19,    -1,    21,    -1,    23,    -1,    -1,    -1,    27,
      28,    -1,    -1,    -1,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    40,   162,   163,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    52,    53,    54,    -1,    -1,    57,
      58,    -1,    -1,    61,    62,    -1,    -1,    65,    66,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    75,    76,    77,
      78,    79,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,
      -1,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,   102,    -1,   104,   105,    -1,    -1,
     108,    -1,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,     5,     6,     7,   125,     9,    10,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,
      21,    -1,    23,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,   162,   163,    -1,    -1,    -1,    -1,
      51,    52,    -1,    54,    -1,    -1,    57,    58,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    87,    -1,    89,    90,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   102,    -1,   104,   105,   106,    -1,   108,    -1,    -1,
     111,    -1,   113,    -1,   115,   116,   117,   118,    -1,   120,
       5,     6,     7,    -1,     9,    10,    11,    -1,    13,    14,
      15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,   162,   163,    -1,    -1,    -1,    51,    52,    -1,    54,
      -1,    -1,    57,    58,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    87,    -1,    89,    90,    91,    -1,    93,    -1,
      -1,    -1,    -1,    -1,    -1,   100,    -1,   102,    -1,   104,
     105,    -1,    -1,   108,    -1,    -1,   111,    -1,   113,    -1,
     115,   116,   117,   118,    -1,   120,     5,     6,     7,    -1,
       9,    10,    11,    -1,    13,    14,    15,    -1,    -1,    -1,
      19,    -1,    21,    -1,    23,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    32,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,   162,   163,    -1,
      -1,    -1,    51,    52,    -1,    54,    -1,    -1,    57,    58,
      -1,    -1,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    87,    -1,
      89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,    -1,   104,   105,   106,    -1,   108,
      -1,    -1,   111,    -1,   113,    -1,   115,   116,   117,   118,
      -1,   120,     5,     6,     7,    -1,     9,    10,    11,    -1,
      13,    14,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,   162,   163,    -1,    -1,    -1,    51,    52,
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
      -1,   115,   116,   117,   118,    -1,   120,    -1,    -1,   123,
       5,     6,     7,    -1,     9,    10,    11,    -1,    13,    14,
      15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    32,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,   162,   163,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    54,
      -1,    -1,    57,    58,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    87,    -1,    89,    90,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,   104,
     105,    -1,    -1,   108,    -1,    -1,   111,    -1,   113,    -1,
     115,   116,   117,   118,    -1,   120,    -1,     5,     6,     7,
      -1,     9,    10,    11,    -1,    13,    14,    15,    -1,    -1,
      18,    19,    -1,    -1,    -1,    23,    -1,    -1,   143,    27,
      -1,    -1,    -1,    -1,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,   162,   163,    -1,
      -1,    -1,    -1,    51,    52,    -1,    54,    -1,    -1,    57,
      58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    87,
      -1,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,    -1,   104,   105,    -1,    -1,
     108,    -1,    -1,   111,    -1,   113,    -1,   115,   116,   117,
     118,    -1,   120,     5,     6,     7,    -1,     9,    10,    11,
      -1,    13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,   162,   163,    -1,    -1,    -1,    51,
      52,    -1,    54,    -1,    -1,    57,    58,    -1,    -1,    -1,
      62,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    87,    -1,    89,    90,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,    -1,   104,   105,    -1,    -1,   108,    -1,    -1,   111,
      -1,   113,    -1,   115,   116,   117,   118,    -1,   120,     5,
       6,     7,    -1,     9,    10,    11,    -1,    13,    14,    15,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
     162,   163,    -1,    -1,    -1,    51,    52,    -1,    54,    -1,
      -1,    57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    87,    -1,    89,    90,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,   104,   105,
      -1,    -1,   108,    -1,    -1,   111,    -1,   113,    -1,   115,
     116,   117,   118,    -1,   120,    -1,     5,     6,     7,    -1,
       9,    10,    11,    -1,    13,    14,    15,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    23,    -1,    -1,   143,    27,    -1,
      -1,    -1,    -1,    32,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,   162,   163,    -1,    -1,
      -1,    -1,    51,    52,    -1,    54,    -1,    -1,    57,    58,
      -1,    -1,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    75,    -1,    -1,     5,
       6,    -1,    -1,    82,    -1,    -1,    -1,    -1,    87,    15,
      89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,    -1,   104,   105,    -1,    -1,   108,
      -1,    -1,   111,    -1,   113,    -1,   115,   116,   117,   118,
      -1,   120,    -1,    -1,    -1,    -1,    52,    -1,    54,    -1,
      -1,    57,    -1,    59,    60,    -1,    62,    -1,    64,    -1,
      66,    -1,    68,    69,    70,    -1,     5,     6,    -1,    75,
      -1,    -1,    -1,    -1,    80,    -1,    82,    83,    -1,    -1,
      -1,    87,    -1,   162,   163,    91,    -1,    -1,    -1,    -1,
       5,     6,    -1,    -1,    -1,    -1,   102,    -1,   104,    -1,
      -1,    -1,   108,   109,    -1,    -1,    -1,    -1,    -1,    -1,
     116,   117,    -1,    52,   120,    54,    -1,   123,    57,    -1,
      59,    60,    -1,    62,    -1,    64,    -1,    66,    -1,    68,
      69,    70,    -1,     5,     6,    -1,    75,    52,    -1,    54,
      -1,    80,    57,    82,    83,    -1,    -1,    62,    87,    -1,
      -1,    66,    91,    -1,    -1,    -1,    -1,     5,     6,    -1,
      75,    -1,    -1,   102,    -1,   104,    -1,    82,    -1,   108,
     109,    -1,    87,    -1,    -1,    -1,    91,   116,   117,    -1,
      52,   120,    54,    -1,   123,    57,    -1,   102,    -1,   104,
      62,    -1,    -1,   108,    66,    -1,    -1,    -1,    -1,    -1,
      -1,   116,   117,    75,    52,   120,    54,    -1,   123,    57,
      82,    -1,    -1,    -1,    62,    87,    -1,    -1,    66,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,
     102,    -1,   104,    -1,    82,    -1,   108,    -1,    -1,    87,
      -1,    -1,    -1,    91,   116,   117,    -1,    -1,   120,    -1,
      -1,   123,    -1,    -1,   102,    -1,   104,     5,     6,     7,
     108,     9,    10,    11,    -1,    13,    14,    15,   116,   117,
      -1,    19,   120,    -1,    -1,   123,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    52,    -1,    54,    -1,    -1,    57,
      58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    87,
      -1,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,    -1,   104,   105,    -1,    -1,
     108,    -1,    -1,   111,    -1,   113,    -1,   115,   116,   117,
     118,    -1,   120
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,   121,   305,   306,   314,   315,   316,   317,     5,     6,
     168,   311,   312,   325,     0,   307,   309,   318,   319,   320,
     327,   328,   381,   391,   392,   410,   417,   418,   419,   420,
     428,   315,    28,   325,    29,    44,    49,    71,    84,    88,
      89,    94,    96,    97,    98,    99,   103,   107,   119,   122,
     124,   321,   322,   323,   324,   307,   319,    21,   333,    21,
     395,   420,   142,    44,   311,   325,   311,   107,    59,    64,
      68,    83,   109,   323,   324,   307,   320,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   352,   359,   363,
     366,   371,   372,   373,   376,   307,   396,   397,   398,   399,
     400,   401,   402,   405,   406,   408,    69,   101,   130,   131,
     132,   133,   134,   135,   136,   421,   422,   423,    28,    21,
     306,   313,     5,     6,     7,    12,    13,   326,   329,   123,
     311,   345,     5,   325,     5,     6,     7,    12,    13,   380,
     321,    20,   336,    21,    28,   235,   346,    19,    19,    19,
      28,   235,   378,    19,    89,    96,    97,    98,   103,   107,
     403,   404,    20,   398,    21,    28,   409,    19,    19,   311,
     424,   425,    17,   306,   308,   318,    28,   310,   329,    17,
     330,   331,     5,     5,    17,   411,   412,   329,    17,   382,
     383,     5,    15,    52,    54,    57,    60,    62,    66,    69,
      70,    75,    80,    82,    87,    91,   102,   104,   108,   116,
     117,   120,   123,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   311,   364,   367,   368,   370,     5,     7,
       9,    10,    11,    13,    14,    15,    19,    23,    27,    28,
      32,    34,    40,    51,    53,    58,    60,    61,    65,    72,
      74,    76,    77,    78,    79,    86,    89,    90,   101,   105,
     110,   111,   112,   113,   114,   115,   118,   119,   121,   123,
     125,   162,   163,   166,   167,   169,   172,   176,   184,   185,
     186,   187,   188,   190,   193,   194,   195,   196,   197,   198,
     199,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   228,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   246,   249,   250,   251,   253,   254,   256,
     257,   266,   267,   268,   269,   271,   272,   273,   282,   283,
     285,   286,   287,   288,   289,   291,   292,   297,   298,   299,
     300,   302,   311,   307,   344,   347,   348,   349,   351,   344,
     344,   344,   404,    69,   123,   169,   311,   310,    20,   344,
     344,    19,   426,   427,   141,   143,   308,    20,   330,   176,
     311,   332,    19,    19,   174,    21,   413,    17,   393,   394,
     311,   332,    21,   379,   384,     5,   169,   247,   248,   311,
     325,   169,    92,    92,    32,   311,    32,    92,   111,   142,
     242,   243,   311,   312,   325,   365,     4,   180,   180,    32,
     180,   242,   311,   432,    28,   235,   377,    17,    58,   118,
     172,   176,   188,   195,   196,   198,   210,   211,   212,   311,
     123,   172,   176,   212,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   230,   311,   212,   212,
     212,   212,   212,    44,   142,    28,    19,   235,   169,   247,
     311,    28,   234,    19,    19,    19,     5,    55,    63,    19,
      19,   142,   169,   170,   178,   311,   217,   230,   290,    19,
      19,   290,   235,    19,    19,   235,   235,    19,    19,   212,
     212,   242,   325,    44,    44,    44,   142,    19,   162,   163,
     164,    29,   144,   145,   146,   147,   148,   149,   150,   151,
     154,   155,   229,    20,   233,    28,    28,    28,   230,   232,
     252,   255,   230,   258,   232,   270,     1,    18,   241,   250,
     274,   275,   278,   281,     5,   169,   284,   311,    19,   142,
     242,    93,    95,   100,   350,    18,   141,    18,    18,    18,
     123,   169,   169,   325,     5,   111,   325,    18,    18,   191,
     192,   230,   143,   425,   429,    20,   141,   141,   141,   344,
     344,   307,   414,   415,   416,   310,   311,   332,   307,   320,
     337,   338,   339,   352,   359,   363,   366,   371,   385,   386,
     387,   310,    19,   247,   325,    28,   141,   247,    29,   242,
     311,   169,   169,    15,    22,    23,    25,    26,    27,    30,
      31,    32,    33,    34,    40,    72,   113,   152,   153,   156,
     157,   158,   159,   162,   163,   369,   142,   143,    28,   141,
     432,   111,    29,   142,    28,    21,   233,   142,    32,   180,
     214,   215,   216,   214,   214,    25,    32,    33,    34,    40,
     152,   153,    30,    31,    50,    85,   158,   159,   156,   157,
      23,    26,    22,   160,    16,   161,    18,   180,     5,   192,
     230,   247,   247,    28,   125,   169,   311,    28,   230,   231,
      28,   230,   191,    19,   142,   200,    21,   388,    19,   142,
      32,    28,   169,   311,    28,    56,    73,   293,   294,   296,
     123,   169,   311,   230,   230,   241,   301,     5,     5,     5,
     192,    93,   100,   182,   183,   189,   230,     5,   230,    18,
      18,    18,    18,    28,   141,    81,     5,     5,   189,   192,
     169,   169,   348,    17,   374,   375,   325,   325,     5,   432,
     142,    18,   141,   429,   311,   332,   311,   311,    18,    18,
       5,    20,   141,   321,    20,   387,    18,    28,   248,    28,
     231,    28,   430,    19,    19,    19,   347,   142,   325,   243,
      21,   106,   230,   244,   245,   388,   347,   307,   353,   356,
     357,    18,   216,    18,    18,   212,    18,   212,   212,   212,
     217,   217,   218,   218,   219,   219,   169,   311,   169,   311,
     219,   219,   220,   220,   221,   222,   223,   224,   230,   225,
     209,   214,   143,    18,    19,     5,   303,   304,   303,    28,
      18,   143,   189,   191,   244,   389,   390,   189,   191,    18,
      18,    19,   235,   235,   294,   296,    18,    18,    18,    18,
      18,   143,   181,   230,   181,   141,    18,   234,    21,   259,
     234,   232,   276,   279,   250,   230,    81,    81,    18,   143,
       5,     5,    51,   111,   409,    21,   347,   230,    28,    28,
      29,    20,   416,   235,    21,   169,   169,   169,   143,   143,
      29,   353,   169,   311,   143,   137,   138,    20,   307,   354,
     357,   307,   355,   356,   212,   212,   212,   212,    17,    18,
     232,    29,    18,   141,    18,   234,   179,   180,    18,   143,
      20,   141,    18,   143,   176,   311,   234,   183,    67,    55,
      63,   260,   261,   262,   264,   265,    28,    18,   230,   230,
      29,    19,    19,   307,   407,   143,   231,   307,   360,   361,
     362,     5,     5,     5,   325,   244,    20,   142,   142,   433,
     433,   433,   230,   212,    18,   230,   234,   304,   234,   201,
     388,   179,   142,   179,    20,   244,   179,   295,   325,   295,
     234,    17,   231,    17,    20,   262,   237,   263,   265,   277,
     280,   281,   234,    18,    18,   166,   189,   189,   137,   138,
      20,   432,   139,   140,    20,   307,   362,   307,   361,    18,
      18,    18,   141,    29,   433,   230,   230,    28,   235,   358,
     358,    28,   143,   192,   201,   201,    18,    18,    17,    18,
     234,   234,    18,    18,   409,   409,   433,    21,   431,   431,
     431,   169,   244,   143,   143,   432,   432,   179,   143,   235,
     235,   234,   307,   307,   407,   235,   235,     5,   201,   179,
     138,   137,    20,   430,   430,    18,   201,   409,   409,   433
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
#line 274 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[-5].r.myLineNo),(yyvsp[-5].r.myColNo),"expecting type,you can\'t declare array without type","");;}
    break;

  case 94:
#line 281 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[-7].r.myLineNo),(yyvsp[-7].r.myColNo),"second number not allowed","");;}
    break;

  case 209:
#line 474 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {	
															access_modifier = nullptr;	
															data_storage = nullptr;
														;}
    break;

  case 215:
#line 489 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {
												if (isLocal) {
													(yyval.lv) = p->create_local_variable((yyvsp[0].r.str), (yyvsp[0].r.myColNo), (yyvsp[0].r.myLineNo));
												} else {
													(yyval.dm) = p->create_data_member((yyvsp[0].r.str), access_modifier, data_storage, (yyvsp[0].r.myColNo), (yyvsp[0].r.myLineNo));
												}
											;}
    break;

  case 216:
#line 496 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {
												if (isLocal) {
													(yyval.lv) = p->create_local_variable((yyvsp[-2].r.str), (yyvsp[-2].r.myColNo), (yyvsp[-2].r.myLineNo));
												} else {
													(yyval.dm) = p->create_data_member((yyvsp[-2].r.str), access_modifier, data_storage, (yyvsp[-2].r.myColNo), (yyvsp[-2].r.myLineNo));
												}
											;}
    break;

  case 217:
#line 503 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[-1].r.myLineNo),(yyvsp[-1].r.myColNo),"type error expected value of var ","");;}
    break;

  case 218:
#line 504 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {	cout << "WTF1";	;}
    break;

  case 219:
#line 505 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {	cout << "WTF2";	;}
    break;

  case 220:
#line 506 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {	cout << "WTF3";	;}
    break;

  case 221:
#line 507 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {	cout << "WTF4";	;}
    break;

  case 222:
#line 508 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {	cout << "WTF5";	;}
    break;

  case 223:
#line 509 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {	cout << "WTF6";	;}
    break;

  case 230:
#line 523 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"expecting local type,you can\'t declare constant without type","");;}
    break;

  case 235:
#line 532 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"expecting value,you can\'t declare constant without value","");;}
    break;

  case 236:
#line 533 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"expecting value,you can\'t declare constant without value","");;}
    break;

  case 248:
#line 553 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"expecting type without boolean expression","");;}
    break;

  case 249:
#line 557 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    { bs = p->finish_scope_declaration(bs, 10);	;}
    break;

  case 250:
#line 561 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {  bs = p->create_scope(10); cout<<"Add if"<<endl;	;}
    break;

  case 251:
#line 564 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    { cout << "\t if without else\n"; ;}
    break;

  case 252:
#line 565 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    { cout << "\t if with else\n"; ;}
    break;

  case 253:
#line 568 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {	bs = p->finish_scope_declaration(bs, 7);	;}
    break;

  case 254:
#line 571 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {	bs = p->create_scope(7); cout<<"Add switch"<<endl;	;}
    break;

  case 262:
#line 591 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {
	bs = p->create_scope(11);
  ;}
    break;

  case 265:
#line 601 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {
		cout<<"Add case"<<endl;bs = p->finish_scope_declaration(bs, 11);
  ;}
    break;

  case 266:
#line 604 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {
		cout<<"Add case"<<endl;bs = p->finish_scope_declaration(bs,11);
  ;}
    break;

  case 267:
#line 607 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    { cout<<"Add case "<<endl;bs = p->finish_scope_declaration(bs, 11);
  errorRec.errQ->enqueue((yyvsp[-1].r.myLineNo),(yyvsp[-1].r.myColNo),"expecting type,you can\'t  without type case ('')","");;}
    break;

  case 273:
#line 621 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {	bs = p->finish_scope_declaration(bs, 6);	;}
    break;

  case 274:
#line 624 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {	bs = p->create_scope(6); cout<<"Add while"<<endl;	;}
    break;

  case 277:
#line 631 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[-2].r.myLineNo),(yyvsp[-2].r.myColNo),"expecting type,you can\'t declare constant without while","");;}
    break;

  case 278:
#line 635 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {
											bs=p->finish_scope_declaration(bs, 5);
										;}
    break;

  case 279:
#line 640 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {
											//cout<<"her father"<<p-> Symbol_Table->get_current_scope()<<"???"<<endl;
											bs= p->create_scope(5);
											cout<<"Add for "<<endl;
										;}
    break;

  case 281:
#line 648 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {	errorRec.errQ->enqueue((yyvsp[0].r.myLineNo), (yyvsp[0].r.myColNo), "expecting type,you can\'t in for", "");	;}
    break;

  case 295:
#line 678 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {	bs = p->finish_scope_declaration(bs, 9);	;}
    break;

  case 296:
#line 681 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {	bs = p->create_scope(9); cout<<"Add foreach"<<endl;	;}
    break;

  case 298:
#line 685 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {	errorRec.errQ->enqueue((yyvsp[-3].r.myLineNo), (yyvsp[-3].r.myColNo), "error type ", "");	;}
    break;

  case 337:
#line 769 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {
																p->print(p->Symbol_Table);
																p->set_Inheritance_pointers(p->Symbol_Table->get_root_scope()->get_map()); 
																p->check_all(p->Symbol_Table);
																cout << "TESTING" <<endl;
															;}
    break;

  case 352:
#line 812 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {cout<<"error in the open brackets ";;}
    break;

  case 370:
#line 858 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    { cout << "\t\t Added modifier\n";	;}
    break;

  case 371:
#line 859 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[-1].r.myLineNo),(yyvsp[-1].r.myColNo),"error modifer can't type more the modifier","");;}
    break;

  case 377:
#line 867 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {	
									(yyval.am) = p->set_access_modifier(3, (yyvsp[0].r.myColNo), (yyvsp[0].r.myLineNo));
									access_modifier = (yyval.am);
							;}
    break;

  case 378:
#line 871 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {	
									(yyval.am) = p->set_access_modifier(2, (yyvsp[0].r.myColNo), (yyvsp[0].r.myLineNo));
									access_modifier = (yyval.am);
							;}
    break;

  case 379:
#line 875 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {	
									(yyval.am) = p->set_access_modifier(1, (yyvsp[0].r.myColNo), (yyvsp[0].r.myLineNo));
									access_modifier = (yyval.am);
							;}
    break;

  case 385:
#line 886 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {	
									(yyval.ds) = p->set_data_storage(2, (yyvsp[0].r.myColNo), (yyvsp[0].r.myLineNo));
									data_storage = (yyval.ds);
								;}
    break;

  case 386:
#line 890 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {	
									(yyval.ds) = p->set_data_storage(1, (yyvsp[0].r.myColNo), (yyvsp[0].r.myLineNo));
									data_storage = (yyval.ds);
								;}
    break;

  case 387:
#line 894 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {
									(yyval.ds) = p->set_data_storage(3, (yyvsp[-1].r.myColNo), (yyvsp[-1].r.myLineNo));
									data_storage = (yyval.ds);
								;}
    break;

  case 389:
#line 901 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_NOT_IDENTIFIER) ","");;}
    break;

  case 391:
#line 906 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_INTEGER) ","");;}
    break;

  case 392:
#line 907 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_INTEGER) ","");;}
    break;

  case 393:
#line 908 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_INTEGER) ","");;}
    break;

  case 394:
#line 909 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_NOT_IDENTIFIER) ","");;}
    break;

  case 395:
#line 914 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {
													(yyval.clas) = p->finish_class_declaration((yyvsp[-1].clas));
											;}
    break;

  case 396:
#line 919 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {
													(yyval.clas) = p->create_class((yyvsp[-2].r.str), false, il, access_modifier, data_storage, (yyvsp[-5].r.myColNo), (yyvsp[-5].r.myLineNo));
													access_modifier = nullptr;
													data_storage = nullptr;
													isLocal = false;
											;}
    break;

  case 397:
#line 925 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    { 
													errorRec.errQ->enqueue((yyvsp[-6].r.myLineNo),(yyvsp[-6].r.myColNo),"error not identifier (T_NOT_IDENTIFIER) ","");
													access_modifier = nullptr;
													data_storage = nullptr;
													isLocal = false;
											  ;}
    break;

  case 398:
#line 933 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {	il = new InheritanceList();	;}
    break;

  case 400:
#line 937 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    { cout << "\t\t Added class base\n";;}
    break;

  case 401:
#line 940 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {;}
    break;

  case 402:
#line 941 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {;}
    break;

  case 403:
#line 942 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {;}
    break;

  case 404:
#line 943 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {  il = p->add_class_list((yyvsp[0].r.str), il);   ;}
    break;

  case 405:
#line 944 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {;}
    break;

  case 406:
#line 947 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {	il = p->add_class_list((yyvsp[0].r.str), il);	;}
    break;

  case 407:
#line 948 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {	
															il = p->add_class_list((yyvsp[-2].r.str), il);
															il = p->add_class_list((yyvsp[0].r.str), il);
														;}
    break;

  case 408:
#line 954 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    { cout << "\t\t Added class body\n"; ;}
    break;

  case 424:
#line 980 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[-5].r.myLineNo),(yyvsp[-5].r.myColNo),"error const ","can't const with out type ");;}
    break;

  case 426:
#line 984 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {	
																							access_modifier = nullptr;	
																							data_storage = nullptr;
																						;}
    break;

  case 427:
#line 988 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {
															  								access_modifier = nullptr;	
																							data_storage = nullptr;
																						;}
    break;

  case 428:
#line 994 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {
												(yyval.func) = p->finish_function_declaration((yyvsp[-1].func));
												isLocal = false;
											;}
    break;

  case 429:
#line 1001 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {	
													access_modifier = nullptr;
													data_storage = nullptr;
													isLocal = true;
											;}
    break;

  case 430:
#line 1006 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {
													access_modifier = nullptr;
													data_storage = nullptr;
													isLocal = true;
											;}
    break;

  case 431:
#line 1011 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {
													access_modifier = nullptr;
													data_storage = nullptr;
													isLocal = true;
											;}
    break;

  case 432:
#line 1018 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {
																		lp = new List_Parameters();
																		(yyval.func) = p->create_function((yyvsp[0].r.str), lp, access_modifier, data_storage, false, (yyvsp[-3].r.myColNo), (yyvsp[-3].r.myLineNo));
																;}
    break;

  case 433:
#line 1024 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {
																		lp = new List_Parameters();
																		(yyval.func) = p->create_function((yyvsp[0].r.str), lp, access_modifier, data_storage, false, (yyvsp[-3].r.myColNo), (yyvsp[-3].r.myLineNo));
																;}
    break;

  case 434:
#line 1030 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {
																		lp = new List_Parameters();
																		(yyval.func) = p->create_function((yyvsp[0].r.str), lp, access_modifier, data_storage, false, (yyvsp[-3].r.myColNo), (yyvsp[-3].r.myLineNo));
																;}
    break;

  case 444:
#line 1056 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {
																				lp = p->add_parameters((yyvsp[0].r.str) , false , lp,(yyvsp[-1].r.str));
																			;}
    break;

  case 445:
#line 1059 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {
																				lp = p->add_parameters((yyvsp[-2].r.str) , true , lp,(yyvsp[-3].r.str));
																			;}
    break;

  case 500:
#line 1166 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {
													(yyval.func) = p->finish_function_declaration((yyvsp[-1].func));
												;}
    break;

  case 501:
#line 1171 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {
													access_modifier = nullptr;
													data_storage = nullptr;
												;}
    break;

  case 502:
#line 1177 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {
													lp = new List_Parameters();
													(yyval.func) = p->create_function((yyvsp[0].r.str), lp, access_modifier, data_storage, true, (yyvsp[-2].r.myColNo), (yyvsp[-2].r.myLineNo));
												;}
    break;

  case 513:
#line 1216 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[-1].r.myLineNo),(yyvsp[-1].r.myColNo),"type error expected no struct body ","");;}
    break;

  case 515:
#line 1220 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    { errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"type error expected not id ","");;}
    break;

  case 516:
#line 1221 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_INTEGER) ","");;}
    break;

  case 517:
#line 1222 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_INTEGER) ","");;}
    break;

  case 518:
#line 1223 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {errorRec.errQ->enqueue((yyvsp[0].r.myLineNo),(yyvsp[0].r.myColNo),"error not identifier (T_INTEGER) ","");;}
    break;

  case 544:
#line 1278 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {	(yyval.clas) = p->finish_class_declaration((yyvsp[-1].clas));	;}
    break;

  case 545:
#line 1281 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {
  																					(yyval.clas) = p->create_class((yyvsp[-2].r.str), true, il, access_modifier, data_storage, (yyvsp[-5].r.myColNo), (yyvsp[-5].r.myLineNo));
																					access_modifier = nullptr;
																					data_storage = nullptr;
																					isLocal = false;
																				;}
    break;

  case 547:
#line 1290 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    { cout << "\t\t Added interface base\n"; ;}
    break;

  case 549:
#line 1294 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    { il= p->add_class_list((yyvsp[0].r.str),il); ;}
    break;

  case 550:
#line 1297 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    { cout << "\t\t Added interface body\n"; ;}
    break;

  case 559:
#line 1315 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {	(yyval.func) = p->finish_function_declaration((yyvsp[-1].func));	;}
    break;

  case 560:
#line 1318 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {
																	access_modifier = nullptr;
																	data_storage = nullptr;
																	isLocal = true;
																;}
    break;

  case 561:
#line 1323 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {
  																	access_modifier = nullptr;
																	data_storage = nullptr;
																	isLocal = true;
																;}
    break;

  case 562:
#line 1330 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {
  												lp = new List_Parameters();
												(yyval.func) = p->create_function((yyvsp[0].r.str), lp, NULL, NULL, false, (yyvsp[-3].r.myColNo), (yyvsp[-3].r.myLineNo));										
											;}
    break;

  case 563:
#line 1334 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {
  												lp = new List_Parameters();
												(yyval.func) = p->create_function((yyvsp[0].r.str), lp, NULL, NULL, false, (yyvsp[-4].r.myColNo), (yyvsp[-4].r.myLineNo));										
											;}
    break;

  case 564:
#line 1340 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {
  												lp = new List_Parameters();
												(yyval.func) = p->create_function((yyvsp[0].r.str), lp, NULL, NULL, false, (yyvsp[-3].r.myColNo), (yyvsp[-3].r.myLineNo));										
											;}
    break;

  case 565:
#line 1344 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {
  												lp = new List_Parameters();
												(yyval.func) = p->create_function((yyvsp[0].r.str), lp, NULL, NULL, false, (yyvsp[-4].r.myColNo), (yyvsp[-4].r.myLineNo));										
											;}
    break;

  case 597:
#line 1429 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {cout << "\t\t added attribute\n";;}
    break;

  case 619:
#line 1480 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    { 
		//lex_enter_attrib();
    ;}
    break;

  case 620:
#line 1485 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {
		//lex_exit_attrib();
	;}
    break;

  case 621:
#line 1490 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {
		//lex_enter_accessor();
    ;}
    break;

  case 622:
#line 1495 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {
		//lex_exit_accessor();
	;}
    break;

  case 623:
#line 1500 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    {
		//lex_enter_getset();
	;}
    break;

  case 624:
#line 1505 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"
    { 
		//lex_exit_getset();
	;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 3817 "yacc.cpp"

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


#line 1511 "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\yacc.y"


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
	string dirc = "C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\CSTokens\\input\\";
	dir = opendir("input");
	if(!freopen("C:\\Users\\CEC\\Desktop\\CompilerProject-master\\CompilerProject-master\\CSTokens\\out.txt", "w", stdout)) {
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

