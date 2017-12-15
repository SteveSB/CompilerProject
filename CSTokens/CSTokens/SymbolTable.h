#include "MyMap.h"
#include <iostream>

using namespace std;
class Access_Modifier {
	friend std::ostream& operator<<(std::ostream& os, Access_Modifier* obj);
private:
	bool isPublic;
	bool isProtected;
	bool isPrivate;
public:
	Access_Modifier();
	void set_public(bool);
	void set_protected(bool);
	void set_private(bool);
	bool get_public();
	bool get_protected();
	bool get_private();
	//void print_access_modifier();
};

class Data_Storage {
	friend std::ostream& operator<<(std::ostream& os, Data_Storage* obj);
private:
	bool isStatic;
public:
	Data_Storage();
	void set_static(bool);
	bool get_static();
	//void print_data_storage();
};

class Data_Modifier {
	friend std::ostream& operator<<(std::ostream& os, Data_Modifier* obj);
private:
	Access_Modifier* access_modifier;
	Data_Storage* data_storage;
public:
	Data_Modifier();
	Data_Modifier(Access_Modifier*, Data_Storage*);
	void set_access_modifier(Access_Modifier*);
	void set_data_storage(Data_Storage*);
	Access_Modifier* get_access_modifier();
	Data_Storage* get_data_storage();
};

class Local_Variable {
	friend std::ostream& operator<<(std::ostream& os, Local_Variable* obj);
private:
	char* local_variable_name;
	void* local_variable_val;
public:
	Local_Variable();
	void set_local_variable_name(char*);
	void set_local_variable_val(void*);
	char* get_local_variable_name();
	void* get_local_variable_val();
	//void print_local_variable();
};

class Parameter {
	friend std::ostream& operator<<(std::ostream& os, Local_Variable* obj);
private:
	char* param_name;
	void* param_val;
	int numb;
	Parameter* Next_Param;
public:
	Parameter();
	void set_param_name(char*);
	void set_param_val(void*);
	void set_param_num(int);
	void set_next_param(Parameter*);
	char* get_param_name();
	void* get_param_val();
	int get_param_num();
	Parameter* get_next_param();
	//void print_parameter();
};

class List_Parameters {
	friend std::ostream& operator<<(std::ostream& os, List_Parameters* obj);
private:
	Parameter* Current_Param;
	Parameter* Root_Param;
public:
	List_Parameters();
	void set_current_param(Parameter*);
	void set_root_param(Parameter*);
	Parameter* get_current_param();
	Parameter* get_root_param();
	//void print_param_list();
};

class Block_Scope {
	friend std::ostream& operator<<(std::ostream& os, Block_Scope* obj);
private:
	MyMap* map;
	Block_Scope* Parent_Scope;
	void* Owner_Type;
public:
	Block_Scope();
	void set_map(MyMap*);
	void set_parent_scope(Block_Scope*);
	void set_owner_type(void*);
	MyMap* get_map();
	Block_Scope* get_parent_scope();
	void* get_owner_type();
};

class Function {
	friend std::ostream& operator<<(std::ostream& os, Function* obj);
private:
	char* Function_Name;
	Block_Scope* Scope;
	List_Parameters* Function_Params;
	Data_Modifier* Function_Data_Modifier;
	bool is_constractor;
public:
	Function();
	void set_function_name(char*);
	void set_function_scope(Block_Scope*);
	void set_function_parameters(List_Parameters*);
	void set_function_data_modifier(Data_Modifier*);
	void set_is_constractor(bool);
	char* get_function_name();
	Block_Scope* get_function_scope();
	List_Parameters* get_function_parameters();
	Data_Modifier* get_function_data_midufuer();
	bool get_is_constractor();
	//void print_function();
};

class FunctionList {
	friend std::ostream& operator<<(std::ostream& os, FunctionList* obj);
private:
	Function* function;
	FunctionList* Next_Function;
	FunctionList* Root_Function;
	FunctionList* Current_Function;
	Block_Scope* Owner_Scope;
	int lenght;
public:
	FunctionList();
	void set_function(Function*);
	void set_next_function(FunctionList*);
	void set_root_function(FunctionList*);
	void set_current_function(FunctionList*);
	void set_length(int);
	void set_owner_scope(Block_Scope*);
	Function* get_function();
	FunctionList* get_next_function();
	FunctionList* get_root_function();
	FunctionList* get_current_function();
	int get_length();
	Block_Scope* get_owner_scope();
	FunctionList* add_function_to_list(FunctionList*, Function*, Block_Scope*);
};

class Data_Member {
	friend std::ostream& operator<<(std::ostream& os, Data_Member* obj);
private:
	char* Data_Member_Name;
	Data_Modifier* Data_Member_Modifier;
public:
	Data_Member();
	void set_data_member_name(char*);
	void set_data_member_modifier(Data_Modifier*);
	char* get_data_member_name();
	Data_Modifier* get_data_member_modifier();
	//void print_data_member();
};

class InheritanceList;
class Class {
	friend std::ostream& operator<<(std::ostream& os, Class* obj);
private:
	char* Class_Name;
	Data_Modifier* Class_Data_Modifier;
	Block_Scope* Class_Scope;
	bool isInner;
	InheritanceList* List_of_Inheritance;
public:
	Class();
	void set_class_name(char*);
	void set_class_data_modifier(Data_Modifier*);
	void set_class_scope(Block_Scope*);
	void set_is_inner(bool);
	void set_inheritance_list(InheritanceList*);
	char* get_class_name();
	Data_Modifier* get_class_data_modifier();
	Block_Scope* get_class_scope();
	bool get_is_inner();
	InheritanceList* get_list_of_inheritance();
};

class InheritanceList {
	friend std::ostream& operator<<(std::ostream& os, InheritanceList* obj);
	friend class Class;
private:
	Class* parent;
	char* Parent_Name;
	InheritanceList* Next_Parent;
	InheritanceList* Root_Parent;
	InheritanceList* Current_Parent;
public:
	InheritanceList();
	void set_parent(Class*);
	void set_parent_name(char*);
	void set_next_parent(InheritanceList*);
	void set_root_parent(InheritanceList*);
	void set_current_parent(InheritanceList*);
	Class* get_parent();
	char* get_parent_name();
	InheritanceList* get_next_parent();
	InheritanceList* get_root_parent();
	InheritanceList* get_current_parent();
	bool search_for_parent_in_list_of_parent(char*);
	//void print_list_of_parent();
};

class SymbolTable {
	friend std::ostream& operator<<(std::ostream& os, SymbolTable* obj);
private:
	Block_Scope* Current_Scope;
	Block_Scope* Root_Scope;
public:
	SymbolTable();
	void set_current_scope(Block_Scope*);
	void set_root_scope(Block_Scope*);
	Block_Scope* get_current_scope();
	Block_Scope* get_root_scope();
	void add_data_member_to_current_scope(Data_Member*);
	void add_class_to_current_scope(Class*);
	void add_function_to_current_scope(Function*);
	void add_local_variable_to_current_scope(Local_Variable*);
	void add_parameter_to_list(Parameter*, List_Parameters*);
	FunctionList* check_for_main_function(Function*, FunctionList*&, Block_Scope*);
	//void print_symbol_table(Block_Scope*);
};
