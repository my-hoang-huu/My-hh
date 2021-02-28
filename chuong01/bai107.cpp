#include<iostream>
using namespace std;
int main()
{
	float x;
	cout << "nhap x: ";
	cin >> x;
	double S = 1;
	double M = 1;
	int T = 1;
	double e = 1;
	int dau = -1;
	int i = 2;
	while (e >= pow(10, -6))
	{
		T = T * x * x;
		M = M * i * (i - 1);
		e = (double)T / M;
		S = S + dau * e;
		dau = -dau;
		i = i + 2;
	}
	cout << "cos(" << x << ")" << " = " << S << endl;
	system("pause");
	return 1;
}