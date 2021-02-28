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
	cout << "uoc chung lon nhat cua " << a << " va " << b << " la: " << s << endl;
	system("pause");
	return 1;
}
