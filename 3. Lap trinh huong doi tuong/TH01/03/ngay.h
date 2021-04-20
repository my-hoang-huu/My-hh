#pragma once
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

//mã, tên, ngày tháng năm sinh, điểm thi Toán, Văn, Anh
class Ngay
{
private:
	int ngay;
	int thang;
	int nam;
public:
	void Nhap()
	{
		do
		{
			cout << "\nNhap ngay: ";
			cin >> ngay;
			cout << "Nhap thang: ";
			cin >> thang;
			cout << "Nhap nam: ";
			cin >> nam;
			if (nam < 1 || thang >12 || thang < 1 || ngay > NgayToiDaThang() || ngay < 1 || nam < 1)
				cout << "\nNgay khong hop le. Vui long kiem tra va nhap lai!";
		} while (nam < 1 || thang >12 || thang < 1 || ngay > NgayToiDaThang() || ngay < 1 || nam < 1);
	}
	void Xuat()
	{
		cout << ngay << "/" << thang << "/" << nam;
	}
	bool KtNhuan()
	{
		if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0)
			return true;
		return false;
	}
	int NgayToiDaThang()
	{
		int NgayThang[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		if (KtNhuan())
			NgayThang[1] = 29;
		return NgayThang[thang - 1];
	}

};