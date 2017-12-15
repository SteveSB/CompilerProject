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
	fun->set_function_data_modifier(new Data_Modifier(data_mod, dataStro));
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

Data_Member* MyParser::create_data_member(char* name, Access_Modifier* am, Data_Storage* ds) {
	Data_Member* dataMember = new Data_Member();
	dataMember->set_data_member_name(name);
	dataMember->set_data_member_modifier(new Data_Modifier(am, ds));
	this->Symbol_Table->add_data_member_to_current_scope(dataMember);
	return dataMember;
}

Local_Variable* MyParser::create_local_variable(char* name) {
	Local_Variable* localVariable = new Local_Variable();
	localVariable->set_local_variable_name(name);
	localVariable->set_local_variable_val(NULL);
	this->Symbol_Table->add_local_variable_to_current_scope(localVariable);
	return localVariable;
}

List_Parameters* MyParser::add_parameters(char* namePar, List_Parameters* listPar) {
	if (listPar->get_current_param() == NULL){
		Parameter* p = new Parameter();
		p->set_param_name(namePar);
		p->set_next_param(NULL);
		listPar->set_root_param(p);
		listPar->set_current_param(p);
		
	}
	else{
		Parameter* p = new Parameter();
		p->set_param_name(namePar);
		listPar->get_current_param()->set_next_param(p);
		listPar->set_current_param(p);
	}
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

void MyParser::sprint(MyMap* map){
	for (int i = 0; i < MAX_LENGTH; i++)
		{
	if (map->Map_Array[i] != NULL)
			{
		MapElement* temp = map->Map_Array[i];
		while (temp != NULL)
				{
			if (temp->type == 1)
					{
				cout << (Class*)temp->get_map_element() << endl;
				Class* tmp = ((Class*)temp->get_map_element());
				this->sprint(tmp->get_class_scope()->get_map());
				}
			else if (temp->type == 2)
					{
				cout << (Function*)temp->get_map_element() << endl;
				Function* func = (Function*)temp->get_map_element();
				this->sprint(func->get_function_scope()->get_map());
				}
			else if (temp->type == 3){
				cout << (Data_Member*)temp->get_map_element()<<endl;
			}
			else if (temp->type == 4)
			{
				cout << (Local_Variable*)temp->get_map_element() << endl;
			}
				temp = temp->get_next();
			}
		}
	}	
}

void MyParser::print(SymbolTable* obj){
	Block_Scope* ob = obj->get_root_scope();
	MyMap* map = ob->get_map();
	this->sprint(map);
}