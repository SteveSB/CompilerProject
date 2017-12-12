#include "MyParser.h"
#include <iostream>

MyParser::MyParser() {
	this->Symbol_Table = new SymbolTable();
	this->Error_Recovery = new ErrorRecovery();
}

Class* MyParser::create_class(char* clasName, InheritanceList* list_of_parent) {
	Class* clas = new Class();
	clas->set_class_name(clasName);
	clas->set_inheritance_list(list_of_parent);
	return this->start_class_declaration(clas);
}

Class* MyParser::start_class_declaration(Class* clas) {
	clas->get_class_scope()->set_parent_scope(this->Symbol_Table->get_current_scope());
	clas->get_class_scope()->set_owner_type(clas);
	this->Symbol_Table->add_class_to_current_scope(clas);
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
		this->Symbol_Table->set_current_scope(clas->get_class_scope()->get_parent_scope());
	}
	return clas;
}

Function* MyParser::create_function(char* funName, List_Parameters* list_of_par, Access_Modifier* data_mod, Data_Storage* dataStro) {
	Function* fun = new Function();
	fun->set_function_name(funName);
	fun->set_function_parameters(list_of_par);
	Data_Modifier* data = new Data_Modifier();
	data->set_access_modifier(data_mod);
	data->set_data_storage(dataStro);
	fun->set_function_data_modifier(data);
	return this->start_function_declaration(fun);
}

Function* MyParser::start_function_declaration(Function* fun) {
	fun->get_function_scope()->set_parent_scope(this->Symbol_Table->get_current_scope());
	fun->get_function_scope()->set_owner_type(fun);
	this->Symbol_Table->add_function_to_current_scope(fun);
	this->Symbol_Table->set_current_scope(fun->get_function_scope());
	return fun;
}

Function* MyParser::finish_function_declaration(Function* fun, bool bo) {
	if (fun)
	{
		//fun->set_is_constractor(bo);
		this->Symbol_Table->set_current_scope(fun->get_function_scope()->get_parent_scope());
	}
	return fun;
}

Data_Member* MyParser::create_data_member(Data_Member*) {
	return new Data_Member();
}

Local_Variable* MyParser::create_local_variable(Data_Member* dataMe) {
	Local_Variable* locVar = new Local_Variable();
	locVar->set_local_variable_name(dataMe->get_data_member_name());
	locVar->set_local_variable_val(NULL);
	return locVar;
}

List_Parameters* MyParser::add_parameters(char* namePar, List_Parameters* listPar) {
	Parameter* p = new Parameter();
	p->set_param_name(namePar);
	listPar->get_current_param()->set_next_param(p);
	listPar->set_current_param(p);
	return listPar;
}

Access_Modifier* MyParser::set_access_modifier(int type) {
	Access_Modifier* am = new Access_Modifier();
	if (type == 1)
	{
		am->set_public(true);
	}
	else if (type == 2)
	{
		am->set_protected(true);
	}
	else if (type == 3){
		am->set_private(true);
	}
	return am;
}

Data_Storage* MyParser::set_data_storage(int type) {
	Data_Storage* ds = new Data_Storage();
	if (type == 1) {
		ds->set_static(true);
	}
	return ds;
}

Data_Member* MyParser::name_am_ds_val_of_data_member(char*, Access_Modifier*, Data_Storage*) {
	return new Data_Member();
}
