#include "diem.h"
#include<iostream>
using namespace std;
#pragma once

class Dagiac
{
private:
	int Sodinh;
	Diem* Dinh;
public:
	Dagiac() { Dinh = nullptr; Sodinh = 0; };
	Dagiac(int);
	Dagiac(const Dagiac& a) /*: Sodinh(a.Sodinh), Dinh(a.Dinh) {}*/;
	void Nhap();
	void Xuat();
	void TinhTien(float, float);
	void Quay(float);
	void PhongTo(float);
	void ThuNho(float);
	~Dagiac();
};
