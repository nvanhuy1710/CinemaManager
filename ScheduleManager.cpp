#include "ScheduleManager.h"

Schedule ScheduleManager::setScheduleInfor() {
	Schedule schedule;
	string id;
	string filmId;
	string cinemaRoomId;
	int show;
	Time t;
	int cost;
	int date;
	int month;
	int year;
	cout << "Nhap id: ";
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
	t.setDate(date);
	t.setMonth(month);
	t.setYear(year);
	schedule.setId(id);
	schedule.setFilmId(filmId);
	schedule.setCinemaRoomId(cinemaRoomId);
	schedule.setShow(show);
	schedule.setTime(t);
}
