#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "nhap a: ";
	cin >> a;
	cout << "nhap b: ";
	cin >> b;
	int m = abs(a);
	int n = abs(b);
	while ((m * n) != 0)
	{
		if (m > n)
			m = m - n;
		else
			n = n - m;
	}
	int s = m + n;
	long kq = abs(a * b) / s;
	cout << "Boi chung nho nhat cua " << a << " va " << b << " la: " << kq << endl;
	system("pause");
	return 1;
}
