#pragma once
#include<iostream>
#define PI 3.14159
using namespace std;

class Diem
{
private:
	float x;
	float y;
public:
	Diem() : x(), y() {};
	Diem(float tung, float hoanh) : x(tung), y(hoanh) {}
	Diem(float tung) : x(tung), y() {}
	Diem(const Diem& a) : x(a.x), y(a.y) {}
	void Nhap();
	void Xuat();
	//Diem TinhTien();
	float getX() { return x; };
	float getY() { return y; };
	void setX(float tung)
	{
		x = tung;
	}
	void setY(float hoanh)
	{
		y = hoanh;
	}
	void setXY(float tung, float hoanh)
	{
		x = tung;
		y = hoanh;
	}
	void TinhTien(float, float);
	void Quay(float);
};

