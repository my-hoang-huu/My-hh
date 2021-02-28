#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	double s = 1;
	int i = 1;
	while (i <= n)
	{
		s = 1.0 / (1 + s);
		i = i + 1;
	}
	cout << "Gia tri bieu thuc voi n = " << n << " la: " << s << endl;
	system("pause");
	return 1;
}
