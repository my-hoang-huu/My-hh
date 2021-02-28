#include<iostream>
using namespace std;
int main()
{
	int dv, n, t, i = 1, s=0; 
	cout << "nhap n: ";
	cin >> n;
	t = n;

	while (t != 0)
	{
		dv = t % 10;
		s = s + dv;
		t = t / 10;

	}
	cout << "tong cac chu so cua " << n << " la: " << s<<endl;

	system("pause");

	return 1;

}