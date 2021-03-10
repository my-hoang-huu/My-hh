#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	float a = 0;
	int i = 1;
	cout << "Day gia tri can tim: " << endl;
	while (i <= n)
	{
		a = a + 1.0 / i;
		cout << "a(" << i << ") = " << a << endl;
		i = i + 1;
	}
	system("pause");
	return 1;
}
