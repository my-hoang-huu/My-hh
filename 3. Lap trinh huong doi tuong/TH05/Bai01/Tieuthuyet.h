#pragma once
#include"Sach.h"
class Tieuthuyet : public Sach
{
protected:
	string Theloai;
public:
	Tieuthuyet() {
		Loai = 2;
	}
	void Nhap() {
		cout << "\nNhap thong tin tieu thuyet: ";
		Sach::Nhap();
		cin.ignore();
		cout << "Nhap the loai: ";
		getline(cin, Theloai);
	}
	void Xuat() {
		Sach::Xuat();
		cout << "\nThe loai: " << Theloai;
	}
};

