#include "dagiac.h"

// ---------------------------------------Class da giac----------------------------------------
dagiac::dagiac()
{
	dinh = nullptr;
	n = 0;
	loai = 0;
}
dagiac::dagiac(const dagiac& cp)
{
	cout << "copy da giac dc goi !!\n";
	n = cp.n;
	dinh = new diem[n];
	for (int i = 0; i < n; i++)
	{
		dinh[i] = cp.dinh[i];
	}
	loai = 0;
}
dagiac::~dagiac()
{
	delete[]dinh;
}
void dagiac::nhap()
{
	cout << "Nhap so dinh cua da giac\n " << "n= ";
	while (cin >> n && n <= 2)
	{
		cout << "So dinh toi thieu la 3 !!\n";
		cout << "Nhap lai n= ";
	}
	dinh = new diem[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap diem thu " << i + 1 << ": \n";
		cin >> dinh[i];
	}
}
void dagiac::xuat()
{
	for (int i = 0; i < n; i++)
	{
		cout << "Diem thu " << i + 1 << ": " << dinh[i] << endl;
	}
}
void dagiac::tinhtien()
{
	cout << ">> Nhap toa do tinh tien\n";
	cout << "  + Toa do x: "; float x; cin >> x;
	cout << "  + Toa do y: "; float y; cin >> y;

	for (int i = 0; i < n; i++)
	{
		dinh[i].tinhtien(x, y);
	}
}

// ---------------------------------------Class tu giac----------------------------------------

tugiac::tugiac() : dagiac() { n = 4; loai = 1; }
tugiac::tugiac(const tugiac& cp) : dagiac(cp) { loai = 1; }
void tugiac::nhap()
{
	dinh = new diem[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap dinh thu " << i + 1 << ": \n";
		cin >> dinh[i];
	}
}
void tugiac::xuat()
{
	dagiac::xuat();
}
void tugiac::tinhtien()
{
	dagiac::tinhtien();
}

// ---------------------------------------Class tam giac----------------------------------------
tamgiac::tamgiac() : dagiac() { n = 3; loai = 2; }
tamgiac::tamgiac(const tamgiac& cp) : dagiac(cp) { loai = 2; }
void tamgiac::nhap()
{
	dinh = new diem[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap dinh thu " << i + 1 << ": \n";
		cin >> dinh[i];
	}
}
void tamgiac::xuat() { dagiac::xuat(); }
void tamgiac::tinhtien() { dagiac::tinhtien(); }

// ---------------------------------------Class hinh binh hanh----------------------------------------
hinhbinhhanh::hinhbinhhanh() : tugiac() { loai = 3; }
hinhbinhhanh::hinhbinhhanh(const hinhbinhhanh& cp) : tugiac(cp) { loai = 3; }
void hinhbinhhanh::nhap()
{
	tugiac::nhap();
}
void hinhbinhhanh::xuat()
{
	tugiac::xuat();
}
void hinhbinhhanh::tinhtien()
{
	tugiac::tinhtien();
}
bool hinhbinhhanh::ishbh()
{
	float epsilon = 0.0001;
	float ab = dinh[0].khoangcach(dinh[1]);
	float bc = dinh[1].khoangcach(dinh[2]);
	float cd = dinh[2].khoangcach(dinh[3]);
	float da = dinh[3].khoangcach(dinh[0]);
	if (abs(ab - cd) <= epsilon && abs(bc - da) <= epsilon)
		return true;
	return false;
}

// ---------------------------------------Class hinh chu nhat----------------------------------------

hinhchunhat::hinhchunhat() : hinhbinhhanh() { loai = 4; }
hinhchunhat::hinhchunhat(const hinhchunhat& cp) : hinhbinhhanh(cp) { loai = 4; }
void hinhchunhat::nhap()
{
	hinhbinhhanh::nhap();
}
void hinhchunhat::xuat()
{
	hinhbinhhanh::xuat();
}
void hinhchunhat::tinhtien()
{
	hinhbinhhanh::tinhtien();
}
bool hinhchunhat::ischunhat() // 2 duong cheo = nhau va cat nhau tai trung diem moi duong
{
	if (!ishbh())
		return false;
	float epsilon = 0.0001;
	float cheo1 = dinh[0].khoangcach(dinh[2]);
	float cheo2 = dinh[1].khoangcach(dinh[4]);
	diem td1 = (dinh[0] + dinh[2]) / 2;
	diem td2 = (dinh[1] + dinh[4]) / 2;
	if (abs(cheo1 - cheo2) <= epsilon && td1 == td2)
		return true;
	return false;
}

// ---------------------------------------Class hinh vuong----------------------------------------

hinhvuong::hinhvuong() : hinhchunhat() { loai = 5; }
hinhvuong::hinhvuong(const hinhvuong& cp) : hinhchunhat(cp) { loai = 5; }
void hinhvuong::nhap()
{
	hinhchunhat::nhap();
}
void hinhvuong::xuat()
{
	hinhchunhat::xuat();
}
void hinhvuong::tinhtien()
{
	hinhchunhat::tinhtien();
}
bool hinhvuong::isvuong()
{
	if (!ischunhat())
		return false;
	float epsilon = 0.0001;
	float ab = dinh[0].khoangcach(dinh[1]);
	float bc = dinh[1].khoangcach(dinh[2]);
	if (abs(ab - bc) <= epsilon)
		return true;
	return false;
}

// ---------------------------------------Class danh sach----------------------------------------

danhsach::danhsach() { list = nullptr; n = 0; }
danhsach::danhsach(const danhsach& copy)
{
	n = copy.n;
	list = new dagiac * [n];
	for (int i = 0; i < n; i++)
	{
		if (copy.list[i]->loai == 1)
		{
			list[i] = new tugiac();
			*list[i] = *copy.list[i];
		}
		else if (copy.list[i]->loai == 2)
		{
			list[i] = new tamgiac();
			*list[i] = *copy.list[i];
		}
		else if (copy.list[i]->loai == 3)
		{
			list[i] = new hinhbinhhanh();
			*list[i] = *copy.list[i];
		}
		else if (copy.list[i]->loai == 4)
		{
			list[i] = new hinhchunhat();
			*list[i] = *copy.list[i];
		}
		else if (copy.list[i]->loai == 5)
		{
			list[i] = new hinhvuong();
			*list[i] = *copy.list[i];
		}
	}
}
danhsach::~danhsach()
{
	for (int i = 0; i < n; i++)
	{
		delete list[i];
	}
	delete[]list;
}
void danhsach::nhapdanhsach()
{
	int choose;
	do {
		cout << "\n>>> Nhap loai da giac <<<\n";
		cout << "1. Tu giac\n";
		cout << "2. Tam giac\n";
		cout << "3. Binh hanh\n";
		cout << "4. Chu nhat\n";
		cout << "5. Vuong\n";
		cout << "6. Quay lai\n";
		cout << "Lua chon: ";
		while (cin >> choose && choose != 1 && choose != 2 && choose != 3 && choose != 4 && choose != 5 && choose != 6)
		{
			cout << "Lua chon ko hop le !!\n";
			cout << "Nhap lai: ";
		}
		system("cls");
		cout << "\n--------------------------------[Chuong trinh quan ly danh sach da giac]--------------------------------\n";
		switch (choose)
		{
		case 1:
			cout << ">> Tu giac\n";
			n++;
			if (list == nullptr)
			{
				list = new dagiac * [n];
				list[n - 1] = new tugiac();
				list[n - 1]->nhap();
				break;
			}
			resize();
			list[n - 1] = new tugiac();
			list[n - 1]->nhap();
			break;
		case 2:
			cout << ">> Tam giac\n";
			n++;
			if (list == nullptr)
			{
				list = new dagiac * [n];
				list[n - 1] = new tamgiac();
				list[n - 1]->nhap();
				break;
			}
			resize();
			list[n - 1] = new tamgiac();
			list[n - 1]->nhap();
			break;
		case 3:
			cout << ">> Binh hanh\n";
			n++;
			if (list == nullptr)
			{
				list = new dagiac * [n];
				list[n - 1] = new hinhbinhhanh();
				list[n - 1]->nhap();
				break;
			}
			resize();
			list[n - 1] = new hinhbinhhanh();
			list[n - 1]->nhap();
			break;
		case 4:
			cout << ">> Chu nhat\n";
			n++;
			if (list == nullptr)
			{
				list = new dagiac * [n];
				list[n - 1] = new hinhchunhat();
				list[n - 1]->nhap();
				break;
			}
			resize();
			list[n - 1] = new hinhchunhat();
			list[n - 1]->nhap();
			break;
		case 5:
			cout << ">> Vuong\n";
			n++;
			if (list == nullptr)
			{
				list = new dagiac * [n];
				list[n - 1] = new hinhvuong();
				list[n - 1]->nhap();
				break;
			}
			resize();
			list[n - 1] = new hinhvuong();
			list[n - 1]->nhap();
			break;
		default:
			break;
		}
	} while (choose != 6);
}
void danhsach::xuatdanhsach()
{
	for (int i = 0; i < n; i++)
	{
		cout << "\n--------------------------------------\n";
		list[i]->xuat();
		cout << "--------------------------------------\n";
	}
}

void danhsach::resize()
{
	dagiac** copy = new dagiac * [n];
	for (int i = 0; i <= n - 2; i++)
	{
		copy[i] = list[i];
	}
	delete[]list;
	list = copy;
}

void danhsach::tinhtien()
{
	for (int i = 0; i < n; i++)
	{
		cout << "Da giac thu " << i + 1 << endl;
		list[i]->tinhtien();
	}
}