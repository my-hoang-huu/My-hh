#pragma once
#include"Binhhanh.h"
class Chunhat : public Binhhanh
{
public:
	void Nhap() {
		do
		{
			Binhhanh::Nhap();
			if (SongSongOy() == 0)
			{
				cout << "\nHINH VUA NHAP KHONG CO GOC VUONG, VUI LONG KIEM TRA VA NHAP LAI!";
			}
		} while (SongSongOy() == 0);
	}
	void Xuat() {
		cout << "\nHinh chu nhat vua nhap: ";
		Tugiac::Xuat();
	}
	bool SongSongOy() {
		if (Dinh[1].Vector(Dinh[2]).GetX() == 0)
		{
			return true;
		}
		return false;
	}
};

