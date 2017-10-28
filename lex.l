%{
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
Integer					[1-9][0-9]*|0
Identifier              [a-zA-Z_][a-zA-Z0-9_]*

%%
"if"			{
							colNo += strlen(yytext);
						}

"class"					{
							colNo += strlen(yytext);
						}

"public"				{
							colNo += strlen(yytext);
						}

"int"					{
							colNo += strlen(yytext);
							cout<<"int\n";
						}

\n						{
							colNo=1;
							lineNo++;
						}

" "						{
							colNo += 1;
						}

\+						{
							colNo += strlen(yytext);
							cout<<"plussssssssssssssssssssssssssssssssssss\n";
						}

"-"						{
							colNo += strlen(yytext);
						}

"bool"       {
									colNo += strlen(yytext);
									cout<<"bool\n";
						}
"char"
						{
							colNo += strlen(yytext);
							cout<<"char\n";

						}
"decimal"
						{
							colNo +=strlen(yytext);
							cout<<"decimal";
						}
"else"
						{
							colNo +=strlen(yytext);
							cout<<"else";
						}
"false"
						{
							colNo +=strlen(yytext);
							cout<<"false";
						}
"foreach"
						{
							colNo +=strlen(yytext);
							cout<<"foreach";
						}
"in"
						{
							colNo +=strlen(yytext);
							cout<<"in";
						}
"lock"
						{
							colNo +=strlen(yytext);
							cout<<"lock";
						}
"object"
						{
							colNo +=strlen(yytext);
							cout<<"object";
						}
"private"
						{
							colNo +=strlen(yytext);
							cout<<"private";
						}
"return"
						{
							colNo +=strlen(yytext);
							cout<<"return";
						}
"stackalloc"
						{
							colNo +=strlen(yytext);
							cout<<"stackalloc";
						}
"switch"
						{
						colNo +=strlen(yytext);
						cout<<"switch";
						}
"typeof"
						{
							colNo +=strlen(yytext);
							cout<<"typeof";
						}
"ushort"
						{
							colNo +=strlen(yytext);
							cout<<"ushort";
						}
"volatile"
						{
							colNo +=strlen(yytext);
							cout<<"volatile";
						}

\/\*                                        { BEGIN multilinecomment; }
<multilinecomment>[^*\n]*					{;}
<multilinecomment>"*"+[^*/\n]*				{lineNo++;}
<multilinecomment>"*"+"/"                   { BEGIN INITIAL;cout<<"\t it is a Multi Line Comment \n";}

{Single_line_comment}				{ cout<<"\tit is a single line comment\n";
										lineNo++;
									}

{Identifier}						{ colNo += strlen(yytext);
										cout<<yytext<<endl;;
										cout<<"\t it is id \n";
									}

{Integer}							{
										colNo += strlen(yytext);
										int x=atoi(yytext);
										cout<<x<<endl;

									}


%%

int main(void)
{
	FlexLexer* lexer = new yyFlexLexer;
	lexer->yylex();
    return 0;
}
