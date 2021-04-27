#include "diem.h"

void diem::nhap()
{
	cout << "  + x= "; cin >> x;
	cout << "  + y= "; cin >> y;
}

void diem::xuat()
{
	cout << "(" << x << ", " << y << ")";
}

void diem::tinhtien(float hoanh, float tung)
{
	x += hoanh;
	y += tung;
}

void diem::quay(float alpha)
{
	float rad = (alpha * 3.14) / 180;
	x = x * cos(rad) - y * sin(rad);
	y = x * sin(rad) + y * cos(rad);
}

bool diem::sosanhXY()
{
	if (x > y)
		return 1;
	else if (x < y)
		return -1;
	else return 0;
}

float diem::khoangcach(diem b)
{
	return sqrt((b.x - x) * (b.x - x) + (b.y - y) * (b.y - y));
}