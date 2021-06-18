#pragma once
#include"SachGK.h"
#include"Truyentranh.h"
class Thuvien
{
private:
	int SoDausach;
	Sach** arr;
public:
	Thuvien() { SoDausach = 0; }
	~Thuvien() {
		for (int i = 0; i < SoDausach; i++)
		{
			delete arr[i];
		}
		delete[] arr;
	}
	void Nhap() {
		cout << "\nNhap so dau sach: ";
		cin >> SoDausach;
		arr = new Sach * [SoDausach];
		int flag;
		for (int i = 0; i < SoDausach; i++)
		{
			cout << "\nChon phim tuong ung voi loai sach: \n0. Sach   1. Sach giao khoa   2. Truyen tranh\n";
			while (cin >> flag && flag != 0 && flag != 1 && flag != 2)
			{
				cout << "\nChi nhap gia tri 0, 1, 2. Vui long kiem tra va nhap lai! \n";
			}
			switch (flag)
			{
			case 0: {
				cout << "\nNhap thong tin sach: ";
				arr[i] = new Sach();
				arr[i]->Nhap();
				break;
			}
			case 1: {
				arr[i] = new SachGK();
				arr[i]->Nhap();
				break;
			}
			case 2: {
				arr[i] = new Truyentranh();
				arr[i]->Nhap();
				break;
			}
			default:
				break;
			}
		}
	}
	void Xuat() {
		for (int i = 0; i < SoDausach; i++)
		{
			arr[i]->Xuat();
		}
	}
	void XuatGiaokhoaMaxGia() {
		int Max;
		for (int i = 0; i < SoDausach; i++)
		{
			if (arr[i]->Loai == 1)
			{
				Max = arr[i]->GetGia();
				break;
			}
		}
		for (int i = 0; i < SoDausach; i++)
		{
			if (arr[i]->Loai == 1 && arr[i]->GetGia() > Max)
			{
				Max = arr[i]->GetGia();
			}
		}
		for (int i = 0; i < SoDausach; i++)
		{
			if (arr[i]->Loai == 1 && arr[i]->GetGia() == Max)
			{
				arr[i]->Xuat();
			}
		}
	}
};

