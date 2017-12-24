#include "SymbolTable.h"
#include <iostream>

/*Access_Modifier*/
Access_Modifier::Access_Modifier() {
	isPublic = false;
	isProtected = false;
	isPrivate = false;
	col = 0;
	row = 0;
}

void Access_Modifier::set_row(int row){
	this->row = row;
}

void Access_Modifier::set_col(int col){
	this->col = col;
}

void Access_Modifier::set_public(bool isPublic) {
	this->isPublic = isPublic;
}

void Access_Modifier::set_protected(bool isProtected) {
	this->isProtected = isProtected;
}

void Access_Modifier::set_private(bool isPrivate) {
	this->isPrivate = isPrivate;
}

bool Access_Modifier::get_public() {
	return this->isPublic;
}

bool Access_Modifier::get_protected() {
	return this->isProtected;
}

bool Access_Modifier::get_private() {
	return this->isPrivate;
}

int Access_Modifier::get_row(){
	return this->col;
}

int Access_Modifier::get_col(){
	return this->col;
}

std::ostream& operator<<(std::ostream& os, Access_Modifier* obj) {
	 
	char* ac = "";
	if (obj->get_public())
		ac = "PUBLIC";
	else if (obj->get_protected())
		ac = "PROTECTED";
	else if (obj->get_private())
		ac = "PRIVATE";
	os << ac;
	return os;
}

/*void Access_Modifier::print_access_modifier() {
	if (this->isPublic)
		std::cout << "Access_Modifier is: PUBLIC";
	else if (this->isProtected)
		std::cout << "Access_Modifier is: PROTECTED";
	else
		std::cout << "Access_Modifier is: PRIVATE";
}*/

/*Data_Storage*/
Data_Storage::Data_Storage() {
	this->isStatic = false;
	this->isFinal = false;
	col = 0;
	row = 0;
}

void Data_Storage::set_row(int row){
	this->row = row;
}

void Data_Storage::set_col(int col){
	this->col = col;
}

void Data_Storage::set_static(bool isStatic) {
	this->isStatic = isStatic;
}

void Data_Storage::set_final(bool isFinal) {
	this->isFinal = isFinal;
}

bool Data_Storage::get_static() {
	return isStatic;
}

bool Data_Storage::get_final() {
	return isFinal;
}

int Data_Storage::get_row(){
	return this->col;
}

int Data_Storage::get_col(){
	return this->col;
}

std::ostream& operator<<(std::ostream& os, Data_Storage* obj) {
	 
	char* ac = "";
	if (obj->get_static())
		ac = "static";
	if (obj->get_final())
		ac = "sealed";
	os << ac;
	return os;
}

/*void Data_Storage::print_data_storage() {
	if (this->isStatic)
		std::cout << "Data_Storage is: STATIC";
	else
		std::cout << "Data_Storage is: FINAL";
}*/

/*Data_Modifier*/
Data_Modifier::Data_Modifier() {
	this->access_modifier = new Access_Modifier();
	this->data_storage = new Data_Storage();
}

Data_Modifier::Data_Modifier(Access_Modifier* am, Data_Storage* ds) {
	this->access_modifier = am;
	this->data_storage = ds;
}


void Data_Modifier::set_access_modifier(Access_Modifier* am) {
	this->access_modifier = am;
}

void Data_Modifier::set_data_storage(Data_Storage* ds) {
	this->data_storage= ds;
}

Access_Modifier* Data_Modifier::get_access_modifier() {
	return this->access_modifier;
}

Data_Storage* Data_Modifier::get_data_storage() {
	return this->data_storage;
}

std::ostream& operator<<(std::ostream& os, Data_Modifier* obj) {
	 os << obj->get_data_storage() << obj->get_access_modifier();
	return os;
}

/*Local_Variable*/
Local_Variable::Local_Variable() {
	this->local_variable_name = new char[255];
	col = 0;
	row = 0;
}

void Local_Variable::set_row(int row){
	this->row = row;
}

void Local_Variable::set_col(int col){
	this->col = col;
}

void Local_Variable::set_local_variable_name(char* name) {
	this->local_variable_name = name;
}

void Local_Variable::set_local_variable_val(void* val) {
	this->local_variable_val = val;
}

char* Local_Variable::get_local_variable_name() {
	return this->local_variable_name;
}

void* Local_Variable::get_local_variable_val() {
	return this->local_variable_val;
}

int Local_Variable::get_row(){
	return this->col;
}

int Local_Variable::get_col(){
	return this->col;
}

std::ostream& operator<<(std::ostream& os, Local_Variable* obj) {
	os << "The Local_Variable name is: " << obj->get_local_variable_name();
	return os;
}

/*void Local_Variable::print_local_variable() {
	std::cout << "The Local_Variable name is: " << this->get_local_variable_name() << "\n\t val is: " << this->get_local_variable_val();
}*/

/*Parameter*/
Parameter::Parameter() {
	this->param_name = new char[225];
	this->Next_Param = nullptr;
	this->virtal = new bool();
	col = 0;
	row = 0;
}

void Parameter::set_row(int row){
	this->row = row;
}

void Parameter::set_col(int col){
	this->col = col;
}

void Parameter::set_param_name(char* name) {
	this->param_name = name;
}

void Parameter::set_param_val(void* val) {
	this->param_val = val;
}

void Parameter::set_param_num(int number) {
	this->numb = number;
}

void Parameter::set_param_virtal(bool virtal){
	this->virtal = virtal;
}

void Parameter::set_next_param(Parameter* next) {
	this->Next_Param = next;
}

char* Parameter::get_param_name() {
	return this->param_name;
}

void* Parameter::get_param_val() {
	return this->param_val;
}

int Parameter::get_param_num() {
	return this->numb;
}

bool Parameter::get_param_virtal(){
	return this->virtal;
}

Parameter* Parameter::get_next_param() {
	return this->Next_Param;
}

int Parameter::get_row(){
	return this->col;
}

int Parameter::get_col(){
	return this->col;
}

std::ostream& operator<<(std::ostream& os, Parameter* obj) {
	os << "The Parameter name is: " << obj->get_param_name();
	if (obj->get_param_virtal())
		os << " this is virtual Parameter ";
	else
		os << " this is not virtual Parameter ";
	return os;
}

/*void Parameter::print_parameter() {
	std::cout << "The Parameter name is: " << this->get_param_name() << "\n\t val is: " << this->get_param_val() << "\n\t num is: " << this->get_param_num();
}*/

/*List_Parameters*/
List_Parameters::List_Parameters() {
	this->Current_Param = NULL;
	this->Root_Param = new Parameter();
}

void List_Parameters::set_current_param(Parameter* current) {
	this->Current_Param = current;
}

void List_Parameters::set_root_param(Parameter* root) {
	this->Root_Param = root;
}

Parameter* List_Parameters::get_current_param() {
	return this->Current_Param;
}

Parameter* List_Parameters::get_root_param() {
	return this->Root_Param;
}

std::ostream& operator<<(std::ostream& os, List_Parameters* obj) {
	os << "\n List_Parameters : \n";
	Parameter* p = obj->get_root_param();
	while (p)
	{
		os << p << "\n";
		p = p->get_next_param();
	}
	return os;
}

/*void List_Parameters::print_param_list() {
	std::cout << "List_Parameters Current_Param is: ";
	Current_Param->print_parameter();
	std::cout << "\nList_Parameters Root_Param is: ";
	Root_Param->print_parameter();
}*/

/*Block_Scope*/
Block_Scope::Block_Scope() {
	this->map = new MyMap();
	this->Parent_Scope = nullptr;
	this->Owner_Type = nullptr;
	this->type = 0;
}

void Block_Scope::set_type(int type) {
	this->type = type;
}

int Block_Scope::get_type() {
	return this->type;
}

void Block_Scope::set_map(MyMap* map) {
	this->map = map;
}

void Block_Scope::set_parent_scope(Block_Scope* parent) {
	this->Parent_Scope = parent;
}

void Block_Scope::set_owner_type(void* owner) {
	this->Owner_Type = owner;
}

MyMap* Block_Scope::get_map() {
	return this->map;
}

Block_Scope* Block_Scope::get_parent_scope() {
	return this->Parent_Scope;
}

void* Block_Scope::get_owner_type() {
	return this->Owner_Type;
}

std::ostream& operator<<(std::ostream& os, Block_Scope* obj) {
	os << "\n List_Blockscope : \n";
	int type = obj->get_type();
	char * name;
	if (type == 1)
		name = "class";
	else if (type == 2)
		name = "function";
	else if (type == 3)
		name = "local var";
	else if (type == 4)
		name = "data member";
	else if (type == 5)
		name = "for";
	else if (type == 6)
		name = "while";
	else if (type == 7)
		name = "switch";
	else if (type == 8)
		name = "empty block";
	else if (type == 9)
		name = "foreach";
	else if (type == 10)
		name = "if";
	cout << "the type of Block scope is :" << name << endl;
	return os;
}

/*Function*/
Function::Function() {
	this->Function_Name = new char[225];
	this->Scope = new Block_Scope();
	this->Function_Params = new List_Parameters();
	this->Function_Data_Modifier = new Data_Modifier();
	this->is_constractor = false;
	this->get_function_scope()->set_type(2);
	col = 0;
	row = 0;
}

void Function::set_row(int row){
	this->row = row;
}

void Function::set_col(int col){
	this->col = col;
}

void Function::set_function_name(char* name) {
	this->Function_Name = name;
}

void Function::set_function_scope(Block_Scope* scope) {
	this->Scope = scope;
}

void Function::set_function_parameters(List_Parameters* list_params) {
	this->Function_Params = list_params;
}

void Function::set_function_data_modifier(Data_Modifier* dm) {
	this->Function_Data_Modifier = dm;
}

void Function::set_is_constractor(bool is_constractor) {
	this->is_constractor = is_constractor;
}

char* Function::get_function_name() {
	return this->Function_Name;
}

Block_Scope* Function::get_function_scope() {
	return this->Scope;
}

List_Parameters* Function::get_function_parameters() {
	return this->Function_Params;
}

Data_Modifier* Function::get_function_data_midufuer() {
	return this->Function_Data_Modifier;
}

bool Function::get_is_constractor() {
	return this->is_constractor;
}

int Function::get_row(){
	return this->col;
}

int Function::get_col(){
	return this->col;
}

std::ostream& operator<<(std::ostream& os, Function* obj) {
	if (obj->get_function_name())
		os << "Function Name is: " << obj->get_function_name();
	if (obj->get_function_parameters() != NULL)
	if (obj->get_function_parameters()->get_current_param() != NULL)
		os << obj->get_function_parameters();
	if (obj->get_function_data_midufuer())
		//os << "\n Modifier is: " << obj->get_function_data_midufuer();
	if (obj->get_is_constractor())
		os << "\n is constractor";
	return os;

}

/*void Function::print_function() {
	std::cout << "Function Name is: " << this->get_function_name() << "\n\tParams is: ";
	Function_Params->print_param_list();
	std::cout << "\n\t Modifier is: ";
	Function_Data_Modifier->
}*/

/*FunctionList*/
FunctionList::FunctionList() {
	this->function = new Function();
	this->Next_Function = new FunctionList();
	this->Root_Function = new FunctionList();
	this->Current_Function = new FunctionList();
	this->Owner_Scope = new Block_Scope();
}

void FunctionList::set_function(Function* function) {
	this->function = function;
}

void FunctionList::set_next_function(FunctionList* next) {
	this->Next_Function = next;
}

void FunctionList::set_root_function(FunctionList* root) {
	this->Root_Function = root;
}

void FunctionList::set_current_function(FunctionList* current) {
	this->Current_Function = current;
}

void FunctionList::set_length(int length) {
	this->lenght = lenght;
}

void FunctionList::set_owner_scope(Block_Scope* scope) {
	this->Owner_Scope = scope;
}

Function* FunctionList::get_function() {
	return this->function;
}

FunctionList* FunctionList::get_next_function() {
	return this->Next_Function;
}

FunctionList* FunctionList::get_root_function() {
	return this->Root_Function;
}

FunctionList* FunctionList::get_current_function() {
	return this->Current_Function;
}

int FunctionList::get_length() {
	return this->lenght;
}

Block_Scope* FunctionList::get_owner_scope() {
	return this->Owner_Scope;
}

FunctionList* FunctionList::add_function_to_list(FunctionList* list, Function* function, Block_Scope* scope) {
	//TODO:HOW_TO_ADD_THE_FUNCTION_TO_THE_LIST
	return new FunctionList();
}

/*Data_Member*/
Data_Member::Data_Member() {
	this->Data_Member_Name = new char[225];
	this->Data_Member_Modifier = new Data_Modifier();
	col = 0;
	row = 0;
}

void Data_Member::set_row(int row){
	this->row = row;
}

void Data_Member::set_col(int col){
	this->col = col;
}

void Data_Member::set_data_member_name(char* name) {
	this->Data_Member_Name = name;
}

void Data_Member::set_data_member_modifier(Data_Modifier* dm) {
	this->Data_Member_Modifier = dm;
}

char* Data_Member::get_data_member_name() {
	return this->Data_Member_Name;
}

Data_Modifier* Data_Member::get_data_member_modifier() {
	return this->Data_Member_Modifier;
}

int Data_Member::get_row(){
	return this->col;
}

int Data_Member::get_col(){
	return this->col;
}

std::ostream& operator<<(std::ostream& os, Data_Member* obj) {
	if (obj->get_data_member_name())
		os << "Data_Member Name is: " << obj->get_data_member_name();
	return os;
}

/*void Data_Member::print_data_member(){
	std::cout << "Data_Member Name is: " << this->Data_Member_Name;
}*/

/*Class*/
Class::Class() {
	this->Class_Name = new char[225];
	this->Class_Data_Modifier = new Data_Modifier();
	this->Class_Scope = new Block_Scope();
	this->isInner = false;
	this->hasConstructor = false;
	this->List_of_Inheritance = new InheritanceList();
	this->Class_Scope->set_type(1);
	col = 0;
	row = 0;
}

void Class::set_row(int row){
	this->row = row;
}

void Class::set_col(int col){
	this->col = col;
}

void Class::set_class_name(char* name) {
	this->Class_Name = name;
}

void Class::set_class_data_modifier(Data_Modifier* dm) {
	this->Class_Data_Modifier = dm;
}

void Class::set_class_scope(Block_Scope* scope) {
	this->Class_Scope = scope;
}

void Class::set_is_inner(bool isInner) {
	this->isInner = isInner;
}

void Class::set_has_constructor(bool hasConstructor) {
	this->hasConstructor = hasConstructor;
}

void Class::set_is_interface(bool isInterface) {
	this->isInterface = isInterface;
}

void Class::set_inheritance_list(InheritanceList* list) {
	this->List_of_Inheritance = list;
}

char* Class::get_class_name() {
	return this->Class_Name;
}

Data_Modifier* Class::get_class_data_modifier() {
	return this->Class_Data_Modifier;
}

Block_Scope* Class::get_class_scope() {
	return this->Class_Scope;
}

bool Class::get_is_inner() {
	return this->isInner;
}

bool Class::get_has_constructor() {
	return this->hasConstructor;
}

bool Class::get_is_interface() {
	return this->isInterface;
}

InheritanceList* Class::get_list_of_inheritance() {
	return this->List_of_Inheritance;
}

int Class::get_row(){
	return this->col;
}

int Class::get_col(){
	return this->col;
}

std::ostream& operator<<(std::ostream& os, Class* obj) {
	if (!obj->get_is_interface()) {
		os << "Class Name :" << obj->get_class_name() << "\n";
		os << obj->get_class_data_modifier() << endl;
		if (obj->get_list_of_inheritance())
			os << obj->get_list_of_inheritance();
		if (obj->get_is_inner())
			os << "inner Class \n";
	}
	else {
		os << "Interface Name :" << obj->get_class_name() << "\n";
		os << obj->get_class_data_modifier() << endl;
		if (obj->get_list_of_inheritance())
			os << obj->get_list_of_inheritance();
		if (obj->get_is_inner())
			os << "inner Interface \n";
	}
	return os;
}

/*InheritanceList*/
InheritanceList::InheritanceList() {
	this->Parent_Name = new char[225];
	this->parent = nullptr;
	this->Next_Parent = nullptr;
	this->Root_Parent = nullptr;
	this->Current_Parent = nullptr;
	this->col = 0;
	this->row = 0;
}

void InheritanceList::set_row(int row){
	this->row = row;
}

void InheritanceList::set_col(int col){
	this->col = col;
}

void InheritanceList::set_parent(Class* parent) {
	this->parent = parent;
}

void InheritanceList::set_parent_name(char* name) {
	this->Parent_Name = name;
}

void InheritanceList::set_next_parent(InheritanceList* next) {
	this->Next_Parent = next;
}

void InheritanceList::set_root_parent(InheritanceList* root) {
	this->Root_Parent = root;
}

void InheritanceList::set_current_parent(InheritanceList* current) {
	this->Current_Parent = current;
}

Class* InheritanceList::get_parent() {
	return this->parent;
}

char* InheritanceList::get_parent_name() {
	return this->Parent_Name;
}

InheritanceList* InheritanceList::get_next_parent() {
	return this->Next_Parent;
}

InheritanceList* InheritanceList::get_root_parent() {
	return this->Root_Parent;
}

InheritanceList* InheritanceList::get_current_parent() {
	return this->Current_Parent;
}

bool InheritanceList::search_for_parent_in_list_of_parent(char* parentName) {
	this->set_current_parent(this->get_root_parent());
	while (this->get_current_parent()) {
		if (strcmp(parentName, this->get_current_parent()->get_parent_name())) {
			return true;
		}
		this->set_current_parent(this->get_current_parent()->get_next_parent());
	}
	return false;
}

int InheritanceList::get_row(){
	return this->col;
}

int InheritanceList::get_col(){
	return this->col;
}

std::ostream& operator<<(std::ostream& os, InheritanceList* obj) {
	InheritanceList* g = new InheritanceList();
	g = (obj->get_root_parent());
	while (g) {
		os << " the name " << g->get_parent_name();
		g = g->get_next_parent();
	}
	return os;
}

/*SymbolTable*/
SymbolTable::SymbolTable() {
	this->Root_Scope = new Block_Scope();
	this->Current_Scope = this->Root_Scope;
}

void SymbolTable::set_current_scope(Block_Scope* current) {
	this->Current_Scope = current;
}

void SymbolTable::set_root_scope(Block_Scope* root) {
	this->Root_Scope = root;
}

Block_Scope* SymbolTable::get_current_scope() {
	return this->Current_Scope;
}

Block_Scope* SymbolTable::get_root_scope() {
	return this->Root_Scope;
}

void SymbolTable::add_class_to_current_scope(Class* clas) {
	this->get_current_scope()->get_map()->put_element_in_map_array(clas->get_class_name(), clas, 1);
}

void SymbolTable::add_function_to_current_scope(Function* func) {
	this->get_current_scope()->get_map()->put_element_in_map_array(func->get_function_name(), func, 2);
}

void SymbolTable::add_data_member_to_current_scope(Data_Member* dm) {
	this->get_current_scope()->get_map()->put_element_in_map_array(dm->get_data_member_name(), dm, 3);
}

void SymbolTable::add_local_variable_to_current_scope(Local_Variable* lv) {
	this->get_current_scope()->get_map()->put_element_in_map_array(lv->get_local_variable_name(), lv, 4);
}

void SymbolTable::add_parameter_to_list(Parameter* param, List_Parameters* list) {
	//TODO:HOW_TO_ADD_PARAMETER_TO_LIST
	Parameter* curr = new Parameter();
	curr = list->get_root_param();
	while (curr->get_next_param() != nullptr) {
		curr->set_next_param(curr);
	}
	curr->set_next_param(param);
}

void SymbolTable::add_scope_to_current_scope(Block_Scope *bs, int type){
	char * name;
	if (type == 1)
		name = "class";
	else if (type == 2)
		name = "function";
	else if (type == 3)
		name = "local var";
	else if (type == 4)
		name = "data member";
	else if (type == 5)
		name = "for";
	else if (type == 6)
		name = "while";
	else if (type == 7)
		name = "switch";
	else if (type == 8)
		name = "empty block";
	else if (type == 9)
		name = "foreach";
	else if (type == 10)
		name = "if";
	this->get_current_scope()->get_map()->put_element_in_map_array(name, bs, type);
}

FunctionList* SymbolTable::check_for_main_function(Function* func, FunctionList*& list, Block_Scope* scope) {
	//TODO:HOW_TO_CHECK_FOR_MAIN_FUNCTION
	return new FunctionList();
}

/*
void SymbolTable::print_symbol_table(Block_Scope*) {

}*/
