#include "Vector.h"
#include<iomanip>
Vector::Vector(int n) {
	VT.resize(n);
	Length = n;
	for (int i = 0; i < Length; i++)
	{
		VT[i] = 0;
	}
}
Vector::Vector(const Vector& a) {
	Length = a.Length;
	VT.resize(Length);
	for (int i = 0; i < Length; i++)
	{
		VT[i] = a.VT[i];
	}
}
Vector& Vector::operator= (const Vector& a) {
	Length = a.Length;
	VT.resize(Length);
	for (int i = 0; i < Length; i++)
	{
		VT[i] = a.VT[i];
	}
	cout << "\nDIA CHI CUA THIS (w1?) VA a(== v): " << this << "(this)  " << &a << "(a)";
	return *this;
}
Vector Vector::SetElement(int i, double a) {
	VT[i] = a;
	return *this;
}
double Vector::operator[](int i) {
	if (i >= Length)
	{
		cout << "\nKHONG TON TAI VT[" << i << "]! ";
		return 0;
	}
	return VT[i];
}
istream& operator>>(istream& is, Vector& a) {
	cout << "\nDo dai Vector: ";
	is >> a.Length;
	a.VT.resize(a.Length);
	cout << "Cac phan tu Vector: \n";
	srand(time(NULL));
	for (int i = 0; i < a.Length; i++)
	{
		a.VT[i] = rand() * 1.0 / RAND_MAX * 20 - 10;
		//is >> a.VT[i];
	}
	return is;
}
ostream& operator<<(ostream& os, const Vector& a) {
	os << " ( ";
	for (int i = 0; i < a.Length; i++)
	{
		if (i < a.Length - 1)
		{
			os << fixed << setprecision(2) << a.VT[i] << " , ";
		}
		else
		{
			os << fixed << setprecision(2) << a.VT[i];
		}
	}
	os << " )";
	return os;
}
Vector Vector::operator+(const Vector& v) {
	if (v.Length != Length)
	{
		cout << "\nNot the same length!";
		return *this;
	}
	Vector temp = *this;
	for (int i = 0; i < Length; i++)
	{
		temp.VT[i] += v.VT[i];
	}
	return temp;
}
Vector Vector::operator-(const Vector& v) {
	if (Length != v.Length)
	{
		cout << "\nNot the same length!";
		return *this;
	}
	Vector temp = *this;
	for (int i = 0; i < Length; i++)
	{
		temp.VT[i] -= v.VT[i];
	}
	return temp;
}
Vector Vector::operator*(const Vector& v) {
	if (Length != v.Length)
	{
		cout << "\nNot the same length!";
		return *this;
	}
	Vector res = *this;
	for (int i = 0; i < Length; i++)
	{
		res.VT[i] *= VT[i];
	}
	return res;
}
Vector Vector::operator*(int k) {
	Vector res = *this;
	for (int i = 0; i < Length; i++)
	{
		res.VT[i] *= k;
	}
	return res;
}
Vector Vector::operator/(const Vector& v) {
	if (Length != v.Length)
	{
		cout << "\nNot the same length!";
		return *this;
	}
	Vector res = *this;
	for (int i = 0; i < Length; i++)
	{
		res.VT[i] /= VT[i];
	}
	return res;
}