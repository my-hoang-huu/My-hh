#pragma once
#include "diem.h"

class tamgiac
{
private:
	diem a, b, c;
public:
	tamgiac() : a(), b(), c() {}
	tamgiac(diem aa, diem bb, diem cc) : a(aa), b(bb), c(cc) {}
	tamgiac(const tamgiac& copy) : a(copy.a), b(copy.b), c(copy.c) {}

	diem getterA() { return a; }
	diem getterB() { return b; }
	diem getterC() { return c; }

	void setterA(float hoanh, float tung) { a.setterXY(hoanh, tung); }
	void setterB(float hoanh, float tung) { b.setterXY(hoanh, tung); }
	void setterC(float hoanh, float tung) { c.setterXY(hoanh, tung); }

	void nhap();
	void xuat();
	void tinhtien(float xx, float yy);
	void quay(float alpha);
	void zoom(float x);
	~tamgiac() { a = diem(), b = diem(), c = diem(); }
};

