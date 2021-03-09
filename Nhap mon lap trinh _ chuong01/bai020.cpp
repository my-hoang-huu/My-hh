#include<iostream>
using namespace std;

int main()
{
	float x;
	cout << "nhap x: ";
	cin >> x;
	float x2 = x * x;
	float x3 = x * x2;
	float x6 = x3 * x3;
	float x7 = x6 * x;
	float x14 = x7 * x7;

	cout << "x^14 = " << x14 << endl;
	system("pause");
	return 1;

}