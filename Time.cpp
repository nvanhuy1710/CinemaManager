#include "Time.h"

Time::Time() {
}

Time::Time(int date, int month, int year) {
	this->date = date;
	this->month = month;
	this->year = year;
}

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

bool Time::operator==(const Time& time2) {
	if(this->date == time2.getDate() && this->month == time2.getMonth() && this->year == time2.getYear()) {
		return true;
	}
	return false;
}

bool Time::operator>=(const Time& time2) {
	if(this->year > time2.getYear()) {
		return true;
	}
	else if(this->year == time2.getYear()) {
		if(this->month > time2.getMonth()) {
			return true;
		}
		else if(this->month == time2.getMonth()) {
			if(this->date >= time2.getDate()) {
				return true;
			}
			else {
				return false;
			}
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}
}

bool Time::operator<=(const Time& time2) {
	if(this->year < time2.getYear()) {
		return true;
	}
	else if(this->year == time2.getYear()) {
		if(this->month < time2.getMonth()) {
			return true;
		}
		else if(this->month == time2.getMonth()) {
			if(this->date <= time2.getDate()) {
				return true;
			}
			else {
				return false;
			}
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}
}

