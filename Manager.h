#ifndef MANAGER_H
#define MANAGER_H
#include <iostream>
#include <string.h>
#include "Schedule.h"
#include "Ticket.h"
#include "CinemaRoom.h"
#include "Film.h"

using namespace std;

template <class type>

class Manager
{
	public:
		void add(const type&);
		void del(const string&);
		void showAll();
		type* findById(const string&);
		int getLength();
		void setLength(const int&);
		Manager();
		~Manager();
		type* getTypeList();
	protected:
		type* typeList;
		int length;
};

#endif
