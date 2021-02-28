#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int t = n;
	int T = 1;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 1)
		{
			T = T * dv;
		}
		t = t / 10;

	}
	cout << "Tich cac chu so le cua so nguyen " << n << " la: " << T << endl;

	system("pause");

	return 1;

}