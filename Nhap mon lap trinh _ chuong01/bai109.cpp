#include<iostream>
using namespace std;
int main()
{
	double S = 1;
	double M = 1;
	double e = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		M = M * i;
		e = 1.0 / M;
		S = S + e;
		//cout << "S = " << S << endl;
		i = i + 1;
	}
	cout << "e = " << S << endl;
	system("pause");
	return 1;
}