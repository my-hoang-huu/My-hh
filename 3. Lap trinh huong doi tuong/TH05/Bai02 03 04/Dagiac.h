#pragma once
#include"Diem.h"

class Dagiac
{
protected:
	int Sodinh;
	Diem* Dinh;
	int Loai;
public:
	Dagiac() {
		Sodinh = 0;
	}
	~Dagiac() {
		delete[]Dinh;
	}
	Dagiac(const Dagiac& a) {
		Sodinh = a.Sodinh;
		Dinh = new Diem[Sodinh];
		for (int i = 0; i < Sodinh; i++)
		{
			Dinh[i] = a.Dinh[i];
		}
	}
	Dagiac& operator=(const Dagiac& a) {
		delete Dinh;
		Sodinh = a.Sodinh;
		Dinh = new Diem[Sodinh];
		for (int i = 0; i < Sodinh; i++)
		{
			Dinh[i] = a.Dinh[i];
		}
		return *this;
	}
	int GetLoai() { return Loai; }
	virtual void Nhap() {
		if (!Sodinh)
		{
			do
			{
				cout << "\nNhap so dinh: ";
				cin >> Sodinh;
				if (Sodinh > 2)
					cout << "\nSo dinh phai lon hon 2!";
			} while (Sodinh > 2);
		}
		Dinh = new Diem[Sodinh];
		cout << "\nNhap toa do cac dinh theo thu tu: ";
		for (int i = 0; i < Sodinh; i++)
		{
			cout << "\nDinh " << i + 1 << ": ";
			Dinh[i].Nhap();
		}
	}
	virtual void Xuat() {
		cout << "\nToa do cac dinh: ";
		for (int i = 0; i < Sodinh; i++)
		{
			Dinh[i].Xuat();
		}
	}
	Dagiac Tinhtien(float a, float b) {
		Dagiac temp = *this;
		for (int i = 0; i < Sodinh; i++)
		{
			temp.Dinh[i] = Dinh[i].Tinhtien(a, b);
		}
		return temp;
	}
	void TuTinhTien(float a, float b) {
		for (int i = 0; i < Sodinh; i++)
		{
			Dinh[i] = Dinh[i].Tinhtien(a, b);
		}
	}
};

