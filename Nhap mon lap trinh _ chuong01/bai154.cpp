#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	long at = n;
	long ahh;

	if (n >= 2)
	{
		cout << "Day so mua da cua " << n << " la: " << endl;
		cout << n << endl;
		while (at != 1)
		{
			if (at % 2 == 0)
			{
				ahh = at / 2;
				cout << ahh << endl;
				at = ahh;
			}
			else
			{
				ahh = 3 * at + 1;
				cout << ahh << endl;
				at = ahh;
			}
		}
	}
	else
	{
		cout << "Khong ton tai day so mua da voi so nguyen " << n << endl;
	}
	system("pause");
	return 1;
}
