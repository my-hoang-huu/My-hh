#include<iostream>
using namespace std;
#define PI atan(1) * 4
#pragma once
class Diem
{
private:
	float x;
	float y;
public:
	Diem() : x(), y() {}
	Diem(float xx, float yy) : x(xx), y(yy) {}
	Diem(float xx) : x(xx), y(0) {}
	Diem(const Diem& p) : x(p.x), y(p.y) {}
	Diem& operator= (const Diem&);
	void Nhap();
	void Xuat();
	float GetX() { return x; }
	float GetY() { return y; }
	void SetX(float a) { x = a; }
	void SetY(float b) { y = b; };
	bool operator ==(const Diem&);
	bool operator !=(const Diem&);
	float KhoangCachGoc();
	float KhoangCach(const Diem&);
	float KhoangCachX(const Diem&); //Khoang cach 2 diem theo phuong X
	float KhoangCachY(const Diem&);
	Diem DoiXungTung();
	friend istream& operator>>(istream&, Diem&);
	friend ostream& operator<<(ostream&, Diem&);
	~Diem() { return; }
};

