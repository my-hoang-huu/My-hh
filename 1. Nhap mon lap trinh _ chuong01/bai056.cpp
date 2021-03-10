#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int dem = 0;
	int i = 2;
	cout << "cac uoc so chan cua so nguyen " << n << " la: " << endl;
	while (i <= n)
	{
		if (n % i == 0)
		{
			dem++;
			cout << i << endl;
		}
		i = i + 2;
	}
	cout << "So nguyen " << n << " co " << dem << " uoc so chan " << endl << endl;
	system("pause");
	return 1;

}