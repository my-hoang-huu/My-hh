#include<iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "nhap a: ";
	cin >> a;
	cout << "nhap b: ";
	cin >> b;
	a = a + b;
	b = a - b;
	a = a - b;

	cout << "gia tri dao nguoc: " << endl << "a = " << a << endl << "b = " << b << endl;

	system("pause");
	return 1;

}