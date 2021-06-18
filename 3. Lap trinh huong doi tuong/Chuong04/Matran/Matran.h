#pragma once
#include<iostream>
#include<vector>
#include"Vector.h"

class Matran
{
private:
	vector<vector <double>>VT;
	int Rows;
	int Columns;
public:
	Matran() : Rows(0), Columns(0) {}
	Matran(int m, int n);
	Matran(const Matran&);
	Matran& operator= (const Matran&);
	friend istream& operator>>(istream&, Matran&);
	friend ostream& operator<<(ostream&, const Matran&);
	Matran operator* (Vector&);
	Matran operator+(const Matran&);
	Matran operator-(const Matran&);
	Matran operator*(const Matran&);
	Matran operator*(int k);



	~Matran() {};
};

