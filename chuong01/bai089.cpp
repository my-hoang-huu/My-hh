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
	int T = 1;
	int M = 0;
	int dau = -1;
	int i = 1;
	while (i <= n)
	{
		T = T * x;
		M = M + i;
		S = S + 1.0 * dau * T / M;
		i = i + 1;
		dau = -dau;
	}
	cout << "Gia tri day so la: " << S << endl;
	system("pause");

	return 1;
}