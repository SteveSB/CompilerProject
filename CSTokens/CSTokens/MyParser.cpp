#include "MyParser.h"
#include <iostream>

MyParser::MyParser() {
	this->Symbol_Table = new SymbolTable();
	this->Error_Recovery = new ErrorRecovery();
}

Class* MyParser::create_class(char* clasName, InheritanceList* list_of_parent) {
	Class* clas = new Class();
	clas->set_class_name(clasName);
/*	if () {

	}
	else {*/
	clas->set_class_scope(this->Symbol_Table->get_current_scope());
	//clas->set
	clas->set_inheritance_list(list_of_parent);
	return this->start_class_declaration(clas);
//	}
}

Class* MyParser::start_class_declaration(Class* clas) {
	clas->get_class_scope()->set_parent_scope(this->Symbol_Table->get_current_scope());
	clas->get_class_scope()->set_owner_type(clas);
	this->Symbol_Table->set_current_scope(clas->get_class_scope());
	return clas;
}

Class* MyParser::finish_class_declaration(Class* clas, Access_Modifier* am, Data_Storage* ds) {
	if (clas) {
		if (am)
			clas->get_class_data_modifier()->set_access_modifier(am);
		else
			clas->get_class_data_modifier()->get_access_modifier()->set_private(true);
		if (ds)
			clas->get_class_data_modifier()->set_data_storage(ds);

		this->Symbol_Table->set_current_scope(this->Symbol_Table->get_current_scope()->get_parent_scope());
	}
	return clas;
}

Data_Member* MyParser::create_data_member(Data_Member*) {
	return new Data_Member();
}

Data_Member* MyParser::name_am_ds_val_of_data_member(char*, Access_Modifier*, Data_Storage*) {
	return new Data_Member();
}

Function* MyParser::create_function(char*, List_Parameters*, Access_Modifier*, Data_Storage*) {
	return new Function();
}

Function* MyParser::start_function_declaration(Function*) {
	return new Function();
}

Function* MyParser::finish_function_declaration(Function*, bool) {
	return new Function();
}

Local_Variable* MyParser::create_local_variable(Data_Member*) {
	return new Local_Variable();
}

Access_Modifier* MyParser::set_access_modifier(int) {
	return new Access_Modifier();
}

Data_Storage* MyParser::set_data_storage(int, Data_Storage*) {
	return new Data_Storage();
}

List_Parameters* MyParser::add_parameters(char*, List_Parameters*) {
	return new List_Parameters();
}
