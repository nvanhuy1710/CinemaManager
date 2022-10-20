#include "Salary.h"

Salary::Salary() {
    this->salaryBase = 0;
    this->bonus = 0;
    this->timeslr;
}
Salary::~Salary() {}
void Salary::setBonus(int Bonus) {
    this->bonus = Bonus;
}
int Salary::getBonus() {
    return this->bonus;
}
void Salary::setTimeslr(Time Timeslr) {
    this->timeslr = Timeslr;
}
Time Salary::getTimeslr() {
    return this->timeslr;
}
void Salary::setSalaryBase(int salaryBase) {
    this->salaryBase = salaryBase;
}
int Salary::getSalaryBase() {
    return this->salaryBase;
}
