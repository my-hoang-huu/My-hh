#pragma once
#include"Binhhanh.h"
class Chunhat : public Binhhanh
{
protected:
public:
	Chunhat() {
		Loai = 3;
	}
	void Nhap() {
		do
		{
			Binhhanh::Nhap();
			VectorCanhTren = Dinh[0].Vector(Dinh[1]);
			VectorCanhBen = Dinh[1].Vector(Dinh[2]);
			if (!KtChunhat())
			{
				cout << "\nHinh vua nhap co cac canh ke khong vuong goc. Vui long nhap lai!";
			}
		} while (!KtChunhat());
	}
	bool KtChunhat() {
		if (VectorCanhBen.TichVector(VectorCanhTren) == 0)
		{
			return true;
		}
		return false;
	}
	void Xuat() {
		cout << "\nThong tin hinh chu nhat: ";
		Dagiac::Xuat();
		cout << "\nCanh dai = " << CanhDai;
		cout << "\nCanh ngan = " << CanhNgan;
	}
};

