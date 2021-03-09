#include<iostream>
#include<iomanip>
using namespace std;
long Tinhxn(int);
long Tinhyn(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int xn = Tinhxn(n);
	int yn = Tinhyn(n);
	cout << "\nKet qua: \nx^n = " << xn;
	cout << "\ny^n = " << yn;
	return 1;
}
long Tinhxn(int n)
{
	if (n == 0)
		return 1;
	long a = Tinhxn(n - 1);
	long b = Tinhyn(n - 1);
	return (a + b);
}
long Tinhyn(int n)
{
	if (n == 0)
		return 0;
	long a = Tinhxn(n - 1);
	long b = Tinhyn(n - 1);
	return (3 * a + 2 * b);
}