#include<iostream>
using namespace std;
double Tong37(int);
double Tong38(int);
double Tong39(int);
double Tong40(int);
double Tong41(int);
double Tong42(int);
double Tong43(int);
double Tong44(int);
double Tong45(int);
double Tong46(int);
double Tong47(int);
double Tong48(double, int);


int main()
{
	int x;
	cout << "nhap x: ";
	cin >> x;
	int n;
	cout << "nhap n: ";
	cin >> n;
	double s37 = Tong37(n);
	cout << "Bai 37: Tong gia tri day so la: " << s37 << endl;
	double s38 = Tong38(n);
	cout << "Bai 38: Tong gia tri day so la: " << s38 << endl;
	double s39 = Tong39(n);
	cout << "Bai 39: Gia tri day so la: " << s39 << endl;
	double s40 = Tong40(n);
	cout << "Bai 40: Gia tri day so la: " << s40 << endl;
	double s41 = Tong41(n);
	cout << "Bai 41: Gia tri day so la: " << s41 << endl;
	double s42 = Tong42(n);
	cout << "Bai 42: Gia tri day so la: " << s42 << endl;
	double s43 = Tong43(n);
	cout << "Bai 43: Gia tri day so la: " << s43 << endl;
	double s44 = Tong44(n);
	cout << "Bai 44: Gia tri day so la: " << s44 << endl;
	double s45 = Tong45(n);
	cout << "Bai 45: Gia tri day so la: " << s45 << endl;
	double s46 = Tong46(n);
	cout << "Bai 46: Gia tri day so la: " << s46 << endl;
	double s47 = Tong47(n);
	cout << "Bai 47: Gia tri day so la: " << s47 << endl;
	double s48 = Tong48(x, n);
	cout << "Bai 48: Gia tri day so la: " << s48 << endl;

	system("pause");
	return 1;

}
double Tong37(int n)
{
	double s = 0;
	for (int i = 1; i <= n; i++)
	{
		s = s + i * i * i;
	}
	return s;
}
double Tong38(int n)
{
	double s = 0;
	for (int i = 1; i <= n; i++)
	{
		s = s + i * i * i * i;
	}
	return s;
}
double Tong39(int n)
{
	double s = 1;
	for (int i = 1; i <= n; i++)
	{
		s = s * (1 + 1.0 / (i * i));
	}
	return s;
}
double Tong40(int n)
{
	double s = 0;
	for (int i = 1; i <= n; i++)
	{
		s = s + i * (i + 1);
	}
	return s;
}
double Tong41(int n)
{
	double s = 0;
	for (int i = 1; i <= n; i++)
	{
		s = s + i * (i + 1) * (i + 2);
	}
	return s;
}
double Tong42(int n)
{
	double s = 0;
	for (int i = 1; i <= n; i++)
	{
		s = s + 1.0 / (i * (i + 1));
	}
	return s;
}
double Tong43(int n)
{
	double s = 0;
	for (int i = 1; i <= n; i++)
	{
		s = s + 1.0 / (i * (i + 1) * (i + 2));
	}
	return s;
}
double Tong44(int n)
{
	double s = 0;
	for (int i = 1; i <= n; i++)
	{
		s = s + 1.0 / (i * (i + 1) * (i + 2) * (i + 3));
	}
	return s;
}
double Tong45(int n)
{
	double s = 0;
	for (int i = 1; i <= n; i++)
	{
		s = s + 1.0 / (sqrt(i) + sqrt(i + 1));
	}
	return s;
}
double Tong46(int n)
{
	double s = 0;
	for (int i = 1; i <= n; i++)
	{
		s = s + 1.0 / ((i + 1) * sqrt(i) + i * sqrt(i + 1));
	}
	return s;
}
double Tong47(int n)
{
	double s = 0;
	for (int i = 1; i <= n; i++)
	{
		s = s + sqrt(1 + 1.0 / (i * i) + 1.0 / ((i + 1) * (i + 1)));
	}
	return s;
}
double Tong48(double x, int n)
{
	double s = 1;
	for (int i = 0; i <= n; i++)
	{
		s = s * (x + i);
	}
	return s;
}