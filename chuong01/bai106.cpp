#include<iostream>
using namespace std;
int main()
{
	float x;
	cout << "nhap x: ";
	cin >> x;
	double S = x;
	long long M = 1;
	int T = x;
	double e = 1;
	int dau = -1;
	int i = 3;
	while (e >= pow(10, -6))
	{
		T = T * x * x;
		M = M * i * (i - 1);
		e = (double)T / M;
		S = S + dau * e;
		dau = -dau;
		i = i + 2;
	}
	cout << "sin(" << x << ")" << " = " << S << endl;
	system("pause");
	return 1;
}