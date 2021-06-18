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
	Dathuc operator = (const Dathuc& d);
	Dathuc(float*, int);
	void Nhap();
	void Xuat();
	friend istream& operator >> (istream&, Dathuc&);
	friend ostream& operator <<(ostream&, const Dathuc&);
	float Get(int);
	void Set(int, float);
	Dathuc Cong(const Dathuc&);
	Dathuc Tru(const Dathuc&);
	Dathuc operator+ (const Dathuc&);
	Dathuc operator- (const Dathuc&);
	bool Kiemtra(int k);
	~Dathuc();
};