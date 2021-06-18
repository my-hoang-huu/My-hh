#include<iostream>
#include"Sach.h"
using namespace std;
#pragma once
class Thuvien
{
private:
	int Sodausach;
	Sach* Dausach;
public:
	Thuvien() : Sodausach(0), Dausach(nullptr) {}
	~Thuvien();
	int GetSodausach() { return Sodausach; }
	Sach GetDausach(int i) { return Dausach[i]; }
	void SetTenDausach();
	friend istream& operator >>(istream&, Thuvien&);
	friend ostream& operator <<(ostream&, const Thuvien&);
};

