#include<iostream>
using namespace std;
int main()
{
	float S = 0;
	float M = 0;
	float e = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		M = M + i;
		e = 1.0 / M;
		S = S + e;
		i = i + 1;
	}
	cout << "Gia tri bieu thuc la: " << S << endl;
	system("pause");
	return 1;
}