#include<iostream>
#include<iomanip>
using namespace std;
int LuyThua(float, int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int x;
	cout << "Nhap x: ";
	cin >> x;
	int kq = LuyThua(n, x);
	cout << "\nKet qua: " << kq;
	return 1;
}
int LuyThua(float x, int n)
{
	if (n == 0)
		return 1;
	return(LuyThua(x, n - 1) * x);
}