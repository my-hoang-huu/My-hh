#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int t = n;
	int lc = t % 10;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv < lc)
		{
			lc = dv;
		}
		t = t / 10;
	}
	cout << "Chu so nho nhat cua so nguyen " << n << " la: " << lc << endl;

	system("pause");

	return 1;

}