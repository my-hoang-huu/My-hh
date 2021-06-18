#include "Dathuc.h"

Dathuc::Dathuc(const Dathuc& d) {
	n = d.n;
	a = new float[n + 1];
	for (int i = 0; i < n + 1; i++) {
		a[i] = d.a[i];
	}
}
Dathuc Dathuc::operator= (const Dathuc& d) {
	if (this != &d) {
		n = d.n;
		a = new float[n + 1];
		for (int i = 0; i < n + 1; i++) {
			a[i] = d.a[i];
		}
	}
	return *this;
}
Dathuc::Dathuc(float* aa, int nn)
{
	n = nn;
	a = new float[n + 1];
	for (int i = 0; i < n + 1; i++)
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
	for (int i = n; i > 0; i--)
	{
		cout << a[i] << "x^" << i << " + ";
	}
	cout << a[0];
}
istream& operator >> (istream& is, Dathuc& d) {
	cout << "\nNhap bac da thuc: ";
	is >> d.n;
	d.a = new float[d.n + 1];
	for (int i = d.n; i >= 0; i--)
	{
		cout << "a[" << i << "] = ";
		is >> d.a[i];
	}
	return is;
}
ostream& operator <<(ostream& os, const Dathuc& d) {
	os << "\nf(x) = ";
	for (int i = d.n; i > 0; i--)
	{
		os << d.a[i] << "x^" << i << " + ";
	}
	os << d.a[0];
	return os;
}
float Dathuc::Get(int g) {
	if (g <= n)
		return a[g];
	else
		cout << "\n!!Da thuc khong co bac " << g;
}
void Dathuc::Set(int g, float b) {
	if (g <= this->n)
		this->a[g] = b;
	else
		cout << "\n!!Da thuc khong co bac " << g;
}
Dathuc Dathuc::Cong(const Dathuc& h) {
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
	for (int i = 0; i < s.n + 1; i++)
	{
		if (i <= min)
		{
			s.a[i] = a[i] + h.a[i];
			cout << s.a[i];
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
Dathuc Dathuc::Tru(const Dathuc& h) {
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
	for (int i = 0; i < s.n + 1; i++)
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
Dathuc Dathuc::operator+ (const Dathuc& h) {
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
	for (int i = 0; i < s.n + 1; i++)
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
Dathuc Dathuc::operator- (const Dathuc& h) {
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
	for (int i = 0; i < s.n + 1; i++)
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
	cout << "\nHAM HUY DUOC GOI THUC HIEN! ";
	this->n = 0;
	delete[] this->a;
}