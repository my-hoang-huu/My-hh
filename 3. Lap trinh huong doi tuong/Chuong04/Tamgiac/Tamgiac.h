#include "Diem.h"
#include<iostream>
using namespace std;
#pragma once
class Tamgiac
{
private:
	Diem a, b, c;
public:
	Tamgiac() : a(0, 0), b(0, 1), c(1, 0) {}
	Tamgiac(Diem aa, Diem bb, Diem cc) : a(aa), b(bb), c(cc) {}
	Tamgiac(Diem aa) : a(aa), b(), c() {}
	Tamgiac(const Tamgiac& x) : a(x.a), b(x.b), c(x.c) {}
	void Nhap();
	void Xuat();
	friend istream& operator>>(istream&, Tamgiac&);
	friend ostream& operator<<(ostream&, Tamgiac);
	Tamgiac TinhTien(float, float);
	Tamgiac QuayQuanhTamO(float);
	Tamgiac QuayQuanhDiemI(Diem, float);
	Tamgiac ThuPhong(float);

};

