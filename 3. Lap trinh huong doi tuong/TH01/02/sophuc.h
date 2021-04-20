#pragma once
#include<iostream>
#include<cmath>
using namespace std;

class Sophuc
{
private:
	float thuc;
	float ao;
public:
	void Nhap();
	void Xuat();
	Sophuc Cong(Sophuc);
	Sophuc Tru(Sophuc);
	Sophuc Nhan(Sophuc);
	Sophuc Chia(Sophuc);
};

