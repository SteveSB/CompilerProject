#define _My_Parser_
#include "SymbolTable.h"
#include "C:\\Users\\CEC\\Documents\\Visual Studio 2013\\Projects\\CSTokens\\ErrorRecovery.h"

class MyParser {
public:
	SymbolTable* Symbol_Table;
	ErrorRecovery* Error_Recovery;
	MyParser();
	Class* create_class(char*, InheritanceList*);//add colNo & LineNo
	Class* start_class_declaration(Class*);
	Class* finish_class_declaration(Class*, Access_Modifier*, Data_Storage*);
	Data_Member* create_data_member(Data_Member*);//add colNo & LineNo
	Data_Member* name_am_ds_val_of_data_member(char*, Access_Modifier*, Data_Storage*);
	Function* create_function(char*, List_Parameters*, Access_Modifier*, Data_Storage*);//add colNo & LineNo
	Function* start_function_declaration(Function*);
	Function* finish_function_declaration(Function*, bool);
	Local_Variable* create_local_variable(Data_Member*);//add colNo & LineNo
	Access_Modifier* set_access_modifier(int);
	Data_Storage* set_data_storage(int);//add colNo & LineNo
	List_Parameters* add_parameters(char*, List_Parameters*);//add colNo & LineNo
};