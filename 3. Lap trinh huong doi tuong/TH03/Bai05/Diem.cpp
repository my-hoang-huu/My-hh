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
Diem Diem::Vector(Diem b) {
	float xx = b.x - x;
	float yy = b.y - y;
	return Diem(xx, yy);
}
bool Diem::isBaDiemThangHang(Diem b, Diem c) {
	float d1 = KhoangCach(b);
	float d2 = KhoangCach(c);
	float d3 = b.KhoangCach(c);
	if (d1 + d2 == d3 || d1 + d3 == d2 || d2 + d3 == d1)
	{
		return 1;
	}
	return 0;
}
bool Diem::VectorSongsong(Diem b, Diem c, Diem d) {
	Diem v1 = Vector(b);
	Diem v2 = c.Vector(d);
	if ((v1.GetX() / v2.GetX() == v1.GetY() / v2.GetY()) || (v1.GetX() == v2.GetX() && v1.GetX() == 0) || (v1.GetY() == v2.GetY() && v1.GetY() == 0))
	{
		return true;
	}
	return false;
}