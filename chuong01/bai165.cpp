#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	double t = 1;
	int i = 0;
	int lc = i;
	while (t < n)
	{
		t = t * 2;
		lc = i;
		i = i + 1;
	}
	cout << "So nguyen k lon nhat thoa man 2^k < " << n << " la: " << lc << endl;
	system("pause");
	return 1;
}