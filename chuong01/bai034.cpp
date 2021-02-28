#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	float S = 0;
	int i = 0;
	while (i <= n)
	{
		S = S + (float)(2 * i + 1) / (2 * i + 2);
		i = i + 1;
	}
	cout << "tong day so la: " << S << endl;
	system("pause");

	return 1;

}