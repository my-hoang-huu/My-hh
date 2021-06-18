#pragma once
#include<iostream>
#include<string>
#include"Date.h"
using namespace std;
class Sach
{
protected:
	int Maso;
	string Tensach;
	string Nhaxuatban;
	Date Ngayxuatban;
	int Soluong;
	double Gia;
public:
	int Loai;
	Sach() { Loai = 0; }
	virtual void Nhap() {
		cout << "\nNhap ma so: ";
		cin >> Maso;
		cin.ignore();
		cout << "Nhap ten sach: ";
		getline(cin, Tensach);
		cout << "Nhap ten nha xuat ban: ";
		getline(cin, Nhaxuatban);
		cout << "Nhap ngay xuat ban: ";
		Ngayxuatban.Nhap();
		cout << "Nhap so luong sach: ";
		cin >> Soluong;
		cout << "Nhap gia: ";
		cin >> Gia;
	}
	virtual void Xuat() {
		cout << "\nTen sach: " << Tensach;
		cout << "\nTen nha xuat ban: " << Nhaxuatban;
		cout << "\nNgay xuat ban: ";
		Ngayxuatban.Xuat();
		cout << "\nSo luong sach: " << Soluong;
		cout << "\nGia: " << Gia;
	}
	double GetGia() {
		return Gia;
	}
};

