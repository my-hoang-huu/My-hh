#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int dn = 0, t = n, dv;

	while (t!=0)
	{
		dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	cout << "chu so dao nguoc cua " << n << " la: " << dn << endl;

	system("pause");
	return 1;
}
