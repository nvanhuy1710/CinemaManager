#include "TicketManager.h"

TicketManager::TicketManager(ScheduleManager& scheduleList) {
	this->scheduleList = scheduleList;
}

Ticket TicketManager::setTicketInfor() {
	Ticket ticket;
	string id;
	string scheduleId;
	string customerName;
	string customerPhone;
	string staffId;	
	cout << "Nhap id: ";
	getline(cin, id);
	cout << "Nhap ma lich chieu: ";
	getline(cin, scheduleId);
	cout << "Nhap ten khach hang: ";
	getline(cin, customerName);
	cout << "Nhap so dien thoai khach hang: ";
	getline(cin, customerPhone);
	cout << "Nhap ma nhan vien: ";
	getline(cin, staffId);
	ticket.setId(id);
	ticket.setScheduleId(scheduleId);
	ticket.setCustomerName(customerName);
	ticket.setCustomerPhone(customerPhone);
	ticket.setStaffId(staffId);
	return ticket;
}

void TicketManager::getRevenue() {
	int revenue = 0;
	for(int i = 0; i < this->length; i++) {
		int tmp = (this->scheduleList).findById((this->typeList + i)->getScheduleId())->getCost();
		revenue += tmp;
	}
	cout << "All: " << revenue << endl;
}

void TicketManager::getRevenue(Time& t) {
	int revenue = 0;
	for(int i = 0; i < this->length; i++) {
		if((this->scheduleList).findById((this->typeList + i)->getScheduleId())->getTime().checkEqual(t)) {
			revenue += (this->scheduleList).findById((this->typeList + i)->getScheduleId())->getCost();
		}
	}
	cout << "All in time: " << revenue << endl;
}

void TicketManager::getRevenue(string staffId) {
	int revenue = 0;
	for(int i = 0; i< this->length; i++) {
		if((this->typeList + i)->getStaffId() == staffId) {
			revenue += (this->scheduleList).findById((this->typeList + i)->getScheduleId())->getCost();
		}
	}
	cout << "All in staff: " << revenue << endl;
}
