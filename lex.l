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

"char"					{
							colNo += strlen(yytext);
							cout<<"char\n";

						}

"decimal"				{
							colNo +=strlen(yytext);
							cout<<"decimal"<<endl;
						}

"else"					{
							colNo +=strlen(yytext);
							cout<<"else"<<endl;
						}

"false"					{
							colNo +=strlen(yytext);
							cout<<"false"<<endl;
						}

"foreach"				{
							colNo +=strlen(yytext);
							cout<<"foreach"<<endl;
						}

"in"					{
							colNo +=strlen(yytext);
							cout<<"in"<<endl;
						}

"lock"					{
							colNo +=strlen(yytext);
							cout<<"lock"<<endl;
						}

"object"				{
							colNo +=strlen(yytext);
							cout<<"object"<<endl;
						}

"private"				{
							colNo +=strlen(yytext);
							cout<<"private"<<endl;
						}

"return"				{
							colNo +=strlen(yytext);
							cout<<"return"<<endl;
						}

"stackalloc"			{
							colNo +=strlen(yytext);
							cout<<"stackalloc"<<endl;
						}

"switch"				{
						colNo +=strlen(yytext);
						cout<<"switch"<<endl;
						}

"typeof"				{
							colNo +=strlen(yytext);
							cout<<"typeof"<<endl;
						}

"ushort"				{
							colNo +=strlen(yytext);
							cout<<"ushort"<<endl;
						}

"volatile"				{
							colNo +=strlen(yytext);
							cout<<"volatile"<<endl;
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
