#pragma once
#include"Tugiac.h"
class Binhhanh : public Tugiac
{
protected:
	float CanhDai;
	float CanhNgan;
public:
	Binhhanh() {
		Loai = 2;
	}
	void Nhap() {
		do
		{
			Tugiac::Nhap();
			if (isKtBinhhanh() == 0)
			{
				cout << "\nHinh vua nhap khong co 2 cap canh doi bang nhau. Vui long nhap lai!";
			}
		} while (isKtBinhhanh() == 0);
		CanhDai = CanhTren > CanhTrai ? CanhTren : CanhTrai;
		CanhNgan = CanhTren < CanhTrai ? CanhTren : CanhTrai;
	}
	bool isKtBinhhanh() {
		if (CanhTren == CanhDuoi && CanhTrai == CanhPhai)//Hai cap canh doi bang nhau
		{
			return true;
		}
		return false;
	}
	//bool isKtBinhhanh() {
	//	if (Dinh[0].Khoangcach(Dinh[1]) == Dinh[2].Khoangcach(Dinh[3])
	//		&& Dinh[1].Khoangcach(Dinh[2]) == Dinh[3].Khoangcach(Dinh[0]))//Hai cap canh doi bang nhau
	//	{
	//		return true;
	//	}
	//	return false;
	//}
	void Xuat() {
		cout << "\nThong tin hinh Binh hanh: ";
		Dagiac::Xuat();
		cout << "\nCanh dai: " << CanhDai;
		cout << "\nCanh ngan: " << CanhNgan;
	}
};

