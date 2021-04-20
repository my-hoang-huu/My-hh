#include "phanso.h"



void phanso::Nhap()
{
	cout << "\nNhap tu:  ";
	cin >> tu;
	cout << "Nhap mau:  ";
	cin >> mau;
}
void phanso::Xuat()
{
	cout << " " << tu << "/" << mau << endl;
}
phanso phanso::Cong(phanso b)
{
	phanso c;
	c.tu = tu * b.mau + mau * b.tu;
	c.mau = mau * b.mau;
	return c;
}
phanso phanso::Tru(phanso b)
{
	phanso c;
	c.tu = tu * b.mau - mau * b.tu;
	c.mau = mau * b.mau;
	return c;
}
phanso phanso::Nhan(phanso b)
{
	phanso c;
	c.tu = tu * b.tu;
	c.mau = mau * b.mau;
	return c;
}
phanso phanso::Chia(phanso b)
{
	phanso c;
	c.tu = tu * b.mau;
	c.mau = mau * b.tu;
	return c;
}
int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a + b;
}
void phanso::Rutgon()
{
	int u = UCLN(tu, mau);
	tu = tu / u;
	mau = mau / u;
}
float phanso::DinhGT()
{
	return float(tu) / mau;
}