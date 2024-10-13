#pragma once
void PrintMenu() {
	cout << endl << "================================= CHON CHUC NANG ================================";
	cout << endl << "1. Kiem tra n co phai so nguyen to khong";
	cout << endl << "2. Xuat ra cac so ngto tu 1 toi n";
	cout << endl << "3. Dem so luong so nguyen to trong khoang [1...n]";
	cout << endl << "4. Tong cac uoc so nguyen to cua n";
	cout << endl << "5. Phan tich n thanh tich cac thua so nguyen to";
	cout << endl << "0. Thoat chuong trinh";
	cout << endl << "=================================================================================";
}

unsigned int ChooseOption() {

	unsigned int option;

	cout << endl << "Nhap chuc nang muon chon: ";
	cin >> option;

	while (option > 5 || option < 0) {
		cout << "Vui long chon lai! ";
		cin >> option;
	}

	return option;

}

void Process(unsigned int option, unsigned int n) {

	switch (option) {
	case 1:
		if (KTraNgTo(n)) {
			cout << n << " la so nguyen to";
			break;
		}
		cout << n << " khong la so nguyen to";

		break;

	case 2:
		XuatNgTo(n);
		break;

	case 3:
		cout << SoLuongNgTo(n);
		break;

	case 4:
		cout << TongUocNgTo(n);
		break;

	case 5:
		PhanTichThuaSoNgTo(n);
		break;

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