#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int dv = n / 10 % 10;
	cout << "chu so hang chuc cua " << n << " la: " << dv << endl;

	system("pause");
	return 1;

}