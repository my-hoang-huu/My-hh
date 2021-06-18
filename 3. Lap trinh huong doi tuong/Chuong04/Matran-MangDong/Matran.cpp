#include "Matran.h"



Matran::Matran() {
	Rows = 0;
	Columns = 0;
	a = nullptr;
	for (int i = 0; i < Rows; i++)
	{
		a[i] = nullptr;
	}
}
Matran::~Matran() {
	cout << "\nDia chi, gia tri cua a[i] sau delete: " << a[0] << " gia tri cua a: " << *a[0] << endl;
	cout << "-------------\n";
	cout << "\nTRUOC " << "Gia tri a :" << a << "	Gia tri *a: " << *a << "	gia tri cua **a: " << **a << endl;
	cout << "\nHAM HUY a";
	cout << "\nSAU " << "Gia tri a :" << a << "	Gia tri *a: " << *a << "	gia tri cua **a: " << **a << endl;
	for (int i = 0; i < Rows; i++)
	{
		//cout << "\nDia chi, gia tri cua a[i] truoc delete: " << a[i] << " gia tri cua a: " << *a[i] << endl;
		delete[]a[i];
		//cout << "\nHAM HUY a[" << i << "]";
	}
	delete[]a;
}
Matran::Matran(const Matran& m) {
	Rows = m.Rows;
	Columns = m.Columns;
	a = new float* [Rows];
	for (int i = 0; i < Rows; i++)
	{
		a[i] = new float[Columns];
		for (int j = 0; j < Columns; j++)
		{
			a[i][j] = m.a[i][j];
		}
	}
}
Matran& Matran::operator=(const Matran& m) {
	Rows = m.Rows;
	Columns = m.Columns;
	a = new float* [Rows];
	for (int i = 0; i < Rows; i++)
	{
		a[i] = new float[Columns];
		for (int j = 0; j < Columns; j++)
		{
			a[i][j] = m.a[i][j];
		}
	}
	return *this;
}
float Matran::operator()(int i, int j) {
	return a[i][j];
}
istream& operator>>(istream& is, Matran& m) {
	cout << "\nNhap so dong: ";
	is >> m.Rows;
	cout << "Nhap so cot: ";
	is >> m.Columns;
	m.a = new float* [m.Rows];
	srand(time(nullptr));
	for (int i = 0; i < m.Rows; i++)
	{
		m.a[i] = new float[m.Columns];
		for (int j = 0; j < m.Columns; j++)
		{
			//cin >> m.a[i][j];
			m.a[i][j] = rand() * 1.0 / RAND_MAX * 20 - 10;
		}
	}
	return is;
}
ostream& operator<<(ostream& os, Matran& m) {
	for (int i = 0; i < m.Rows; i++)
	{
		for (int j = 0; j < m.Columns; j++)
		{
			os << setw(8) << "a[" << i << "][" << j << "] = " << fixed << setprecision(2) << m.a[i][j];
		}
		cout << endl;
	}
	return os;
}