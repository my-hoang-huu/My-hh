#pragma once

#include<vector>
#include<iostream>
using namespace std;

class Vector
{
private:
	vector<double>VT;
	int Length;
public:
	Vector() :Length(0) {}
	Vector(int n);
	Vector(const Vector&);
	Vector& operator= (const Vector&);
	int GetLength() { return Length; }
	double GetElement(int i) { return VT[i]; }
	Vector SetElement(int i, double a);
	double operator[](int i);
	friend istream& operator>>(istream&, Vector&);
	friend ostream& operator<<(ostream&, const Vector&);
	Vector operator+(const Vector&);
	Vector operator-(const Vector&);
	Vector operator*(const Vector&);
	Vector operator*(int i);
	Vector operator/(const Vector&);



	~Vector() {};
};

