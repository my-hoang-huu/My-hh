#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int t = n;
	int dem = 0;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
		{
			dem++;
		}
		t = t / 10;

	}
	cout << "So luong cac chu so chan cua so nguyen " << n << " la: " << dem << endl;

	system("pause");

	return 1;

}