#pragma once
#include<iostream>
#include"Diem.h"
using namespace std;
class Tugiac
{
protected:
	Diem* Dinh;
public:
	Tugiac();
	~Tugiac();
	Diem GetDinh(int);
	float GetToaDoX(int);
	float GetToaDoY(int);
	void SetDinh(int, float, float);
	void SetToaDoX(int, float);
	void SetToaDoY(int, float);
	void Nhap();
	void Xuat();
	bool isThangHang();
};

