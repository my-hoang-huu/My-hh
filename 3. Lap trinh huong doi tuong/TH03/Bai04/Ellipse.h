#pragma once
#include"Diem.h"
#include<iostream>
#define PI atan(1)*4

using namespace std;

class Ellipse
{
protected:
	double a;
	double b;
	Diem I;
public:
	Ellipse() : I(0, 0), a(1), b(1) {}
	Ellipse(Diem II, float aa, float bb) : I(II), a(aa), b(bb) {}
	Ellipse(const Ellipse& e) : a(e.a), b(e.b), I(e.I) {}
	~Ellipse() { return; }
	Diem GetI() { return I; }
	double Geta() { return a; }
	double Getb() { return b; }
	void SetI(Diem II) { I = II; }
	void Seta(float aa) { a = aa; }
	void Setb(float bb) { b = bb; }
	void Nhap() {
		cout << "\nNhap tam I: ";
		cin >> I;
		cout << "Nhap ban truc lon: ";
		cin >> a;
		cout << "Nhap ban truc be: ";
		cin >> b;
	}
	void Xuat() {
		cout << "\nTam I: " << I;
		cout << "\nBan truc lon: " << a;
		cout << "\nBan truc be: " << b;
	}
	double Dientich() {
		return a * b * PI;
	}
};

