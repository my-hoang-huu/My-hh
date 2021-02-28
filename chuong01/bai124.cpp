#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	double ahh;
	double at = 2;
	double bhh;
	double bt = 1;
	int i = 2;
	while (i <= n)
	{
		ahh = at * at + 2 * bt * bt;
		bhh = 2 * at * bt;
		i = i + 1;
		at = ahh;
		bt = bhh;
	}
	cout << "so hang thu " << n << " cua day so la: " << endl;
	cout << "a(" << n << ")" << " = " << ahh << endl;
	cout << "b(" << n << ")" << " = " << bhh << endl;

	system("pause");
	return 1;
}