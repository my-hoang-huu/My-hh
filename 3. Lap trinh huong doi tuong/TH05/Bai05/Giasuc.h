#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<ctime>
#include"Date.h"
using namespace std;
class Giasuc
{
protected:
	int Maso;
	string Loaigiasuc;
	int Loai;
	string Tiengkeu;
	int Gioitinh;
	int Namsinh;
	int TuoiSinh;
	float LuaSinh;
	Date Ngay;
	float Cannang;
	Date NgaybatdaulaySua;
	Date Ngaylaysua;
	vector<float>LuongSua;
	float LuongSuaMoiluot;
public:
	Giasuc() {
		srand(time(NULL));
		Gioitinh = rand() % 2 + 1;
		Maso = rand() % 200;
		Cannang = rand() % 3 + 2;
	}
	virtual string GetTiengkeu() { return Tiengkeu; }
	virtual string GetLoaigiasuc() { return Loaigiasuc; }
	virtual int GetLoai() { return Loai; }
	int GetNamsinh() { return Namsinh; }
	void SetNamsinh(int n) { Namsinh = n; }
	int GetTuoiSinh() { return TuoiSinh; }
	int GetLuaSinh() { return LuaSinh; }
	int GetGioitinh() { return Gioitinh; }
	int GetCannang() { return Cannang; }
	vector<float> GetLuongsua() { return LuongSua; }
	virtual void Nhap() {
		cout << "Nhap nam sinh: 201";
		cin >> Namsinh;
		Namsinh += 2010;
		cout << "Nhap gioi tinh (1: Duc, 2: Cai): ";
		cin >> Gioitinh;
		cin.ignore();
		cout << "Nhap can nang: ";
		cin >> Cannang;
	}
	virtual void Xuat() {
		cout << "\nLoai gia suc: " << Loaigiasuc;
		cout << "\nGioi tinh: " << Gioitinh;
		cout << "\nNam sinh: " << Namsinh;
		cout << "\nCan nang: " << Cannang;
		//cout << "\nTong luong sua da thu duoc: " << fixed << setprecision(1) << TongluongSua();
	}
	virtual float SuaMoiluot() {
		//cout << "Nhap ngay lay sua: ";
		//Ngaylaysua.Nhap();
		//srand(time(nullptr));
		return LuongSuaMoiluot;
	}
	float TongluongSua() {
		cout << "\nNhap nam: ";
		int n;
		cin >> n;
		Date dd;
		dd.Setnam(n);
		for (int d = 0; d < dd.NgayToiDaNam(); d++)
		{
			SuaMoiluot();
		}
		float sum = 0;
		for (int i = 0; i < LuongSua.size(); i++)
		{
			sum += LuongSua[i];
		}
		return sum;
	}
};

