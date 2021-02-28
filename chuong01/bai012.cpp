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
	float x12 = x6 * x6;
	system("pause");
	return 1;

}