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
Float					([+-]?[0-9]+"."[0-9]+"f"?)|[0-9]+"f"?

%%
"if"					{
							colNo += strlen(yytext);
							cout<<"if\n";
						}

"class"					{
							colNo += strlen(yytext);
							cout<<"class\n";
						}

"public"				{
							colNo += strlen(yytext);
							cout<<"public\n";
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
							cout<<"plus\n";
						}

"-"						{
							colNo += strlen(yytext); 
							cout<<"minus\n";
						}

"break"					{
							colNo += strlen(yytext); 
							cout<<"break\n";
						}

"checked"				{
							colNo += strlen(yytext); 
							cout<<"checked\n";
						}

"default"				{
							colNo += strlen(yytext); 
							cout<<"default\n";
						}

"enum"					{
							colNo += strlen(yytext); 
							cout<<"enum\n";
						}

"finally"				{
							colNo += strlen(yytext); 
							cout<<"finally\n";
						}

"long"					{
							colNo += strlen(yytext); 
							cout<<"long\n";
						}

"operator"				{
							colNo += strlen(yytext); 
							cout<<"operator\n";
						}

"protected"				{
							colNo += strlen(yytext); 
							cout<<"protected\n";
						}

"sbyte"					{
							colNo += strlen(yytext); 
							cout<<"sbyte\n";
						}

"this"					{
							colNo += strlen(yytext); 
							cout<<"this\n";
						}

"unit"					{
							colNo += strlen(yytext); 
							cout<<"unit\n";
						}

"using"					{
							colNo += strlen(yytext); 
							cout<<"using\n";
						}

"while"					{
							colNo += strlen(yytext); 
							cout<<"while\n";
						}

\/\*                                        { BEGIN multilinecomment; }
<multilinecomment>[^*\n]*					{;}
<multilinecomment>"*"+[^*/\n]*				{lineNo++;}
<multilinecomment>"*"+"/"                   { BEGIN INITIAL;cout<<"\t it is a Multi Line Comment \n";}

{Single_line_comment}				{ cout<<"\tit is a single line comment\n";
										lineNo++;
									}

{Identifier}						{ 
										colNo += strlen(yytext);
										cout<<yytext<<endl;
										cout<<"\t it is id \n";
									}

{Integer}							{
										colNo += strlen(yytext);
										int x = atoi(yytext);
										cout<<x<<endl;
									}
	
{Float}								{
										colNo += strlen(yytext);
										float x = atof(yytext);
										cout<<x<<endl;
									}
											
%%

int main(void)
{
	FlexLexer* lexer = new yyFlexLexer;
	lexer->yylex();
    return 0;
}