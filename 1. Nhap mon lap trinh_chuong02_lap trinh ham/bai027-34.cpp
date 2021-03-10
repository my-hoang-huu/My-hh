#include <iostream>
using namespace std;
int Tong(int);
long Tong2(int);
double Tong3(int);
double Tong4(int);
double Tong5(int);
double Tong6(int);
double Tong7(int);
double Tong8(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int s = Tong(n);
	cout << "Bai 27: Tong gia tri day so la: " << s << endl;
	long s2 = Tong2(n);
	cout << "Bai 28: Tong gia tri day so la: " << s2 << endl;
	double s3 = Tong3(n);
	cout << "Bai 29: Tong gia tri day so la: " << s3 << endl;
	double s4 = Tong4(n);
	cout << "Bai 30: Tong gia tri day so la: " << s4 << endl;
	double s5 = Tong5(n);
	cout << "Bai 31: Tong gia tri day so la: " << s5 << endl;
	double s6 = Tong6(n);
	cout << "Bai 32: Tong gia tri day so la: " << s6 << endl;
	double s7 = Tong7(n);
	cout << "Bai 33: Tong gia tri day so la: " << s7 << endl;
	double s8 = Tong8(n);
	cout << "Bai 34: Tong gia tri day so la: " << s8 << endl;
	return 1;
}
int Tong(int k)
{
	int s = 0;
	for (int i = 1; i <= k; i++)
	{
		s = s + i;
	}
	return s;
}
long Tong2(int k)
{
	long s = 0;
	for (int i = 1; i <= k; i++)
	{
		s = s + i * i;
	}
	return s;
}
double Tong3(int k)
{
	double s = 0;
	for (int i = 1; i <= k; i++)
	{
		s = s + 1.0 / i;
	}
	return s;
}
double Tong4(int k)
{
	double s = 0;
	for (int i = 2; i <= 2 * k; i = i + 2)
	{
		s = s + 1.0 / i;
	}
	return s;
}
double Tong5(int k)
{
	double s = 0;
	for (int i = 1; i <= 2 * k + 1; i = i + 2)
	{
		s = s + 1.0 / i;
	}
	return s;
}
double Tong6(int k)
{
	double s = 0;
	for (int i = 1; i <= k; i = i++)
	{
		s = s + 1.0 / (i * (i + 1));
	}
	return s;
}
double Tong7(int k)
{
	double s = 0;
	for (int i = 1; i <= k; i = i++)
	{
		s = s + 1.0 * i / (i + 1);
	}
	return s;
}
double Tong8(int k)
{
	double s = 0;
	for (int i = 0; i <= k; i = i++)
	{
		s = s + (float)(2 * i + 1) / (2 * i + 2);
	}
	return s;
}