#pragma once
#include"Nhanvien.h"
class NhanvienVP :public Nhanvien
{
protected:
	int Songaylamviec;
public:
	double Tinhluong() {
		return Luong = 1.0 * Songaylamviec * 100000;
	}
	void Nhap() {
		Nhanvien::Nhap();
		cout << "Nhap so ngay lam viec: ";
		cin >> Songaylamviec;
	}
	void Xuat() {
		Nhanvien::Xuat();
		cout << "\n	Luong: " << Tinhluong();
	}
};

