#pragma once
#include "diem.h"

class dagiac
{
private:
	diem* a;
	int n;
public:
	dagiac() { a = nullptr; n = 0; }
	dagiac(diem *aa, int nn)
	{
		n = nn;
		a = new diem[n];
		for (int i = 0; i < n; i++)
		{
			a[i] = aa[i];
		}
	}
	dagiac(const dagiac& copy)
	{
		n = copy.n;
		a = new diem[n];
		for (int i = 0; i < n; i++)
		{
			a[i] = copy.a[i];
		}
	}

	diem* getterArray() { return a; } // lay ca mang
	diem getterElement(int index) { return a[index]; } // lay phan tu thu i (index)
	void setterElement(int index, diem x) { a[index] = x; }
	void setterElement(int index, float hoanh, float tung) { a[index].setterXY(hoanh, tung); }

	void nhap();
	void xuat();
	void tinhtien(float hoanh, float tung);
	void quay(float alpha);
	void zoom(float x);
	void release() { delete[]a; a = nullptr; }

	~dagiac() { a = nullptr; n = 0; }
};

