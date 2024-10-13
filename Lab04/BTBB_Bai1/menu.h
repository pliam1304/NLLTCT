void PrintMenu() {
	cout << endl << "================================= CHON CHUC NANG ================================";
	cout << endl << "1. Xuat cac so tu 1 den n";
	cout << endl << "2. Dem so luong cac so chua het cho 3 nhung khong chia het cho 4";
	cout << endl << "3. Dem so luong chu so cua n";
	cout << endl << "4. Dao nguoc so n";
	cout << endl << "5. Tinh tong cac chu so trong n";
	cout << endl << "6. Cho biet chu so dau tien trong n";
	cout << endl << "7. Doi so n sang he nhi phan (under construction)";
	cout << endl << "8. Kiem tra xem n co phai so hoan hao khong";
	cout << endl << "9. Xuat tat ca cac so hoan chinh trong pham vi 1 den n";
	cout << endl << "10.Tim so nguyen m lon nhat sao cho tong 1 + 2 + 3 + ... + m be hon hoac bang n";
	cout << endl << "0. Thoat chuong trinh";
	cout << endl << "=================================================================================";
}

unsigned int ChooseOption() {

	unsigned int option;

	cout << endl << "Nhap chuc nang muon chon: ";
	cin >> option;

	while (option > 10 || option < 0) {
		cout << "Vui long chon lai! ";
		cin >> option;
	}
	
	return option;

}

void Process(unsigned int option, unsigned int n) {

	switch (option) {
		case 1:
			XuatCacSo(n);
			break;

		case 2:
			cout << SoLuongChia3(n);
			break;

		case 3:
			cout << SoLuongChuSo(n);
			break;

		case 4:
			cout << DaoNguocSo(n);
			break;
		
		case 5:
			cout << TongCacChuSo(n);
			break;

		case 6:
			cout << ChuSoDauTien(n);
			break;

		case 7:
			cout << ChuyenDoiNhiPhan(n);
			break;

		case 8:
			if (SoHoanChinh(n)) {
				cout << n << " la so hoan chinh";
			}
			else {
				cout << n << " khong la so hoan chinh";
			}
			break;
		
		case 9:
			DaySoHoanChinh(n);

		default:
			break;

	}
}

void run() {
	unsigned int option = 0;
	int n = 0;
	for (;;) {
		system("cls");
		PrintMenu();
		option = ChooseOption();

		if (option != 0) {
			cout << "Nhap vao so n: ";
			cin >> n;
		}
		else {
			break;
		}

		Process(option, n);

		_getch();
	}

}