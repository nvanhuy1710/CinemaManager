#include "Staff.h"
#include <string>

Staff::Staff() {
    this->id = "";
    this->name = "";
    this->job = "";
    this->timest;
    this->inforst;
    this->relative;
    this->stsalary;
}
Staff::~Staff() {}
void Staff::setId(string ID) {
    this->id = ID;
}
string Staff::getId() {
    return this->id;
}
void Staff::setName(string Name) {
    this->name = Name;
}
string Staff::getName() {
    return this->name;
}
void Staff::setJob(string Job) {
    this->job = Job;
}
string Staff::getJob() {
    return this->job;
}
void Staff::setTimeSt(Time Timest) {
    this->timest = Timest;
}
Time Staff::getTimeSt() {
    return this->timest;
}
void Staff::setStSalary(Salary* Stsalary) {
    this->stsalary = Stsalary;
}
Salary Staff::getStSalary() {
    return *this->stsalary;
}
void Staff::setInforSt(Infor Inforst) {
    this->inforst = Inforst;
}
Infor Staff::getInforSt() {
    return this->inforst;
}
void Staff::setRelative(Inforrl Relative) {
    this->relative = Relative;
}
Inforrl Staff::getRelative() {
    return this->relative;
}

void Staff::readFile(fstream& filein) {
    filein.ignore(10,10);
    string ID, Name, Job;
    getline(filein, ID, ',');
    this->setId(ID);
    filein.ignore(1);
    getline(filein, Name, ',');
    this->setName(Name);
    filein.ignore(1);
    getline(filein, Job, ',');
    this->setJob(Job);
    this->timest.readfilet(filein);
    this->inforst.readFileIf(filein);
    this->relative.readFileIf(filein);
}
void Staff::writeFile(fstream& fileout) {
    fileout << endl;
    fileout << this->getId() << ", ";
    fileout << this->getName() << ", ";
    fileout << this->getJob() << ", ";
    this->timest.writefilet(fileout);
    this->inforst.writeFileIf(fileout);
    this->relative.writeFileIf(fileout);
}
void Staff::write() {
    cout << "\n";
    cout << this->getId() << ", ";
    cout << this->getName() << ", ";
    cout << this->getJob() << ", ";
    this->timest.writet();
    this->inforst.writeIf();
    this->relative.writeIf();
}
