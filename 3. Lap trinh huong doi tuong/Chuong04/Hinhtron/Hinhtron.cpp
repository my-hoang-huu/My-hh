#include "Hinhtron.h"


void Hinhtron::Hinhtron::Nhap()
{
	cout << "\n	Nhap tam: ";
	i.Nhap();
	cout << "	Ban kinh: ";
	cin >> r;
}
void Hinhtron::Hinhtron::Xuat()
{
	cout << "	Tam: ";
	i.Xuat();
	cout << "	Ban kinh: " << r << endl;
}
istream& operator >> (istream& is, Hinhtron& O) {
	cout << "\n	Nhap tam: ";
	cin >> O.i;
	cout << "	Ban kinh: ";
	is >> O.r;
	return is;
}
ostream& operator << (ostream& os, Hinhtron& O) {
	cout << "	Tam: ";
	cout << O.i;
	cout << "	Ban kinh: " << O.r << endl;
	return os;
}

Hinhtron& Hinhtron::operator=(const Hinhtron& o) {
	r = o.r;
	i = o.i;
	return *this;
}

bool Hinhtron::operator== (const Hinhtron& o) {
	if (i == o.i && r == o.r)
	{
		return true;
	}
	return false;
}
float Hinhtron::ChuVi()
{
	float c = float(2) * PI * r;
	return c;
}
float Hinhtron::DienTich() {
	return 2 * PI * r;
}
bool Hinhtron::KiemTraThuoc(Diem m) {
	if (m.KhoangCach(i) <= r)
		return true;
	return false;
}
void Hinhtron::KiemTraViTri(Diem m) {
	float k = m.KhoangCach(i);
	if (k <= r)
	{
		if (k < r)
		{
			cout << "Diem da cho nam trong duong tron.";
		}
		else
		{
			cout << "Diem da cho nam tren duong tron.";
		}
	}
	else
	{
		cout << "Diem da cho khong thuoc duong tron.";
	}
}
int Hinhtron::ViTriTuongDoi(Hinhtron b) {
	if (i.GetX() == b.i.GetX() && i.GetY() == b.i.GetY() && r == b.r)
		return 0;
	if (i.KhoangCach(b.i) > r + b.r)
		return 1;
	if (i.KhoangCach(b.i) == r + b.r)
		return 2;
	if (i.KhoangCach(b.i) < r + b.r)
	{
		if (i.KhoangCach(b.i) > abs(r - b.r))
			return 3;
		if (i.KhoangCach(b.i) == abs(r - b.r))
			return 4;
		if (i.KhoangCach(b.i) < abs(r - b.r))
			return 5;
	}
	else
		return 5;
}
