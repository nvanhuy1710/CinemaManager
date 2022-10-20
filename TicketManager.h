#ifndef TICKETMANAGER_H
#define TICKETMANAGER_H
#include "ScheduleManager.h"
#include "Ticket.h"
#include "Time.h"

class TicketManager : public Manager<Ticket>
{
	public:
		void getRevenue();
		void getRevenue(string);
		void getRevenue(Time&);
		TicketManager(ScheduleManager&);
		Ticket setTicketInfor();
	private:
		ScheduleManager scheduleList;
};

#endif
