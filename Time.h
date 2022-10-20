#ifndef TIME_H
#define TIME_H
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

class Time
{
	public:
		int getDate() const;
		int getMonth() const;
		int getYear() const;
		void setDate(int);
		void setMonth(int);
		void setYear(int);
		void readfilet(fstream&);
    	void writefilet(fstream&);
    	void writet();
    	bool checkEqual(Time);
	private:
		int date;
		int month;
		int year;
};

#endif
