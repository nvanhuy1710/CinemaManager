#include "Schedule.h"

string Schedule::getId() const{
	return this->id;
}

string Schedule::getFilmId() const{
	return this->filmId;
}

string Schedule::getCinemaRoomId() const{
	return this->cinemaRoomId;
}

int Schedule::getShow() const{
	return this->show;
}

Time Schedule::getTime() const{
	return this->time;
}

int Schedule::getCost() const{
	return this->cost;
}

void Schedule::setId(const string& id){
	this->id = id;
}

void Schedule::setFilmId(const string& filmId){
	this->filmId = filmId;
}

void Schedule::setShow(const int& period){
	this->show = period;
}

void Schedule::setCinemaRoomId(const string& id) {
}

void Schedule::setTime(const Time& Day){
	this->time = Day;
}

void Schedule::setCost(int cost){
	this->cost = cost;
}
