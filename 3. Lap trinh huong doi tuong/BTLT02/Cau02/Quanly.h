#pragma once
#include"svCaodang.h"
#include"svDaihoc.h"
class Quanly
{
private:
	string Tentruong;
	int Soluong;
	Sinhvien** ql;
public:
	~Quanly() {
		for (int i = 0; i < Soluong; i++)
		{
			delete ql[i];
		}
		delete ql;
	}
	void Nhap() {
		cout << "-- Nhap --";
		cout << "\nTen truong: ";
		getline(cin, Tentruong);
		cout << "So luong sinh vien: ";
		cin >> Soluong;
		ql = new Sinhvien * [Soluong];
		int flag;
		for (int i = 0; i < Soluong; i++)
		{
			cout << "Nhap so tuong ung voi loai sinh vien: \n1 - Sinh vien Cao dang\n2 - Sinh vien Dai hoc\n";
			while (cin >> flag && flag != 1 && flag != 2)
			{
				cout << "\nChi nhap cac gia tri 1 va 2. Vui long nhap lai!";
			}
			switch (flag)
			{
			case 1: {
				ql[i] = new svCaodang();
				ql[i]->Nhap();
				break;
			}
			case 2: {
				ql[i] = new svDaihoc();
				ql[i]->Nhap();
				break;
			}
			default:
				break;
			}
		}

	}
	void Xuat() {
		for (int i = 0; i < Soluong; i++)
		{
			cout << "\n---\n";
			ql[i]->Xuat();
		}
	}
	int Totnghiep() {
		cout << "\n----\nSinh vien du dieu kien tot nghiep: ";
		int flag = 0;
		for (int i = 0; i < Soluong; i++)
		{
			if (ql[i]->Xettotnghiep())
			{
				flag++;
				ql[i]->Xuat();
			}
		}
		if (flag == 0)
			cout << "\nKhong co sinh vien nao du dieu kien tot nghiep!";
		return flag;
	}
	void maxDiemtrungbinh() {
		float max;
		for (int i = 0; i < Soluong; i++)
		{
			if (ql[i]->Loai == 2)
			{
				max = ql[i]->getDiemtrungbinh();
				break;
			}
		}
		for (int i = 0; i < Soluong; i++)
		{
			if (ql[i]->Loai == 2 && ql[i]->getDiemtrungbinh() > max)
			{
				max = ql[i]->getDiemtrungbinh();
			}
		}
		for (int i = 0; i < Soluong; i++)
		{
			if (ql[i]->Loai == 2 && ql[i]->getDiemtrungbinh() == max)
			{
				ql[i]->Xuat();
			}
		}
	}
};

