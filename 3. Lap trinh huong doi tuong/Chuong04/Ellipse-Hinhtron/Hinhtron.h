#pragma once
#include"Ellipse.h"

class Hinhtron : public Ellipse
{
private:
public:
	void Nhap() {
		cout << "Nhap Tam I: ";
		cin >> I;
		cout << "\nNhap ban kinh: ";
		cin >> a;
		b = a;
	}
	void Xuat() {
		cout << "\nTam I: " << I;
		cout << "	Ban kinh: " << a;
	}
};

