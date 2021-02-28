#include<iostream>
using namespace std;
int main()
{
	int i = 1, n;
	cout << "nhap n: ";
	cin >> n;
	float S = 0;
	while (i <= n)
	{
		S = S + 1.0/i;
		i = i + 1;
	}
	cout << "tong day so la: " << S << endl;
	system("pause");

	return 1;

}