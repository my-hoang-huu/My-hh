#include<iostream>
using namespace std;
int main()
{
	double S = 4;
	double M = 1;
	double e = 1;
	int dau = -1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		M = M + 2 ;
		e = 4.0 / M;
		S = S + dau * e;
		//cout << "S = " << S << endl;
		i = i + 1;
		dau = -dau;
	}
	cout << "pi = " << S << endl;
	system("pause");
	return 1;
}