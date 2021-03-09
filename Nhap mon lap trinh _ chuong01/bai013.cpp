#include<iostream>
using namespace std;

int main()
{
	float x;
	cout << "nhap x: ";
	cin >> x;
	float x2 = x * x;
	float x4 = x2 * x2;
	float x6 = x4 * x2;
	float x7 = x6 * x;
	cout << "x^7 = " << x7 << endl;
	system("pause");
	return 1;

}