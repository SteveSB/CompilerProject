#pragma once
#define MAX_LENGTH 71
#include <iostream>

class MapElement{
private:
	char* element_name;
	void* Element;
	MapElement* next_element;
	int type;
public:
	void set_map_element_name(char*);
	char* get_map_element_name();
	void set_map_element(void*);
	void* get_map_element();
	void set_next(MapElement*);
	MapElement* get_next();
	void set_type(int);
	int get_type();
};

class MyMap{
private:
	static const int map_length = MAX_LENGTH;
	
	int hash(char*);
public:
	MapElement* Map_Array[MAX_LENGTH];
	MyMap();
	~MyMap();
	void put_element_in_map_array(char*, void*);
	void* get_element_from_map_array(char*);
};