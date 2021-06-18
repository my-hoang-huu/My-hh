#pragma once
#include"Dagiac.h"

class Tamgiac : protected Dagiac
{
private:
public:
	void Nhap() {
		Dagiac::Nhap(3);
		/*	Sodinh = 3;
			Dinh = new Diem[Sodinh];
			for (int i = 0; i < Sodinh; i++)
			{
				cout << "\nNhap toa do dinh " << i + 1;
				cin >> Dinh[i];
			}*/

	}
	void Xuat() {
		Dagiac::Xuat();
	}
	//~Tamgiac() {
	//	delete[]Dinh;
	//	cout << "\nHAM HUY TAM GIAC GOI THUC HIEN";
	//}
};

