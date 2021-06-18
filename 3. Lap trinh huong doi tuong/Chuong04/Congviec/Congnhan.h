#pragma once
#include"People.h"
class Congnhan :public People
{
protected:
	string Congty;
	Date Ngayvaolam;
	double Songaylamviec;
	double Luong;
public:
	void Nhap();
	void Xuat();
	double Tinhluong();
};

