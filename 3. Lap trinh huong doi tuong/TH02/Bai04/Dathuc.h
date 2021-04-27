#pragma once
#include<iostream>
using namespace std;

class Dathuc
{
private:
	int n;
	float* a;
public:
	Dathuc() : a(nullptr), n(0) {};
	Dathuc(const Dathuc& d);
	Dathuc(float*, int);
	void Nhap();
	void Xuat();
	float Get(int);
	void Set(int, float);
	Dathuc Cong(Dathuc);
	Dathuc Tru(Dathuc);
	bool Kiemtra(int k);
	~Dathuc();
};