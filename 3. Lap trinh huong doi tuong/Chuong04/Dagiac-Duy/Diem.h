#pragma once
#include <iostream>
using namespace std;

class Diem
{
private:
	float x, y;
public:
	float TinhKhoangCach(Diem b)
	{
		float kq;
		kq = sqrt((x - b.x) * (x - b.x) + (y - b.y) * (y - b.y));
		return kq;
	}
	float getX()
	{
		return x;
	}
	float getY()
	{
		return y;
	}
	void setX(float newX)
	{
		x = newX;
	}
	void setY(float newY)
	{
		y = newY;
	}
	void setxy(float a, float b)
	{
		x = a;
		y = b;
	}

	// method
	void nhap()
	{
		cout << "Nhap x = ";
		cin >> x;
		cout << "Nhap y = ";
		cin >> y;
	}
	void xuat()
	{
		cout << "(" << x << "," << y << ")";
	}

	Diem tinhtien(float p, float q)
	{
		Diem d;
		d.x = x + p;
		d.y = y + q;
		return d;
	}

	~Diem() {}
};