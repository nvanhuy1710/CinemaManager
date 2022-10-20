#ifndef SALARY_H
#define SALARY_H
#include "Time.h"

class Salary
{
	private:
    int salaryBase;
    int bonus;
    Time timeslr;
public:
    Salary();
    ~Salary();
    void setSalaryBase(int);
    int getSalaryBase();
    void setBonus(int);
    int getBonus();
    void setTimeslr(Time);
    Time getTimeslr();
};

#endif
