#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int i = 1;
	cout << "cac uoc so cua so nguyen " << n << " la: " << endl;
	while (i <= n)
	{
		if (n % i == 0)
			cout << i << endl;
		i = i + 1;
	}

	system("pause");
	return 1;

}