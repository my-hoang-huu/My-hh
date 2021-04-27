#pragma once
#include <iostream>
#include <string>
using namespace std;

class diem
{
private:
	float x, y;
public:
	diem() : x(0), y(0) {}
	diem(float hoanh, float tung) : x(hoanh), y(tung) {}
	diem(const diem& b) : x(b.x), y(b.y) {}

	float getterX() { return x; }
	float getterY() { return y; }
	void setterX(float hoanh) { x = hoanh; }
	void setterY(float tung) { y = tung; }
	void setterXY(float hoanh, float tung) { x = hoanh; y = tung; }

	void nhap();
	void xuat();
	float khoangcach(diem b);
	void tinhtien(float hoanh, float tung);
	void quay(float alpha);

	bool sosanhXY();
	~diem() { x = 0; y = 0; }
};
