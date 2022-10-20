#ifndef STAFF_H
#define STAFF_H
#include "Inforrl.h"
#include "Salary.h"
#include "Time.h"

using namespace std;

class Staff
{
	private:
	    string id;
	    string name;
	    string job;
	    Time timest;
	    Infor inforst;
	    Inforrl relative;
	    Salary* stsalary;
	public:
	    Staff();
	    ~Staff();
	    void setId(string);
	    string getId();
	    void setName(string);
	    string getName();
	    void setJob(string);
	    string getJob();
	    void setTimeSt(Time);
	    Time getTimeSt();
	    void setInforSt(Infor);
	    Infor getInforSt();
	    void setRelative(Inforrl);
	    Inforrl getRelative();
	    void setStSalary(Salary*);
	    Salary getStSalary();
	    void readFile(fstream&);
	    void writeFile(fstream&);
	    void write();
};

#endif
