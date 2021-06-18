#pragma once
#include"Tamgiac.h"
#include"Vuong.h"
#include<vector>
class Array
{
protected:
	vector<Dagiac*> VT;
public:
	Array() {}
	~Array() {
		for (int i = 0; i < VT.size(); i++)
		{
			delete VT[i];
		}
	}
	Array(const Array& b) {
		VT.resize(b.VT.size());
		for (int i = 0; i < VT.size(); i++)
		{
			switch (b.VT[i]->GetLoai())
			{
			case 0: {
				VT[i] = new Tamgiac();
				*VT[i] = *b.VT[i];
				break;
			}
			case 1: {
				VT[i] = new Tugiac();
				*VT[i] = *b.VT[i];
				break;
			}
			case 2: {
				VT[i] = new Binhhanh();
				*VT[i] = *b.VT[i];
				break;
			}
			case 3: {
				VT[i] = new Chunhat();
				*VT[i] = *b.VT[i];
				break;
			}
			case 4: {
				VT[i] = new Vuong();
				*VT[i] = *b.VT[i];
				break;
			}
			default:
				break;
			}
		}
	}
	void Nhap() {
		int Soluong;
		cout << "\nNhap so luong da giac: ";
		cin >> Soluong;
		VT.resize(Soluong);
		int flag;
		for (int i = 0; i < VT.size(); i++)
		{
			cout << "\nChon hinh can nhap bang phim tuong ung: 0-Tam giac  1-Tu giac  2-Binh hanh  3-Chu nhat  4-Vuong\n";
			while (cin >> flag && flag != 0 && flag != 1 && flag != 2 && flag != 3 && flag != 4)
			{
				cout << "\nChi nhap cac gia tri 0 den 4. Vui long nhap lai: ";
			}
			switch (flag)
			{
			case 0: {
				VT[i] = new Tamgiac();
				VT[i]->Nhap();
				break;
			}
			case 1: {
				VT[i] = new Tugiac();
				VT[i]->Nhap();
				break;
			}
			case 2: {
				VT[i] = new Binhhanh();
				VT[i]->Nhap();
				break;
			}
			case 3: {
				VT[i] = new Chunhat();
				VT[i]->Nhap();
				break;
			}
			case 4: {
				VT[i] = new Vuong();
				VT[i]->Nhap();
				break;
			}
			default:
				break;
			}
		}
	}
	void Xuat() {
		for (int i = 0; i < VT.size(); i++)
		{
			cout << "\n----\nStt = " << i + 1;
			VT[i]->Xuat();
		}
	}
	//Array& operator= (const Array& b) {
	//	VT.resize(b.VT.size());
	//	for (int i = 0; i < VT.size(); i++)
	//	{
	//		switch (b.VT[i]->GetLoai())
	//		{
	//		case 0: {
	//			VT[i] = new Tamgiac();
	//			*VT[i] = *b.VT[i];
	//			break;
	//		}
	//		case 1: {
	//			VT[i] = new Tugiac();
	//			*VT[i] = *b.VT[i];
	//			break;
	//		}
	//		case 2: {
	//			VT[i] = new Binhhanh();
	//			*VT[i] = *b.VT[i];
	//			break;
	//		}
	//		case 3: {
	//			VT[i] = new Chunhat();
	//			*VT[i] = *b.VT[i];
	//			break;
	//		}
	//		case 4: {
	//			VT[i] = new Vuong();
	//			*VT[i] = *b.VT[i];
	//			break;
	//		}
	//		default:
	//			break;
	//		}
	//	}
	//	return *this;
	//}
	Array& operator= (const Array& b) {
		VT.resize(b.VT.size());
		for (int i = 0; i < b.VT.size(); i++)
		{
			VT[i] = new Dagiac();
			*VT[i] = *b.VT[i];
		}
		return *this;
	}
	void TinhTien(float a, float b) {
		for (int i = 0; i < VT.size(); i++)
		{
			VT[i]->TuTinhTien(a, b);
		}
	}
};
