#include<iostream>
using namespace std;

int main()
{
	int a, b, lc;
	cout << "nhap a: ";
	cin >> a;
	cout << "nhap b: ";
	cin >> b;
	lc = a;
	a = b;
	b = lc;
	cout << "gia tri a va b sau hoan vi: " << endl;
	cout << "a = " << a << endl << "b = " << b << endl;

	system("pause");
	return 1;

}