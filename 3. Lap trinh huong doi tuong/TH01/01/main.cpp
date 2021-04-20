#include "phanso.h"


int main()
{
	phanso a, b, c, d, e, g;
	cout << "Nhap phan so a: ";
	a.Nhap();
	cout << "Phan so a: ";
	a.Xuat();
	cout << "\n---\nNhap phan so b: ";
	b.Nhap();
	cout << "Phan so b: ";
	b.Xuat();
	c = a.Cong(b);
	cout << "\n---\nTong hai phan so: c = ";
	c.Xuat();
	d = a.Tru(b);
	cout << "Hieu hai phan so: d = ";
	d.Xuat();
	e = a.Nhan(b);
	cout << "Tich hai phan so: e = ";
	e.Xuat();
	g = a.Chia(b);
	cout << "Thuong hai phan so: g = ";
	g.Xuat();
	a.Rutgon();
	cout << "\n---\na sau khi rut gon";
	a.Xuat();
	b.Rutgon();
	cout << "b sau khi rut gon";
	b.Xuat();
	e.Rutgon();
	cout << "e sau khi rut gon";
	e.Xuat();
	cout << "\n---\nDinh gia tri a: " << a.DinhGT();
	cout << endl;
	return 1;

}