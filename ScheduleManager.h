#ifndef SCHEDULEMANAGER_H
#define SCHEDULEMANAGER_H
#include "Manager.h"
#include "Schedule.h"

class ScheduleManager : public Manager<Schedule>
{
	public:
		Schedule setScheduleInfor();
	protected:
};

#endif
