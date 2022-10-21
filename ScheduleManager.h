#ifndef SCHEDULEMANAGER_H
#define SCHEDULEMANAGER_H
#include "Manager.h"
#include "Schedule.h"
#include "FilmManager.h"
#include "CinemaRoomManager.h"

class ScheduleManager : public Manager<Schedule>
{
	public:
		ScheduleManager(FilmManager& FilmManager, CinemaRoomManager& room);
		Schedule setScheduleInfor();
		void update();
	private:
		FilmManager* filmManager;
		CinemaRoomManager* cinemaRoomManager;
		
};

#endif
