#include"Quanly.h"
#pragma comment (lib, "winmm.lib")


int main() {
	//De g;
	//g.NhapSuaMoiluot();
	//g.Nhap();
	//g.Xuat();
	Quanly a;
	a.Nhap();
	cout << "\n--------------- THONG KE BAN DAU LUC MOI NHAP GIA SUC ---------------";
	cout << "\nTong so luong gia suc: " << a.GetSize();
	a.Thongke();
	a.Xuat();
	cout << "\n\n--------------- THONG KE LUONG SUA MOT LUOT LAY LUC MOI NHAP GIA SUC (lit) ---------------\n";
	cout << a.ThongKeSuaSauMotLuot() << " liters";
	cout << "\n\n--------------- TIENG KEU ---------------";
	cout << "\nTieng keu cua tat ca cac loai gia suc trong trang trai khi doi: ";
	a.Tiengkeu();
	cout << "\n\n--------------- THONG KE SO GIA SUC DEN HET NAM 2020 ---------------";
	a.LuaSinh();
	a.Thongke();
	cout << "\nTong so luong gia suc: " << a.GetSize();
	a.Xuat();
	cout << "\n\n--------------- THONG KE LUONG SUA MOT LUOT LAY VAO CUOI NAM 2020 (lit) ---------------\n";
	cout << a.ThongKeSuaSauMotLuot() << " liters";
	cout << "\n\n--------------- THONG KE TOAN BO LUONG SUA VAO NAM __ (lit) ---------------\n";
	cout << a.ThongKeSuaMotNam() << " liters";
	cout << "\n\n--------------- THONG TIN GIA SUC NANG NHAT NAM 2020 (Kg) ---------------\n";
	a.MaxCannang();
	cout << endl;
	return 1;
}

