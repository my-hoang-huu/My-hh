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
	float lc = a;
	if (a > b)
	{
		a = b;
		b = lc;
	}
	cout << "Gia tri a va b theo thu tu tang dan la: " << endl << a << endl << b << endl;
	system("pause");
	return 1;
}
