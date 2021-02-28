#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int dem = 0, i = 1;
	while (i <= n)
	{
		if (n % i == 0)
			dem = dem++;
		i = i++;
	}
	if (dem == 2)
	{
		cout << n << " la so nguyen to." << endl;
	}
	else
	{
		cout << n << " khong phai la so nguyen to." << endl;
	}
	system("pause");
	return 1;

}