#pragma once
#include<iostream>
using namespace std;

class Diem
{
private:
	float x;
	float y;
public:
	Diem() : x(0), y(0) {}
	Diem(float xx, float yy) : x(xx), y(yy) {}
	void Nhap();
	void Xuat();
	float GetX();
	float GetY();
	void SetXY(float, float);
	Diem Tinhtien(float a, float b);
	float Khoangcach(Diem);
	bool isBaDiemthanghang(Diem, Diem);
	Diem Vector(Diem);
	float TichVector(Diem);
};

