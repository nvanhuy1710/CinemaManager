#include "CinemaRoomManager.h"

CinemaRoom CinemaRoomManager::setCinemaRoomInfor() {
	CinemaRoom cinemaRoom;
	string id;
	cout << "Nhap id: ";
	getline(cin, id);
	int chairs;
	cout << "Nhap so ghe: ";
	cin >> chairs;
	string status;
	cout << "Nhap tinh trang phong chieu: ";
	getline(cin, status);
	cinemaRoom.setId(id);
	cinemaRoom.setChairs(chairs);
	cinemaRoom.setStatus(status);
	return cinemaRoom;
}
