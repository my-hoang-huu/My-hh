#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int t = n;
	int dv = t % 10;
	int flag = 1;
	while (t != 0)
	{
		dv = t % 10;
		if (dv % 2 == 1)
		{
			flag = 0;
		}
		t = t / 10;
	}
	if (flag == 1)
	{
		cout << n << " gom toan chu so chan" << endl;
	}
	else
	{
		cout << n << " co chua chu so le" << endl;
	}

	system("pause");
	return 1;
}
