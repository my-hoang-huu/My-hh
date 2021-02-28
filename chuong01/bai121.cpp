#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	double ahh;
	double att = 1;
	double at = 1;
	int i = 2;
	while (i <= n)
	{
		ahh = at + att;
		i = i + 1;
		//cout << ahh << endl;
		att = at;
		at = ahh;
	}
	cout << "so hang thu " << n << " cua day so la: " << ahh << endl;
	system("pause");
	return 1;
}