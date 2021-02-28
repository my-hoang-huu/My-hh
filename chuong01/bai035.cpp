#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	float T = 1;
	int i = 1;
	while (i <= n)
	{
		T = T * i;
		i = i + 1;
	}
	cout << "tich day so la: " << T << endl;
	system("pause");
	return 1;

}