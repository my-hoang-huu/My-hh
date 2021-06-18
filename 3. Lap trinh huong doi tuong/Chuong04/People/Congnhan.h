#pragma once
#include"People.h"
class Congnhan : public People
{
private:
public:
	Congnhan() {
		Loai = 2;
	}
	float GetLuong() { return Luong; }
	void Nhap() {
		cout << "\nNhap thong tin cong nhan: ";
		People::Nhap();
		cout << "Nhap luong: ";
		cin >> Luong;
	}
	void Xuat() {
		cout << "\nThong tin cong nhan: ";
		People::Xuat();
		cout << "Luong: " << Luong;
	}
};

