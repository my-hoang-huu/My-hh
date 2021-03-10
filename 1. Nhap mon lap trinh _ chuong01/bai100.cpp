#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	float S = 0;
	int T = 1;
	int i = 1;
	while (i <= n)
	{
		T = T * i;
		S = pow(S + T, 1.0 / (i + 1));
		i = i + 1;
	}
	cout << "Gia tri bieu thuc la: " << S << endl;
	system("pause");

	return 1;
}