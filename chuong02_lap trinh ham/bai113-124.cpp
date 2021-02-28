#include <iostream>
#include<iomanip>
using namespace std;
void Nhap(float&, float&);
double SoHang113(int);
double SoHang114(int);
double SoHang115(int);
double SoHang116(int);
double SoHang117(int);
double SoHang118(int);
double SoHang119(int);
double SoHang120(int);
double SoHang121(int);
double SoHang121(int);
void SoHang122(int);
void SoHang123(int);
void SoHang124(int);

int main()
{
	float x, n;
	Nhap(x, n);
	double a113 = SoHang113(n);
	cout << "Bai 113: So hang thu " << n << " cua day so la: " << a113 << endl;
	double a114 = SoHang114(n);
	cout << "Bai 114: So hang thu " << n << " cua day so la: " << a114 << endl;
	double a115 = SoHang115(n);
	cout << "Bai 115: So hang thu " << n << " cua day so la: " << a115 << endl;
	double a116 = SoHang116(n);
	cout << "Bai 116: So hang thu " << n << " cua day so la: " << a116 << endl;
	double a117 = SoHang117(n);
	cout << "Bai 117: So hang thu " << n << " cua day so la: " << a117 << endl;
	double a118 = SoHang118(n);
	cout << "Bai 118: So hang thu " << n << " cua day so la: " << a118 << endl;
	double a119 = SoHang119(n);
	cout << "Bai 119: So hang thu " << n << " cua day so la: " << a119 << endl;
	double a120 = SoHang120(n);
	cout << "Bai 120: So hang thu " << n << " cua day so la: " << a120 << endl;
	double a121 = SoHang121(n);
	cout << "Bai 121: So hang thu " << n << " cua day so la: " << a121 << endl;
	cout << "Bai 122: ";
	SoHang122(n);
	cout << "Bai 123: ";
	SoHang123(n);
	cout << "Bai 124: ";
	SoHang124(n);

	system("pause");
	return 1;
}
void Nhap(float& x, float& n)
{
	//cout << "nhap x: ";
	//cin >> x;
	cout << "nhap n: ";
	cin >> n;
}
double SoHang113(int n)
{
	long ahh;
	long at = 2;
	int i = 2;
	while (i <= n)
	{
		ahh = at + 2 * i + 1;
		i = i + 1;
		at = ahh;
	}	
	return ahh;
}
double SoHang114(int n)
{
	long ahh;
	long at = -2;
	int T = 3;
	int M = 7;
	int i = 2;
	while (i <= n)
	{
		T = T * 3;
		M = M * 7;
		ahh = 5 * at + 2 * T - 6 * M + 12;
		i = i + 1;
		at = ahh;
	}
	return ahh;
}
double SoHang115(int n)
{
	long ahh;
	long att = -1;
	long at = 3;
	int i = 2;
	while (i <= n)
	{
		ahh = 5 * at + 6 * att;
		i = i + 1;
		att = at;
		at = ahh;
	}
	return ahh;
}
double SoHang116(int n)
{
	long ahh;
	long att = 1;
	long at = 2;
	int i = 2;
	while (i <= n)
	{
		ahh = 4 * at + att;
		i = i + 1;
		att = at;
		at = ahh;
	}
	return ahh;
}
double SoHang117(int n)
{
	long ahh;
	long att = -1;
	long at = 3;
	int T = 2;
	int i = 2;
	while (i <= n)
	{
		T = T * 2;
		ahh = 5 * T + 5 * at - att;
		i = i + 1;
		att = at;
		at = ahh;
	}
	return ahh;
}
double SoHang118(int n)
{
	double ahh;
	double at = 2;
	int i = 2;
	while (i <= n)
	{
		ahh = ((-9.0 * at - 24) / (5 * at + 13));
		i = i + 1;
		at = ahh;
	}
	return ahh;
}
double SoHang119(int n)
{
	double ahh;
	double at = 2;
	int i = 2;
	while (i <= n)
	{
		ahh = ((at * at + 2) / (2 * at));
		i = i + 1;
		at = ahh;
	}
	return ahh;
}
double SoHang120(int n)
{
	double ahh;
	double at = 2;
	int i = 2;
	while (i <= n)
	{
		ahh = 5 * at + sqrt(24 * at * at - 8);
		i = i + 1;
		at = ahh;
	}
	return ahh;
}
double SoHang121(int n)
{
	double ahh;
	double att = 1;
	double at = 1;
	int i = 2;
	while (i <= n)
	{
		ahh = at + att;
		i = i + 1;
		//cout << ahh << endl;
		att = at;
		at = ahh;
	}
	return ahh;
}
void SoHang122(int n)
{
	double ahh;
	double at = 1;
	double bhh;
	double bt = 1;
	int i = 2;
	while (i <= n)
	{
		ahh = 3 * bt + 2 * at;
		bhh = at + 3 * bt;
		i = i + 1;
		at = ahh;
		bt = bhh;
	}
	cout << "So hang thu " << n << " cua day so la: " << endl;
	cout << "a(" << n << ")" << " = " << ahh << endl;
	cout << "b(" << n << ")" << " = " << bhh << endl;
}
void SoHang123(int n)
{
	double ahh;
	double at = 2;
	double bhh;
	double bt = 1;
	int i = 2;
	while (i <= n)
	{
		ahh = 3 * bt + 2 * at;
		bhh = at + 3 * bt;
		i = i + 1;
		at = ahh;
		bt = bhh;
	}
	cout << "so hang thu " << n << " cua day so la: " << endl;
	cout << "a(" << n << ")" << " = " << ahh << endl;
	cout << "b(" << n << ")" << " = " << bhh << endl;
}
void SoHang124(int n)
{
	long long ahh;
	long long at = 2;
	long long bhh;
	long long bt = 1;
	int i = 2;
	while (i <= n)
	{
		ahh = at * at + 2 * bt * bt;
		bhh = 2 * at * bt;
		i = i + 1;
		at = ahh;
		bt = bhh;
	}
	cout << "so hang thu " << n << " cua day so la: " << endl;
	cout << "a(" << n << ")" << " = " << ahh << endl;
	cout << "b(" << n << ")" << " = " << bhh << endl;
}
