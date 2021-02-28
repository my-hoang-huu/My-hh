#include<iostream>
using namespace std;
int main()
{
	double S = 3;
	double e = 1;
	int dau = 1;
	int i = 2;
	while (e >= pow(10, -6))
	{
		e = (float) 4 / (i * (i + 1) * (i + 2));
		S = S + dau * e;
		//cout << "S = " << S << endl;
		i = i + 2;
		dau = -dau;
	}
	cout << "pi = " << S << endl;
	system("pause");
	return 1;
}