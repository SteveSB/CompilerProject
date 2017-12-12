#include "MyMap.h"

void MapElement::set_map_element_name(char* name){
	this->element_name = name;
}

char* MapElement::get_map_element_name(){
	return this->element_name;
}

void MapElement::set_map_element(void* element){
	this->Element = element;
}

void* MapElement::get_map_element(){
	return this->Element;
}

void MapElement::set_next(MapElement* next){
	this->next_element = next;
}

MapElement* MapElement::get_next(){
	return this->next_element;
}

MyMap::MyMap(){
	for (int i = 0; i < this->map_length; i++){
		this->Map_Array[i] = 0;
	}
}
MyMap::~MyMap(){}

int MyMap::hash(char* name){
	unsigned int i;
	int retVal = 0;
	for (i = 0; i < strlen(name); i++)
	{
		retVal <<= 2;
		retVal ^= (int)(*name);
		name++;
	}
	return (retVal%map_length);
}

void MyMap::put_element_in_map_array(char* name, void* element){
	int index = this->hash(name);
	MapElement * new_elem = new MapElement();
	new_elem->set_map_element_name(name);
	new_elem->set_map_element(element);
	new_elem->set_next(NULL);
	new_elem->set_next(this->Map_Array[index]);
	this->Map_Array[index] = new_elem;
}

void* MyMap::get_element_from_map_array(char* name){
	int index = this->hash(name);
	MapElement * temp = this->Map_Array[index];
	while ((temp != 0) && (strcmp(temp->get_map_element_name(), name) != 0)){
		temp = temp->get_next();
	}
	if (temp == 0)
		return 0;
	else
		return temp->get_map_element();
}


void MapElement::set_type(int num){
	this->type = num;
}
int MapElement::get_type(){
	return this->type;
}







