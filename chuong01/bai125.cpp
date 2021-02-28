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
	while (a<0)
	{
		a = -a;
	}
	while (b<0)
	{
		b = -b;
	}
	cout << "gia tri tuyet doi cua a va b la: " << endl;
	cout << "a = " << a << endl << "b = " << b << endl;
	system("pause");
	return 1;
}