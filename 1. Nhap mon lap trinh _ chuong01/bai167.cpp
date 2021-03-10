#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int s = 0;
	int i = 0;
	int lc = i;
	while (s < n)
	{
		lc = i;
		i = i + 1;
		s = s + i;
	}
	cout << "So nguyen k lon nhat thoa man S(k) <" << n << " la: " << lc << endl;
	system("pause");
	return 1;
}