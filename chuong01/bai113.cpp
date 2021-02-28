#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	long ahh;
	long at = 2;
	int i = 2;
	while (i <= n)
	{
		ahh = at + 2 * i + 1;
		i = i + 1;
		at = ahh;
	}
	cout << "so hang thu " << n << " cua day so la: " << ahh << endl;
	system("pause");
	return 1;
}