#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	double ahh;
	double at = 1;
	double bhh;
	double bt = 1;
	int i = 2;
	while (i <= n)
	{
		ahh = 3 * bt + 2 * at;
		bhh = at + 3 * bt;
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