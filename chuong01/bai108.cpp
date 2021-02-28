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
	int i = 1;
	while (e >= pow(10, -6))
	{
		T = T * x;
		M = M * i;
		e = (double)T / M;
		S = S + e;
		//cout << "S = " << S << endl;
		i = i + 1;
	}
	cout << "e^" << x << " = " << S << endl;
	system("pause");
	return 1;
}