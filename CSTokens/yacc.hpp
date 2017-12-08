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
#line 382 "yacc.hpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;



