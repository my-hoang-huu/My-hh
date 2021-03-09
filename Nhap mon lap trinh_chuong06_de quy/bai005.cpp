#include<iostream>
#include<iomanip>
using namespace std;
long Fibo(int );

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = Fibo(n);
	cout << "\nKet qua: " << kq;
	return 1;
}
long Fibo(int n)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return 1;
	long a = Fibo(n - 1);
	long b = Fibo(n - 2);
	return (a + b);
}