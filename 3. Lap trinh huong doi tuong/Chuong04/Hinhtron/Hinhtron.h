#include<iostream>
#include"Diem.h"
#define PI atan(1)*4

using namespace std;
#pragma once
class Hinhtron
{
private:
	Diem i;
	float r;
public:
	Hinhtron() : i(), r() {}
	Hinhtron(Diem ii, float rr) :i(ii), r(rr) {}
	Hinhtron(const Hinhtron& o) :r(o.r), i(o.i) {}
	void Nhap();
	void Xuat();
	friend istream& operator >> (istream&, Hinhtron&);
	friend ostream& operator << (ostream&, Hinhtron&);
	Diem GetI() { return i; }
	float GetR() { return r; }
	void SetI(Diem ii) { i = ii; }
	void SetR(float rr) { r = rr; }
	Hinhtron& operator=(const Hinhtron&);
	bool operator== (const Hinhtron&);
	float ChuVi();
	float DienTich();
	bool KiemTraThuoc(Diem);
	void KiemTraViTri(Diem);
	int ViTriTuongDoi(Hinhtron);
	~Hinhtron() { return; }
};

