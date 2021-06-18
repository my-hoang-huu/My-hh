#include "Diem.h"

Diem Diem::operator= (const Diem& p)
{
	x = p.x;
	y = p.y;
	return *this;
}
void Diem::Nhap() {
	cout << "\n	Nhap x: ";
	cin >> x;
	cout << "	Nhap y: ";
	cin >> y;
}
void Diem::Xuat() {
	cout << "(" << x << "," << y << ")";
}
bool Diem::operator ==(const Diem& p) {
	if (x == p.x && y == p.y)
	{
		return true;
	}
	return false;
}
bool Diem::operator !=(const Diem& p)
{
	if (!(x == p.x && y == p.y))
	{
		return true;
	}
	return false;
}
float Diem::KhoangCachGoc() {
	return sqrt(x * x + y * y);
}
float Diem::KhoangCach(const Diem& P) {
	return sqrt((x - P.x) * (x - P.x) + (y - P.y) * (y - P.y));
}
float Diem::KhoangCachX(const Diem& P) {
	return abs(x - P.x);
}
float Diem::KhoangCachY(const Diem& P) {
	return abs(y - P.y);
}
Diem Diem::DoiXungTung() {
	Diem Temp;
	Temp.x = -x;
	Temp.y = y;
	return Temp;
}
istream& operator>>(istream& is, Diem& p)
{
	cout << "\nNhap x: ";
	is >> p.x;
	cout << "Nhap y: ";
	is >> p.y;
	return is;
}
ostream& operator<<(ostream& os, Diem& p)
{
	os << "(" << p.x << "," << p.y << ")";
	return os;
}
Diem Diem::TinhTien(float a, float b)
{
	float xx = x + a;
	float yy = y + b;
	return Diem(xx, yy);
}
Diem Diem::Quay(float angle) {
	angle = angle * PI / 180;
	float xx = x * cos(angle) - y * sin(angle);
	float yy = x * sin(angle) + y * cos(angle);
	return Diem(xx, yy);
}
Diem Diem::QuayI(Diem I, float angle) {
	angle = angle * PI / 180;
	float xx = I.x + (x - I.x) * cos(angle) - (y - I.y) * sin(angle);
	float yy = I.y + (x - I.x) * sin(angle) + (y - I.y) * cos(angle);
	return Diem(xx, yy);
}