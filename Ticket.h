#ifndef TICKET_H
#define TICKET_H
#include <iostream>

using namespace std;

class Ticket
{
	public:
		string getId() const;
		string getScheduleId() const;
		string getCustomerName() const;
		string getCustomerPhone() const;
		string getStaffId() const;
		void setId(const string&);
		void setScheduleId(const string&);
		void setCustomerName(const string&);
		void setCustomerPhone(const string&);
		void setStaffId(const string&);
	private:
		string id;
		string scheduleId;
		string customerName;
		string customerPhone;
		string staffId;	
};

#endif
