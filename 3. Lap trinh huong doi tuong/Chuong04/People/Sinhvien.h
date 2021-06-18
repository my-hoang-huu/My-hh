#pragma once
#include"People.h"

class Sinhvien : public People
{
private:
	string MSSV;
public:
	Sinhvien() {
		Loai = 1;
	}
	void Nhap() {
		cout << "\nNhap thong tin sinh vien: ";
		//People::Nhap();//Nhap toan bo nhu lop people
		cout << "\nNhap ho ten: ";
		getline(cin, People::hoten);
		cout << "Nhap cmnd: ";
		getline(cin, cmnd);
		cout << "Nhap MSSV: ";
		getline(cin, MSSV);
	}
	void Xuat() {
		cout << "\nThong tin sinh vien: ";
		People::Xuat();
		cout << "MSSV: " << MSSV;
	}
};

