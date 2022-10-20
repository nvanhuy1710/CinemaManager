#include "CinemaRoom.h"

string CinemaRoom::getId() {
	return this->id;
}

int CinemaRoom::getChairs() {
	return this->chairs;
}

string CinemaRoom::getStatus() {
	return this->status;
}

void CinemaRoom::setId(const string& id) {
	this->id = id;
}

void CinemaRoom::setChairs(int chairs) {
	this->chairs = chairs;
}

void CinemaRoom::setStatus(const string& status) {
	this->status = status;
}
