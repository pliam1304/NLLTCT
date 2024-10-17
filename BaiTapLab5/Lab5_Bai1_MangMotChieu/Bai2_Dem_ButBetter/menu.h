void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int& n);
void ChayChuongTrinh(DaySo a, int& n);

void XuatMenu()
{
    cout << endl << "======== CHON CHUC NANG ========";
    cout << endl << "1. So luong so le trong mang";
    cout << endl << "2. Dem va xuat cac so chia het cho 3 va khong chia het cho 4";
    cout << endl << "3. Dem so lan xuat hien cua phan tu x tai vi tri le";
    cout << endl << "4. Dem so luong so co 3 chu so";
    cout << endl << "5. Dem so nam ngoai min ... max";
    cout << endl << "6. Dem so luong so chinh phuong";
    cout << endl << "7. Dem va xuat cac phan tu xuat hien it nhat k lan";
    cout << endl << "8. Dem so lan xuat hien cua phan tu x ke tu vi tri vt cho truoc";
    cout << endl << "0. Thoat khoi chuong trinh";
    cout << endl << "================================";
}

int ChonMenu(int soMenu)
{
    int stt;
    do
    {
        system("cls");
        XuatMenu();
        cout << endl << "Nhap 1 so de chon menu: ";
        cin >> stt;
    } while (stt < 0 || stt > soMenu);

    return stt;
}

void XuLyMenu(int menu, DaySo a, int& n)
{
    int x, min, max, vt;
    switch (menu)
    {
    case 1:
        cout << "So luong so le trong mang la: " << DemSoLe(a, n);
        break;
    case 2:
        DemChia3KChia4(a, n);
        break;
    case 3:
        cout << "Nhap vao x: ";
        cin >> x;
        cout << "So lan xuat hien cua x tai vi tri le la: " << XViTriLe(a, n, x);
        break;
    case 4:
        cout << "So luong so co 3 chu so la: " << DemBaChuSo(a, n);
        break;
    case 5:
        cout << "Nhap vao min: ";
        cin >> min;
        cout << "\nNhap vao max: ";
        cin >> max;
        cout << "So luong phan tu nam ngoai min...max la: " << DemNgoaiMin_Max(a, n, min, max);
        break;
    case 6:
        cout << "So luong so chinh phuong la: " << DemChinhPhuong(a, n);
        break;
    case 7:
        cout << "Nhap vao k: ";
        cin >> x;
        DemPTuXuatHienK(a, n, x);
        break;
    case 8:
        cout << "Nhap vao x: ";
        cin >> x;
        cout << "Nhap vao vi tri: ";
        cin >> vt;
        cout << "So lan xuat hien cua x ke tu vi tri " << vt << " la: " << SoLanXuatHien_X(a, n, x, vt);
        break;
    default:
        cout << endl << "Thoat khoi chuong trinh";
        break;
    }

    if (menu > 0)
    {
        cout << endl << endl << "Nhan 1 phim bat ky de tiep tuc";
        _getch();
    }
}

void ChayChuongTrinh(DaySo a, int& n)
{
    int chon;
    do
    {
        chon = ChonMenu(8);
        XuLyMenu(chon, a, n);
    } while (chon > 0);
}