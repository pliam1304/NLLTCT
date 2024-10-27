void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, MaTran a, int& m, int& n);
void ChayChuongTrinh(MaTran a, int& m, int& n);

void XuatMenu()
{
	cout << endl << "======== CHON CHUC NANG ========";
	cout << endl << "1. Nhap gia tri tu ban phim";
	cout << endl << "2. Tinh gia tri ngau nhien";
	cout << endl << "3. Xuat mang";
	cout << endl << "4. Tinh tong cac phan tu hang i";
	cout << endl << "5. Tim tich cac pham tu cot j";
	cout << endl << "6. Tim phan tu MAX hang MIN cot";
	cout << endl << "7. Xuat theo vung duong cheo"; 
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
		cout << endl << " Nhap vao 1 so de chon menu : ";
		cin >> stt;
	} while (stt < 0 || stt > soMenu);
	return stt;
}
void XuLyMenu(int menu, MaTran a, int& m, int& n)
{
	int vt, Kqua;
	switch (menu)
	{
	case 0:
		cout << endl << "Thoat khoi chuong trinh";
		break;
	case 1:
		cout << endl << "Nhap so dong : ";
		cin >> m;
		cout << endl << "Nhap so cot : ";
		cin >> n;
		NhapMang(a, m, n);
		break;
	case 2:
		cout << endl << "Nhap so dong : ";
		cin >> m;
		cout << endl << "Nhap so cot : ";
		cin >> n;
		NhapTuDong(a, m, n);
		break;
	case 3:
		XuatMang(a, m, n);
		break;
	case 4:
		do
		{
			cout << endl << " Nhap chi so hang";
			cin >> vt;
		} while (vt < 0 || vt > m);
		Kqua = TongHang(a, n, vt);
		cout << endl << "Tong cac phan tu hang " 
			<< vt << " la : " << Kqua;
		cout << endl << "Hay xem lai bang de kiem tra ";
		XuatMang(a, m, n);
		break;
	case 5:
		do
		{
			cout << endl << "Nhap chi so cot : ";
			cin >> vt;
		} while (vt < 0 || vt >= n);
		Kqua = TichCot(a, m, vt);
		cout << endl << " Tich cac phan tu cot "
			<< vt << " la : " << Kqua;
		cout << endl << "Hay xem lai bang de kiem tra ";
		XuatMang(a, m, n);
		break;
	case 6:
		MaxHangMinCot(a, m, m);
		break;
	case 7:
		XuatVungDuongCheo(a, m, n);
		break;
	}
	if (menu > 0)
	{
		cout << endl << endl << " Nhan 1 phim bat ki de tiep tuc : ";
		_getch();
	}
}
void ChayChuongTrinh(MaTran a, int& m, int& n)
{
	int soMenu = 7, menu;
	do
	{
		XuatMenu();
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, m, n);
	} while (menu > 0);
}