#pragma once
#include<iostream>
#include<iomanip>

using namespace std;

class Matran
{
private:
	int Rows, Columns;
	float** a;
public:
	Matran();
	~Matran();
	Matran(const Matran&);
	Matran& operator=(const Matran&);
	float operator()(int i, int j);
	friend istream& operator>>(istream&, Matran&);
	friend ostream& operator<<(ostream&, Matran&);
};
