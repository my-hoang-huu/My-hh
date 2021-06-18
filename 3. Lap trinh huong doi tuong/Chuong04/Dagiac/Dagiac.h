#include "diem.h"
#include<iostream>
using namespace std;
#pragma once

class Dagiac
{
private:
	int Sodinh;
	Diem* Dinh;
public:
	Dagiac() { Dinh = nullptr; Sodinh = 0; };
	Dagiac(int);
	Dagiac(const Dagiac& a);
	Dagiac& operator=(const Dagiac&);
	bool IsDinhTrungNhau();
	Diem GetDinh(int);
	Diem operator[](int);
	float GetToaDoX(int);
	float GetToaDoY(int);
	void SetDinh(int, float, float);
	void SetToaDoX(int, float);
	void SetToaDoY(int, float);
	void Nhap();
	void Xuat();
	friend istream& operator>>(istream&, Dagiac&);
	friend ostream& operator<<(ostream&, const Dagiac&);
	Dagiac TinhTien(float, float);
	Dagiac QuayQuanhTamO(float);//Neu tra ve Dagiac&, => Ket qua phep quay tra ve dia chi bien d(== 0 do b? huy khi ra khoi ham)
	Dagiac QuayQuanhDiemI(Diem, float);
	Dagiac ThuPhong(float);

	~Dagiac();
};
