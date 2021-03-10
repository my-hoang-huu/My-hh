#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int S = 0;
	int i = 1;
	while (i <= n)
	{
		S = S + i * (i + 1);
		i = i + 1;
	}
	cout << "tong day so la: " << S << endl;
	system("pause");

	return 1;

}