#pragma once
#include"Sinhvien.h"
class svCaodang : public Sinhvien
{
protected:
	float Diemthitotnghiep;
public:
	svCaodang() {
		Loai = 1;
	}
	void Nhap() {
		Sinhvien::Nhap();
		cout << "Diem thi tot nghiep: ";
		cin >> Diemthitotnghiep;
	}
	void Xuat() {
		cout << "\n-------\n-- Cao dang -- ";
		Sinhvien::Xuat();
		cout << "\nDiem thi tot nghiep: " << Diemthitotnghiep;
	}
	bool Xettotnghiep() {
		if (Tongtinchi >= 100 && Diemtrungbinh >= 5 && Diemthitotnghiep >= 5)
		{
			return true;
		}
		return false;
	}
};

