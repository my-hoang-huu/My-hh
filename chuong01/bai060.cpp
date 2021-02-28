#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int t = n;
	int T = 1;
	while (t != 0)
	{
		int dv = t % 10;
		T = T * dv;
		t = t / 10;

	}
	cout << "tich cac chu so cua " << n << " la: " << T << endl;

	system("pause");

	return 1;

}