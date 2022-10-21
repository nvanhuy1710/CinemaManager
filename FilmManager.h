#ifndef FILMMANAGER_H
#define FILMMANAGER_H
#include "Film.h"
#include "Manager.h"
#include <string>

using namespace std;

class FilmManager : public Manager<Film>
{
	public:
		void findByName(string&);
		Film setFilmInfor();
		void update();
	private:
};

#endif
