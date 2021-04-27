#include<iostream>
#include "diem.h"
#include<cmath>
using namespace std;
#pragma once

class Tamgiac
{
private:
	Diem a, b, c;
public:
	Tamgiac() : a(), b(), c() {}
	Tamgiac(Diem aa, Diem bb, Diem cc) : a(aa), b(bb), c(cc) {}
	Tamgiac(Diem aa) : a(aa), b(), c() {}
	Tamgiac(const Tamgiac& x) : a(x.a), b(x.b), c(x.c) {}
	void Nhap();
	void Xuat();
	void TinhTien(float, float);
	void Quay(float);
	void PhongTo(float);
	void ThuNho(float);




};

