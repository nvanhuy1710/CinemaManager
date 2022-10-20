#include "Infor.h"

Infor::Infor() {
    this->age = 0;
    this->phone = "";
    this->mail = "";
}
Infor::~Infor() {
}
void Infor::setAge(int Age) {
    this->age = Age;
}
int Infor::getAge() {
    return this->age;
}
void Infor::setPhone(string Phone) {
    this->phone = Phone;
}
string Infor::getPhone() {
    return this->phone;
}
void Infor::setMail(string Mail) {
    this->mail = Mail;
}
string Infor::getMail() {
    return this->mail;
}
void Infor::readFileIf(fstream& filein) {
    int Age;
    filein >> Age;
    this->setAge(Age);
    filein.ignore(2);
    string Phone, Mail;
    getline(filein, Phone, ',');
    this->setPhone(Phone);
    filein.ignore(1);
    getline(filein, Mail, ',');
    this->setMail(Mail);
}
void Infor::writeFileIf(fstream& fileout) {
    fileout << this->getAge() << ", ";
    fileout << this->getPhone() << ", ";
    fileout << this->getMail() << ", ";
}
void Infor::writeIf() {
    cout << this->getAge() << ", ";
    cout << this->getPhone() << ", ";
    cout << this->getMail() << ", ";
}
