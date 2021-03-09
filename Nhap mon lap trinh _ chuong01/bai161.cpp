#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int t = n;
	int flag = 1;
	int lc = t % 10;
	t = t / 10;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv > lc)
		{
			flag = 0;
			break;
		}
		lc = dv;
		t = t / 10;
	}
	if (flag==1)
		cout << "So nguyen duong " << n << " CO cac chu so tang dan tu trai sang phai " << endl;
	else
		cout << "Cac chu so cua so nguyen duong " << n << " KHONG tang dan tu trai sang phai " << endl;

	system("pause");
	return 1;
}
