#include<iostream>
using namespace std;
float DeQuy(float, int, float);
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int x;
	cout << "nhap x: ";
	cin >> x;
	int S = 0;
	int T = 1;
	int i = 1;
	while (i <= n)
	{
		T = T * x;
		S = S + T;
		i = i + 1;
	}
	cout << "Gia tri day so la: " << S << endl;
	//cout << "\nDung De quy: " << DeQuy(x, n, T);
	system("pause");

	return 1;
}
//float DeQuy(float x, int n, float T)
//{
//	if (n == 0)
//	{
//		T = 1;
//		return 0;
//	}
//	return DeQuy(x, n - 1, T / x) + T;
}