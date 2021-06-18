#include<iostream>
#include "Phanso.h"

using namespace std;
#pragma once
class Sophuc
{
private:
	float thuc;
	float ao;
public:
	Sophuc() : thuc(), ao() {}
	Sophuc(float t, float a) : thuc(t), ao(a) {}
	Sophuc(float t) : thuc(t), ao() {}
	Sophuc(const Sophuc& p) : thuc(p.thuc), ao(p.ao) {}
	friend istream& operator>> (istream& is, Sophuc& a);
	friend ostream& operator<<(ostream& os, Sophuc a);
	float BinhPhuongModun();
	Sophuc operator+(Sophuc);
	Sophuc operator-(Sophuc);
	Sophuc operator*(Sophuc b);
	Sophuc operator/(Sophuc b);
	bool operator==(Sophuc);
	bool operator>(Sophuc);
};


