#include<iostream>
using namespace std;
int main()
{

	float C, F;
	cout << "nhap gia tri do C: ";
	cin >> C;
	F = 9.0 * C / 5 + 32;
	//hoac F=(9.0/5)*C+32 (do phep / phai co tu hoac mau la so thuc thi ket qua moi la so thuc;
	//hoac F=(float)9/5*C+32;
	//neu dung F=9/5*C+32 SAI (vi 9/5 se lam tron den so nguyen truoc khi x C)
	cout << "do F tuong ung: " <<F<< endl;
	system("pause");
	return 1;

}
