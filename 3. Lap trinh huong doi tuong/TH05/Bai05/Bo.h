#pragma once
#include"Giasuc.h"
class Bo :public Giasuc
{
protected:
public:
	Bo() {
		Giasuc::Giasuc();
		Loai = 0;
		Loaigiasuc = "Bo";
		Tiengkeu = "Boo";
		TuoiSinh = 2;
		LuaSinh = 2;
	}
	void Nhap() {
		cout << "\nNhap ma so: B";
		cin >> Maso;
		Giasuc::Nhap();
	}
	void Xuat() {
		cout << "\nMa so: B" << Maso;
		Giasuc::Xuat();
	}
	float SuaMoiluot() {
		Giasuc::SuaMoiluot();
		LuongSuaMoiluot = rand() * 1.0 / RAND_MAX * 20;
		LuongSua.push_back(LuongSuaMoiluot);
		return LuongSuaMoiluot;
	}
};

