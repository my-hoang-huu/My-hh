#pragma once
#include"People.h"
class Giangvien : public People
{
private:
	int Sotietday;
public:
	void Nhap() {
		//People::Nhap();//Nhap toan bo nhu lop people
		cout << "\nNhap ho ten: ";
		getline(cin, People::hoten);
		cout << "Nhap cmnd: ";
		getline(cin, cmnd);
		cout << "Nhap MSSV: ";
		cin >> Sotietday;
	}
	void Xuat() {
		People::Xuat();
		cout << "MSSV: " << Sotietday;
	}
};

