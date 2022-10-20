#ifndef SCHEDULE_H
#define SCHEDULE_H
#include <iostream>
#include "Time.h"

using namespace std;

class Schedule
{
	public:
		string getId() const;
		string getFilmId() const;
		string getCinemaRoomId() const;
		int getShow() const;
		Time getTime() const;
		int getCost() const;
		void setId(const string&);
		void setFilmId(const string&);
		void setShow(const int&);
		void setTime(const Time&);
		void setCinemaRoomId(const string&);
		void setCost(int);
	private:
		string id;
		string filmId;
		string cinemaRoomId;
		int show;
		Time time;
		int cost;
};

#endif
