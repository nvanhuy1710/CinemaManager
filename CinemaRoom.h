#ifndef CINEMAROOM_H
#define CINEMAROOM_H
#include <iostream>

using namespace std;

class CinemaRoom
{
	public:
		string getId();
		int getChairs();
		string getStatus();
		void setId(const string&);
		void setChairs(int);
		void setStatus(const string&);
	private:
		string id;
		int chairs;
		string status;
};

#endif
