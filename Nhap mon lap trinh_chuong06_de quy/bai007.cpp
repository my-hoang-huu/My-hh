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
	cout << "\nKet qua: \nx = " << xn;
	return 1;
}
long Tinhxn(int n)
{
	if (n == 0)
		return 1;
	long s = 0;
	for (int i = 0; i <= n - 1; i++)
	{
		long xi = Tinhxn(i);
		s = s + (n - i) * (n - i) * xi;
	}
	return s;
}
