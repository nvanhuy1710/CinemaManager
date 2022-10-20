#include "Inforrl.h"

Inforrl::Inforrl() {
    this->namerl = "";
}
Inforrl::~Inforrl() {}
void Inforrl::setNamerl(string Namerl) {
    this->namerl = Namerl;
}
string Inforrl::getNamerl() {
    return this->namerl;
}
void Inforrl::readFileIf(fstream& filein) {
    Infor::readFileIf(filein);
    filein.ignore(1);
    string Namerl;
    getline(filein, Namerl, '.');
    this->setNamerl(Namerl);
}
void Inforrl::writeFileIf(fstream& fileout) {
    Infor::writeFileIf(fileout);
    fileout << this->getNamerl() << ". ";
}
void Inforrl::writeIf() {
    Infor::writeIf();
    cout << this->getNamerl() << ". ";
}
