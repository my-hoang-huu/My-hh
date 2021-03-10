#include<iostream>
#include<iomanip>
using namespace std;
unsigned H(unsigned num)
{
	unsigned k;
	do
	{
		k = num % 10;
		num = num / 10;
	} while (num);
	cout << num;
	return k;
}
int main()
{
	cout << H(26);
	return 1;
}
