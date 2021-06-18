#pragma once
#include"People.h"
class Hocsinh :public People
{
private:
	string GVChunhiem;
protected:
	string Truong;
	string Lop;
	int Namhoc;
public:
	void Nhap();
	void Xuat();
};

