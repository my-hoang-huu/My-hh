#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int x;
	cout << "nhap x: ";
	cin >> x;
	float S = 1.0 / x;
	int M = x;
	int i = 1;
	while (i <= n)
	{
		M = M * (x + i);
		S = S + 1.0 / M;
		i = i + 1;
	}
	cout << "Gia tri day so la: " << S << endl;
	system("pause");

	return 1;
}