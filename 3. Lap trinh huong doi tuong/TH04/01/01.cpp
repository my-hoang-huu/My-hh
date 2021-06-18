// 01.
#include "thuvien.h"

int main()
{
    cout << "\n-----------------------------[Chuong trinh quan ly sach]-----------------------------\n";
    thuvien tv;
    int choose;
    do {
        cout << ">>> Nhap lua chon <<<\n";
        cout << "1. Nhap sach\n";
        cout << "2. Xuat sach\n";
        cout << "3. Thoat chuong trinh\n";
        cout << "Lua chon: ";
        while (cin >> choose && choose != 1 && choose != 2 && choose != 3)
        {
            cout << "\nLua chon vua nhap ko hop le!!\n";
            cout << "Nhap lai: ";
        }
        system("cls");
        cout << "\n-----------------------------[Chuong trinh quan ly sach]-----------------------------\n";
        cin.ignore();
        switch (choose)
        {
        case 1:
            tv.nhapsach();
            break;
        case 2:
            cout << "\n================================[Danh sach ]================================\n";
            tv.xuatsach();
            break;
        default:
            break;
        }
    } while (choose != 3);

    cout << "\n Have a good day !!\n";
    cout << endl;
    system("pause");
    return 1;
}