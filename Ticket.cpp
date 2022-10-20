#include "Ticket.h"

string Ticket::getId() const{
	return this->id;
}

string Ticket::getScheduleId() const{
	return this->scheduleId;
}

string Ticket::getCustomerName() const{
	return this->customerName;
}

string Ticket::getCustomerPhone() const{
	return this->customerPhone;
}

string Ticket::getStaffId() const{
	return this->staffId;
}

void Ticket::setId(const string& id) {
	this->id = id;
}

void Ticket::setScheduleId(const string& id) {
	this->scheduleId = id;
}

void Ticket::setCustomerName(const string& name) {
	this->customerName = name;
}

void Ticket::setCustomerPhone(const string& phone) {
	this->customerPhone = phone;
}

void Ticket::setStaffId(const string& id) {
	this->staffId = id;
}
