#pragma once
#include"Chunhat.h"
class Vuong : public Chunhat
{
public:
	void Nhap() {
		do
		{
			Chunhat::Nhap();
			if (Dinh[0].KhoangCach(Dinh[1]) != Dinh[1].KhoangCach(Dinh[2]))
			{
				cout << "\nHINH VUA NHAP KHONG CO 2 CANH KE BANG NHAU!";
			}
		} while (Dinh[0].KhoangCach(Dinh[1]) != Dinh[1].KhoangCach(Dinh[2]));
	}
	void Xuat() {
		cout << "\nHinh vuong vua nhap: ";
		Tugiac::Xuat();
	}
};

