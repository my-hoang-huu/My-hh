#pragma once
#include"Nguoi.h"
class Nghesi : public People
{
protected:
	string Linhvuc;
	string Giaithuong;
public:
	void Nhap() {
		People::Nhap();
		cin.ignore();
		cout << "Nhap linh vuc: ";
		getline(cin, Linhvuc);
		cout << "Nhap giai thuong: ";
		getline(cin, Giaithuong);
	}
	void Xuat() {
		cout << "\nThong tin nghe si vua nhap: ";
		People::Xuat();
		cout << "\n	Linh vuc: " << Linhvuc;
		cout << "\n	Giai thuong: " << Giaithuong;
	}
};

