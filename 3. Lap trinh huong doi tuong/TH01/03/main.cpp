#include "Candidate.h"
#include "TestCandidate.h"


int main()
{
	//Candidate a, b, c;
	//a.Nhap();
	//a.Xuat();
	//cin.ignore();
	//b.Nhap();
	//b.Xuat();
	TestCandidate s;
	s.Nhap();
	cout << "\n---------\nThong tin cac thi sinh: \n";
	s.Xuat();
	cout << "\n---------\nCac thi sinh co tong diem lon hon 15: \n";

	s.XuLy();

	return 1;
}