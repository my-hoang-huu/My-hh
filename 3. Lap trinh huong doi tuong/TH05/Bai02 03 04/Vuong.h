#pragma once
#include"Chunhat.h"
class Vuong : public Chunhat
{
protected:
public:
	Vuong() {
		Loai = 4;
	}
	void Nhap() {
		do
		{
			Chunhat::Nhap();
			if (!KtVuong())
			{
				cout << "\nHai canh ke khong bang nhau. Vui long nhap lai!";
			}
		} while (!KtVuong());
	}
	bool KtVuong() {
		if (CanhTren == CanhTrai)
		{
			return true;
		}
		return false;
	}
	void Xuat() {
		cout << "\nThong tin hinh vuong: ";
		Dagiac::Xuat();
		cout << "\nCanh = " << CanhTren;
	}
};

