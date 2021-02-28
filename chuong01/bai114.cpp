#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	long ahh;
	long at = -2;
	int T = 3;
	int M = 7;
	int i = 2;
	while (i <= n)
	{
		T = T * 3;
		M = M * 7;
		ahh = 5 * at + 2 * T - 6 * M + 12;
		i = i + 1;
		at = ahh;
	}
	cout << "so hang thu " << n << " cua day so la: " << ahh << endl;
	system("pause");
	return 1;
}