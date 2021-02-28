#include <iostream>
#include<iomanip>
using namespace std;
void Nhap(float&, float&);
void Bai125(float, float);
void Bai126(float, float);
void Bai127(float, float);
void Bai128(float, float);

int main()
{
	float a, b;
	Nhap(a, b);
	cout << "Bai 125: ";
	Bai125(a, b);
	cout << "Bai 126: ";
	Bai126(a, b);
	cout << "Bai 127: ";
	Bai127(a, b);
	cout << "Bai 128: ";
	Bai128(a, b);


	system("pause");
	return 1;
}
void Nhap(float& a, float& b)
{
	cout << "nhap a: ";
	cin >> a;
	cout << "nhap b: ";
	cin >> b;
}
void Bai125(float a, float b)
{
	while (a < 0)
	{
		a = -a;
	}
	while (b < 0)
	{
		b = -b;
	}
	cout << "gia tri tuyet doi cua a va b la: " << endl;
	cout << "a = " << a << endl << "b = " << b << endl;
}
void Bai126(float a, float b)
{
	float lc = a;
	if (a < b)
	{
		lc = b;
	}
	cout << "Gia tri lon nhat la: " << lc << endl;
}
void Bai127(float a, float b)
{
	float lc = a;
	if (a > b)
	{
		lc = b;
	}
	cout << "Gia tri nho nhat la: " << lc << endl;
}
void Bai128(float a, float b)
{
	float lc = a;
	if (a > b)
	{
		a = b;
		b = lc;
	}
	cout << "Gia tri a va b theo thu tu tang dan la: " << endl << a << endl << b << endl;
}
