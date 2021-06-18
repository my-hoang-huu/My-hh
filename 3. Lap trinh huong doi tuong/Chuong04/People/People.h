#pragma once
#include<iostream>
#include<string>
using namespace std;

class People
{
protected:
	float Luong;
	string hoten;
	string cmnd;
public:
	int Loai; // 0. Nguoi   1. Sinh vien   2. Cong nhan
	People() : Loai(0) {}
	virtual void Nhap();
	virtual void Xuat() {
		cout << "\nho ten: " << hoten << endl;
		cout << "cmnd: " << cmnd << endl;
	}
	virtual float GetLuong() {
		return Luong;
	}
};

