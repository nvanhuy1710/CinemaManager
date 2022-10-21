#include "ScheduleManager.h"

ScheduleManager::ScheduleManager(FilmManager& filmManager, CinemaRoomManager& room) {
	this->filmManager = &filmManager;
	this->cinemaRoomManager = &room;
}

Schedule ScheduleManager::setScheduleInfor() {
	Schedule schedule;
	string id;
	string filmId;
	string cinemaRoomId;
	int show;
	int cost;
	int date;
	int month;
	int year;
	cout << "Nhap id: ";
	cin.ignore();
	getline(cin, id);
	cout << "Nhap ma phim: ";
	getline(cin, filmId);
	cout << "Nhap phong chieu: ";
	getline(cin, cinemaRoomId);
	cout << "Nhap so ca: ";
	cin >> show;
	cout << "Nhap gia ve: ";
	cin >> cost;
	cout << "Nhap ngay chieu: ";
	cin >> date;
	cout << "Nhap thang chieu: ";
	cin >> month;
	cout << "Nhap nam chieu: ";
	cin >> year;
	Time t(date, month, year);
	schedule.setId(id);
	schedule.setFilmId(filmId);
	schedule.setCinemaRoomId(cinemaRoomId);
	schedule.setShow(show);
	schedule.setTime(t);
}

void ScheduleManager::update() {
	string id;
	cout << "Nhap id: ";
	cin.ignore();
	getline(cin, id);
	if(findById(id) == nullptr) {
		cout << "Khong tim thay!\n";
	}						
	else {
		int opttmp = 0;
		Schedule* schedule = findById(id);
		do {
			cout << "\tCap nhap phim" << endl;
			cout << "1.Sua ma phim" << endl;
			cout << "2.Sua ma phong chieu" << endl;
			cout << "3.Sua ca chieu" << endl;
			cout << "4.Sua thoi gian" << endl;
			cout << "5.Sua gia ve" << endl;
			cout << "0.Xac nhan" << endl;
			cout << "Nhap lua chon: ";
			cin >> opttmp;
			string up;
			int upn;
			cin.ignore();
			switch(opttmp) {
				case(1): {
					cout << "Nhap ma phim: ";
					getline(cin, up);
					schedule->setFilmId(up);	
					break;			
				}
				case(2): {
					cout << "Nhap ma phong: ";
					getline(cin, up);
					schedule->setCinemaRoomId(up);
					this->cinemaRoomManager->showAll();
					break;
				}
				case(3): {
					cout << "Nhap ca chieu: ";
					cin >> upn;
					schedule->setShow(upn);
					break;
				}
				case(4): {
					int date;
					int month;
					int year;
					cout << "Nhap ngay: ";
					cin >> date;
					cout << "Nhap thang: ";
					cin >> month;
					cout << "Nhap nam: ";
					cin >> year;
					Time t;
					t.setDate(date);
					t.setMonth(month);
					t.setYear(year);
					schedule->setTime(t);
					break;
				}
				case(5): {
					cout << "Nhap gia ve: ";
					cin >> upn;
					schedule->setCost(upn);
					break;
				}
			}			
		} while (opttmp != 0);
	}
}
