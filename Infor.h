#ifndef INFOR_H
#define INFOR_H
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

class Infor
{
	private:
	    int age;
	    string phone;
	    string mail;
	public:
	    Infor();
	    ~Infor();
	    void setAge(int);
	    int getAge();
	    void setPhone(string);
	    string getPhone();
	    void setMail(string);
	    string getMail();
	    virtual void readFileIf(fstream&);
	    virtual void writeFileIf(fstream&);
	    virtual void writeIf();
};

#endif
