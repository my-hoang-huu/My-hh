#include "Diem.h"

void Diem::Nhap() {
	cout << "\nNhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
}
void Diem::Xuat() {
	cout << "(" << x << "," << y << ") ";
}
float Diem::GetX() {
	return x;
}
float Diem::GetY() {
	return y;
}
void Diem::SetXY(float xx, float yy) {
	x = xx;
	y = yy;
}
Diem Diem::Tinhtien(float a, float b) {
	float xx = x + a;
	float yy = y + b;
	return Diem(xx, yy);
}
float Diem::Khoangcach(Diem b) {
	return sqrt((b.x - x) * (b.x - x) + (b.y - y) * (b.y - y));
}
bool Diem::isBaDiemthanghang(Diem b, Diem c) {
	float d1 = Khoangcach(b);
	float d2 = Khoangcach(c);
	float d3 = b.Khoangcach(c);
	if (d1 + d2 == d3 || d1 + d3 == d2 || d2 + d3 == d1)
	{
		return true;
	}
	return false;
}
Diem Diem::Vector(Diem b) {
	float xx = b.x - x;
	float yy = b.y - y;
	return Diem(xx, yy);
}
float Diem::TichVector(Diem b) {
	return x * b.x + y * b.y;
}
