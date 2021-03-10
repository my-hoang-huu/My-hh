#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int s = 0, i = 1;
	while (i<n)
	{
		if (n % i == 0)
			s = s + i;
		i = i + 1;
	}
	if (s==n)
	{
		cout << n << " la so hoan thien." << endl;
	}
	else
	{
		cout << n << " la so khong hoan thien." << endl;
	}
	system("pause");
	return 1;

}