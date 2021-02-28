#include<iostream>
using namespace std;
int main()
{
	float a;
	cout << "nhap a: ";
	cin >> a;
	float b;
	cout << "nhap b: ";
	cin >> b;
	float c;
	cout << "nhap c: ";
	cin >> c;
	float lc;
	if (a > b)
	{
		lc = a;
		a = b;
		b = lc;
	}
	if (a > c)
	{
		lc = a;
		a = c;
		c = lc;
	}
	if (b > c)
	{
		lc = b;
		b = c;
		c = lc;
	}
	cout << "Gia tri a, b va c theo thu tu tang dan la: " << endl;
	cout << a << endl << b << endl << c << endl;
	system("pause");
	return 1;
}
