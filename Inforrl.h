#ifndef INFORRL_H
#define INFORRL_H
#include "Infor.h"

using namespace std;

class Inforrl : public Infor
{
	private:
    	string namerl;
	public:	
	    Inforrl();
	    ~Inforrl();
	    void setNamerl(string);
	    string getNamerl();
	    void readFileIf(fstream&);
	    void writeFileIf(fstream&);
	    void writeIf();
};

#endif
