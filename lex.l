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
Float					([+-]?[0-9]+"."[0-9]+"f"?)|[0-9]+"f"?
Double                  ([+-]?[0-9]+"."[0-9]+[d]?)|[+-]?[0-9]+[d]?
Integer					[1-9][0-9]*|0
Boolean					"true"|"false"
Character				"\'"."\'"
String					"\"".*"\""
Identifier              [a-zA-Z_][a-zA-Z0-9_]*
%%
"if"			{
							colNo += strlen(yytext);
							cout<<"if";
				}
"class"			{
							colNo += strlen(yytext);
							cout<<"class";
				}

"public"		{
							colNo += strlen(yytext);
							cout<<"public";
				}

"int"			        {
							colNo += strlen(yytext);
							cout<<"int\n";
						}

"abstract"				{
							colNo += strlen(yytext);
							cout<<"abstract";
						}

"byte"					{
							colNo += strlen(yytext);
							cout<<"byte";
						}
						
"delegate"				{
							colNo += strlen(yytext);
							cout<<"delegate";
						}

"event"					{
							colNo += strlen(yytext);
							cout<<"event";
						}

"fixed"					{
							colNo += strlen(yytext);
							cout<<"fixed";
						}

"goto"					{
							colNo += strlen(yytext);
							cout<<"goto";
						}

"interface"				{
							colNo += strlen(yytext);
							cout<<"interface";
						}

"namespace"				{
							colNo += strlen(yytext);
							cout<<"namespace";
						}

"out"					{
							colNo += strlen(yytext);
							cout<<"out";
						}

"sealed"				{
							colNo += strlen(yytext);
							cout<<"sealed";
						}

"static"				{
							colNo += strlen(yytext);
							cout<<"static";
						}

"throw"					{
							colNo += strlen(yytext);
							cout<<"throw";
						}

"ulong"					{
							colNo += strlen(yytext);
							cout<<"ulong";
						}

"var"					{
							colNo += strlen(yytext);
							cout<<"var";
						}
						
"bool"      			{
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
							cout<<"long";
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
						
"as"
						{
							colNo+=strlen(yytext);
							cout<<"as";
						}

"case"                  {
							colNo+=strlen(yytext);
							cout<<"case";
						}
						
"const"					{
							colNo+=strlen(yytext);
							cout<<"const";
						}

"do"					{
							colNo+=strlen(yytext);
							cout<<"do";
						}

"explicit"				{	
							colNo+=strlen(yytext);
							cout<<"explicit";
						}

"float"					{
							colNo+=strlen(yytext);
							cout<<"float";
						}

"internal"				{
							colNo+=strlen(yytext);
							cout<<"internal";
						}

"new"					{
							colNo+=strlen(yytext);
							cout<<"new";
						}

"override"				{
							colNo+=strlen(yytext);
							cout<<"override";
						}

"readonly"				{
							colNo+=strlen(yytext);
							cout<<"readonly";
						}

"short"					{	
							colNo+=strlen(yytext);
							cout<<"short";
						}

"string"				{	
							colNo+=strlen(yytext);
							cout<<"string";
						}

"true"					{
							colNo+=strlen(yytext);
							cout<<"true";
						}

"unchecked"				{
							colNo+=strlen(yytext);
							cout<<"unchecked";
						}

"virtual"				{
							colNo+=strlen(yytext);
							cout<<"virtual";
						}

"base"					{
							colNo += strlen(yytext);
							cout<<"base";
						}

"catch"					{
							colNo += strlen(yytext);
							cout<<"catch";
						}

"continue"				{
							colNo += strlen(yytext);
							cout<<"continue";
						}
						
"double"				{
							colNo += strlen(yytext);
							cout<<"double";
}						
						
"extern"				{
							colNo += strlen(yytext);
							cout<<"extern";
						}
						
"for"					{
							colNo += strlen(yytext);
							cout<<yytext;
						}
						
"implicit"	    		{
							colNo += strlen(yytext);
							cout<<yytext;
						}
						
"is"		    		{
							colNo += strlen(yytext);
							cout<<yytext;
						}
						
"null"					{
							colNo += strlen(yytext);
							cout<<yytext;
						}
						
"params"				{
							colNo += strlen(yytext);
							cout<<yytext;
						}
						
"ref"					{
							colNo += strlen(yytext);
							cout<<yytext;
						}
						
"sizeof"	    		{
							colNo += strlen(yytext);
							cout<<yytext;
						}
						
"struct"	    		{
							colNo += strlen(yytext);
							cout<<yytext;
						}
						
"try"           		{
							colNo += strlen(yytext);
							cout<<yytext;
						}
						
"unsafe"        		{
							colNo += strlen(yytext);
							cout<<yytext;
						}
						
"void"					{
							colNo += strlen(yytext);
							cout<<yytext;
						}
						
"value" 				{
							colNo += strlen(yytext);
							cout<<yytext;
						}

\\                      {
                         colNo += strlen(yytext);
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

\+						{
							colNo += strlen(yytext); 
							cout<<"plussssssssssssssssssssssssssssssssssss\n";
						}
						
\n						{
							colNo=1;
							lineNo++;
							cout<<endl<<"line="<<lineNo<<endl;
						}

\t						{
							colNo+=4;
						}

" "						{
							colNo += 1; 
						}

"+"						{
							colNo += strlen(yytext); 
							cout<<"plus\n";
						}

"-"						{
							colNo += strlen(yytext); 
						}

"<"						{
							colNo += strlen(yytext); 
						}

">"						{
							colNo += strlen(yytext); 
						}

"<="					{
							colNo += strlen(yytext); 
						}

">="					{
							colNo += strlen(yytext); 
						}

"="						{
							colNo += strlen(yytext); 
						}

"=="					{
							colNo += strlen(yytext); 
						}

"!="					{
							colNo += strlen(yytext); 
						}

";"						{
							colNo += strlen(yytext); 
						}

","						{
							colNo += strlen(yytext); 
						}

"&&"					{
							colNo += strlen(yytext); 
						}

"||"					{
							colNo += strlen(yytext); 
						}

"!"						{
							colNo += strlen(yytext); 
						}

"^"						{
							colNo += strlen(yytext); 
						}

"%"						{
							colNo += strlen(yytext); 
						}

"#"						{
							colNo += strlen(yytext); 
						}

"*"						{
							colNo += strlen(yytext); 
						}

"\/"					{
							colNo += strlen(yytext); 
						}

"{"						{
							colNo += strlen(yytext); 
						}
						
"}"						{
							colNo += strlen(yytext); 
						}
						
"("						{
							colNo += strlen(yytext); 
						}
						
")"						{
							colNo += strlen(yytext); 
						}
						
"["						{
							colNo += strlen(yytext); 
						}
						
"]"						{
							colNo += strlen(yytext); 
						}
						
":"						{
							colNo += strlen(yytext); 
						}
						
"~"						{
							colNo += strlen(yytext); 
						}
						
"?"						{
							colNo += strlen(yytext); 
						}
						
"++"					{
							colNo += strlen(yytext); 
						}
						
"--"					{
							colNo += strlen(yytext); 
						}

\/\*                                        { BEGIN multilinecomment; }
<multilinecomment>[^*\n]*					{;}
<multilinecomment>"*"+[^*/\n]*				{lineNo++;}
<multilinecomment>"*"+"/"                   { BEGIN INITIAL;cout<<"\t it is a Multi Line Comment \n";}

{Single_line_comment}				{
										cout<<"\tit is a single line comment\n";
										lineNo++;
									}

{Boolean}							{
										colNo += strlen(yytext);
										cout<<"bool"<<yytext<<endl;
									}
		
{Identifier}						{ colNo += strlen(yytext);
										cout<<yytext<<endl;;
										cout<<"\t it is id \n";
									}

{Float}								{
										colNo += strlen(yytext);
										float x = atof(yytext);
										cout<<x<<endl;
									}
									
{Integer}							{
										colNo += strlen(yytext);
										int x=atoi(yytext);
										cout<<x<<endl;										
									}

{Character}							{
										colNo += strlen(yytext);
										cout<<"Chaaaaaaaaaaaaaar";
									}
							
{String}							{
										colNo += strlen(yytext);
										cout<<"Striiiiiiiiiiiiiiiiing";
									}
{Integer}							{
										colNo += strlen(yytext);
										int x=atoi(yytext);
										cout<<x<<endl;
									}
{Double}                            {
                                     colNo += strlen(yytext);
									 cout<<"doubleeeee"<<yytext;
                                    }
%%
int main(void)
{
	FlexLexer* lexer = new yyFlexLexer;
	lexer->yylex();
    return 0;
}
