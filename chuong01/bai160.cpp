#include<iostream>
using namespace std;
int main()
{
	long long n;
	cout << "nhap n: ";
	cin >> n;
	long long t = n;
	long long ts = n;
	int dem = 0;
	while (t >= 10 )
	{
		t = t / 10;
	}
	while (ts != 0)
	{
		int dv = ts % 10;
		if (dv == t)
		{
			dem++;
		}
		ts = ts / 10;
	}
	cout << "So luong chu so dau tien cua so nguyen duong " << n << " la: " << dem << endl;
	system("pause");
	return 1;
}
