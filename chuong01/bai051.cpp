#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int t = 1;
	int i = 1;

	while (i <= n)
	{
		if (n % i == 0)
			t = t * i;
		i = i + 1;
	}
	cout << "tich cac uoc so cua " << n << " la: " << t << endl;
	system("pause");
	return 1;

}