#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int x;
	cout << "nhap x: ";
	cin >> x;
	float S = 0;
	float T = 1;
	int i = 1;
	while (i <= n)
	{
		T = T * (float)sin(x);
		S = S + T;
		i = i + 1;
	}
	cout << "Gia tri day so la: " << S << endl;
	system("pause");

	return 1;
}