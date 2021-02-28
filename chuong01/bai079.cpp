#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int S = 0;
	int T = 1;
	int i = 1;
	while (i <= n)
	{
		T = T * i;
		S = S + T * i;
		i = i + 1;
	}
	cout << "Gia tri day so la: " << S << endl;
	system("pause");

	return 1;
}