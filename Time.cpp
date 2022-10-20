#include "Time.h"

int Time::getDate() const{
	return this->date;
}

int Time::getMonth() const{
	return this->month;
}

int Time::getYear() const{
	return this->year;
}

void Time::setDate(int date) {
	this->date = date;
}

void Time::setMonth(int month) {
	this->month = month;
}

void Time::setYear(int year) {
	this->year = year;
}

void Time::readfilet(fstream& filein) {
    int Date, Month, Year;
    filein >> Date;
    this->setDate(Date);
    filein.ignore(1);
    filein >> Month;
    this->setMonth(Month);
    filein.ignore(1);
    filein >> Year;
    this->setYear(Year);
    filein.ignore(1);
}

void Time::writefilet(fstream& fileout) {
    fileout << this->getDate() << "/";
    fileout << this->getMonth() << "/";
    fileout << this->getYear() << ", ";
}

void Time::writet() {
    cout << this->getDate() << "/";
    cout << this->getMonth() << "/";
    cout << this->getYear() << ", ";
}

bool Time::checkEqual(Time t) {
	if(this->date == t.getDate() && this->month == t.getMonth() && this->year == t.getYear()) {
		return true;
	}
	return false;
}

