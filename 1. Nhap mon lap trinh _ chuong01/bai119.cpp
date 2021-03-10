#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	double ahh;
	double at = 2;
	int i = 2;
	while (i <= n)
	{
		ahh = ((at * at + 2) / (2 * at));
		i = i + 1;
		at = ahh;
	}
	cout << "so hang thu " << n << " cua day so la: " << ahh << endl;
	system("pause");
	return 1;
}