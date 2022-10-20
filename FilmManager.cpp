#include "FilmManager.h"

void FilmManager::findByName(string& name) {
	cout << "run" << endl;
	for(int i = 0; i < this->length; i++) {
		string namecmp = (this->typeList + i)->getName();
		char* nametmp = const_cast<char*>(namecmp.c_str());
		char* nametmp2 = const_cast<char*>(name.c_str());
		strlwr(nametmp);
		strlwr(nametmp2);
		if(strstr(nametmp, nametmp2) != nullptr) {
			cout << (this->typeList + i)->getId() << endl;
		}
	}

}

Film FilmManager::setFilmInfor() {
	string id;
	string name;
	string director;
	string actor;
	string country;
	string type;
	int length;
	cout << "Nhap id: ";
	cin.ignore();
	getline(cin, id);	
	cout << "Nhap ten phim: ";	
	getline(cin, name);	
	cout << "Nhap dao dien: ";
	getline(cin, director);	
	cout << "Nhap dien vien chinh: ";
	getline(cin, actor);	
	cout << "Nhap noi san xuat: ";
	getline(cin, country);
	cout << "Nhap the loai: ";
	getline(cin, type);
	cout << "Nhap do dai phim: ";
	cin >> length;
	Film film(id,name,director,actor,country,type,length);
	return film;
}
