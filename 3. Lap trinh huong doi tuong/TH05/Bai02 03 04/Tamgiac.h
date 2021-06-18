#pragma once
#include"Dagiac.h"
class Tamgiac : public Dagiac
{
protected:
public:
	Tamgiac() {
		Loai = 0;
	}
	void Nhap() {
		Sodinh = 3;
		Dinh = new Diem[Sodinh];
		do
		{
			for (int i = 0; i < Sodinh; i++)
			{
				Dinh[i].Nhap();
			}
			if (IsThanghang())
				cout << "\nBa dinh vua nhap thang hang. Vui long nhap lai!";
		} while (IsThanghang());
	}
	bool IsThanghang() {
		if (Dinh[0].isBaDiemthanghang(Dinh[1], Dinh[2]))
		{
			return true;
		}
		return false;
	}
	void Xuat() {
		cout << "\nThong tin tam giac: ";
		Dagiac::Xuat();
	}
};

