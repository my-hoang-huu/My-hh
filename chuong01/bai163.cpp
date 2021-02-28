#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int t = n;
	while (t % 2 == 0)
	{
		t = t / 2;
	}
	cout << "Uoc so le lon nhat cua so nguyen duong " << n << " la: "<< t << endl;
	system("pause");
	return 1;
}
