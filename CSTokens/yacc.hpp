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
/* Line 1447 of yacc.c.  */
#line 384 "yacc.hpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;



