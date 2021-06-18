#pragma once
#include"Sach.h"
class Tapchi : public Sach
{
protected:
	string Chude;
public:
	Tapchi() {
		Loai = 3;
	}
	void Nhap() {
		cout << "\nNhap thong tin tap chi: ";
		Sach::Nhap();
		cout << "Nhap chu de: ";
		cin.ignore();
		getline(cin, Chude);
	}
	void Xuat() {
		Sach::Xuat();
		cout << "\nChu de: " << Chude;
	}
};

