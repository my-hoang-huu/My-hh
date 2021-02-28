#include<iostream>
using namespace std;
int main()
{
	int S = 0, i = 1, n;
	cout << "nhap n: ";
	cin >> n;
	while (i <= n)
	{
		S = S + i * i;
		i = i + 1;
	}
	cout << "tong gia tri day so la: " << S << endl;
	system("pause");

	return 1;

}