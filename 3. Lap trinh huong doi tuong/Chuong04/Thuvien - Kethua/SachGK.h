#pragma once
#include"Sach.h"
class SachGK : public Sach
{
protected:
	string Monhoc;
	int Lop;
public:
	SachGK() {
		Loai = 1;
	}
	void Nhap() {
		cout << "\nNhap thong tin sach giao khoa: ";
		Sach::Nhap();
		cin.ignore();
		cout << "Nhap mon hoc: ";
		getline(cin, Monhoc);
		cout << "Nhap lop: ";
		cin >> Lop;
	}
	void Xuat() {
		cout << "\nThong tin sach giao khoa: ";
		Sach::Xuat();
		cout << "\nMon hoc: " << Monhoc;
		cout << "\nLop: " << Lop;
	}

};

