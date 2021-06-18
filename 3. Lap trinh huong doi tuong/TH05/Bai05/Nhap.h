//#pragma once
//#include"Cuu.h"
//#include"Bo.h"
//#include"De.h"
//#include<ctime>
//class Quanly
//{
//protected:
//	int Nambatdau;
//	int Soluong;
//	vector<vector <Giasuc>> Quanlytrangtrai;
//public:
//	int GetSize() { return Quanlytrangtrai.size(); }
//	void Nhap() {
//		cout << "\nNhap so luong gia suc: ";
//		cin >> Soluong;
//		Quanlytrangtrai.resize(Soluong);
//		int flag;
//		for (int i = 0; i < Soluong; i++)
//		{
//			cout << "\nChon loai gia suc bang cach nhap gia tri tuong ung: 0. Bo  1.De  2.Cuu\n";
//			while (cin >> flag && flag != 0 && flag != 1 && flag != 2)
//			{
//				cout << "\nChi nhap cac gia tri 0, 1 hoac 2. Vui long nhap lai gia tri:	";
//			}
//			switch (flag)
//			{
//			case 0: {
//
//				Quanlytrangtrai[i] = new Bo();
//				Quanlytrangtrai[i]->Nhap();
//				break;
//			}
//			case 1: {
//				Quanlytrangtrai[i] = new De();
//				Quanlytrangtrai[i]->Nhap();
//				break;
//			}
//			case 2: {
//				Quanlytrangtrai[i] = new Cuu();
//				Quanlytrangtrai[i]->Nhap();
//				break;
//			}
//			default:
//				break;
//			}
//			cout << endl;
//		}
//	}
//	void Xuat() {
//		for (int i = 0; i < Soluong; i++)
//		{
//			Quanlytrangtrai[i]->Xuat();
//			cout << endl;
//		}
//	}
//	void Tiengkeu() {
//		vector <string> Tiengkeu;
//		for (int i = 0; i < Soluong; i++) {
//			int flag = 1;
//			for (int k = 0; k < Tiengkeu.size(); k++)
//			{
//				if (Quanlytrangtrai[i]->GetTiengkeu() == Tiengkeu[k])
//				{
//					flag = 0;
//				}
//			}
//			if (flag == 1)
//			{
//				cout << Quanlytrangtrai[i]->GetTiengkeu() << "	";
//				Tiengkeu.push_back(Quanlytrangtrai[i]->GetTiengkeu());
//			}
//		}
//	}
//	void Thongke() {
//		cout << "\nSo luong bo: " << Thongkeloai("Bo");
//		cout << "\nSo luong de: " << Thongkeloai("De");
//		cout << "\nSo luong cuu: " << Thongkeloai("Cuu");
//	}
//	int Thongkeloai(string a) {
//		int res = 0;
//		for (int i = 0; i < Soluong; i++)
//		{
//			if (Quanlytrangtrai[i]->GetLoai() == a)
//			{
//				res++;
//			}
//		}
//		return res;
//	}
//	void LuaSinh() {
//		for (int i = 0; i < Quanlytrangtrai.size(); i++)
//		{
//			int Socon;
//			int Tuoi;
//			for (int y = Quanlytrangtrai[i]->GetNamsinh(); y < 2021; y + Quanlytrangtrai[i]->GetLuaSinh())
//			{
//				Tuoi = y - Quanlytrangtrai[i]->GetNamsinh();
//				if (Tuoi >= Quanlytrangtrai[i]->GetTuoiSinh())
//				{
//					Socon = rand() % 4;
//					for (int j = 0; j < Socon; j++)
//					{
//						Quanlytrangtrai[Quanlytrangtrai.size() + 1] = new
//
//							Quanlytrangtrai[Quanlytrangtrai.size() + 1]->Nhap();
//					}
//				}
//			}
//
//		}
//	}
//	//friend void Sinh(Giasuc* g) {
//
//	//	int Socon;
//	//	int Tuoi;
//	//	for (int i = g->Namsinh; i < 2021; i + g->LuaSinh)
//	//	{
//	//		Tuoi = i - g->Namsinh;
//	//		if (Tuoi >= g->TuoiSinh)
//	//		{
//	//			Socon = rand() % 4;
//	//			for (int j = 0; j < Socon; j++)
//	//			{
//
//	//			}
//	//		}
//	//	}
//	//}
//	//void LuaSinh() {
//	//	cout << "\nNam thanh lap trang trai: ";
//	//	cin >> Nambatdau;
//	//	for (int y = Nambatdau; y < 2022; y++)
//	//	{
//	//		if ()
//	//		{
//
//	//		}
//	//	}
//	//}
//};
//
