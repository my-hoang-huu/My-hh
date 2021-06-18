#include "Matran.h"
#include<iostream>
#include<iomanip>

Matran::Matran(int m, int n) {
	Rows = m;
	Columns = n;
	VT.resize(m);
	for (int i = 0; i < Rows; i++)
	{
		VT[i].resize(n);
		for (int j = 0; j < Columns; j++)
		{
			VT[i][j] = 0;
		}
	}
}
Matran::Matran(const Matran& a)
{
	cout << "a = \n" << a;
	Rows = a.Rows;
	Columns = a.Columns;
	VT.resize(Rows);
	for (int i = 0; i < Rows; i++)
	{
		VT[i].resize(Columns);
		for (int j = 0; j < Columns; j++)
		{
			VT[i][j] = a.VT[i][j];
		}
	}
}
Matran& Matran::operator= (const Matran& a) {
	Rows = a.Rows;
	Columns = a.Columns;
	VT.resize(Rows);
	for (int i = 0; i < Rows; i++)
	{
		VT[i].resize(Columns);
		for (int j = 0; j < Columns; j++)
		{
			VT[i][j] = a.VT[i][j];
		}
	}
	return *this;
}
istream& operator>>(istream& is, Matran& a) {
	cout << "\nNhap \nSo dong: ";
	is >> a.Rows;
	cout << "Nhap so cot: ";
	is >> a.Columns;
	a.VT.resize(a.Rows);
	srand(time(NULL));
	for (int i = 0; i < a.Rows; i++)
	{
		a.VT[i].resize(a.Columns);
		for (int j = 0; j < a.Columns; j++)
		{
			a.VT[i][j] = rand() * 1.0 / RAND_MAX * 21 - 10;
			//cout << "a[" << i << "][" << j << "] = ";
			//is >> a.VT[i][j];
		}
		cout << endl;
	}
	return is;
}
ostream& operator<<(ostream& os, const Matran& a) {
	for (int i = 0; i < a.Rows; i++)
	{
		for (int j = 0; j < a.Columns; j++)
		{
			os << setw(8) << "a[" << i << "][" << j << "] = " << fixed << setprecision(2) << a.VT[i][j];
		}
		os << endl;
	}
	return os;
}
Matran Matran::operator+(const Matran& a) {
	if (Rows != a.Rows || Columns != a.Columns)
	{
		cout << "\n<2 matrixes are not compatiale!>\n";
		return *this;
	}
	Matran res = *this;
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Columns; j++)
		{
			res.VT[i][j] += a.VT[i][j];
		}
	}
	return res;
}
Matran Matran::operator-(const Matran& a) {
	if (Rows != a.Rows || Columns != a.Columns)
	{
		cout << "\n<2 matrixes are not compatible!>";
		return *this;
	}
	Matran res = *this;
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Columns; j++)
		{
			res.VT[i][j] -= a.VT[i][j];
		}
	}
	return res;
}
Matran Matran::operator*(const Matran& a) {
	cout << "\n*this = \n" << *this;
	cout << "\na = \n" << a;
	if (Columns != a.Rows)
	{
		cout << "\n<2 matrixes are not compatible!>";
		return *this;
	}
	Matran res(Rows, a.Columns);
	for (int i = 0; i < res.Rows; i++)
	{
		for (int j = 0; j < res.Columns; j++)
		{
			for (int k = 0; k < Columns; k++) {
				res.VT[i][j] += VT[i][k] * a.VT[k][j];
			}
		}
	}
	return res;
}
Matran Matran::operator*(int k) {
	Matran res = *this;
	for (int i = 0; i < res.Rows; i++)
	{
		for (int j = 0; j < res.Columns; j++)
		{
			res.VT[i][j] *= k;
		}
	}
	return res;
}
Matran Matran::operator* (Vector& v) {
	Matran m(1, v.GetLength());
	for (size_t i = 0; i < v.GetLength(); i++)
	{
		m.VT[0][i] = v[i];
	}
	cout << "*this = \n" << *this;
	cout << "m = \n" << m;
	return *this * m;
}

