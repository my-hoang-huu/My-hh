#include<iostream>
using namespace std;
int main()
{
	int n = abs(n);
	cout << "nhap n: ";
	cin >> n;
	int t = n;
	int lc = 0;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv > lc)
		{
			lc = dv;
		}
		t = t / 10;
	}
	cout << "Chu so lon nhat cua so nguyen " << n << " la: " << lc << endl;

	system("pause");

	return 1;

}