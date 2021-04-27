#include "tamgiac.h"


void tamgiac::nhap()
{
	cout << "-Diem 1-\n"; a.nhap();
	cout << "-Diem 2-\n"; b.nhap();
	cout << "-Diem 3-\n"; c.nhap();
}
void tamgiac::xuat()
{
	cout << "  + Diem 1: "; a.xuat(); cout << endl;
	cout << "  + Diem 2: "; b.xuat(); cout << endl;
	cout << "  + Diem 3: "; c.xuat(); cout << endl;
}

void tamgiac::tinhtien(float xx, float yy)
{
	a.tinhtien(xx, yy);
	b.tinhtien(xx, yy);
	c.tinhtien(xx, yy);
}

void tamgiac::quay(float alpha)
{
	a.quay(alpha);
	b.quay(alpha);
	c.quay(alpha);
}

void tamgiac::zoom(float x)
{
	a.setterXY(a.getterX() * x, a.getterY() * x);
	b.setterXY(b.getterX() * x, b.getterY() * x);
	c.setterXY(c.getterX() * x, c.getterY() * x);
}