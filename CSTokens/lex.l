%{
	#include "yacc.hpp"
	#include <iostream>
	#include <istream>
	#include <ostream>	
	#include <FlexLexer.h>

	int lineNo = 1;
	int colNo = 1;

%}
%option c++
%option noyywrap

%x multilinecomment
		
Single_line_comment		(\/\/)+[^\n]*
NotIdentifier           [0-9\?\,\*\-\+\%\$\#\!\^\@]+[\.\?\,\*\-\+\%\$\#\!\^\@a-zA-Z_]+|[\?\,\*\-\+\%\$\#\!\^\@]
Boolean                 "true"|"false"
Identifier              [a-zA-Z_][a-zA-Z0-9_]*
Float					([+-]?[0-9]+"."[0-9]+"f"?)|[0-9]+"f"
Integer					[1-9][0-9]*|0
Character				"\'"."\'"
String					"\"".*"\""
Double                  ([+-]?[0-9]+"."[0-9]+"d"?)|[0-9]+"d"
%%
"if"					{
							colNo += strlen(yytext);
							cout<<"if\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_IF;
						}

"class"					{
							colNo += strlen(yytext);
							cout<<"class\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_CLASS;
						}

"public"				{
							colNo += strlen(yytext);
							cout<<"public\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_PUBLIC;
						}
						
"lnumber"				{
							colNo += strlen(yytext);
							cout<<"lnumber\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_LNUMBER;
						}						
						
"int"			        {
							colNo += strlen(yytext);
							cout<<"int\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_INT;
						}

"abstract"				{
							colNo += strlen(yytext);
							cout<<"abstract\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_ABSTRACT;
						}

"byte"					{
							colNo += strlen(yytext);
							cout<<"byte\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_BYTE;
						}
						
"delegate"				{
							colNo += strlen(yytext);
							cout<<"delegate\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_DELEGATE;
						}

"event"					{
							colNo += strlen(yytext);
							cout<<"event\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_EVENT;
						}

"fixed"					{
							colNo += strlen(yytext);
							cout<<"fixed\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_FIXED;
						}

"goto"					{
							colNo += strlen(yytext);
							cout<<"goto\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_GOTO;
						}

"interface"				{
							colNo += strlen(yytext);
							cout<<"interface\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_INTERFACE;
						}

"namespace"				{
							colNo += strlen(yytext);
							cout<<"namespace\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_NAMESPACE;
						}

"out"					{
							colNo += strlen(yytext);
							cout<<"out\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_OUT;
						}

"sealed"				{
							colNo += strlen(yytext);
							cout<<"sealed\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_SEALED;
						}

"static"				{
							colNo += strlen(yytext);
							cout<<"static\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_STATIC;
						}

"throw"					{
							colNo += strlen(yytext);
							cout<<"throw\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_THROW;
						}

"ulong"					{
							colNo += strlen(yytext);
							cout<<"ulong\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_ULONG;
						}

"var"					{
							colNo += strlen(yytext);
							cout<<"var\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_VAR;
						}
						
"bool"      			{
							colNo += strlen(yytext);
							cout<<"bool\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_BOOL;
						}

"char"					{
							colNo += strlen(yytext);
							cout<<"char\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_CHAR;
						}

"decimal"				{
							colNo +=strlen(yytext);
							cout<<"decimal\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_DECIMAL;
						}

"else"					{
							colNo +=strlen(yytext);
							cout<<"else\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_ELSE;
						}

"foreach"				{
							colNo +=strlen(yytext);
							cout<<"foreach\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_FOREACH;
						}

"in"					{
							colNo +=strlen(yytext);
							cout<<"in\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_IN;
						}

"lock"					{
							colNo +=strlen(yytext);
							cout<<"lock\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_LOCK;
						}

"object"				{
							colNo +=strlen(yytext);
							cout<<"object\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_OBJECT;
						}

"private"				{
							colNo +=strlen(yytext);
							cout<<"private\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_PRIVATE;
						}

"return"				{
							colNo +=strlen(yytext);
							cout<<"return\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_RETURN;
						}

"stackalloc"			{
							colNo +=strlen(yytext);
							cout<<"stackalloc\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_STACKALLOC;
						}

"switch"				{
							colNo +=strlen(yytext);
							cout<<"switch\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_SWITCH;
						}

"typeof"				{
							colNo +=strlen(yytext);
							cout<<"typeof\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_TYPEOF;
						}

"ushort"				{
							colNo +=strlen(yytext);
							cout<<"ushort\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_USHORT;
						}

"volatile"				{
							colNo +=strlen(yytext);
							cout<<"volatile\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_VOLATILE;
						}

"break"					{
							colNo += strlen(yytext); 
							cout<<"break\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_BREAK;
						}

"checked"				{
							colNo += strlen(yytext); 
							cout<<"checked\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_CHECKED;
						}

"default"				{
							colNo += strlen(yytext); 
							cout<<"default\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_DEFAULT;
						}

"enum"					{
							colNo += strlen(yytext); 
							cout<<"enum\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_ENUM;
						}

"finally"				{
							colNo += strlen(yytext); 
							cout<<"finally\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_FINALLY;
						}

"long"					{
							colNo += strlen(yytext); 
							cout<<"long\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_LONG;
						}

"operator"				{
							colNo += strlen(yytext); 
							cout<<"operator\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_OPERATOR;
						}

"protected"				{
							colNo += strlen(yytext); 
							cout<<"protected\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_PROTECTED;
						}

"sbyte"					{
							colNo += strlen(yytext); 
							cout<<"sbyte\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_SBYTE;
						}

"this"					{
							colNo += strlen(yytext); 
							cout<<"this\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_THIS;
						}

"uint"					{
							colNo += strlen(yytext); 
							cout<<"unit\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_UINT;
						}

"using"					{
							colNo += strlen(yytext); 
							cout<<"using\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_USING;
						}

"while"					{
							colNo += strlen(yytext); 
							cout<<"while\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_WHILE;
						}
						
"as"					{
							colNo+=strlen(yytext);
							cout<<"as\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_AS;
						}

"case"                  {
							colNo+=strlen(yytext);
							cout<<"case\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_CASE;
						}
						
"const"					{
							colNo+=strlen(yytext);
							cout<<"const\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_CONST;
						}

"do"					{
							colNo+=strlen(yytext);
							cout<<"do\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_DO;
						}

"explicit"				{	
							colNo+=strlen(yytext);
							cout<<"explicit\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_EXPLICIT;
						}

"float"					{
							colNo+=strlen(yytext);
							cout<<"float\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_FLOAT;
						}

"internal"				{
							colNo+=strlen(yytext);
							cout<<"internal\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_INTERNAL;
						}

"new"					{
							colNo+=strlen(yytext);
							cout<<"new\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_NEW;
						}

"override"				{
							colNo+=strlen(yytext);
							cout<<"override\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_OVERRIDE;
						}

"readonly"				{
							colNo+=strlen(yytext);
							cout<<"readonly\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_READONLY;
						}

"short"					{	
							colNo+=strlen(yytext);
							cout<<"short\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_SHORT;
						}

"string"				{	
							colNo+=strlen(yytext);
							cout<<"string\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_STRING;
						}

"unchecked"				{
							colNo+=strlen(yytext);
							cout<<"unchecked\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_UNCHECKED;
						}

"virtual"				{
							colNo+=strlen(yytext);
							cout<<"virtual\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_VIRTUAL;
						}

"base"					{
							colNo += strlen(yytext);
							cout<<"base\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_BASE;
						}

"catch"					{
							colNo += strlen(yytext);
							cout<<"catch\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_CATCH;
						}

"continue"				{
							colNo += strlen(yytext);
							cout<<"continue\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_CONTINUE;
						}
						
"double"				{
							colNo += strlen(yytext);
							cout<<"double\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_DOUBLE;
						}						
						
"extern"				{
							colNo += strlen(yytext);
							cout<<"extern\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_EXTERN;
						}
						
"for"					{
							colNo += strlen(yytext);
							cout<<"for\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_FOR;
						}
						
"implicit"	    		{
							colNo += strlen(yytext);
							cout<<"implicit\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_IMPLICIT;
						}
						
"is"		    		{
							colNo += strlen(yytext);
							cout<<"is\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_IS;
						}
						
"null"					{
							colNo += strlen(yytext);
							cout<<"null\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_NULL_LITERAL;
						}
						
"params"				{
							colNo += strlen(yytext);
							cout<<"params\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_PARAMS;
						}
						
"ref"					{
							colNo += strlen(yytext);
							cout<<"ref\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_REF;
						}
						
"sizeof"	    		{
							colNo += strlen(yytext);
							cout<<"sizeof\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_SIZEOF;
						}
						
"struct"	    		{
							colNo += strlen(yytext);
							cout<<"struct\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_STRUCT;
						}
						
"try"           		{
							colNo += strlen(yytext);
							cout<<"try\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_TRY;
						}
						
"unsafe"        		{
							colNo += strlen(yytext);
							cout<<"unsafe\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_UNSAFE;
						}
						
"void"					{
							colNo += strlen(yytext);
							cout<<"void\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_VOID;
						}

"get"					{
							colNo += strlen(yytext);
							cout<<"get\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_GET;
						}

"set"					{
							colNo += strlen(yytext);
							cout<<"set\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_SET;
						}

\t                      {
							colNo += 3;
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
                        	
						}

\0                      {
							colNo += strlen(yytext);
							cout<<"0\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
                        	return T_STRING_END;
						}

\b                      {
							if(colNo>1)
								colNo--;
							cout<<"backspace\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
                        	return T_BACKSPACE;
						}

\f                      {
							colNo += strlen(yytext);
							cout<<"f\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
                        	return T_BACKSLASH_F;
						}

\v                      {
							colNo += strlen(yytext);
							cout<<"v\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
                        	return T_BACKSLASH_V;
						}

\+						{
							colNo += strlen(yytext); 
							cout<<"plus\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_BACKSLASH_PLUS;
						}
						
\a                      {
							cout<<"beeb\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
                        	return T_BACKSLASH_A;
						}
\n                      {
                            colNo=1;
                            lineNo +=1;
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
                        
                        }
						
\\                      {
							colNo += strlen(yytext);
							cout<<"\\\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
                        	return T_DOUBLE_BACKSLASH;
						}
						
\r                      {
							colNo=1;
							lineNo++;
							cout<<"r\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
                        	return T_BACKSLASH_R;
						}

\'                      {
							colNo += strlen(yytext);
							cout<<"'\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
                        	return T_BACKSLASH_SINGLE_COTATION;
						}

" "						{
							colNo += 1;
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							//return T_SPACE;
						}

"-"						{
							colNo += strlen(yytext);
							cout<<"-\n"; 
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_MINUS;
						}

"/"						{
							colNo += strlen(yytext); 
							cout<<"/\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_DEVIDE;
						}
"*"						{
							colNo += strlen(yytext); 
							cout<<"*\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_MULTIPLY;
						}

"<"						{
							colNo += strlen(yytext); 
							cout<<"<\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_SMALLER;
						}

">"						{
							colNo += strlen(yytext);
							cout<<">\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;
							return T_BIGGER;
						}

"="						{
							colNo += strlen(yytext);
							cout<<"=\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo; 
							return T_EQUAL;
						}

";"						{
							colNo += strlen(yytext);
							cout<<";\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo; 
							return T_SEMICOLON;
						}

","						{
							colNo += strlen(yytext); 
							cout<<",\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo; 
							return T_COMMA;
						}

"."						{
							colNo += strlen(yytext); 
							cout<<".\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo; 
							return T_DOT;
						}

"!"						{
							colNo += strlen(yytext);
							cout<<"!\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;  
							return T_NOT;
						}

"^"						{
							colNo += strlen(yytext);
							cout<<"^\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;  
							return T_XOR;
						}

"%"						{
							colNo += strlen(yytext);
							cout<<"%\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;  
							return T_MOD;
						}

"#"						{
							colNo += strlen(yytext);
							cout<<"#\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;  
							return T_HASH;
						}

"&"						{
							colNo += strlen(yytext);
							cout<<"&\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;  
							return T_AND;
						}

"|"						{
							colNo += strlen(yytext);
							cout<<"|\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;  
							return T_OR;
						}

"{"						{
							colNo += strlen(yytext);
							cout<<"{\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;  
							return T_OPEN_BRACKETS;
						}

"}"						{
							colNo += strlen(yytext);
							cout<<"}\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;  
							return T_CLOSE_BRACKETS;
							
						}
												
"("						{
							colNo += strlen(yytext);
							cout<<"(\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;  
							return T_OPEN_PARENNTHESES;
						}
						
")"						{
							colNo += strlen(yytext);
							cout<<")\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;  
							return T_CLOSE_PARENNTHESES;
						}
										
"["						{
							colNo += strlen(yytext);
							cout<<"[\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;  
							return T_OPEN_ARRAY;
						}

"]"						{
								colNo += strlen(yytext);
								cout<<"]\n";
								yylval.r.myLineNo=lineNo;
								yylval.r.myColNo=colNo;  
								return T_CLOSE_ARRAY;
						}
":"						{
							colNo += strlen(yytext);
							cout<<":\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;  
							return T_COLON;
						}
						
"~"						{
							colNo += strlen(yytext);
							cout<<"~\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;  
							return T_TILDE;
						}
						
"?"						{
							colNo += strlen(yytext);
							cout<<"?\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;  
							return T_QUESTION_MARK;
						}

	
">>"					{
							colNo += strlen(yytext);
							cout<<">>\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo; 
							return T_GTGT;
						}
	
"<<"					{
							colNo += strlen(yytext);
							cout<<"<<\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo; 
							return T_LTLT;
						}
	
"<="					{
							colNo += strlen(yytext);
							cout<<"<=\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo; 
							return T_LEQ;
						}

">="					{
							colNo += strlen(yytext);
							cout<<">=\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo; 
							return T_GEQ;
						}

"=="					{
							colNo += strlen(yytext);
							cout<<"==\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo; 
							return T_EQEQ;
						}

"!="					{
							colNo += strlen(yytext);
							cout<<"!=\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo; 
							return T_NOTEQ;
						}

"&&"					{
							colNo += strlen(yytext);
							cout<<"&&\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;  
							return T_ANDAND;
						}

"||"					{
							colNo += strlen(yytext);
							cout<<"||\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;  
							return T_OROR;
						}
					
"++"					{
							colNo += strlen(yytext);
							cout<<"++\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;  
							return T_PLUSPLUS;
						}
						
"--"					{
							colNo += strlen(yytext);
							cout<<"--\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;  
							return T_MINUSMINUS;
						}

"+="					{
							colNo += strlen(yytext);
							cout<<"+=\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;  
							return T_PLUSEQ; 
						}

"-="					{ 
							colNo += strlen(yytext);
							cout<<"-=\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;  
							return T_MINUSEQ; 
						}

"*="					{ 
							colNo += strlen(yytext);
							cout<<"*=\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;  
							return T_STAREQ; 
						}

"/="					{ 
							colNo += strlen(yytext);
							cout<<"/=\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;  
							return T_DIVEQ;
						}

"%="					{ 
							colNo += strlen(yytext);
							cout<<"%=\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;  
							return T_MODEQ; 
						}

"^="					{ 
							colNo += strlen(yytext);
							cout<<"^=\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;  
							return T_XOREQ; 
						}

"&="					{ 
							colNo += strlen(yytext);
							cout<<"&=\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;  
							return T_ANDEQ; 
						}

"|="					{ 
							colNo += strlen(yytext);
							cout<<"|=\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;  
							return T_OREQ; 
						}

"->"					{ 
							colNo += strlen(yytext);
							cout<<"->\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;  
							return T_ARROW; 
						}

">>="					{ 
							colNo += strlen(yytext);
							cout<<">>=\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;  
							return T_GTGTEQ; 
						}

"<<="					{ 
							colNo += strlen(yytext);
							cout<<"<<=\n";
							yylval.r.myLineNo=lineNo;
							yylval.r.myColNo=colNo;  
							return T_LTLTEQ; 
						}

\/\*                                        { BEGIN multilinecomment; }
<multilinecomment>[^*\n]*					{;}
<multilinecomment>"*"+[^*/\n]*				{lineNo++;}
<multilinecomment>"*"+"/"                   { BEGIN INITIAL;cout<<"\t it is a Multi Line Comment \n";}

{Single_line_comment}				{
										cout<<"\tit is a single line comment"<<endl;
										lineNo++;
									}

{Boolean}							{
										colNo += strlen(yytext);
										cout<<"Booool:	"<<yytext<<endl;
										return T_LITERAL_BOOLEAN;
									}
		
{Identifier}						{
										colNo += strlen(yytext);
										cout<< "Found ID:	"<<yytext<<endl;
										return T_IDENTIFIER;
									}

{NotIdentifier}                     {
                                       colNo += strlen(yytext);
									   cout <<"notID!!   :"<<yytext<<endl;
									   return T_NOT_IDENTIFIER;
                                    }

{Float}								{
										colNo += strlen(yytext);
										float x = atof(yytext);
										cout<<"Found float:	"<<x<<endl;
										return T_LITERAL_FLOAT;
									}
									
{Integer}							{
										colNo += strlen(yytext);
										int x=atoi(yytext);
										cout<<"Found int:	"<<x<<endl;
										return T_LITERAL_INTEGER;
									}

{Character}							{
										colNo += strlen(yytext);
										cout<<"Found Char:	"<<yytext<<endl;
										return T_LITERAL_CHARACTER;
									}
							

{String}							{
										string temp="";
										int i=0;
										for(i=0;i<strlen(yytext)-1;i++)
										{
											if(yytext[i]=='\\'){
												if(yytext[i+1]=='\\')
													temp+='\\';
												else if(yytext[i+1]=='n')
													temp+='\n';
												else if(yytext[i+1]=='b')
													{
														int d=temp.size();
														temp=temp.substr(0,d-1);
													}
												else if(yytext[i+1]=='t')
													temp+='\t';
												else if(yytext[i+1]=='a')
													temp+='\a';
												else if(yytext[i+1]=='f')
													temp+='\f';
												else if(yytext[i+1]=='v')
													temp+='\v';
												else if(yytext[i+1]=='0')
													temp+='\0';
												else 
													{cout<<"error";return 0;}
												i++;
											}
											else
												temp+=yytext[i];
										}
										if(i!=strlen(yytext)&&yytext[i]!='\\')
											temp+=yytext[i];
										yytext = (char *)malloc(temp.size() + 1);
										memcpy(yytext, temp.c_str(), temp.size() + 1);
										temp="";
										printf("%s",yytext);
										return T_LITERAL_STRING;
									}

{Double}                            {
										colNo += strlen(yytext);
										cout<<"Found double:	"<<yytext<<endl;
										return T_LITERAL_DOUBLE;
                                    }
%%
