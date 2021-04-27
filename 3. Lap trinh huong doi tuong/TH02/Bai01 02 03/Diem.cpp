#include "diem.h"
#include<cmath>

void Diem::Nhap()
{
	cout << "\nToa do x: "; cin >> x;
	cout << "Toa do y: "; cin >> y;
}
void Diem::Xuat()
{
	cout << "(" << x << ";" << y << ")";
}
void Diem::TinhTien(float a, float b)
{
	setX(getX() + a);
	setY(getY() + b);
}
void Diem::Quay(float angle) {
	angle = angle * PI / 180;
	float a = getX();
	float b = getY();
	setX(a * cos(angle) - b * sin(angle));
	setY(a * sin(angle) + b * cos(angle));
}
