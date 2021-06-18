#include"Diem.h"
#include"Dagiac.h"


int main() {
	cout << "-----------------[DIEM]-----------------";
	Diem a, b;
	cout << "\nNhap toa do diem a: ";
	cin >> a;
	Diem c = a;
	cout << "---\nToa do diem a truoc va sau khi tinh tien 5 don vi tung va hoanh do: \n";
	cout << c << endl;
	b = a.TinhTien(5, 5);
	cout << b;

	cout << "\n\n-----------------[DAGIAC]-----------------";
	Dagiac d0, d1, d3;
	cout << "\nDa giac d0 duoc tao mac dinh: ";
	d0.Xuat();
	cout << "\n--\nNhap da giac d0: ";
	cin >> d0;
	float X, Y, k, goc;
	cout << "\n--\nDa giac d0 vua nhap: ";
	cout << d0;//Ham khoi tao sao cheo duoc goi khi dung cout voi tham tri Dagiac a => nen dung tham chieu const Dagiac& a
	d1 = d0;//Ham gan operator =  duoc goi;
	Dagiac d2 = d0;//Ham khoi tao sao chep duoc goi
	cout << "\nd1 = d0: \nDIA CHI d1 va d0: " << &d1 << "(&d1)  " << &d0 << "(d0)";
	cout << "\nDa giac d1 sao chep tu d0: " << d1;

	cout << "\n--\nTinh tien\n";
	cout << "\nNhap do lech theo phuong Ox: ";
	cin >> X;
	cout << "\nNhap do lech theo phuong Oy: ";
	cin >> Y;
	d0.TinhTien(X, Y);
	cout << "\nDa giac d0 sau khi tinh tien: ";
	d0.Xuat();

	cout << "\n--\nPhep quay tam O";
	cout << "\nNhap goc quay: ";
	cin >> goc;
	d3 = d1.QuayQuanhTamO(goc);//Hai ham khoi tao sao chep + 1 ham gan duoc thuc hien: 
	//1. Khoi tao  Dagiac d = *this; trong ham quay; &d1 == this(ham quay)
	//2. Khoi tao sao chep d sang ket qua ham quay (co dia chi &a); &d rieng ,=> Ham huy goi de huy d
	//3. Ham gan duoc goi de dua ket qua ham quay sang d3; =>Ham huy goi de huy ket qua ham quay
	//DIA CHI: &a(ham gan) == ket qua ham quay, this(ham gan) == d3
	cout << "\nDIA CHI d3 va d1: " << &d3 << "(&d3)  " << &d1 << "(&d1)";
	cout << "\nDa giac sau khi quay mot goc " << goc << " do quanh goc toa do O";
	cout << d3;
	Diem I(2, 3);
	Dagiac quayI = d1.QuayQuanhDiemI(I, goc);
	cout << "\nDa giac sau khi quay mot goc " << goc << " do quanh diem I(2,3) ";
	cout << quayI;
	cout << "\n--\nPhong to: \nNhap so lan:	";
	cin >> k;
	cout << "\nDa giac d0 sau khi phong to " << k << " lan: ";
	Dagiac d4 = d1.ThuPhong(k);
	cout << d4;

	cout << "\n--\nThu nho: \nNhap so lan:	";
	cin >> k;
	Dagiac d5 = d1.ThuPhong(1 / k);
	cout << "\nDa giac d0 sau khi thu nho " << k << " lan: ";
	cout << d5;



	cout << endl;
	return 1;
}