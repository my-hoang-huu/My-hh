#pragma once
#include "diem.h"

class dagiac : public Diem
{
protected:
	Diem* a;
	int Sodinh;
public:

	void nhap()
	{
		cin >> Sodinh;
		a = new Diem[Sodinh];
		cout << "Nhap danh sach toa do cac diem da giac:" << endl;
		for (int i = 0; i < Sodinh; i++)
		{
			cout << "Nhap diem thu " << i + 1 << ":" << endl;
			a[i].nhap();
		}
	}
	void xuat()
	{
		cout << "Danh sach toa do cac diem trong da giac:" << endl;
		for (int i = 0; i < Sodinh; i++)
		{
			a[i].xuat();
			cout << endl;
		}
	}
	//dagiac& operator=(const dagiac& b)
	//{
	//	if (&b == this)
	//	{
	//		return *this;
	//	}
	//	Sodinh = b.Sodinh;
	//	a = new Diem[Sodinh];
	//	for (int i = 0; i < b.Sodinh; i++)
	//	{
	//		a[i] = b.a[i];
	//	}
	//	return *this;
	//}
	dagiac tinhtiendg(float m, float n)
	{
		dagiac d = *this;
		for (int i = 0; i < Sodinh; i++)
		{
			d.a[i] = d.a[i].tinhtien(m, n);
		}
		return d;
	}

	~dagiac()
	{

	}

};