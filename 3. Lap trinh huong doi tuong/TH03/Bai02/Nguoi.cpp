#include "Nguoi.h"
#include<string>

void People::Nhap() {
	cin.ignore();
	cout << "\nNhap ho ten: ";
	getline(cin, Hoten);
	cout << "Nhap ngay sinh: ";
	Ngaysinh.Nhap();
	cout << "Nhap CMND: ";
	cin >> CMND;
}
void People::Xuat() {
	cout << "\n	Ho ten: " << Hoten;
	cout << "\n	CMND: " << CMND;
	cout << "\n	Ngay sinh: ";
	Ngaysinh.Xuat();
}