#include "Sophuc.h"
int main()
{
	Sophuc a, b, c;
	cout << "Nhap so phuc a: ";
	a.Nhap();
	cout << "So phuc a: ";
	a.Xuat();
	cout << "\n---\nNhap so phuc b: ";
	b.Nhap();
	cout << "So phuc b: ";
	b.Xuat();
	cout << "\n---\nTong a va b: ";
	c = a.Cong(b);
	c.Xuat();
	cout << "\nHieu a va b: ";
	c = a.Tru(b);
	c.Xuat();
	cout << "\nTich a va b: ";
	c = a.Nhan(b);
	c.Xuat();
	cout << "\nThuong a va b: ";
	c = a.Chia(b);
	c.Xuat();
	cout << endl;
	return 1;
}