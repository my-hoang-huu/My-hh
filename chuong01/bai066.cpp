#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int t = n;
	int lc = 0;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
		{
			lc = 1;
		}
		t = t / 10;
	}
	
	if (lc == 1)
	{
		cout << "so nguyen duong " << n << " co ton tai chu so chan" << endl;
	}
	else
	{
		cout << "so nguyen duong " << n << " khong ton tai chu so chan" << endl;
	}
	system("pause");

	return 1;

}