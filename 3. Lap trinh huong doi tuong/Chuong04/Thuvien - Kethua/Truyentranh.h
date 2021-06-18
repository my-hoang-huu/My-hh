#pragma once
#include"Sach.h"
class Truyentranh : public Sach
{
protected:
	string Theloai;
public:
	Truyentranh() { Loai = 2; }
	void Nhap() {
		cout << "\nNhap thong tin truyen tranh: ";
		Sach::Nhap();
		cin.ignore();
		cout << "Nhap the loai: ";
		getline(cin, Theloai);
	}
	void Xuat() {
		cout << "\nThong tin truyen tranh: ";
		Sach::Xuat();
		cout << "\nThe loai: " << Theloai;
	}
};

