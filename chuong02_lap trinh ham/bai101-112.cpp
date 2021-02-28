#include <iostream>
#include<iomanip>
using namespace std;
void Nhap(float&, float&);
int Tong68(int);
double Tong101(int);
double Tong102(int);
double Tong103(int);
double Tong104();
double Tong105();
double Tong106(float);
double Tong107(float);
double Tong108(float);
double Tong109(float);
double Tong110(float);
double Tong111(float);
double Tong112(float);

int main()
{
	float x, n;
	Nhap(x, n);
	double s101 = Tong101(n);
	cout << "Bai 101: Gia tri day so la: " << s101 << endl;
	double s102 = Tong102(n);
	cout << "Bai 102: Gia tri day so la: " << s102 << endl;
	double s103 = Tong103(n);
	cout << "Bai 103: Gia tri day so la: " << s103 << endl;
	double s104 = Tong104();
	cout << "Bai 104: Gia tri day so la: " << s104 << endl;
	double s105 = Tong105();
	cout << "Bai 105: Gia tri day so la: " << s105 << endl;
	double s106 = Tong106(x);
	cout << "Bai 106: sin(" << x << ")" << " = " << s106 << endl;
	double s107 = Tong107(x);
	cout << "Bai 107: cos(" << x << ")" << " = " << s107 << endl;
	double s108 = Tong108(x);
	cout << "Bai 108: e^" << x << " = " << s108 << endl;
	double s109 = Tong109(x);
	cout << "Bai 109: e = " << s109 << endl;
	double s110 = Tong110(x);
	cout << "Bai 110: pi = " << s110 << endl;
	double s111 = Tong111(x);
	cout << "Bai 111: pi = " << s111 << endl;
	double s112 = Tong112(x);
	cout << "Bai 112: pi = " << s112 << endl;

	system("pause");
	return 1;
}

void Nhap(float& x, float& n)
{
	cout << "nhap x: ";
	cin >> x;
	cout << "nhap n: ";
	cin >> n;
}
double Tong101(int n)
{
	float kq = 0;
	int i = 1;
	float e = 1.0 / i;
	for (; e >= pow(10, -6);)
	{
		kq = kq + e;
		i++;
		e = 1.0 / i;
	}
	return kq;
}
double Tong102(int n)
{
	float S = 0;
	float e = 1;
	int i = 2;
	while (e >= pow(10, -6) /*i <= 2*n*/ )
	{
		e = 1.0 / i;
		S = S + e;
		i = i + 2;
	}
	return S;
}
double Tong103(int n)
{
	float S = 1;
	float e = 1;
	int i = 3;
	while (e >= pow(10, -6) /*i <= 2*n+1*/)
	{
		e = 1.0 / i;
		S = S + e;
		i = i + 2;
	}
	return S;
}
double Tong104()
{
	float S = 0;
	float e = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		e = 1.0 / (i * (i + 1));
		S = S + e;
		i = i + 1;
	}
	return S;
}
double Tong105()
{
	float S = 0;
	float M = 0;
	float e = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		M = M + i;
		e = 1.0 / M;
		S = S + e;
		i = i + 1;
	}
	return S;
}
double Tong106(float x)
{
	double S = x;
	long long M = 1;
	int T = x;
	double e = 1;
	int dau = -1;
	int i = 3;
	while (e >= pow(10, -6))
	{
		T = T * x * x;
		M = M * i * (i - 1);
		e = (double)T / M;
		S = S + dau * e;
		dau = -dau;
		i = i + 2;
	}
	return S;
}
double Tong107(float x)
{
	double S = 1;
	double M = 1;
	int T = 1;
	double e = 1;
	int dau = -1;
	int i = 2;
	while (e >= pow(10, -6))
	{
		T = T * x * x;
		M = M * i * (i - 1);
		e = (double)T / M;
		S = S + dau * e;
		dau = -dau;
		i = i + 2;
	}
	return S;
}
double Tong108(float x)
{
	double S = 1;
	double M = 1;
	int T = 1;
	double e = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		T = T * x;
		M = M * i;
		e = (double)T / M;
		S = S + e;
		//cout << "S = " << S << endl;
		i = i + 1;
	}
	return S;
}
double Tong109(float x)
{
	double S = 1;
	double M = 1;
	double e = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		M = M * i;
		e = 1.0 / M;
		S = S + e;
		//cout << "S = " << S << endl;
		i = i + 1;
	}
	return S;
}
double Tong110(float x)
{
	double S = 4;
	double M = 1;
	double e = 1;
	int dau = -1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		M = M + 2;
		e = 4.0 / M;
		S = S + dau * e;
		//cout << "S = " << S << endl;
		i = i + 1;
		dau = -dau;
	}
	return S;
}
double Tong111(float x)
{
	double S = 3;
	double e = 1;
	int dau = 1;
	int i = 2;
	while (e >= pow(10, -6))
	{
		e = (float)4 / (i * (i + 1) * (i + 2));
		S = S + dau * e;
		i = i + 2;
		dau = -dau;
	}
	return S;
}
double Tong112(float x)
{
	double S = 3;
	double e = 1;
	int dau = 1;
	int i = 2;
	while (e >= pow(10, -6))
	{
		e = (float)4 / (i * (i + 1) * (i + 2));
		S = S + dau * e;
		//cout << "S = " << S << endl;
		i = i + 2;
		dau = -dau;
	}
	return S;
}
