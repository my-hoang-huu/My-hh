#pragma once
#include"Thang.h"
class Binhhanh :public HThang
{
public:
	void Nhap() {
		do
		{
			HThang::Nhap();
			if (Dinh[0].KhoangCach(Dinh[1]) != Dinh[2].KhoangCach(Dinh[3]))
			{
				cout << "\nHAI CANH BEN KHONG SONG SONG, VUI LONG NHAP LAI!";
			}
		} while (Dinh[0].KhoangCach(Dinh[1]) != Dinh[2].KhoangCach(Dinh[3]));
	}
	bool Kiemtrasongsong() {
		if (Dinh[0].VectorSongsong(Dinh[1], Dinh[2], Dinh[3]))
			return true;
		return false;
	}
	void Xuat() {
		cout << "\nHinh binh hanh vua nhap: ";
		Tugiac::Xuat();
	}
};

