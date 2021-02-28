#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int x;
	cout << "nhap x: ";
	cin >> x;
	float S = 1;
	int i = 0;
	while (i <= n)
	{
		S = S * (x + i);
		i = i + 1;
	}
	cout << "gia tri day so la: " << S << endl;
	system("pause");
	return 1;

}