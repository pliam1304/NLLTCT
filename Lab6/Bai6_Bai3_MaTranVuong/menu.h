void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, MaTran a, int& n);
void XuLyMenu(MaTran a, int& n);
void ChayChuongTrinh(MaTran a, int& n);

void XuatMenu()
{
	cout << endl << "========CHON CHUC NANG=========";
	cout << endl << "1. Nhap gia tri tu ban phim";
	cout << endl << "2. Tinh gia tri ngau nhien";
	cout << endl << "3. Xuat mang";
	cout << endl << "4. Tinh T = tong tren DC chinh";
	cout << endl << "5. Tinh D = tich duoi DC phu";
	cout << endl << "6. Tinh P = tich SNT thuoc DC phu";
	cout << endl << "7. Tinh S = T + D - P";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "===============================";
}

int ChonMenu(int soMenu)
{
	int stt;
	do {
		system("cls");
		XuatMenu();
		cout << endl << "Nhap mot so de chon menu: ";
		cin >> stt;
	} while (stt < 0 || stt > soMenu);
	return stt;
}
void XuLyMenu(int menu, MaTran a, int& n)
{
	long ketQua;
	switch (menu)
	{
	case 1:
		cout << "Nhap cap cua MT: ";
		cin >> n;
		NhapMang(a, n);
		break;
	case 2:
		cout << "Nhap cap cua MT: ";
		cin >> n;
		NhapTuDong(a, n);
		break;
	case 3:
		XuatMang(a, n);
		break;
	case 4:
		ketQua = TongTren(a, n);
		cout << endl << "T = " << ketQua;
		break;
	case 5:
		ketQua = TichDuoi(a, n);
		cout << endl << "D = " << ketQua;
		break;
	case 6:
		ketQua = TichPhuNT(a, n);
		cout << endl << "P = " << ketQua;
		break;
	case 7:
		ketQua = TinhS(a, n);
		cout << endl << "S = " << ketQua;
		break;
	default:
		cout << endl << "Thoat khoi chuong trinh";
		break;
	}
	if (menu > 0)
	{
		cout << endl << "Nhan 1 phim bat ky de tiep tuc";
		_getch();
	}
}
void ChayChuongTrinh(MaTran a, int& n)
{
	int menu, soMenu = 7;
	do {
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
}
