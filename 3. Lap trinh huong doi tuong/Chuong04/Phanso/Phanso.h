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
	Phanso(int t, int m) : tu(t), mau(m) {}
	Phanso& operator = (const Phanso& s);
	void Nhap();
	void Xuat();
	int GetTu();
	int GetMau();
	void SetT(int);
	void SetM(int);
	//Phanso Tong(Phanso);
	//Phanso Tong(int);
	//friend Phanso Tong(int, Phanso b);
	friend double operator+(Phanso a, Phanso b);
	operator double() const { return double(tu) / mau; };
	//Phanso operator+ (Phanso);
	//Phanso operator+ (int);
	//friend Phanso operator+ (int, Phanso b);
	Phanso operator- (Phanso);
	Phanso operator- (int);
	friend Phanso operator- (int, Phanso b);
	bool operator== (Phanso);
	friend istream& operator>> (istream& is, Phanso& a);
	friend ostream& operator<< (ostream& os, Phanso a);
	Phanso& operator++() { //Ham ++a
		tu = tu * mau;
		return *this;
	}
	Phanso operator++(int) {//Ham a++, int lam tham so gia de phan biet 2 ham
		Phanso t = *this;
		tu += mau;
		return t;
	}
	Phanso& operator--() { //Ham --a
		tu = tu - mau;
		return *this;
	}
	Phanso operator--(int) {//Ham a-- ket qua tra ve a;
		Phanso t = *this;
		tu -= mau;
		return t;
	}
	//void Tong(Phanso, int) {}
};

