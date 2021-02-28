#include<iostream>
using namespace std;
double Tich35(int);
double Tich36(float, int);

int main()
{
	int x;
	cout << "nhap x: ";
	cin >> x;
	int n;
	cout << "nhap n: ";
	cin >> n;
	double t35 = Tich35(n);
	cout << "Bai 035: Tich day so la: " << t35 << endl;
	double t36 = Tich36(x, n);
	cout << "Bai 036: Tich day so la: " << t36 << endl;
	system("pause");
	return 1;
}
double Tich35(int n)
{
	double t = 1;
	for (int i = 1; i <= n; i++)
	{
		t = t * i;
	}
	return t;
}
double Tich36(float x, int n)
{
	float t = 1;
	for (int i = 1; i <= n; i++)
	{
		t = t * x;
	}
	return t;
}
