#include<iostream>
using namespace std;
int main()
{

	int n;
	cout << "nhap nam: ";
	cin >> n;
	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
	{
		cout << "nam " << n << " la nam nhuan" << endl;
	}
	else
	{
		cout << "nam " << n << " khong la nam nhuan" << endl;
	}
	system("pause");
	return 1;
}
