#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int dem = 0;
	int i = 1;
	cout << "cac uoc so cua so nguyen " << n << " la: " << endl;
	while (i <= n)
	{
		if (n % i == 0)
		{
			dem++;
			cout << i << endl;
		}
		i = i + 1;
	}
	cout << "so nguyen " << n << " co " << dem << " uoc so" << endl << endl;
	system("pause");
	return 1;

}