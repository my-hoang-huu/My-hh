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
		lc = b;
	}
	cout << "Gia tri nho nhat la: " << lc << endl;
	system("pause");
	return 1;
}
