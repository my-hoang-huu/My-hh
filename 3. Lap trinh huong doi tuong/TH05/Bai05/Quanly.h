#pragma once
#include"Cuu.h"
#include"Bo.h"
#include"De.h"
#include <windows.h>
class Quanly
{
protected:
	int Nambatdau;
	vector<Giasuc*> Quanlytrangtrai;
public:
	~Quanly() {
		for (int i = 0; i < Quanlytrangtrai.size(); i++)
		{
			delete Quanlytrangtrai[i];
		}
		cout << "\nHAM HUY GOI THUC HIEN";
	}
	int GetSize() { return Quanlytrangtrai.size(); }
	void Nhap() {
		int Soluong;
		cout << "\nNhap so luong gia suc: ";
		cin >> Soluong;
		Quanlytrangtrai.resize(Soluong);
		int flag;
		for (int i = 0; i < Soluong; i++)
		{
			cout << "\nChon loai gia suc bang cach nhap gia tri tuong ung: 0. Bo  1.De  2.Cuu\n";
			while (cin >> flag && flag != 0 && flag != 1 && flag != 2)
			{
				cout << "\nChi nhap cac gia tri 0, 1 hoac 2. Vui long nhap lai gia tri:	";
			}
			switch (flag)
			{
			case 0: {
				Quanlytrangtrai[i] = new Bo();
				Quanlytrangtrai[i]->Nhap();
				break;
			}
			case 1: {
				Quanlytrangtrai[i] = new De();
				Quanlytrangtrai[i]->Nhap();
				break;
			}
			case 2: {
				Quanlytrangtrai[i] = new Cuu();
				Quanlytrangtrai[i]->Nhap();
				break;
			}
			default:
				break;
			}
			cout << endl;
		}
	}
	void Xuat() {
		for (int i = 0; i < Quanlytrangtrai.size(); i++)
		{
			cout << "\n----\nStt = " << i;
			Quanlytrangtrai[i]->Xuat();
			cout << endl;
		}
	}
	void Tiengkeu() {
		vector <string> Tiengkeu;
		for (int i = 0; i < Quanlytrangtrai.size(); i++) {
			int flag = 1;
			for (int k = 0; k < Tiengkeu.size(); k++)
			{
				if (Quanlytrangtrai[i]->GetTiengkeu() == Tiengkeu[k])
				{
					flag = 0;
				}
			}
			if (flag == 1)
			{
				cout << Quanlytrangtrai[i]->GetTiengkeu() << "	";
				Tiengkeu.push_back(Quanlytrangtrai[i]->GetTiengkeu());
			}
		}
	}
	void Thongke() {
		cout << "\n	So luong bo: " << Thongkeloai("Bo");
		cout << "\n	So luong de: " << Thongkeloai("De");
		cout << "\n	So luong cuu: " << Thongkeloai("Cuu");
	}
	int Thongkeloai(string a) {
		int res = 0;
		for (int i = 0; i < Quanlytrangtrai.size(); i++)
		{
			if (Quanlytrangtrai[i]->GetLoaigiasuc() == a)
			{
				res++;
			}
		}
		return res;
	}
	void LuaSinh() {
		for (int i = 0; i < Quanlytrangtrai.size(); i++)
		{
			if (Quanlytrangtrai[i]->GetGioitinh() != 2)//Duc
			{
				break;
			}
			int KichThuocBanDau;
			int Socon;
			for (int y = Quanlytrangtrai[i]->GetNamsinh() + Quanlytrangtrai[i]->GetTuoiSinh(); y < 2021; y += Quanlytrangtrai[i]->GetLuaSinh())
			{
				KichThuocBanDau = Quanlytrangtrai.size();
				//cout << "\n Quanlytrangtrai.size() = " << Quanlytrangtrai.size();
				Socon = rand() % 3;
				//cout << "\nSo con: " << Socon;
				Quanlytrangtrai.resize(Quanlytrangtrai.size() + Socon);
				for (int j = 0; j < Socon; j++)
				{
					switch (Quanlytrangtrai[i]->GetLoai())
					{
					case 0: {
						Quanlytrangtrai[KichThuocBanDau + j] = new Bo();
						//Quanlytrangtrai[KichThuocBanDau + j]->Nhap();
						Quanlytrangtrai[KichThuocBanDau + j]->SetNamsinh(y);
						break;
					}
					case 1: {
						Quanlytrangtrai[KichThuocBanDau + j] = new De();
						//Quanlytrangtrai[KichThuocBanDau + j]->Nhap();
						Quanlytrangtrai[KichThuocBanDau + j]->SetNamsinh(y);
						break;
					}
					case 2: {
						Quanlytrangtrai[KichThuocBanDau + j] = new Cuu();
						//Quanlytrangtrai[KichThuocBanDau + j]->Nhap();
						Quanlytrangtrai[KichThuocBanDau + j]->SetNamsinh(y);
						break;
					}
					default:
						break;
					}
					//cout << "\nNhap thong tin con: ";
					//Quanlytrangtrai.push_back(Quanlytrangtrai[Quanlytrangtrai.size()]);//vi du:ban dau size = 1, arr[size - 1 = 0]. Them 1 phan tu (size = 2) arr[1 = size - 1]   kich thuoc vector tang ngay khi gap chu push_back
					//Quanlytrangtrai[Quanlytrangtrai.size() - 1]->SetNamsinh(y - Quanlytrangtrai[i]->GetLuaSinh());
					//Quanlytrangtrai[Quanlytrangtrai.size() - 1]->Nhap();
					//cout << "\nNam sinh cua gia suc con: " << y - Quanlytrangtrai[i]->GetLuaSinh();
				}

			}
		}
	}
	float ThongKeSuaSauMotLuot() {
		float sum = 0;
		for (int i = 0; i < Quanlytrangtrai.size(); i++)
		{
			sum += Quanlytrangtrai[i]->SuaMoiluot();
		}
		return sum;
	}
	float ThongKeSuaMotNam() {
		float total = 0;
		float sum;
		cout << "\nNhap nam: ";
		int n;
		cin >> n;
		Date dd;
		dd.Setnam(n);
		for (int i = 0; i < Quanlytrangtrai.size(); i++)
		{
			if (Quanlytrangtrai[i]->GetNamsinh() < n)
			{
				for (int d = 0; d < dd.NgayToiDaNam(); d++)
				{
					Quanlytrangtrai[i]->SuaMoiluot();
				}
				sum = 0;
				for (int j = 0; j < Quanlytrangtrai[i]->GetLuongsua().size(); j++)
				{
					sum += Quanlytrangtrai[i]->GetLuongsua()[j];
				}
				total += sum;
			}
		}
		return total;
	}
	void MaxCannang() {
		float max;
		for (int i = 0; i < Quanlytrangtrai.size(); i++)
		{
			max = Quanlytrangtrai[i]->GetCannang();
		}
		for (int i = 0; i < Quanlytrangtrai.size(); i++)
		{
			if (Quanlytrangtrai[i]->GetCannang() > max)
			{
				max = Quanlytrangtrai[i]->GetCannang();
			}
		}
		for (int i = 0; i < Quanlytrangtrai.size(); i++)
		{
			if (Quanlytrangtrai[i]->GetCannang() == max)
			{
				cout << "\n----\n";
				Quanlytrangtrai[i]->Xuat();
			}
		}
	}
};

