#include<iostream>
using namespace std;

int main()
{
	float x;
	cout << "nhap x: ";
	cin >> x;
	float x2 = x * x;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x10 = x2 * x8;
	float x11 = x10 * x;
	cout << "x^11 = " << x11 << endl;
	system("pause");
	return 1;

}