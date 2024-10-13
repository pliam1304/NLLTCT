#pragma once
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, unsigned int n);
void ChayChuongTrinh(unsigned int n);

void XuatMenu() {
    cout << endl << "======== CHON CHUC NANG ========";
    cout << endl << "1. Tinh tong R";
    cout << endl << "2. Tinh tong S";
    cout << endl << "3. Tinh tong T";
    cout << endl << "0. Thoat khoi chuong trinh";
    cout << endl << "================================";
}

int ChonMenu(int soMenu) {
    int chon;
    cout << "Nhap chuc nang muon su dung: ";
    cin >> chon;

    return chon;

}
void XuLyMenu(int menu, unsigned int n) {
    double sum;

    switch (menu) {
    case 1:
        sum = TinhTongR(n);
        cout << endl << "R = " << sum;
        break;

    case 2:
        sum = TinhTongS(n);
        cout << endl << "S = " << sum;
        break;

    case 3:
        sum = TinhTongT(n);
        cout << endl << "T = " << sum;
        break;

    default:
        cout << "Thoat khoi chuong trinh";
        break;
    }

    if (menu > 0) {
        cout << endl << "Nhan 1 phim bat ky de tiep tuc";

    }
}

void ChayChuongTrinh(unsigned int n) {
    int menu, soMenu = 3;

    do {
        system("cls");
        XuatMenu();
        menu = ChonMenu(soMenu);
        XuLyMenu(menu, n);

        _getch();
    } while (menu > 0);
}