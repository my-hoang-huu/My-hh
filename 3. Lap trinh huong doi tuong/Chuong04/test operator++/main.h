#include <iostream>
using namespace std;

class ThoiGian
{
private:
	int gio;             // tu 0 toi 23
	int phut;           // tu 0 toi 59
public:
	// phan khai bao cac constructor can thiet
	ThoiGian() {
		gio = 0;
		phut = 0;
	}
	ThoiGian(int h, int m) {
		gio = h;
		phut = m;
	}
	// phuong thuc de hien thi thoi gian
	void hienthiTG()
	{
		cout << "Gio: " << gio << " Phut: " << phut << endl;
		cout << "-----------------------" << endl;
	}
	// nap chong toan tu ++ (tien to)
	ThoiGian operator++ ()
	{
		++phut;          // tang doi tuong nay
		if (phut >= 60)
		{
			++gio;
			phut -= 60;
		}
		return *this;
	}
	// nap chong toan tu ++ (hau to)
	ThoiGian operator++(int)
	{
		// luu giu gia tri ban dau
		ThoiGian T = *this;
		// tang doi tuong nay
		++phut;
		if (phut >= 60)
		{
			++gio;
			phut -= 60;
		}
		// tra ve gia tri
		return T;
	}
};
int main()
{
	ThoiGian T1(6, 59), T2(19, 24);

	++T1;                    // tang T1
	T1.hienthiTG();        // hien thi T1     Gio: 7 Phut: 0
	++T1;                    // tang T1 mot lan lua
	T1.hienthiTG();        // hien thi T1     Gio: 7 Phut: 1

	T2++;                    // tang T2       
	T2.hienthiTG();        // hien thi T2     Gio: 19 Phut: 25
	T2++;                    // tang T2 mot lan lua
	T2.hienthiTG();        // hien thi T2     Gio: 19 Phut: 26
	return 0;
}