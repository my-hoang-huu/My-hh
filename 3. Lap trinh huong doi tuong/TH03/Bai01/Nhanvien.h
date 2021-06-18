#pragma once
#include<iostream>
#include<string>
#include"Date.h"
using namespace std;

class Nhanvien
{
protected:
	string Hoten;
	Date Ngaysinh;
	double Luong;
public:
	Nhanvien() :Hoten(""), Ngaysinh(0, 0, 0), Luong(0) {}
	Nhanvien(const Nhanvien& n) { Hoten = n.Hoten; Ngaysinh = n.Ngaysinh; Luong = n.Luong; }
	~Nhanvien() { return; }
	string GetHoten() { return Hoten; }
	Date GetNgaysinh() { return Ngaysinh; }
	int GetLuong() { return Luong; }
	void Nhap() {
		cout << "\nNhap ho ten: ";
		/*cin.ignore();*/
		getline(cin, Hoten);
		cout << "Nhap ngay sinh: ";
		Ngaysinh.Nhap();
	}
	void Xuat() {
		cout << "\n	Ho ten: " << Hoten;
		cout << "\n	Ngay sinh: ";
		Ngaysinh.Xuat();
	}
};

