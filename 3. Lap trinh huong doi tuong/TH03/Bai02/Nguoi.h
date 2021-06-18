#pragma once
#include"Date.h"
#include<iostream>
using namespace std;

class People
{
protected:
	string Hoten;
	Date Ngaysinh;
	int CMND;
public:
	People() : Hoten(""), Ngaysinh(01, 01, 01), CMND(1000000000) {}
	~People() { return; }
	string GetHoten() { return Hoten; }
	Date GetNgaysinh() { return Ngaysinh; }
	int GetCMND() { return CMND; }
	void SetHoten(string a) { Hoten = a; }
	void SetNgaysinh(Date d) { Ngaysinh = d; }
	void Nhap();
	void Xuat();
};

