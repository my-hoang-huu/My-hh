
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int t = 2;
	int k = 1;
	while (t < n)
	{
		t = t * 2;
		k = k + 1;
	}
	cout << k;

	return 1;
}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cout << "Nhap n: ";
//	cin >> n;
//	long double t = pow(2, n);
//	int i = n;
//	int lc = i;
//	while (t > n)
//	{
//		t = t / 2;
//		lc = i;
//		i = i - 1;
//	}
//	cout << "So nguyen k NHO nhat thoa man 2^k > " << n << " la: " << lc << endl;
//	system("pause");
//	return 1;
//}