#pragma once
#include"Nhanvien.h"
class NhanvienSX :public Nhanvien
{
protected:
	double Luongcanban;
	int Sosanpham;
public:
	double Tinhluong() {
		return Luong = Luongcanban + 1.0 * Sosanpham * 5000;
	}
	void Nhap() {
		Nhanvien::Nhap();
		cout << "Nhap luong can ban: ";
		cin >> Luongcanban;
		cout << "Nhap so san pham: ";
		cin >> Sosanpham;
	}
	void Xuat() {
		Nhanvien::Xuat();
		cout << "\n	Luong: " << Tinhluong();
	}
};

