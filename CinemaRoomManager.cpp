#include "CinemaRoomManager.h"

CinemaRoom CinemaRoomManager::setCinemaRoomInfor() {
	CinemaRoom cinemaRoom;
	string id;
	cout << "Nhap id: ";
	cin.ignore();
	getline(cin, id);
	int chairs;
	cout << "Nhap so ghe: ";
	cin >> chairs;
	string status;
	cout << "Nhap tinh trang phong chieu: ";
	cin.ignore();
	getline(cin, status);
	cinemaRoom.setId(id);
	cinemaRoom.setChairs(chairs);
	cinemaRoom.setStatus(status);
	return cinemaRoom;
}

void CinemaRoomManager::update() {
	string id;
	cout << "Nhap id: ";
	cin.ignore();
	getline(cin, id);
	if(findById(id) == nullptr) {
		cout << "Khong tim thay!\n";
	}						
	else {
		int opttmp = 0;
		CinemaRoom* room = findById(id);
		do {
			cout << "\tCap nhap phong chieu" << endl;
			cout << "1.Sua so ghe" << endl;
			cout << "2.Sua tinh trang" << endl;
			cout << "0.Xac nhan" << endl;
			cout << "Nhap lua chon: ";
			cin >> opttmp;
			string up;
			int upn;
			switch(opttmp) {
				case(1): {
					cout << "Nhap so ghe: ";
					cin >> upn;
					room->setChairs(upn);
					break;							
				}
				case(2): {
					cout << "Nhap tinh trang: ";
					cin.ignore();
					getline(cin, up);
					room->setStatus(up);
					break;
				}
			}
			
		} while (opttmp != 0);
	}
}
