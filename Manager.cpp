#include "Manager.h"

//template class Manager<Schedule>;
//template class Manager<Ticket>;

template <class type>
Manager<type>::Manager() {
	this->length = 0;
	this->typeList = nullptr;
}

template <class type>
Manager<type>::~Manager() {
	delete[] this->typeList;
}

template <class type>
void Manager<type>::add(const type& ty) {
	type* listtmp = new type[this->length + 1];
	for(int i = 0; i < this->length; i++) {
		*(listtmp + i) = *(this->typeList + i);
	}
	*(listtmp + length) = ty;
	delete[] this->typeList;
	this->typeList = listtmp;
	this->length++;
}

template <class type>
type* Manager<type>::findById(const string& id) {
	for(int i = 0; i < this->length; i++) {
		if(strcmp((this->typeList + i)->getId().c_str(), id.c_str()) == 0) {
			return (this->typeList + i);
		}
	}
	return nullptr;
}

template <class type>
void Manager<type>::del(const string& id) {
	type* listtmp = new type[this->length - 1];
	int count = 0;
	int counttmp = 0;
	while(counttmp < this->length - 1) {
		if(strcmp((this->typeList + count)->getId().c_str(), id.c_str()) != 0) {		
			*(listtmp + counttmp) = *(this->typeList + count);
			counttmp++;
		}
		count++;
	}
	delete[] this->typeList;
	this->typeList = listtmp;
	this->length--;
}

template <class type>
void Manager<type>::showAll() {
	for(int i = 0; i < this->length; i++) {
		cout << (this->typeList + i)->getId() << endl;
	}
}

template <class type>
void Manager<type>::update(const type& ty) {
	//del(ty.getId());
	add(ty);
}

template <class type>
int Manager<type>::getLength() {
	return this->length;
}

template <class type>
void Manager<type>::setLength(const int& length) {
	this->length = length;
}

template <class type>
type* Manager<type>::getTypeList() {
	return this->typeList;
}

template class Manager<Schedule>;
template class Manager<Ticket>;

