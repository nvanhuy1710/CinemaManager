#include "Menu.h"

using namespace std;

Menu::showMenu() {
	FilmManager filmManager;
	CinemaRoomManager cManager;
	ScheduleManager scheduleManager(filmManager, cManager);
	TicketManager ticketManager(scheduleManager);
	int opt = 0;
	do {
		system("cls");
		cout << "\t\t\t\t\t\tMENU";
		cout << "\n\t1.Quan li phim";
		cout << "\n\t2.Quan li phong chieu";
		cout << "\n\t3.Quan li lich chieu";
		cout << "\n\t4.Quan li hoa don";
		cout << "\n\t0.Thoat";
		cout << "\nNhap lua chon: ";;
		cin >> opt;
		switch(opt) {			
			case (1): {
				int tmp = 0;
				do{
					system("cls");
					cout << "\t\t\t\t\t\tQuan li phim";
					cout << "\n\t1.Them phim";
					cout << "\n\t2.Xem danh sach phim";
					cout << "\n\t3.Tim phim theo ten";
					cout << "\n\t4.Tim phim theo ma";
					cout << "\n\t5.Xoa phim";
					cout << "\n\t6.Cap nhap phim";
					cout << "\n\t0.Quay lai mainmenu";
					cout << "\nNhap lua chon: ";
					cin >> tmp;
					if(tmp == 1) {
						filmManager.add(filmManager.setFilmInfor());
					}
					else if(tmp == 2) {
						filmManager.showAll();
						system("pause");
					}
					else if(tmp == 3) {
						string name;
						cout << "Nhap ten phim: ";
						cin.ignore();
						getline(cin, name);
						filmManager.findByName(name);
						system("pause");
					}
					else if(tmp == 4) {
						string id;
						cout << "Nhap ma phim: ";
						cin.ignore();
						getline(cin, id);
						cout << filmManager.findById(id)->getId() << endl;
						system("pause");
					}
					else if(tmp == 5) {
						string id;
						cout << "Nhap ma phim: ";
						getline(cin, id);
						filmManager.del(id);
					}
					else if(tmp == 6) {
						filmManager.update();
					}
				} while(tmp != 0);
				break;
			}
			case (2): {
				int tmp = 0;
				do {
					system("cls");
					cout << "\t\t\t\t\t\tQuan li phong chieu";
					cout << "\n\t1.Them phong chieu";
					cout << "\n\t2.Xem danh sach phong chieu";
					cout << "\n\t3.Tim phong chieu theo ma";
					cout << "\n\t4.Xoa phong chieu";
					cout << "\n\t5.Cap nhap phong chieu";
					cout << "\n\t0.Quay lai mainmenu";
					cout << "\nNhap lua chon: ";
					cin >> tmp;
					if(tmp == 1) {
						cManager.add(cManager.setCinemaRoomInfor());
					}
					else if(tmp == 2) {
						cManager.showAll();
						system("pause");
					}
					else if(tmp == 3) {
						string id;
						cout << "Nhap ma phong chieu: ";
						getline(cin, id);
						cout << cManager.findById(id)->getId() << endl;
					}
					else if(tmp == 4) {
						string id;
						cout << "Nhap ma phong chieu: ";
						getline(cin, id);
						cManager.del(id);
					}
					else if(tmp == 5) {
						cManager.update();
					}
				} while(tmp != 0);
				break;
			}
			case (3): {
				int tmp = 0;
				do {
					system("cls");
					cout << "\t\t\t\t\t\tQuan li lich chieu";
					cout << "\n\t1.Them lich chieu";
					cout << "\n\t2.Xem danh sach lich chieu";
					cout << "\n\t3.Tim lich chieu theo ma";
					cout << "\n\t4.Xoa lich chieu";
					cout << "\n\t5.Cap nhap lich chieu";
					cout << "\n\t0.Quay lai mainmenu";
					cout << "\nNhap lua chon: ";
					cin >> tmp;
					if(tmp == 1) {
						scheduleManager.add(scheduleManager.setScheduleInfor());
					}
					else if(tmp == 2) {
						scheduleManager.showAll();
						system("pause");
					}
					else if(tmp == 3) {
						string id;
						cout << "Nhap ma lich chieu: ";
						getline(cin, id);
						cout << scheduleManager.findById(id)->getId() << endl;
						system("pause");
					}
					else if(tmp == 4) {
						string id;
						cout << "Nhap ma lich chieu: ";
						getline(cin, id);
						scheduleManager.del(id);
					}
					else if(tmp == 5) {
						scheduleManager.update();
					}
				} while(tmp != 0);
				break;
			}
			case (4): {
				int tmp = 0;
				do {
					system("cls");
					cout << "\t\t\t\t\t\tQuan li ve";
					cout << "\n\t1.Xuat ve";
					cout << "\n\t2.Xem danh sach ve";
					cout << "\n\t3.Xuat doanh thu theo ngay";
					cout << "\n\t4.Xuat doanh thu theo nhan vien";
					cout << "\n\t5.Xuat tong doanh thu";
					cout << "\n\t6.Xoa ve";
					cout << "\n\t0.Quay lai mainmenu";
					cout << "\nNhap lua chon: ";
					cin >> tmp;
					if(tmp == 1) {
						ticketManager.add(ticketManager.setTicketInfor());
					}
					else if(tmp == 2) {
						ticketManager.showAll();
						system("pause");
					}
					else if(tmp == 3) {
						int date;
						int month;
						int year;
						cout << "Nhap ngay bat dau: ";
						cin >> date;
						cout << "Nhap thang bat dau: ";
						cin >> month;
						cout << "Nhap nam bat dau: ";
						cin >> year;
						Time t1(date, month, year);
						cout << "Nhap ngay ket thuc: ";
						cin >> date;
						cout << "Nhap thang ket thuc: ";
						cin >> month;
						cout << "Nhap nam ket thuc: ";
						cin >> year;
						Time t2(date, month, year);
						ticketManager.getRevenue(t1, t2);
					}
					else if(tmp == 4) {
						string id;
						cout << "Nhap ma nhan vien: ";
						getline(cin, id);
						ticketManager.getRevenue(id);
					}
					else if(tmp == 5) {
						ticketManager.getRevenue();
					}
					else if(tmp == 6) {
						string id;
						cout << "Nhap ma ve: ";
						getline(cin, id);
						ticketManager.del(id);
					}
				} while(tmp != 0);
				break;
			}	
		}	
	} while(opt != 0);
}
