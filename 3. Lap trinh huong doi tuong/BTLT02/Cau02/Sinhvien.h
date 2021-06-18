#pragma once
#include<iostream>
#include<string>
using namespace std;
class Sinhvien
{
protected:
	int MSSV;
	string Hoten;
	string Diachi;
	int Tongtinchi;
	float Diemtrungbinh;
public:
	int Loai;
	Sinhvien() {
		Loai = 0;
	}
	virtual void Nhap() {
		cout << "\n-------\nNhap: ";
		cout << "\nMa so sinh vien: ";
		cin >> MSSV;
		cin.ignore();
		cout << "Ho ten sinh vien: ";
		getline(cin, Hoten);
		cout << "Dia chi: ";
		getline(cin, Diachi);
		cout << "Tong tin chi: ";
		cin >> Tongtinchi;
		cout << "Diem trung binh: ";
		cin >> Diemtrungbinh;
	}
	float getDiemtrungbinh() {
		return Diemtrungbinh;
	}
	virtual void Xuat() {
		cout << "\n-- Thong tin sinh vien -- ";
		cout << "\nMa so sinh vien: " << MSSV;
		cout << "\nHo ten sinh vien: " << Hoten;
		cout << "\nDia chi: " << Diachi;
		cout << "Tong tin chi: " << Tongtinchi;
		cout << "\nDiem trung binh: " << Diemtrungbinh;
	}
	virtual bool Xettotnghiep() { return 0; }
};

