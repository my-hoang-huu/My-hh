#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	float S = 0;
	int i = 2;
	while (i <= n)
	{
		S = pow(S + i, 1.0 / i);
		i = i + 1;
	}
	cout << "Gia tri bieu thuc la: " << S << endl;
	system("pause");

	return 1;
}