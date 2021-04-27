#include "dagiac.h"

void dagiac::nhap()
{
	if (a == nullptr)
	{
		cout << "Nhap so canh da giac: "; cin >> n;
		if (n < 3)
			return;

		a = new diem[n];
	}
	for (int i = 0; i < n; i++)
	{
		cout << "-Diem " << i + 1 << "-\n";
		a[i].nhap();
	}
}
void dagiac::xuat()
{
	for (int i = 0; i < n; i++)
	{
		cout << "  + Diem " << i + 1 << ": ";
		a[i].xuat(); cout << "\n\n";
	}
}

void dagiac::tinhtien(float hoanh, float tung)
{
	for (int i = 0; i < n; i++)
		a[i].tinhtien(hoanh, tung);
}

void dagiac::quay(float alpha)
{
	for (int i = 0; i < n; i++)
		a[i].quay(alpha);
}

void dagiac::zoom(float x)
{
	for (int i = 0; i < n; i++)
		a[i].setterXY(a[i].getterX() * x, a[i].getterY() * x);
}