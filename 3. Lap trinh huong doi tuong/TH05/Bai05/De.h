#pragma once
#include"Giasuc.h"
class De :public Giasuc
{
protected:
public:
	De() {
		Giasuc::Giasuc();
		Loai = 1;
		Loaigiasuc = "De";
		Tiengkeu = "Bee (Tieng De)";
		TuoiSinh = 1;
		LuaSinh = 2;
	}
	void Nhap() {
		cout << "\nNhap ma so: D";
		cin >> Maso;
		Giasuc::Nhap();
	}
	void Xuat() {
		cout << "\nMa so: D" << Maso;
		Giasuc::Xuat();
	}
	float SuaMoiluot() {
		Giasuc::SuaMoiluot();
		LuongSuaMoiluot = rand() * 1.0 / RAND_MAX * 10;
		LuongSua.push_back(LuongSuaMoiluot);
		return LuongSuaMoiluot;
	}
};

