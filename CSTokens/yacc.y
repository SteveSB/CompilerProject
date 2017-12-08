%output="yacc.cpp"
%{
#define YYERROR_VERBOSE
  extern int yylineno;
  #define _CRT_SECURE_NO_WARNINGS
  #define YYDEBUG 1
  #include <iostream>
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
  class Parser
  {
	public:
	int parse()
	{
		return yyparse();
	}
  };
%}

%union{
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
	}

%nonassoc LO_TER

/* Special tokens to help disambiguate rank_specifiers */
%token RANK_SPECIFIER

/* C.1.4 Tokens */
%token T_IDENTIFIER T_NOT_IDENTIFIER
%token T_LITERAL_INTEGER T_LITERAL_REAL T_LITERAL_CHARACTER T_LITERAL_STRING T_LITERAL_FLOAT T_LITERAL_DOUBLE T_LITERAL_BOOLEAN

/* C.1.7 KEYWORDS */ 
%token  T_TILDE T_QUESTION_MARK T_COLON T_CLOSE_PARENNTHESES T_OPEN_PARENNTHESES T_CLOSE_BRACKETS T_OPEN_BRACKETS T_OR T_AND T_HASH T_MOD T_XOR T_NOT T_SEMICOLON T_EQUAL T_BIGGER T_SMALLER T_MULTIPLY T_DEVIDE T_MINUS T_SPACE T_BACKSLASH_SINGLE_COTATION T_BACKSLASH_R T_DOUBLE_BACKSLASH T_BACKSLASH_A T_BACKSLASH_PLUS T_BACKSLASH_V T_BACKSLASH_F T_STRING_END T_DOT T_TAB T_BACKSPACE 
%token  T_LNUMBER T_VALUE
%token  T_ABSTRACT T_AS T_BASE T_BOOL T_BREAK
%token  T_BYTE T_CASE T_CATCH T_CHAR T_CHECKED
%token  T_CLASS T_CONST T_CONTINUE T_DECIMAL T_DEFAULT
%token  T_DELEGATE T_DO T_DOUBLE T_ELSE T_ENUM
%token  T_EVENT T_EXPLICIT T_EXTERN T_FALSE T_FINALLY
%token  T_FIXED T_FLOAT T_FOR T_FOREACH T_GOTO
%token  T_IF T_IMPLICIT T_IN T_INT T_INTERFACE
%token  T_INTERNAL T_IS T_LOCK T_LONG T_NAMESPACE
%token  T_NEW T_NULL_LITERAL T_OBJECT T_OPERATOR T_OUT
%token  T_OVERRIDE T_PARAMS T_PRIVATE T_PROTECTED T_PUBLIC
%token  T_READONLY T_REF T_RETURN T_SBYTE T_SEALED
%token  T_SHORT T_SIZEOF T_STACKALLOC T_STATIC T_STRING
%token  T_STRUCT T_SWITCH T_THIS T_THROW T_TRUE
%token  T_TRY T_TYPEOF T_UINT T_ULONG T_UNCHECKED
%token  T_UNSAFE T_USHORT T_USING T_VIRTUAL T_VOID
%token  T_VOLATILE T_WHILE T_VAR T_ENTER
%nonassoc test
%nonassoc T_ELSE T_IDENTIFIER

%left ne
/* The ones that seem to be context sensitive */
/* Attribute Targets */
%token T_ASSEMBLY T_FIELD T_METHOD T_MODULE T_PARAM T_PROPERTY T_TYPE
/* Accessor types */
%token T_GET T_SET 
/* Event accessor declarations */
%token T_ADD T_REMOVE

/*** PUNCTUATION AND SINGLE CHARACTER OPERATORS ***/
%token T_COMMA  ","
%token T_OPEN_ARRAY  "["
%token T_CLOSE_ARRAY "]"

/*** MULTI-CHARACTER OPERATORS ***/
%token T_PLUSEQ T_MINUSEQ T_STAREQ T_DIVEQ T_MODEQ
%token T_XOREQ  T_ANDEQ   T_OREQ T_LTLT T_GTGT T_GTGTEQ T_LTLTEQ T_EQEQ T_NOTEQ
%token T_LEQ T_GEQ T_ANDAND T_OROR T_PLUSPLUS T_MINUSMINUS T_ARROW

%start compilation_unit  /* I think */

%%

/***** C.1.8 Literals *****/
literal
  : boolean_literal
  | T_LITERAL_INTEGER
  | T_LITERAL_REAL
  | T_LITERAL_CHARACTER
  | T_LITERAL_STRING
  | T_LITERAL_DOUBLE
  | T_LITERAL_BOOLEAN
  | T_NULL_LITERAL
  ;
boolean_literal
  : T_TRUE
  | T_FALSE
  ;
/********** C.2 Syntactic grammar **********/

/***** C.2.1 Basic concepts *****/
namespace_name
  : qualified_identifier
  ;
/*
type_name
  : qualified_identifier
  ;
*/
/***** C.2.2 Types *****/
type
  : non_array_type
  | array_type
  ;
non_array_type
  : simple_type
/*  |qualified_identifier
  | type_name   */
  ;
simple_type
  : primitive_type
  | class_type
  | pointer_type
  ;
primitive_type
  : numeric_type
  | T_BOOL
  ;
numeric_type
  : integral_type
  | floating_point_type
  | T_DECIMAL
  ;
integral_type
  : T_SBYTE | T_BYTE | T_SHORT | T_USHORT | T_INT | T_UINT | T_LONG | T_ULONG | T_CHAR
  ;
floating_point_type
  : T_FLOAT | T_DOUBLE 
  ;
class_type
  : T_OBJECT | T_STRING
  ;
pointer_type
  : type T_MULTIPLY
  | qualified_identifier T_MULTIPLY
  | T_VOID T_MULTIPLY
  ;
array_type
  : array_type rank_specifier
  | simple_type rank_specifier
  | qualified_identifier rank_specifier
  ;
rank_specifiers_opt
  : /* Nothing */
  | rank_specifier rank_specifiers_opt
  ;
rank_specifier
  : RANK_SPECIFIER
  ;
/***** C.2.3 Variables *****/
variable_reference
  : expression
  ;
/***** C.2.4 Expressions *****/
argument_list
  : argument
  | argument_list T_COMMA argument
  ;
argument
  : expression
  | T_REF variable_reference
  | T_OUT variable_reference
  ;
primary_expression
  : parenthesized_expression
  | primary_expression_no_parenthesis
  ;
primary_expression_no_parenthesis
  : literal
  | array_creation_expression
  | member_access
  | invocation_expression
  | element_access
  | this_access
  | base_access
  | new_expression
  | typeof_expression
  | sizeof_expression
  | checked_expression
  | unchecked_expression
  ;
parenthesized_expression
  : T_OPEN_PARENNTHESES expression T_CLOSE_PARENNTHESES
  ;
member_access
  : primary_expression T_DOT T_IDENTIFIER
  | primitive_type T_DOT T_IDENTIFIER
  | class_type T_DOT T_IDENTIFIER
  ;
invocation_expression
  : primary_expression_no_parenthesis T_OPEN_PARENNTHESES argument_list_opt T_CLOSE_PARENNTHESES
  | qualified_identifier T_OPEN_PARENNTHESES argument_list_opt T_CLOSE_PARENNTHESES
  ;
argument_list_opt
  : /* Nothing */
  | argument_list
  ;
element_access
  : primary_expression T_OPEN_ARRAY expression_list T_CLOSE_ARRAY
  | qualified_identifier T_OPEN_ARRAY expression_list T_CLOSE_ARRAY
  
  ;
expression_list_opt
  : /* Nothing */
  | expression_list
  ;
expression_list
  : expression
  | expression_list T_COMMA expression
  ;
this_access
  : T_THIS
  ;
base_access
  : T_BASE T_DOT T_IDENTIFIER
  | T_BASE T_OPEN_ARRAY expression_list T_CLOSE_ARRAY
  ;
post_increment_expression
  : postfix_expression T_PLUSPLUS
  ;
post_decrement_expression
  : postfix_expression T_MINUSMINUS
  ;
new_expression
  : object_creation_expression
  ;
object_creation_expression
  : T_NEW type T_OPEN_PARENNTHESES argument_list_opt T_CLOSE_PARENNTHESES
  | T_NEW qualified_identifier T_OPEN_PARENNTHESES argument_list_opt T_CLOSE_PARENNTHESES
  ;
 
array_creation_expression
  : T_NEW non_array_type T_OPEN_ARRAY expression_list T_CLOSE_ARRAY rank_specifiers_opt array_initializer_opt
  | T_NEW T_OPEN_ARRAY expression_list T_CLOSE_ARRAY rank_specifiers_opt array_initializer_opt {errorRec.errQ->enqueue($<r.myLineNo>1,$<r.myColNo>1,"expecting type,you can\'t declare array without type","");}
  | T_NEW qualified_identifier T_OPEN_ARRAY expression_list T_CLOSE_ARRAY rank_specifiers_opt array_initializer_opt
  | T_NEW array_type array_initializer
  ;
array_initializer_opt
  : /* Nothing */
  | array_initializer
  ;
typeof_expression
  : T_TYPEOF T_OPEN_PARENNTHESES type T_CLOSE_PARENNTHESES
  | T_TYPEOF T_OPEN_PARENNTHESES qualified_identifier T_CLOSE_PARENNTHESES
  | T_TYPEOF T_OPEN_PARENNTHESES T_VOID T_CLOSE_PARENNTHESES
  ;
checked_expression
  : T_CHECKED T_OPEN_PARENNTHESES expression T_CLOSE_PARENNTHESES
  ;
unchecked_expression
  : T_UNCHECKED T_OPEN_PARENNTHESES expression T_CLOSE_PARENNTHESES
  ;
pointer_member_access
  : postfix_expression T_ARROW T_IDENTIFIER
  ;
addressof_expression
  : T_AND unary_expression
  ;
sizeof_expression
  : T_SIZEOF T_OPEN_PARENNTHESES type T_CLOSE_PARENNTHESES
  | T_SIZEOF T_OPEN_PARENNTHESES qualified_identifier T_CLOSE_PARENNTHESES
  ;
postfix_expression
  : primary_expression
  | qualified_identifier 
  | post_increment_expression
  | post_decrement_expression
  | pointer_member_access
  ;
unary_expression_not_plusminus
  : postfix_expression
  | T_NOT unary_expression
  | T_TILDE unary_expression
  | cast_expression
  ;
pre_increment_expression
  : T_PLUSPLUS unary_expression
  ;
pre_decrement_expression
  : T_MINUSMINUS unary_expression
  ;
unary_expression
  : unary_expression_not_plusminus
  | T_BACKSLASH_PLUS unary_expression
  | T_MINUS unary_expression
  | T_MULTIPLY unary_expression
  | pre_increment_expression
  | pre_decrement_expression
  | addressof_expression
  ;
/* For cast_expression we really just want a (type) in the brackets,
 * but have to do some factoring to get rid of conflict with expressions.
 * The paremtnesised expression in the first three cases below should be 
 * semantically restricted to an identifier, optionally follwed by qualifiers
 */
cast_expression
  : T_OPEN_PARENNTHESES expression T_CLOSE_PARENNTHESES unary_expression_not_plusminus
  | T_OPEN_PARENNTHESES multiplicative_expression T_MULTIPLY T_CLOSE_PARENNTHESES unary_expression 
  | T_OPEN_PARENNTHESES qualified_identifier rank_specifier type_quals_opt T_CLOSE_PARENNTHESES unary_expression  
  | T_OPEN_PARENNTHESES primitive_type type_quals_opt T_CLOSE_PARENNTHESES unary_expression
  | T_OPEN_PARENNTHESES class_type type_quals_opt T_CLOSE_PARENNTHESES unary_expression
  | T_OPEN_PARENNTHESES T_VOID type_quals_opt T_CLOSE_PARENNTHESES unary_expression
  ;
type_quals_opt
  : /* Nothing */
  | type_quals
  ;
type_quals
  : type_qual
  | type_quals type_qual
  ;
type_qual 
  : rank_specifier 
  | T_MULTIPLY
  ;
multiplicative_expression
  : unary_expression
  | multiplicative_expression T_MULTIPLY unary_expression  
  | multiplicative_expression T_DEVIDE unary_expression
  | multiplicative_expression T_MOD unary_expression
  ;
additive_expression
  : multiplicative_expression
  | additive_expression T_BACKSLASH_PLUS multiplicative_expression
  | additive_expression T_MINUS multiplicative_expression
  ;
shift_expression
  : additive_expression 
  | shift_expression T_LTLT additive_expression
  | shift_expression T_GTGT additive_expression
  ;
relational_expression
  : shift_expression
  | relational_expression T_SMALLER shift_expression
  | relational_expression T_BIGGER shift_expression
  | relational_expression T_LEQ shift_expression
  | relational_expression T_GEQ shift_expression
  | relational_expression T_IS type
  | relational_expression T_AS type
  | relational_expression T_IS qualified_identifier
  | relational_expression T_AS qualified_identifier
  ;
equality_expression
  : relational_expression
  | equality_expression T_EQEQ relational_expression
  | equality_expression T_NOTEQ relational_expression
  ;
and_expression
  : equality_expression
  | and_expression T_AND equality_expression
  ;
exclusive_or_expression
  : and_expression
  | exclusive_or_expression T_XOR and_expression
  ;
inclusive_or_expression
  : exclusive_or_expression
  | inclusive_or_expression T_OR exclusive_or_expression
  ;
conditional_and_expression
  : inclusive_or_expression
  | conditional_and_expression T_ANDAND inclusive_or_expression
  ;
conditional_or_expression
  : conditional_and_expression
  | conditional_or_expression T_OROR conditional_and_expression
  ;
conditional_expression
  : conditional_or_expression
  | conditional_or_expression T_QUESTION_MARK expression T_COLON expression
  ;
assignment
: unary_expression assignment_operator expression
  ;
assignment_operator
  : T_EQUAL | T_PLUSEQ | T_MINUSEQ | T_STAREQ | T_DIVEQ | T_MODEQ 
  | T_XOREQ | T_ANDEQ | T_OREQ | T_GTGTEQ | T_LTLTEQ 
  ;
expression
  : conditional_expression
  | assignment
  ;
constant_expression
  : expression
  ;
boolean_expression
  : expression
  ;
/***** C.2.5 Statements *****/
statement
  : labeled_statement
  | declaration_statement
  | embedded_statement
  ;
embedded_statement
  : block
  | empty_statement
  | expression_statement
  | selection_statement
  | iteration_statement
  | jump_statement
  | try_statement
  | checked_statement
  | unchecked_statement
  | lock_statement
  | using_statement
  | unsafe_statement
  | fixed_statement
  ;
block
  : T_OPEN_BRACKETS statement_list_opt T_CLOSE_BRACKETS
  ;
statement_list_opt
  : /* Nothing */
  | statement_list
  ;

statement_list
  : statement
  | statement_list statement
  ;
empty_statement
  : T_SEMICOLON
  ;
labeled_statement
  : T_IDENTIFIER T_COLON statement
  ;
declaration_statement
  : local_variable_declaration T_SEMICOLON
  | local_constant_declaration T_SEMICOLON
  ;
local_variable_declaration
  : type variable_declarators
  | qualified_identifier variable_declarators
  ;
variable_declarators
  : variable_declarator
  | variable_declarators T_COMMA variable_declarator
  ;
variable_declarator
  : identif
  | identif T_EQUAL variable_initializer
  | identif T_EQUAL   { errorRec.errQ->enqueue($<r.myLineNo>1,$<r.myColNo>1,"type error expected value of var ","");}
  ;
variable_initializer
  : expression
  | array_initializer
  | stackalloc_initializer
  ;
stackalloc_initializer
  : T_STACKALLOC type T_OPEN_ARRAY expression T_CLOSE_ARRAY 
  | T_STACKALLOC qualified_identifier T_OPEN_ARRAY expression T_CLOSE_ARRAY 
  ;
   
local_constant_declaration
  : T_CONST type constant_declarators
  | T_CONST  constant_declarators {errorRec.errQ->enqueue($<r.myLineNo>2,$<r.myColNo>2,"expecting local type,you can\'t declare constant without type","");}
  | T_CONST qualified_identifier constant_declarators
  ;
constant_declarators
  : constant_declarator
  | constant_declarators T_COMMA constant_declarator
  ;
constant_declarator
  : identif T_EQUAL constant_expression
  | identif T_EQUAL {errorRec.errQ->enqueue($<r.myLineNo>2,$<r.myColNo>2,"expecting value,you can\'t declare constant without value","");}
  | identif {errorRec.errQ->enqueue($<r.myLineNo>1,$<r.myColNo>1,"expecting value,you can\'t declare constant without value","");}
  ;
expression_statement
  : statement_expression T_SEMICOLON
  ;
statement_expression
  : invocation_expression
  | object_creation_expression
  | assignment
  | post_increment_expression
  | post_decrement_expression
  | pre_increment_expression
  | pre_decrement_expression
  ;
selection_statement
  : if_statement
  | switch_statement
  ;
   boolexp
  : boolean_expression
  | /*nothing*/ { errorRec.errQ->enqueue($<r.myLineNo>0,$<r.myColNo>0,"expecting type without boolean expression","");}
 
  ;
if_statement
 : T_IF T_OPEN_PARENNTHESES boolexp T_CLOSE_PARENNTHESES embedded_statement %prec test { cout << "\t\t if without else\n"; }
 | T_IF T_OPEN_PARENNTHESES boolexp T_CLOSE_PARENNTHESES embedded_statement T_ELSE embedded_statement { cout << "\t\t if with else\n"; }
  
  ;
switch_statement
  : T_SWITCH T_OPEN_PARENNTHESES expression T_CLOSE_PARENNTHESES switch_block
  ;
switch_block
  : T_OPEN_BRACKETS switch_sections_opt T_CLOSE_BRACKETS
  ;
switch_sections_opt
  : /* Nothing */
  | switch_sections
  ;
switch_sections
  : switch_section
  | switch_sections switch_section
  ;
switch_section
  : switch_labels statement_list
  ;
switch_labels
  : switch_label
  | switch_labels switch_label
  ;
switch_label
  : T_CASE constant_expression T_COLON
  | T_DEFAULT T_COLON
  | T_CASE T_COLON { errorRec.errQ->enqueue($<r.myLineNo>1,$<r.myColNo>1,"expecting type,you can\'t  without type case ('')","");}
  
  ;
iteration_statement
  : while_statement
  | do_statement
  | for_statement
  | foreach_statement
  ;
unsafe_statement
  : T_UNSAFE block
  ;
while_statement
  : T_WHILE T_OPEN_PARENNTHESES boolean_expression T_CLOSE_PARENNTHESES embedded_statement

  ;
do_statement
  : T_DO embedded_statement T_WHILE T_OPEN_PARENNTHESES boolean_expression T_CLOSE_PARENNTHESES T_SEMICOLON
  | T_DO embedded_statement T_SEMICOLON {errorRec.errQ->enqueue($<r.myLineNo>1,$<r.myColNo>1,"expecting type,you can\'t declare constant without while","");}
  ;
  
for_statement
  : T_FOR T_OPEN_PARENNTHESES for_initializer_opt T_SEMICOLON for_condition_opt T_SEMICOLON for_iterator_opt T_CLOSE_PARENNTHESES embedded_statement
  | T_FOR T_OPEN_PARENNTHESES T_CLOSE_PARENNTHESES { errorRec.errQ->enqueue($<r.myLineNo>1,$<r.myColNo>1,"expecting type,you can\'t in for","");}
  | T_FOR T_OPEN_PARENNTHESES error  T_CLOSE_PARENNTHESES
  ;
for_initializer_opt
  : /* Nothing */
  | for_initializer
  ;
for_condition_opt
  : /* Nothing */
  | for_condition
  ;
for_iterator_opt
  : /* Nothing */
  | for_iterator
  ;
for_initializer
  : local_variable_declaration
  | statement_expression_list
  ;
for_condition
  : boolean_expression
  ;
for_iterator
  : statement_expression_list
  ;
statement_expression_list
  : statement_expression
  | statement_expression_list T_COMMA statement_expression
  ;
foreach_statement
  : T_FOREACH T_OPEN_PARENNTHESES type T_IDENTIFIER T_IN expression T_CLOSE_PARENNTHESES embedded_statement
  | T_FOREACH T_OPEN_PARENNTHESES T_IDENTIFIER T_IN expression T_CLOSE_PARENNTHESES embedded_statement{ errorRec.errQ->enqueue($<r.myLineNo>2,$<r.myColNo>2,"error type ","");}
  | T_FOREACH T_OPEN_PARENNTHESES qualified_identifier T_IDENTIFIER T_IN expression T_CLOSE_PARENNTHESES embedded_statement
  ;
jump_statement
  : break_statement
  | continue_statement
  | goto_statement
  | return_statement
  | throw_statement
  ;
break_statement
  : T_BREAK T_SEMICOLON
  ;
continue_statement
  : T_CONTINUE T_SEMICOLON
  ;
goto_statement
  : T_GOTO T_IDENTIFIER T_SEMICOLON
  | T_GOTO T_CASE constant_expression T_SEMICOLON
  | T_GOTO T_DEFAULT T_SEMICOLON
  ;
return_statement
  : T_RETURN expression_opt T_SEMICOLON
 
  ;
expression_opt
  : /* Nothing */
  | expression
  ;
throw_statement
  : T_THROW expression_opt T_SEMICOLON
  ;
try_statement
  : T_TRY block catch_clauses
  | T_TRY block finally_clause
  | T_TRY block catch_clauses finally_clause
  ;
catch_clauses
  : catch_clause
  | catch_clauses catch_clause
  ;
catch_clause
  : T_CATCH T_OPEN_PARENNTHESES class_type identifier_opt T_CLOSE_PARENNTHESES block
//  | T_CATCH T_OPEN_PARENNTHESES type_name identifier_opt T_CLOSE_PARENNTHESES block
  | T_CATCH T_OPEN_PARENNTHESES qualified_identifier identifier_opt T_CLOSE_PARENNTHESES block
  | T_CATCH block
  ;
identifier_opt
  : /* Nothing */
  | identif
  ;
finally_clause
  : T_FINALLY block
  ;
checked_statement
  : T_CHECKED block
  ;
unchecked_statement
  : T_UNCHECKED block
  ;
lock_statement
  : T_LOCK T_OPEN_PARENNTHESES expression T_CLOSE_PARENNTHESES embedded_statement
  ;
using_statement
  : T_USING T_OPEN_PARENNTHESES resource_acquisition T_CLOSE_PARENNTHESES embedded_statement
  ;
resource_acquisition
  : local_variable_declaration
  | expression
  ;
fixed_statement
/*! : T_FIXED T_OPEN_PARENNTHESES pointer_type fixed_pointer_declarators T_CLOSE_PARENNTHESES embedded_statement */
  : T_FIXED T_OPEN_PARENNTHESES type fixed_pointer_declarators T_CLOSE_PARENNTHESES embedded_statement
  | T_FIXED T_OPEN_PARENNTHESES qualified_identifier fixed_pointer_declarators T_CLOSE_PARENNTHESES embedded_statement
  ;
fixed_pointer_declarators
  : fixed_pointer_declarator
  | fixed_pointer_declarators T_COMMA fixed_pointer_declarator
  ;
fixed_pointer_declarator
  : T_IDENTIFIER T_EQUAL expression
  ;
compilation_unit
  : using_directives_opt attributes_opt 
  | using_directives_opt namespace_member_declarations { cout << "TESTING" <<endl;}
  ;
using_directives_opt
  : /* Nothing */
  | using_directives
  ;
attributes_opt
  : /* Nothing */
  | attributes
  ;
namespace_member_declarations_opt
  : /* Nothing */
  | namespace_member_declarations
  ;
  
namespace_declaration
  : attributes_opt T_NAMESPACE qualified_identifier namespace_body comma_opt
  ;
comma_opt
  : /* Nothing */
  | T_SEMICOLON
  ;
/*
qualified_identifier
  : T_IDENTIFIER
  | qualified_identifier T_DOT T_IDENTIFIER
  ;
*/
qualified_identifier
  : identif
  | qualifier identif
  ;
qualifier
  : identif T_DOT 
  | qualifier identif T_DOT 
  ;
namespace_body
  : T_OPEN_BRACKETS using_directives_opt namespace_member_declarations_opt T_CLOSE_BRACKETS
  | using_directives_opt namespace_member_declarations_opt T_CLOSE_BRACKETS {cout<<"error in the open brackets ";}


  ;
using_directives
  : using_directive
  | using_directives using_directive
  ;
using_directive
  : using_alias_directive
  | using_namespace_directive
  ;
using_alias_directive
  : T_USING identif T_EQUAL qualified_identifier T_SEMICOLON
  ;
using_namespace_directive
  : T_USING namespace_name T_SEMICOLON
  ;
namespace_member_declarations
  : namespace_member_declaration
  | namespace_member_declarations namespace_member_declaration
  ;
namespace_member_declaration
  : namespace_declaration
  | type_declaration
  ;
type_declaration
  : class_declaration
  | struct_declaration
  | interface_declaration
  | enum_declaration
  | delegate_declaration
  ;

/***** Modifiers *****/
/* This now replaces:
 * class_modifier, constant_modifier, field_modifier, method_modifier, 
 * property_modifier, event_modifier, indexer_modifier, operator_modifier, 
 * constructor_modifier, struct_modifier, interface_modifier, 
 * enum_modifier, delegate_modifier
 */
modifiers_opt
  : static_opt
  | modifiers static_opt
  ;
modifiers
  : modifier { cout << "\t\t Added modifier\n";}
  /*| modifiers modifier{ errorRec.errQ->enqueue($<r.myLineNo>1,$<r.myColNo>1,"error modifer can't type more the modifier","");}*/
  ;
modifier
  : T_ABSTRACT
  | T_EXTERN
  | T_INTERNAL
  | T_NEW
  | T_OVERRIDE
  | T_PRIVATE
  | T_PROTECTED
  | T_PUBLIC
  | T_READONLY
  | T_SEALED
  | T_UNSAFE
  | T_VIRTUAL
  | T_VOLATILE
  ;
static_opt
  : /* Nothing */
  | T_STATIC
  ;
  identif
  : T_IDENTIFIER
  | T_NOT_IDENTIFIER { errorRec.errQ->enqueue($<r.myLineNo>1,$<r.myColNo>1,"error not identifier (T_NOT_IDENTIFIER) ","");}
  ;

  identifier
   : T_IDENTIFIER
   | T_LITERAL_DOUBLE{errorRec.errQ->enqueue($<r.myLineNo>1,$<r.myColNo>1,"error not identifier (T_INTEGER) ","");}
   | T_LITERAL_FLOAT{errorRec.errQ->enqueue($<r.myLineNo>1,$<r.myColNo>1,"error not identifier (T_INTEGER) ","");}
   | T_LITERAL_INTEGER {errorRec.errQ->enqueue($<r.myLineNo>1,$<r.myColNo>1,"error not identifier (T_INTEGER) ","");}
   | T_NOT_IDENTIFIER { errorRec.errQ->enqueue($<r.myLineNo>1,$<r.myColNo>1,"error not identifier (T_NOT_IDENTIFIER) ","");}
   ;

   
/***** C.2.6 Classes *****/
class_declaration
  : class_h class_body						{
												if (errorRec.errQ->isEmpty()) {
													$<clas>$ = p->finish_class_declaration($<clas>1, NULL, NULL);
												}
											}
  ;
class_h
  : attributes_opt modifiers_opt T_CLASS identifier class_base_opt		{
												if (errorRec.errQ->isEmpty()) {
													$<clas>$ = p->create_class($<r.str>5, NULL);
												}
											}
  | attributes_opt modifiers_opt T_CLASS class_base_opt  { errorRec.errQ->enqueue($<r.myLineNo>-1,$<r.myColNo>-1,"error not identifier (T_NOT_IDENTIFIER) ","");}
  ;
class_base_opt
  : /* Nothing */
  | class_base { cout << "\t\t Added class base\n";}
  ;
class_base
  : T_COLON class_type
  | T_COLON interface_type_list
  | T_COLON class_type T_COMMA interface_type_list
  | T_COLON qualified_identifier
  | T_COLON class_type T_COMMA qualified_identifier
  ;
interface_type_list
/*  : type_name   
  : interface_type_list T_COMMA type_name 
  | qualified_identifier T_COMMA type_name   */
  : interface_type_list T_COMMA qualified_identifier
  | qualified_identifier T_COMMA qualified_identifier
  ;
class_body
  : T_OPEN_BRACKETS class_member_declarations_opt T_CLOSE_BRACKETS { cout << "\t\t Added class body\n"; }
  ;
  
class_member_declarations_opt
  : /* Nothing */
  | class_member_declarations
  ;
class_member_declarations
  : class_member_declaration
  | class_member_declarations class_member_declaration
  ;
class_member_declaration
  : constant_declaration
  | field_declaration
  | method_declaration
  | property_declaration
  | event_declaration
  | indexer_declaration
  | operator_declaration
  | constructor_declaration
  | destructor_declaration
/*  | static_constructor_declaration */
  | type_declaration
  ;
constant_declaration
  : attributes_opt modifiers_opt T_CONST type constant_declarators T_SEMICOLON
  | attributes_opt modifiers_opt T_CONST  constant_declarators T_SEMICOLON{ errorRec.errQ->enqueue($<r.myLineNo>0,$<r.myColNo>0,"error const ","can't const with out type ");}
  | attributes_opt modifiers_opt T_CONST qualified_identifier constant_declarators T_SEMICOLON
  ;
field_declaration
  : attributes_opt modifiers_opt type variable_declarators T_SEMICOLON
  | attributes_opt modifiers_opt qualified_identifier variable_declarators T_SEMICOLON
  ;
method_declaration
  : method_header method_body

  ;
/* Inline return_type to avoid conflict with field_declaration */
method_header
  : attributes_opt modifiers_opt type qualified_identifier T_OPEN_PARENNTHESES formal_parameter_list_opt T_CLOSE_PARENNTHESES
  | attributes_opt modifiers_opt T_VOID qualified_identifier T_OPEN_PARENNTHESES formal_parameter_list_opt T_CLOSE_PARENNTHESES
  | attributes_opt modifiers_opt qualified_identifier  qualified_identifier T_OPEN_PARENNTHESES formal_parameter_list_opt T_CLOSE_PARENNTHESES
  ;
formal_parameter_list_opt
  : /* Nothing */
  | formal_parameter_list
  ;
return_type
/*  : type   */
  : T_VOID
  ;
method_body
  : block
  | T_SEMICOLON
  ;
formal_parameter_list
  : formal_parameter
  | formal_parameter_list T_COMMA formal_parameter
  ;
formal_parameter
  : fixed_parameter
  | parameter_array
  ;
fixed_parameter
  : attributes_opt parameter_modifier_opt type T_IDENTIFIER
  ;
parameter_modifier_opt
  : /* Nothing */
  | T_REF
  | T_OUT
  ;
parameter_array
/*!  : attributes_opt T_PARAMS array_type T_IDENTIFIER */
  : attributes_opt T_PARAMS type T_IDENTIFIER
  ;
property_declaration
  : attributes_opt modifiers_opt type qualified_identifier 
      ENTER_getset
    T_OPEN_BRACKETS accessor_declarations T_CLOSE_BRACKETS
      EXIT_getset
  ;
accessor_declarations
  : get_accessor_declaration set_accessor_declaration_opt
  | set_accessor_declaration get_accessor_declaration_opt
  ;
set_accessor_declaration_opt
  : /* Nothing */
  | set_accessor_declaration
  ;
get_accessor_declaration_opt
  : /* Nothing */
  | get_accessor_declaration
  ;
get_accessor_declaration
  : attributes_opt T_GET 
      EXIT_getset
    accessor_body
      ENTER_getset
  ;
set_accessor_declaration
  : attributes_opt T_SET 
      EXIT_getset
    accessor_body
      ENTER_getset
  ;
accessor_body
  : block
  | T_SEMICOLON
  ;
event_declaration
  : attributes_opt modifiers_opt T_EVENT type variable_declarators T_SEMICOLON
  | attributes_opt modifiers_opt T_EVENT type qualified_identifier 
      ENTER_accessor_decl 
    T_OPEN_BRACKETS event_accessor_declarations T_CLOSE_BRACKETS
      EXIT_accessor_decl
  ;
event_accessor_declarations
  : add_accessor_declaration remove_accessor_declaration
  | remove_accessor_declaration add_accessor_declaration
  ;
add_accessor_declaration
  : attributes_opt T_ADD 
      EXIT_accessor_decl 
    block 
      ENTER_accessor_decl
  ;
remove_accessor_declaration
  : attributes_opt T_REMOVE 
      EXIT_accessor_decl 
    block 
      ENTER_accessor_decl
  ;
indexer_declaration
  : attributes_opt modifiers_opt indexer_declarator 
      ENTER_getset
    T_OPEN_BRACKETS accessor_declarations T_CLOSE_BRACKETS
      EXIT_getset
  ;
indexer_declarator
  : type T_THIS T_OPEN_ARRAY formal_parameter_list T_CLOSE_ARRAY
/* | type type_name T_DOT T_THIS T_OPEN_ARRAY formal_parameter_list T_CLOSE_ARRAY */
  | type qualified_this T_OPEN_ARRAY formal_parameter_list T_CLOSE_ARRAY
  ;
qualified_this
  : qualifier T_THIS
  ;
/* Widen operator_declaration to make modifiers optional */
operator_declaration
  : attributes_opt modifiers_opt operator_declarator operator_body
  ;
operator_declarator
  : overloadable_operator_declarator
  | conversion_operator_declarator
  ;
overloadable_operator_declarator
  : type T_OPERATOR overloadable_operator T_OPEN_PARENNTHESES type T_IDENTIFIER T_CLOSE_PARENNTHESES
  | type T_OPERATOR overloadable_operator T_OPEN_PARENNTHESES type T_IDENTIFIER T_COMMA type T_IDENTIFIER T_CLOSE_PARENNTHESES
  ;
overloadable_operator
  : T_BACKSLASH_PLUS | T_MINUS 
  | T_NOT | T_TILDE | T_PLUSPLUS | T_MINUSMINUS | T_TRUE | T_FALSE
  | T_MULTIPLY | T_DEVIDE | T_MOD | T_AND | T_OR | T_XOR 
  | T_LTLT | T_GTGT | T_EQEQ | T_NOTEQ | T_BIGGER | T_SMALLER | T_GEQ | T_LEQ
  ;
conversion_operator_declarator
  : T_IMPLICIT T_OPERATOR type T_OPEN_PARENNTHESES type T_IDENTIFIER T_CLOSE_PARENNTHESES
  | T_EXPLICIT T_OPERATOR type T_OPEN_PARENNTHESES type T_IDENTIFIER T_CLOSE_PARENNTHESES
  ;
constructor_declaration
  : attributes_opt modifiers_opt constructor_declarator constructor_body
  ;
constructor_declarator
  : T_IDENTIFIER T_OPEN_PARENNTHESES formal_parameter_list_opt T_CLOSE_PARENNTHESES constructor_initializer_opt
  ;
constructor_initializer_opt
  : /* Nothing */
  | constructor_initializer
  ;
constructor_initializer
  : T_COLON T_BASE T_OPEN_PARENNTHESES argument_list_opt T_CLOSE_PARENNTHESES
  | T_COLON T_THIS T_OPEN_PARENNTHESES argument_list_opt T_CLOSE_PARENNTHESES
  ;
/* Widen from unsafe_opt STATIC to modifiers_opt */
/* This is now subsumed by constructor_declaration - delete
 * static_constructor_declaration
 *  : attributes_opt modifiers_opt T_IDENTIFIER T_OPEN_PARENNTHESES T_CLOSE_PARENNTHESES block
 *  ;
 */
/* No longer needed after modification of static_constructor_declaration
 * unsafe_opt
 * : 
 * | T_UNSAFE
 * ;
 */
/* Widen from unsafe_opt to modifiers_opt */
destructor_declaration
  : attributes_opt modifiers_opt T_TILDE T_IDENTIFIER T_OPEN_PARENNTHESES T_CLOSE_PARENNTHESES block
  ;
operator_body
  : block
  | T_SEMICOLON
  ;
constructor_body /*** Added by JP - same as method_body ***/
  : block
  | T_SEMICOLON
  ;
struct_bod
: struct_body
| /*nothing*/ { errorRec.errQ->enqueue($<r.myLineNo>-1,$<r.myColNo>-1,"type error expected no struct body ","");}
;
IDENTIFIER
: T_IDENTIFIER
| T_NOT_IDENTIFIER { errorRec.errQ->enqueue($<r.myLineNo>1,$<r.myColNo>1,"type error expected not id ","");}
| T_LITERAL_DOUBLE{errorRec.errQ->enqueue($<r.myLineNo>1,$<r.myColNo>1,"error not identifier (T_INTEGER) ","");}
| T_LITERAL_FLOAT{errorRec.errQ->enqueue($<r.myLineNo>1,$<r.myColNo>1,"error not identifier (T_INTEGER) ","");}
| T_LITERAL_INTEGER {errorRec.errQ->enqueue($<r.myLineNo>1,$<r.myColNo>1,"error not identifier (T_INTEGER) ","");}
;
struct_declaration
  : attributes_opt modifiers_opt T_STRUCT IDENTIFIER struct_interfaces_opt struct_bod comma_opt
  ;
/***** C.2.7 Structs *****/
struct_interfaces_opt
  : /* Nothing */
  | struct_interfaces
  ;
struct_interfaces
  : T_COLON interface_type_list
  | T_COLON qualified_identifier
  ;
struct_body
  : T_OPEN_BRACKETS struct_member_declarations_opt T_CLOSE_BRACKETS
  ;
struct_member_declarations_opt
  : /* Nothing */
  | struct_member_declarations
  ;
struct_member_declarations
  : struct_member_declaration
  | struct_member_declarations struct_member_declaration
  ;
struct_member_declaration
  : constant_declaration
  | field_declaration
  | method_declaration
  | property_declaration
  | event_declaration
  | indexer_declaration
  | operator_declaration
  | constructor_declaration
/*  | static_constructor_declaration */
  | type_declaration
  ;

/***** C.2.8 Arrays *****/
array_initializer
  : T_OPEN_BRACKETS variable_initializer_list_opt T_CLOSE_BRACKETS
  | T_OPEN_BRACKETS variable_initializer_list T_COMMA T_CLOSE_BRACKETS
  
  ;
variable_initializer_list_opt
  : /* Nothing */
  | variable_initializer_list
  ;
variable_initializer_list
  : variable_initializer
  | variable_initializer_list T_COMMA variable_initializer
  ;

/***** C.2.9 Interfaces *****/
interface_declaration
  : attributes_opt modifiers_opt T_INTERFACE T_IDENTIFIER interface_base_opt interface_body comma_opt { cout << "FINISHED INTERFACE WITH NO EERRORS." << endl }
  ;
interface_base_opt
  : /* Nothing */
  | interface_base { cout << "\t\t Added interface base\n"; }
  ;
interface_base
  : T_COLON interface_type_list
  | T_COLON qualified_identifier
  ;
interface_body
  : T_OPEN_BRACKETS interface_member_declarations_opt T_CLOSE_BRACKETS { cout << "\t\t Added interface body"; }
  ;
interface_member_declarations_opt
  : /* Nothing */
  | interface_member_declarations
  ;
interface_member_declarations
  : interface_member_declaration
  | interface_member_declarations interface_member_declaration
  ;
interface_member_declaration
  : interface_method_declaration
  | interface_property_declaration
  | interface_event_declaration
  | interface_indexer_declaration
  ;
/* inline return_type to avoid conflict with interface_property_declaration */
interface_method_declaration
  : attributes_opt new_opt type T_IDENTIFIER T_OPEN_PARENNTHESES formal_parameter_list_opt T_CLOSE_PARENNTHESES interface_empty_body
  | attributes_opt new_opt T_VOID T_IDENTIFIER T_OPEN_PARENNTHESES formal_parameter_list_opt T_CLOSE_PARENNTHESES interface_empty_body
  ;
new_opt
  : /* Nothing */
  | T_NEW
  ;
interface_property_declaration
  : attributes_opt new_opt type T_IDENTIFIER 
      ENTER_getset
    T_OPEN_BRACKETS interface_accessors T_CLOSE_BRACKETS
      EXIT_getset
  ;
interface_indexer_declaration
  : attributes_opt new_opt type T_THIS 
    T_OPEN_ARRAY formal_parameter_list T_CLOSE_ARRAY 
      ENTER_getset
    T_OPEN_BRACKETS interface_accessors T_CLOSE_BRACKETS
      EXIT_getset
  ;

interface_accessors
  : attributes_opt T_GET interface_empty_body
  | attributes_opt T_SET interface_empty_body
  | attributes_opt T_GET interface_empty_body attributes_opt T_SET interface_empty_body
  | attributes_opt T_SET interface_empty_body attributes_opt T_GET interface_empty_body
  ;
interface_event_declaration
  : attributes_opt new_opt T_EVENT type T_IDENTIFIER interface_empty_body
  ;

/* mono seems to allow this */
interface_empty_body
  : T_SEMICOLON
  | T_OPEN_BRACKETS T_CLOSE_BRACKETS
  ;

/***** C.2.10 Enums *****/
enum_declaration
  : attributes_opt modifiers_opt T_ENUM T_IDENTIFIER enum_base_opt enum_body comma_opt
  ;
enum_base_opt
  : /* Nothing */
  | enum_base
  ;
enum_base
  : T_COLON integral_type
  ;
enum_body
  : T_OPEN_BRACKETS enum_member_declarations_opt T_CLOSE_BRACKETS
  | T_OPEN_BRACKETS enum_member_declarations T_COMMA T_CLOSE_BRACKETS
  ;
enum_member_declarations_opt
  : /* Nothing */
  | enum_member_declarations
  ;
enum_member_declarations
  : enum_member_declaration
  | enum_member_declarations T_COMMA enum_member_declaration
  ;
enum_member_declaration
  : attributes_opt T_IDENTIFIER
  | attributes_opt T_IDENTIFIER T_EQUAL constant_expression
  ;

/***** C.2.11 Delegates *****/
delegate_declaration
  : attributes_opt modifiers_opt T_DELEGATE return_type T_IDENTIFIER T_OPEN_PARENNTHESES formal_parameter_list_opt T_CLOSE_PARENNTHESES T_SEMICOLON
  | attributes_opt modifiers_opt T_DELEGATE qualified_identifier T_IDENTIFIER T_OPEN_PARENNTHESES formal_parameter_list_opt T_CLOSE_PARENNTHESES T_SEMICOLON
  ;

/***** C.2.12 Attributes *****/
attributes
  : attribute_sections
  ;
attribute_sections
  : attribute_section {cout << "\t\t added attribute\n";}
  | attribute_sections attribute_section
  ;
attribute_section
  : ENTER_attrib T_OPEN_ARRAY attribute_target_specifier_opt attribute_list T_CLOSE_ARRAY EXIT_attrib
  | ENTER_attrib T_OPEN_ARRAY attribute_target_specifier_opt attribute_list T_COMMA T_CLOSE_ARRAY EXIT_attrib
  ;
attribute_target_specifier_opt
  : /* Nothing */
  | attribute_target_specifier
  ;
attribute_target_specifier
  : attribute_target T_COLON
  ;
attribute_target
  : T_ASSEMBLY
  | T_FIELD
  | T_EVENT
  | T_METHOD
  | T_MODULE
  | T_PARAM
  | T_PROPERTY
  | T_RETURN
  | T_TYPE
  ;
attribute_list
  : attribute
  | attribute_list T_COMMA attribute
  ;
attribute
//  : attribute_name attribute_arguments_opt
    : qualified_identifier attribute_arguments_opt
  ;
attribute_arguments_opt
  : /* Nothing */
  | attribute_arguments
  ;
/*
attribute_name
  : qualified_identifier
  : type_name   
  ;
*/
attribute_arguments
  : T_OPEN_PARENNTHESES expression_list_opt T_CLOSE_PARENNTHESES
  ;



/** Dummy rules for those context-sensitive "keywords" **/
ENTER_attrib 
  : { 
		//lex_enter_attrib();
    }
  ;
EXIT_attrib 
  : {
		//lex_exit_attrib();
	}
  ;
ENTER_accessor_decl 
  : {
		//lex_enter_accessor();
    }
  ;
EXIT_accessor_decl
  : {
		//lex_exit_accessor();
	}
  ;
ENTER_getset
  : {
		//lex_enter_getset();
	}
  ;
EXIT_getset
  : { 
		//lex_exit_getset();
	}
  ;


%%

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
	yydebug = 1;
	if(!freopen("C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\in.cs", "r", stdin)) {
		cout << "cant't open input file!" << endl;
	}

	if(!freopen("C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\out.txt", "w", stdout)) {
		cout << "can't open output file!" << endl;
	} 
   
	Parser* p = new Parser();
	p->parse();

	fclose(stdout);
	fclose(stdin);
	//fclose(stderr);
	
	errorRec.printErrQueue();
}
