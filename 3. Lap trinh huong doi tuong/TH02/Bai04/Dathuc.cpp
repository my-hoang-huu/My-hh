#include "Dathuc.h"

Dathuc::Dathuc(const Dathuc& d) {
	n = d.n;
	a = new float[n + 1];
	for (int i = 0; i <= n; i++)
	{
		a[i] = d.a[i];
	}
}
Dathuc::Dathuc(float* aa, int nn)
{
	n = nn;
	a = new float[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = aa[i];
	}
}
bool Dathuc::Kiemtra(int k) {
	for (int i = n; i >= 0; i--) {
		if (i > k && a[i] != 0) {
			return false;
		}
	}
	return true;
}
void Dathuc::Nhap() {
	cout << "\nNhap bac da thuc: ";
	cin >> n;
	a = new float[n + 1];
	for (int i = n; i >= 0; i--)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}
void Dathuc::Xuat() {
	cout << "\nf(x) = ";
	for (int i = n; i >= 0; i--)
	{
		cout << a[i] << "x^" << i << " + ";
	}
	cout << a[1];
}
float Dathuc::Get(int g) {
	return a[g];
}
void Dathuc::Set(int g, float b) {
	a[g] = b;
}
Dathuc Dathuc::Cong(Dathuc h) {
	Dathuc s;
	int min;
	if (n > h.n)
	{
		min = h.n;
		s.n = n;
	}
	else
	{
		min = n;
		s.n = h.n;
	}
	s.a = new float[s.n + 1];
	for (int i = 0; i <= s.n; i++)
	{
		if (i <= min)
		{
			s.a[i] = a[i] + h.a[i];
		}
		else
		{
			if (n > h.n)
			{
				s.a[i] = a[i];
			}
			else
			{
				s.a[i] = h.a[i];
			}
		}
	}
	return s;
}
Dathuc Dathuc::Tru(Dathuc h) {
	Dathuc s;
	int min;
	if (n > h.n)
	{
		min = h.n;
		s.n = n;
	}
	else
	{
		min = n;
		s.n = h.n;
	}
	s.a = new float[s.n + 1];
	for (int i = 0; i <= s.n; i++)
	{
		if (i <= min)
		{
			s.a[i] = a[i] - h.a[i];
		}
		else
		{
			if (n > h.n)
			{
				s.a[i] = a[i];
			}
			else
			{
				s.a[i] = -h.a[i];
			}
		}
	}
	return s;
}

Dathuc::~Dathuc()
{
	this->n = 0;
	delete[] this->a;
}