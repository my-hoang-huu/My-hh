#pragma once
#include<iostream>
using namespace std;



class phanso
{
private:
	int tu;
	int mau;
public:
	void Nhap();
	void Xuat();
	phanso Cong(phanso);
	phanso Tru(phanso);
	phanso Nhan(phanso);
	phanso Chia(phanso);
	void Rutgon();
	float DinhGT();
};
int UCLN(int, int);


