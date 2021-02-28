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
	float S = 0;
	int T = 1;
	int M = 1;
	int i = 1;
	while (i <= n)
	{
		T = T * x;
		M = M * i;
		S = S + (float)T / M;
		i = i + 1;
	}
	cout << "Gia tri day so la: " << S << endl;
	system("pause");
	return 1;
}