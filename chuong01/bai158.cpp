#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int t = n;
	int lc = t % 10;
	int ts = n;
	int dem = 0;
	while (t!=0)
	{
		int dv = t % 10;
		if (dv>lc)
		{
			lc = dv;		
		}
		t = t / 10;
	}
	while (ts!=0)
	{
		int dv = ts % 10;
		if (dv==lc)
		{
			dem++;
		}
		ts = ts / 10;
	}
	cout << "So luong chu so lon nhat cua so nguyen duong " << n << " la: " << dem << endl;
	system("pause");
	return 1;
}
