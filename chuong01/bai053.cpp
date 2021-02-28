#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int i = 1;
	cout << "cac uoc so le cua so nguyen " << n << " la: " << endl;
	while (i <= n)
	{
		if (n % i == 0)
			cout << i << endl;
		i = i + 2;
	}

	system("pause");
	return 1;

}