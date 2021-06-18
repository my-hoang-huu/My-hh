#include <iostream>
using namespace std;
#pragma once
class Phanso
{
private:
	int tu;
	int mau;
public:
	Phanso() : tu(0), mau(1) {}
	~Phanso() { return; }
	Phanso(int t, int m) : tu(t), mau(m) {}
	Phanso& operator = (const Phanso& s);
	bool isPhanso();
	void Nhap();
	void Xuat();
	int GetTu();
	int GetMau();
	void SetT(int);
	void SetM(int);
	bool operator== (Phanso);
	friend istream& operator>> (istream& is, Phanso& a);
	friend ostream& operator<< (ostream& os, Phanso a);
	Phanso& operator++();
	Phanso operator++(int);
};

