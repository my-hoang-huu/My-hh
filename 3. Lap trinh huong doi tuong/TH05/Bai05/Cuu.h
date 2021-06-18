#pragma once
#include"Giasuc.h"
class Cuu : public Giasuc
{
protected:
public:
	Cuu() {
		Giasuc::Giasuc();
		Loai = 2;
		Loaigiasuc = "Cuu";
		Tiengkeu = "Eeee (tieng Cuu)";
		TuoiSinh = 1;
		LuaSinh = 2;
	}
	void Nhap() {
		cout << "\nNhap ma so: C";
		cin >> Maso;
		Giasuc::Nhap();
	}
	void Xuat() {
		cout << "\nMa so: C" << Maso;
		Giasuc::Xuat();
	}
	float SuaMoiluot() {
		Giasuc::SuaMoiluot();
		LuongSuaMoiluot = rand() * 1.0 / RAND_MAX * 5;
		LuongSua.push_back(LuongSuaMoiluot);
		return LuongSuaMoiluot;
	}
};

