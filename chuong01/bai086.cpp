#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int x;
	cout << "nhap x: ";
	cin >> x;
	float S = 0;
	float T = 1;
	int dau = -1;
	int i = 2;
	while (i <= 2 * n)
	{
		T = T * x * x;
		S = S + dau * T;
		i = i + 2;
		dau = -dau;
	}
	cout << "Gia tri day so la: " << S << endl;
	system("pause");

	return 1;
}