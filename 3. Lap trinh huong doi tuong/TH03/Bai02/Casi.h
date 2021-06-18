#pragma once
#include"Nghesi.h"
class Casi : public Nghesi
{
protected:
	string Dongnhac;
public:
	void Nhap() {
		People::Nhap();
		cin.ignore();
		cout << "Nhap giai thuong: ";
		getline(cin, Giaithuong);
		cout << "Nhap dong nhac: ";
		getline(cin, Dongnhac);
	}
	void Xuat() {
		cout << "\nThong tin ca si vua nhap: ";
		People::Xuat();
		cout << "\n	Dong nhac: " << Dongnhac;
		cout << "\n	Giai thuong: " << Giaithuong;
	}
};

