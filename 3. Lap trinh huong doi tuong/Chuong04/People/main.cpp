#include"People.h"
#include"Sinhvien.h"
#include"Giangvien.h"
#include"Danhsach.h"


int main() {
	//People a;
	//cout << "Nhap du lieu cho a: \n";
	//a.Nhap();
	//cout << "\nDu lieu vua nhap: " << endl;
	//a.Xuat();
	//cout << "\n------------- SINH VIEN -------------\n";
	//Sinhvien s;
	//cout << "Nhap du lieu cho s: \n";
	//s.Nhap();
	//cout << "\nDu lieu vua nhap: " << endl;
	//s.Xuat();
	/*cout << "\n------------- GIANG VIEN -------------\n";
	Giangvien g;
	cout << "Nhap du lieu cho s: \n";
	g.Nhap();
	cout << "\nDu lieu vua nhap: " << endl;
	g.Xuat();
	cout << "\n------------- CONG NHAN -------------\n";*/

	Danhsach d;
	d.Nhap();
	d.Xuat();
	cout << "\n------------- SINH VIEN -------------\n";
	cout << "\nXuat danh sach cac sinh vien vua nhap: ";
	d.XuatSV();
	cout << "\n------------- CONG NHAN -------------\n";
	cout << "\nCac cong nhan co luong cao nhat: ";
	d.OutputMaxSalary();
	return 1;
}