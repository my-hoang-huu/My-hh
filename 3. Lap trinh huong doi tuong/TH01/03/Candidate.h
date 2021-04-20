#pragma once
#include "ngay.h"
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

//mã, tên, ngày tháng năm sinh, điểm thi Toán, Văn, Anh
class Candidate
{
private:
	string HoTen;
	string MaSo;
	Ngay NgaySinh;
	float Toan;
	float Van;
	float Anh;
public:
	void Nhap();
	void Xuat();
	float Tong();
};

