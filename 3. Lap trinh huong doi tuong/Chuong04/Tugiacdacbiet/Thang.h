#pragma once
#include"Tugiac.h"
class HThang :public Tugiac
{
public:
	void Nhap() {
		Dinh = new Diem[4];
		do
		{
			cout << "\nNhap cac dinh theo thu tu: ";
			for (int i = 0; i < 4; i++)
			{
				if (i == 0 || i == 2)
				{
					cout << "\nNhap dinh " << i + 1 << ": ";
					cin >> Dinh[i];
				}
				else
				{
					float x;
					cout << "\nNhap dinh " << i + 1;
					cout << "\nNhap x : ";
					cin >> x;
					cout << "y = " << Dinh[i - 1].GetY() << " (= Tung do Dinh " << i << " vi chi lay gia tri day song song truc hoanh)\n";
					Dinh[i].SetX(x);
					Dinh[i].SetY(Dinh[i - 1].GetY());
				}
			}
			if (isThangHang() == 1)
			{
				cout << "\nHINH VUA NHAP CHUA BA DIEM THANG HANG HOAC TRUNG DINH, VUI LONG KIEM TRA VA NHAP LAI!";
			}
		} while (isThangHang() == 1);
	}
	void Xuat() {
		cout << "\nHinh thang vua nhap: ";
		Tugiac::Xuat();
	}
};

