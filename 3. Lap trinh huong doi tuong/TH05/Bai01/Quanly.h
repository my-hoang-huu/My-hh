#pragma once
#include"SachGK.h"
#include"Tapchi.h"
#include"Tieuthuyet.h"
class Quanly
{
private:
	int SoDausach;
	Sach** ql;// quan ly
public:
	~Quanly() {
		for (int i = 0; i < SoDausach; i++)
		{
			delete ql[i];
		}
		delete[] ql;
	}
	Sach** operator= (const Sach&) {
		Sach** temp;
		temp = new Sach * [SoDausach];
		for (int i = 0; i < SoDausach; i++)
		{
			temp[i] = ql[i];
		}
		return temp;
	}
	void Nhap() {
		cout << "\nNhap so luong dau sach: ";
		cin >> SoDausach;
		ql = new Sach * [SoDausach];
		int flag;
		for (int i = 0; i < SoDausach; i++)
		{
			cout << "\n----\nChon loai sach voi phim tuong ung:   0-Sach  1-Sach giao khoa  2-Tieu thuyet  3-Tap chi\n";
			while (cin >> flag && flag != 0 && flag != 1 && flag != 2 && flag != 3)
			{
				cout << "\nChi nhap phim 0, 1, 2 hoac 3. Vui long chon lai: ";
			}
			switch (flag)
			{
			case 0: {
				ql[i] = new Sach();
				ql[i]->Nhap();
				break;
			}
			case 1: {
				ql[i] = new SachGK();
				ql[i]->Nhap();
				break;
			}
			case 2: {
				ql[i] = new Tieuthuyet();
				ql[i]->Nhap();
				break;
			}
			case 3: {
				ql[i] = new Tapchi();
				ql[i]->Nhap();
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
			cout << "\n-----\n";
			ql[i]->Xuat();
		}
	}
	void MaxGia() {
		int Max = 0;
		for (size_t i = 0; i < SoDausach; i++)
		{
			Max = ql[i]->GetGia();
		}
		for (size_t i = 0; i < SoDausach; i++)
		{
			if (ql[i]->GetGia() > Max)
			{
				Max = ql[i]->GetGia();
			}
		}
		for (size_t i = 0; i < SoDausach; i++)
		{
			if (ql[i]->GetGia() == Max)
			{
				ql[i]->Xuat();
			}
		}
	}
	void GiaGiamDan() {
		Sach* Temp;
		for (int i = 0; i < SoDausach - 1; i++)
		{
			for (int j = i + 1; j < SoDausach; j++)
			{
				if (ql[i]->GetGia() < ql[j]->GetGia())
				{
					Temp = ql[i];
					ql[i] = ql[j];
					ql[j] = Temp;
				}
			}
		}
	}
	void Them() {
		//Sao chep mang quan ly cho te;
		Sach** te = ql;
		int n;
		cout << "\nNhap so sach can them: ";
		cin >> n;
		int temp = SoDausach;
		SoDausach += n;
		ql = new Sach * [SoDausach];
		int flag;
		for (int i = 0; i < temp; i++)
		{
			ql[i] = te[i];
		}
		for (int i = temp; i < SoDausach; i++)
		{
			cout << "\n----\nChon loai sach voi phim tuong ung:   0-Sach  1-Sach giao khoa  2-Tieu thuyet  3-Tap chi\n";
			while (cin >> flag && flag != 0 && flag != 1 && flag != 2 && flag != 3)
			{
				cout << "\nChi nhap phim 0, 1, 2 hoac 3. Vui long chon lai: ";
			}
			switch (flag)
			{
			case 0: {
				ql[i] = new Sach();
				ql[i]->Nhap();
				break;
			}
			case 1: {
				ql[i] = new SachGK();
				ql[i]->Nhap();
				break;
			}
			case 2: {
				ql[i] = new Tieuthuyet();
				ql[i]->Nhap();
				break;
			}
			case 3: {
				ql[i] = new Tapchi();
				ql[i]->Nhap();
				break;
			}
			default:
				break;
			}
		}
	}
};
