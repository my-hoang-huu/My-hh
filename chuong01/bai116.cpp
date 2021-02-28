#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	long ahh;
	long att = 1;
	long at = 2;
	int i = 2;
	while (i <= n)
	{
		ahh = 4 * at + att;
		i = i + 1;
		att = at;
		at = ahh;
	}
	cout << "so hang thu " << n << " cua day so la: " << ahh << endl;
	system("pause");
	return 1;
}