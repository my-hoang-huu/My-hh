#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int a = 1;
	int i = 0;
	cout << "Day gia tri can tim: " << endl;
	while (i <= n)
	{
		cout << "a(" << i << ") = " << a << endl;
		i = i + 1;
		a = a * i;
	}
	system("pause");
	return 1;
}
