#include "MyParser.h"
#include <iostream>
#include <string>

MyParser::MyParser() {
	this->Symbol_Table = new SymbolTable();
}

Class* MyParser::create_class(char* clasName, bool isInterface, InheritanceList* list_of_parent, Access_Modifier* am, Data_Storage* ds, int row, int col) {
	Class* clas = new Class();
	clas->set_class_name(clasName);
	if (am == NULL)
		am = new Access_Modifier();
	if (ds == NULL)
		ds = new Data_Storage();
	clas->set_class_data_modifier(new Data_Modifier(am, ds));
	clas->set_is_interface(isInterface);
	clas->set_col(col);
	clas->set_row(row);
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

Class* MyParser::finish_class_declaration(Class* clas) {
	if (clas) {
		if (!clas->get_is_interface()) {
			if (!clas->get_has_constructor()) {
				Access_Modifier* am = new Access_Modifier();
				am->set_public(true);
				Function* fun = new Function();
				fun->set_function_name(clas->get_class_name());
				fun->set_is_constractor(true);
				fun->set_function_parameters(nullptr);
				fun->set_function_data_modifier(new Data_Modifier(am, nullptr));
				clas->set_has_constructor(true);
				this->Symbol_Table->add_function_to_current_scope(fun);
			}
		}
		this->Symbol_Table->set_current_scope(clas->get_class_scope()->get_parent_scope());
	}
	return clas;
}

Function* MyParser::create_function(char* funName, List_Parameters* list_of_par, Access_Modifier* am, Data_Storage* ds, bool isConstructor, int row, int col) {
	Function* fun = new Function();
	fun->set_function_name(funName);
	fun->set_col(col);
	fun->set_row(row);
	fun->set_is_constractor(isConstructor);
	fun->set_function_parameters(list_of_par);
	fun->set_function_data_modifier(new Data_Modifier(am, ds));
	Class* clas = (Class*) this->Symbol_Table->get_current_scope()->get_owner_type();
	if (isConstructor)
		clas->set_has_constructor(true);
	return this->start_function_declaration(fun);
}

Function* MyParser::start_function_declaration(Function* fun) {
	fun->get_function_scope()->set_parent_scope(this->Symbol_Table->get_current_scope());
	fun->get_function_scope()->set_owner_type(fun);
	this->Symbol_Table->add_function_to_current_scope(fun);
	this->Symbol_Table->set_current_scope(fun->get_function_scope());
	return fun;
}

Function* MyParser::finish_function_declaration(Function* fun) {
	if (fun)
	{
		this->Symbol_Table->set_current_scope(fun->get_function_scope()->get_parent_scope());
	}
	return fun;
}

Data_Member* MyParser::create_data_member(char* name, Access_Modifier* am, Data_Storage* ds, int row, int col) {
	Data_Member* dataMember = new Data_Member();
	dataMember->set_data_member_name(name);
	dataMember->set_col(col);
	dataMember->set_row(row);
	dataMember->set_data_member_modifier(new Data_Modifier(am, ds));
	this->Symbol_Table->add_data_member_to_current_scope(dataMember);
	return dataMember;
}

Local_Variable* MyParser::create_local_variable(char* name, int row, int col) {
	Local_Variable* localVariable = new Local_Variable();
	localVariable->set_local_variable_name(name);
	localVariable->set_col(col);
	localVariable->set_row(row);
	localVariable->set_local_variable_val(NULL);
	this->Symbol_Table->add_local_variable_to_current_scope(localVariable);
	return localVariable;
}

List_Parameters* MyParser::add_parameters(char* namePar, bool virtal, List_Parameters* listPar) {
	if (listPar->get_current_param() == NULL){
		Parameter* p = new Parameter();
		p->set_param_name(namePar);
		p->set_param_virtal(virtal);
		p->set_next_param(NULL);
		listPar->set_root_param(p);
		listPar->set_current_param(p);
	}
	else{
		Parameter* p = new Parameter();
		p->set_param_name(namePar);
		p->set_param_virtal(virtal);
		listPar->get_current_param()->set_next_param(p);
		listPar->set_current_param(p);
	}
	return listPar;
}

Access_Modifier* MyParser::set_access_modifier(int type, int row, int col) {
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
	am->set_row(row);
	am->set_col(col);
	return am;
}

Data_Storage* MyParser::set_data_storage(int type, int row, int col) {
	Data_Storage* ds = new Data_Storage();
	if (type == 1) {
		ds->set_static(true);
	}
	else if (type == 2) {
		ds->set_final(true);
	}
	else if (type == 3) {
		ds->set_static(true);
		ds->set_final(true);
	}
	ds->set_row(row);
	ds->set_col(col);
	return ds;
}

/*Data_Member* MyParser::name_am_ds_val_of_data_member(char*, Access_Modifier*, Data_Storage*) {return new Data_Member();}*/

Block_Scope* MyParser::create_scope(int type){
	Block_Scope *bs = new Block_Scope();
	bs->set_parent_scope(this->Symbol_Table->get_current_scope());
	//bs->set_owner_type(bs);
	bs->set_type(type);
	return this->start_scope_declaration(bs, type);
}

Block_Scope* MyParser::start_scope_declaration(Block_Scope* bs, int type) {
	bs->set_parent_scope(this->Symbol_Table->get_current_scope());
	bs->set_owner_type(bs);
	this->Symbol_Table->add_scope_to_current_scope(bs, type);
	this->Symbol_Table->set_current_scope(bs);
	return bs;
}

Block_Scope* MyParser::finish_scope_declaration(Block_Scope* bs, int type) {
	if (bs) {
		this->Symbol_Table->set_current_scope(bs->get_parent_scope());
	}
	return bs;
}

void MyParser::sprint(MyMap* map){
	for (int i = 0; i < MAX_LENGTH; i++) {
		if (map->Map_Array[i] != NULL) {
			MapElement* temp = map->Map_Array[i];
			while (temp != NULL) {
				if (temp->type == 1) {
					cout << (Class*)temp->get_map_element() << endl;
					Class* tmp = ((Class*)temp->get_map_element());
					this->sprint(tmp->get_class_scope()->get_map());
				}
				else if (temp->type == 2) {
					cout << (Function*)temp->get_map_element() << endl;
					Function* func = (Function*)temp->get_map_element();
					this->sprint(func->get_function_scope()->get_map());
				}
				else if (temp->type == 3) {
					cout << (Data_Member*)temp->get_map_element()<<endl;
				}
				else if (temp->type == 4) {
					cout << (Local_Variable*)temp->get_map_element() << endl;
				}
				else if (temp->type >= 5 && temp->type <= 10) {
					cout << (Block_Scope*)temp->get_map_element() << endl;
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

void MyParser::addError(int line, int col, char* error, char* s) {
	this->Error_Recovery.errQ->enqueue(line, col, error, s);
}

void  MyParser::check_all(SymbolTable* obj)
{
	Block_Scope* ob = obj->get_root_scope();
	MyMap* map = ob->get_map();
	//	this->start_check_main_function(map);
	this->check_main_Class(map);
	this->check_class_names_not_used_multiple_times(map);
	this->check_function_overload_in_all_classes(map);
	this->check_function_parameters_names(map);
	this->check_function_parameters_virtual(map);
	this->check_variables_and_datamembers_names(map);
	this->check_inheritance_loop(map);
	vector<string>x;
	this->check_all_classes_names_over_parents(map, x);
}

InheritanceList* MyParser::add_class_list(char* name, InheritanceList *il){
	if (il->get_current_parent() == NULL)
	{
		InheritanceList *tem = new InheritanceList();
		tem->set_parent_name(name);
		tem->set_next_parent(NULL);
		il->set_root_parent(tem);
		il->set_current_parent(tem);

	}
	else
	{
		InheritanceList *tem = new InheritanceList();
		tem->set_parent_name(name);
		il->get_current_parent()->set_next_parent(tem);
		il->set_current_parent(tem);

	}
	return il;
}

void MyParser::set_Inheritance_pointers(MyMap* map)
{

	for (int i = 0; i < MAX_LENGTH; i++)
	{
		if (map->Map_Array[i] != NULL)
		{
			MapElement* temp = map->Map_Array[i];
			while (temp != NULL)
			{
				if (temp->type == 1)
				{
					//cout << (Class*)temp->get_map_element() << endl;
					Class* tmp = ((Class*)temp->get_map_element());
					cout << tmp << endl;
					Block_Scope* parent_scope = tmp->get_class_scope()->get_parent_scope();
					if (tmp->get_list_of_inheritance() != NULL)
					{
						InheritanceList* ptr = tmp->get_list_of_inheritance()->get_root_parent();
						//	cout << "clname    " << tmp->get_class_name() << endl;
						//		cout << "inher    " << tmp->get_list_of_inheritance() << endl;
						if (ptr != NULL)
						{

							while (ptr->get_next_parent() != NULL)
							{
								//search interface
								ptr = ptr->get_next_parent();
							}
							if (ptr->get_parent() == NULL)
							{
								string name = ptr->get_parent_name();
								//		cout << name << endl;
								Class* p = find_Inheritance_class_by_name(parent_scope, name);
								if (p != NULL)
								{
									if (!p->get_class_data_modifier()->get_data_storage()->get_final())
									{
										//cout << "sssss  " << p << endl;
										ptr->set_parent(p);
										cout << tmp->get_class_name() << "  inheret from  " << p->get_class_name() << endl;
									}
									else
									{
										cout << "error  " << tmp->get_class_name() << " cant inherit from class  " << p->get_class_name() << "  becouse its final" << endl;
									}
								}
								else {
									cout << "error in inheretance class not found  " << ptr->get_parent_name() << endl;
								}
							}
						}

					}
					set_Inheritance_pointers(tmp->get_class_scope()->get_map());
				}
				temp = temp->get_next();
			}
		}
	}

}

Class* MyParser::find_Inheritance_class_by_name(Block_Scope* scope, string name)
{

	MyMap* map = scope->get_map();
	//	if (map == NULL||scope==NULL)return NULL;
	//	Class* c = ((Class*)scope->get_owner_type());
	//	if (c->get_list_of_inheritance() == nullptr)return NULL;
	//	cout << c << endl;

	for (int i = 0; i < MAX_LENGTH; i++)
	{
		if (map->Map_Array[i] != NULL)
		{
			MapElement* temp = map->Map_Array[i];
			while (temp != NULL)
			{
				if (temp->type == 1)
				{
					//cout << (Class*)temp->get_map_element() << endl;
					Class* tmp = ((Class*)temp->get_map_element());
					//cout << tmp << endl;
					string nn = tmp->get_class_name();
					if (nn == name)
						return tmp;

				}
				temp = temp->get_next();
			}
		}
	}
	if (scope->get_parent_scope() == NULL)
		return NULL;
	//	Class* cur =(Class *) scope->get_owner_type();
	Class* par = (Class *)scope->get_owner_type();
	//		cout << par << endl;
	if (par->get_list_of_inheritance() != NULL)
	{
		InheritanceList* ptr = par->get_list_of_inheritance()->get_root_parent();
		if (ptr != NULL)
		{
			while (ptr->get_next_parent() != NULL)
			{
				//search interface
				ptr = ptr->get_next_parent();
			}
			if (ptr->get_parent() == NULL)
			{
				string name = ptr->get_parent_name();
				cout << name << endl;
				Class* p = find_Inheritance_class_by_name(par->get_class_scope()->get_parent_scope(), name);
				if (p != NULL)
				{
					//cout << "sssss  " << ptr-> << endl;
					ptr->set_parent(p);
					cout << par->get_class_name() << "  inheret from  " << p->get_class_name() << endl;

				}
				else {
					//search interface
				}
			}
			if (ptr->get_parent() != NULL)
			{
				//			cout << ptr->get_parent() << endl;
				Class*p = find_inner_classes_inheritence_in_scope(ptr->get_parent()->get_class_scope(), name);
				if (p != NULL)
				{
					return p;
				}
			}
		}
	}
	Block_Scope* parent_scope = scope->get_parent_scope();

	if (parent_scope != NULL)
		return find_Inheritance_class_by_name(parent_scope, name);
	return NULL;
}

Class* MyParser::find_inner_classes_inheritence_in_scope(Block_Scope* scope, string name)
{
	MyMap* map = scope->get_map();
	//	Class* par = (Class *)scope->get_owner_type();
	//	cout << par << endl;
	for (int i = 0; i < MAX_LENGTH; i++)
	{
		if (map->Map_Array[i] != NULL)
		{
			MapElement* temp = map->Map_Array[i];
			while (temp != NULL)
			{
				if (temp->type == 1)
				{
					//cout << (Class*)temp->get_map_element() << endl;
					Class* tmp = ((Class*)temp->get_map_element());

					string nn = tmp->get_class_name();
					if (nn == name&&tmp->get_class_data_modifier()->get_access_modifier()->get_public())
						return tmp;

				}
				temp = temp->get_next();
			}
		}
	}
	return NULL;
}

void MyParser::check_all_classes_names_over_parents(MyMap* map, vector<string>all_parentsNames)
{
	for (int i = 0; i < MAX_LENGTH; i++)
	{
		if (map->Map_Array[i] != NULL)
		{
			MapElement* temp = map->Map_Array[i];
			while (temp != NULL)
			{
				if (temp->type == 1)
				{
					//cout << (Class*)temp->get_map_element() << endl;
					Class* tmp = ((Class*)temp->get_map_element());
					vector<string>nn = all_parentsNames;
					string name = tmp->get_class_name();
					for (int j = 0; j < all_parentsNames.size(); j++)
					{
						if (all_parentsNames[j] == name)
						{
							cout << "class name error same as parent   " << name << endl;
							break;
						}
					}
					nn.push_back(tmp->get_class_name());
					check_all_classes_names_over_parents(tmp->get_class_scope()->get_map(), nn);
				}

				temp = temp->get_next();
			}
		}
	}
}

void MyParser::check_inheritance_loop(MyMap* map)
{
	for (int i = 0; i < MAX_LENGTH; i++)
	{
		if (map->Map_Array[i] != NULL)
		{
			MapElement* temp = map->Map_Array[i];
			while (temp != NULL)
			{
				if (temp->type == 1)
				{
					//	cout << (Class*)temp->get_map_element() << endl;
					Class* tmp = ((Class*)temp->get_map_element());

					//		cout << tmp->get_class_name() << endl;
					if (checked_classes_black.find(tmp) == checked_classes_black.end())
					{
						//	cout << tmp->get_class_name() << endl;
						if (!dfs_for_check_inheritance(tmp))
						{
							cout << "inheritance loop at class   " << tmp->get_class_name() << endl;
						}
					}
					//		cout << tmp->get_class_name() << endl;
					check_inheritance_loop(tmp->get_class_scope()->get_map());
					//this->sprint(tmp->get_class_scope()->get_map());
				}
				temp = temp->get_next();
			}
		}
	}
}

bool MyParser::dfs_for_check_inheritance(Class* cur)
{
	checked_classes_gray.insert(cur);
	//	cout << cur->get_class_name() << endl;
	InheritanceList*list = cur->get_list_of_inheritance()->get_root_parent();
	bool sol = true;
	if (list != NULL)
	{
		while (list->get_next_parent() != NULL)
		{
			//search interface
			list = list->get_next_parent();
		}
		if (list->get_parent() != NULL)
		{
			if (checked_classes_gray.find(list->get_parent()) != checked_classes_gray.end())
			{
				return 0;
			}
			else if (checked_classes_black.find(list->get_parent()) == checked_classes_black.end())
			{
				sol &= dfs_for_check_inheritance(list->get_parent());
			}
		}
	}
	checked_classes_gray.erase(cur);
	checked_classes_black.insert(cur);
	return sol;
}

void MyParser::check_main_function(MyMap* map)
{
	//	cout << "start  print" << endl;
	int tot_main_functions = 0;
	for (int i = 0; i < MAX_LENGTH; i++)
	{
		if (map->Map_Array[i] != NULL)
		{
			MapElement* temp = map->Map_Array[i];
			while (temp != NULL)
			{
				if (temp->type == 2)
				{

					Function* func = (Function*)temp->get_map_element();
					//cout <<"fff   "<< (Function*)temp->get_map_element() << endl;
					string s = func->get_function_name();
					if (s == "main")
					{
						//cout << "adfsadasdasdasds" << endl;
						tot_main_functions++;
					}
					//return 0;
					//this->check_main_function(func->get_function_scope()->get_map());
				}
				temp = temp->get_next();
			}


		}
	}
	if (tot_main_functions > 1)
	{

	}
	else if (tot_main_functions == 1)
	{

	}
	else
	{

	}
}

void MyParser::check_main_Class(MyMap* map)
{
	//	cout << "start  print" << endl;
	for (int i = 0; i < MAX_LENGTH; i++)
	{
		if (map->Map_Array[i] != NULL)
		{
			MapElement* temp = map->Map_Array[i];
			while (temp != NULL)
			{
				if (temp->type == 1)
				{
					Class* tmp = ((Class*)temp->get_map_element());
					check_main_function(tmp->get_class_scope()->get_map());
					//cout <<"claaaaas  "<< (Class*)temp->get_map_element() << endl;
				}
				temp = temp->get_next();
			}
		}
	}
	//error
}

void MyParser::check_function_overload_in_all_classes(MyMap* map)
{
	for (int i = 0; i < MAX_LENGTH; i++)
	{
		if (map->Map_Array[i] != NULL)
		{
			MapElement* temp = map->Map_Array[i];
			while (temp != NULL)
			{
				if (temp->type == 1)
				{
					Class* tmp = ((Class*)temp->get_map_element());
					check_function_overload_in_class(tmp->get_class_scope()->get_map());
					check_function_overload_in_all_classes(tmp->get_class_scope()->get_map());
				}
				temp = temp->get_next();
			}
		}
	}
}

void MyParser::check_function_overload_in_class(MyMap*map)
{
	Function* allFunctions[100];
	int k = 0;
	for (int i = 0; i < MAX_LENGTH; i++)
	{
		if (map->Map_Array[i] != NULL)
		{
			MapElement* temp = map->Map_Array[i];
			while (temp != NULL)
			{
				if (temp->type == 2)
				{
					Function* func = (Function*)temp->get_map_element();
					//check_function_overload_in_class(tmp->get_class_scope()->get_map());
					allFunctions[k] = func;
					k++;
				}
				temp = temp->get_next();
			}
		}
	}
	for (int i = 0; i < k; i++)
	{
		for (int j = i + 1; j < k; j++)
		{
			string name1 = allFunctions[i]->get_function_name();
			string name2 = allFunctions[j]->get_function_name();
			if (name1 == name2)
			{
				List_Parameters* par1 = allFunctions[i]->get_function_parameters();
				List_Parameters* par2 = allFunctions[j]->get_function_parameters();
				if (par1 == NULL || par2 == NULL)
					return;
				Parameter* p = par1->get_root_param();
				Parameter* p2 = par2->get_root_param();
				while (p != NULL && p2 != NULL)
				{
					string pp1 = p->get_param_name();
					string pp2 = p2->get_param_name();
					if (pp1 != pp2)
						break;
					p = p->get_next_param();
					p2 = p2->get_next_param();
				}
				if (p == NULL&&p2 == NULL)
				{
					cout << "function overload error  " << allFunctions[i]->get_function_name() << endl;
				}
			}
		}
	}
}

void MyParser::check_class_names_not_used_multiple_times(MyMap*map)
{
	char* all_names[70];
	int j = 0;
	for (int i = 0; i < MAX_LENGTH; i++)
	{
		if (map->Map_Array[i] != NULL)
		{
			MapElement* temp = map->Map_Array[i];
			while (temp != NULL)
			{
				if (temp->type == 1)
				{

					Class* tmp = ((Class*)temp->get_map_element());

					char* name1 = tmp->get_class_name();
					all_names[j] = name1;
					j++;
				}
				temp = temp->get_next();
			}
		}
		//if (found_error)break;
	}
	for (int i = 0; i < j; i++)
	{
		for (int k = i + 1; k < j; k++)
		{
			string s1 = all_names[i];
			string s2 = all_names[k];
			if (s1 == s2)
			{
				cout << "class names equal error " << all_names[i] << endl;
			}
		}
	}
	//cout << "wwwwwwwwwwwwwwwwwwwwwwww" << endl;
	for (int i = 0; i < MAX_LENGTH; i++)
	{
		if (map->Map_Array[i] != NULL)
		{
			MapElement* temp = map->Map_Array[i];
			//	cout <<"asdasdsa   "<< temp->get_type() << endl;
			while (temp != NULL)
			{
				if (temp->type == 1)
				{

					Class* tmp = ((Class*)temp->get_map_element());
					//	cout << tmp << endl;
					//		cout << "wwwwww   " << tmp << endl;
					check_class_names_not_used_multiple_times(tmp->get_class_scope()->get_map());
				}
				temp = temp->get_next();
			}
		}
	}
}

void MyParser::check_function_parameters_names(MyMap* map)
{
	for (int i = 0; i < MAX_LENGTH; i++)
	{
		if (map->Map_Array[i] != NULL)
		{
			MapElement* temp = map->Map_Array[i];
			while (temp != NULL)
			{
				if (temp->type == 1)
				{
					//cout << (Class*)temp->get_map_element() << endl;
					Class* tmp = ((Class*)temp->get_map_element());
					check_function_parameters_names(tmp->get_class_scope()->get_map());
				}
				else if (temp->type == 2)
				{
					//cout << (Function*)temp->get_map_element() << endl;
					Function* x = (Function*)temp->get_map_element();
					List_Parameters* all = x->get_function_parameters();
					if (all == NULL)
						return;
					Parameter* p = all->get_root_param();
					Parameter* allParam[20];
					int j = 0;
					while (p != NULL)
					{
						allParam[j] = p;
						j++;
						p = p->get_next_param();
					}
					for (int k = 0; k < j; k++)
					{
						for (int h = k + 1; h < j; h++)
						{
							string st = allParam[k]->get_param_name();
							string st2 = allParam[h]->get_param_name();
							if (st == st2)
							{
								cout << "parameter used name error" << allParam[k]->get_param_name() << endl;
							}
						}
					}
				}
				temp = temp->get_next();
			}
		}
	}
}

void MyParser::check_variables_and_datamembers_names(MyMap* map)
{
	char* allVariables[200];
	int k = 0;
	for (int i = 0; i < MAX_LENGTH; i++)
	{
		if (map->Map_Array[i] != NULL)
		{
			MapElement* temp = map->Map_Array[i];
			while (temp != NULL)
			{
				if (temp->type == 1)
				{
					//cout << (Class*)temp->get_map_element() << endl;
					Class* tmp = ((Class*)temp->get_map_element());
					check_variables_and_datamembers_names(tmp->get_class_scope()->get_map());
				}
				else if (temp->type == 2)
				{
					//cout << (Function*)temp->get_map_element() << endl;
					Function* tmp = (Function*)temp->get_map_element();
					check_variables_and_datamembers_names(tmp->get_function_scope()->get_map());
				}
				else if (temp->type == 3){
					Data_Member* tmp = (Data_Member*)temp->get_map_element();
					allVariables[k] = tmp->get_data_member_name();
					k++;

				}
				else if (temp->type == 4)
				{
					Local_Variable* tmp = (Local_Variable*)temp->get_map_element();
					allVariables[k] = tmp->get_local_variable_name();
					k++;
				}

				temp = temp->get_next();

			}
		}
		for (int i = 0; i < k; i++)
		{
			for (int j = i + 1; j < k; j++)
			{
				string s1 = allVariables[i];
				string s2 = allVariables[j];
				if (s1 == s2)
				{
					cout << "Variable reused name   " << allVariables[i];
				}
			}
		}
	}
}

void MyParser::check_function_parameters_virtual(MyMap* map)
{
	for (int i = 0; i < MAX_LENGTH; i++)
	{
		if (map->Map_Array[i] != NULL)
		{
			MapElement* temp = map->Map_Array[i];
			while (temp != NULL)
			{
				if (temp->type == 1)
				{
					//cout << (Class*)temp->get_map_element() << endl;
					Class* tmp = ((Class*)temp->get_map_element());
					check_function_parameters_virtual(tmp->get_class_scope()->get_map());
				}
				else if (temp->type == 2)
				{
					//cout << (Function*)temp->get_map_element() << endl;
					Function* x = (Function*)temp->get_map_element();
					List_Parameters* all = x->get_function_parameters();
					if (all == NULL)
						return;
					Parameter* p = all->get_root_param();
					bool stVirtual = false;
					//int j = 0;
					while (p != NULL)
					{
						//TODO
						p = p->get_next_param();
					} 
				}
				temp = temp->get_next();
			}
		}
	}
}
