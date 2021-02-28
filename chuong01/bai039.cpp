#include<iostream>
using namespace std;
float DeQuy(int);
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	float S = 1;
	int i = 1;
	while (i <= n)
	{
		S = S * (1 + 1.0 / (i * i));
		i = i + 1;
	}
	cout << "gia tri day so la: " << S << endl;
	cout << "\nCach 2: Dung de quy: " << DeQuy(n) << endl;
	system("pause");
	return 1;
}
float DeQuy(int n)
{
	if (n == 0)
		return 1;
	return DeQuy(n - 1) * (1 + 1.0 / (n * n));
}
