#ifndef CINEMAROOMMANAGER_H
#define CINEMAROOMMANAGER_H
#include "Manager.h"
#include "CinemaRoom.h"
#include <string>

using namespace std;

class CinemaRoomManager : public Manager<CinemaRoom>
{
	public:
		CinemaRoom setCinemaRoomInfor();
		void update();
	protected:
};

#endif
