#pragma once
#include"Diem.h"
#include<iostream>
using namespace std;
class Dagiac
{
protected:
	int Sodinh;
	Diem* Dinh;
public:
	void Nhap(int n) {
		cout << "\nNhap so dinh: ";
		Sodinh = n;
		Dinh = new Diem[Sodinh];
		for (int i = 0; i < Sodinh; i++)
		{
			cout << "\nNhap toa do dinh " << i + 1;
			cin >> Dinh[i];
		}
	}
	void Xuat() {
		for (int i = 0; i < Sodinh; i++)
		{
			cout << "\nDinh " << i + 1;
			cout << Dinh[i];
		}
	}
	~Dagiac() {
		delete[]Dinh;
		cout << "\nHAM HUY DA GIAC GOI THUC HIEN";
	}
};

