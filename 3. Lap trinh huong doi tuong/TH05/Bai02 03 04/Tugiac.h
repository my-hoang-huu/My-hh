#pragma once
#include"Dagiac.h"
class Tugiac : public Dagiac
{
protected:
	float CanhTren;
	float CanhDuoi;
	float CanhPhai;
	float CanhTrai;
	Diem VectorCanhTren;
	Diem VectorCanhBen;
public:
	Tugiac() {
		Loai = 1;
	}
	void Nhap() {
		Sodinh = 4;
		Dinh = new Diem[Sodinh];
		do {
			Dagiac::Nhap();
			if (IsThanghang())
				cout << "\nTu giac co ba dinh thang hang. Vui long nhap lai!";
		} while (IsThanghang());
		CanhTren = Dinh[0].Khoangcach(Dinh[1]);
		CanhPhai = Dinh[1].Khoangcach(Dinh[2]);
		CanhDuoi = Dinh[2].Khoangcach(Dinh[3]);
		CanhTrai = Dinh[3].Khoangcach(Dinh[0]);
	}
	bool IsThanghang() {
		if (Dinh[0].isBaDiemthanghang(Dinh[1], Dinh[2]) || Dinh[1].isBaDiemthanghang(Dinh[2], Dinh[3]) ||
			Dinh[2].isBaDiemthanghang(Dinh[3], Dinh[0]) || Dinh[3].isBaDiemthanghang(Dinh[0], Dinh[1]))
		{
			return true;
		}
		return false;
	}
	float GetCanhTren() {
		return CanhTren;
	}
	float GetCanhPhai() {
		return CanhPhai;
	}
	float GetCanhDuoi() {
		return CanhDuoi;
	}
	float GetCanhTrai() {
		return CanhTrai;
	}
	void Xuat() {
		cout << "\nThong tin tu giac: ";
		Dagiac::Xuat();
	}
};

