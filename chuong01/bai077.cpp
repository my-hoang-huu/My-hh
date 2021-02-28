#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int k;
	cout << "nhap k: ";
	cin >> k;
	double S = 0;
	int i = 1;
	while (i <= n)
	{
		S = S + pow(i, k);
		i = i + 1;
	}
	cout << "Gia tri day so la: " << S << endl;
	system("pause");
	return 1;
}