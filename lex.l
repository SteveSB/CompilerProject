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
double                  [+-]?[0-9]+"."[0-9]+[d]?|[+-]?[0-9]+d?

%%
"base"			{
							colNo += strlen(yytext);
							cout<<yytext;
				}
"catch"			{
							colNo += strlen(yytext);
							cout<<yytext;
				}
"continue"		{
							colNo += strlen(yytext);
							cout<<yytext;
				}
"extern"		{
							colNo += strlen(yytext);
							cout<<yytext;
				}
"for"			{
							colNo += strlen(yytext);
							cout<<yytext;
				}
"implicit"	    {
							colNo += strlen(yytext);
							cout<<yytext;
				}
"is"		    {
							colNo += strlen(yytext);
							cout<<yytext;
				}
"null"			{
							colNo += strlen(yytext);
							cout<<yytext;
				}		
"params"		{
							colNo += strlen(yytext);
							cout<<yytext;
				}
"ref"			{
							colNo += strlen(yytext);
							cout<<yytext;
				}
"sizeof"	    {
							colNo += strlen(yytext);
							cout<<yytext;
				}
"struct"	    {
							colNo += strlen(yytext);
							cout<<yytext;
				}
"try"           {
							colNo += strlen(yytext);
							cout<<yytext;
				}
"unsafe"        {
							colNo += strlen(yytext);
							cout<<yytext;
				}
"void"			{
							colNo += strlen(yytext);
							cout<<yytext;
				}
"value" 		{
							colNo += strlen(yytext);
							cout<<yytext;
				}
"if"			{
							colNo += strlen(yytext);
							cout<<yytext;
				}
"class"			{
							colNo += strlen(yytext);
							cout<<yytext;
				}

"public"		{
							colNo += strlen(yytext);
							cout<<yytext;
				}

"int"			        {
							colNo += strlen(yytext);
							cout<<"int\n";
				        }
						
\n					    {
							colNo=1;
							lineNo++;
							cout<<lineNo;
						}
\r                      {
                        colNo=1;
						lineNo++;
                        }
\'                      {
                        colNo += strlen(yytext);
						cout<<"'";
                        }
\t                      {
                         colNo += 3;	    
                        }
\\                      {
                         colNo += strlen(yytext);
                        }
\0                      {
                         colNo += strlen(yytext);
						 cout<<"0";
                        }
\a                      {
                          cout<<"beeb";
                        }
\b                      {
                         if(colNo>1)
						 colNo--;
						 cout<<"backspace";
                        }
\f                      {
						 colNo += strlen(yytext);
                        }
\v                      {
						 colNo += strlen(yytext);
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
\/\*                                        { BEGIN multilinecomment; }
<multilinecomment>[^*\n]*					{;}
<multilinecomment>"*"+[^*/\n]*				{lineNo++;}
<multilinecomment>"*"+"/"                   { BEGIN INITIAL;cout<<"\t it is a Multi Line Comment \n";}

{Single_line_comment}				{ cout<<"\tit is a single line comment\n";
										lineNo++;
									}
{Integer}							{
										colNo += strlen(yytext);
										int x=atoi(yytext);
										cout<<x<<endl;
									}
{double}                            {
                                     colNo += strlen(yytext);
									 cout<<yytext;
                                    }
{Identifier}						{ colNo += strlen(yytext);
										cout<<yytext<<endl;;
										cout<<"\t it is id \n";
		                           }
%%
int main(void)
{
	FlexLexer* lexer = new yyFlexLexer;
	lexer->yylex();
    return 0;
}