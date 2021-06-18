#pragma once
#include"Sinhvien.h"

class svDaihoc : public Sinhvien
{
protected:
	string Tenluanvan;
	float Diemluanvan;
public:
	svDaihoc() {
		Loai = 2;
	}
	void Nhap() {
		Sinhvien::Nhap();
		cout << "Ten luan van: ";
		cin.ignore();
		getline(cin, Tenluanvan);
		cout << "Diem luan van: ";
		cin >> Diemluanvan;
	}
	void Xuat() {
		cout << "\n-------\n-- Dai hoc -- ";
		Sinhvien::Xuat();
		cout << "\nTen luan van: " << Tenluanvan;
		cout << "\nDiem luan van: " << Diemluanvan;
	}
	bool Xettotnghiep() {
		if (Tongtinchi >= 140 && Diemtrungbinh >= 5 && Diemluanvan >= 5)
		{
			return true;
		}
		return false;
	}
};

