#pragma once
void PrintMenu() {
	cout << endl << "================ CHON CHUC NANG ==================";
	cout << endl << "1. Xuat ra so Fib thu n";
	cout << endl << "2. Liet ke cac so Fib nho hon hoac bang n";
	cout << endl << "3. Liet ke n so Fib dau tien";
	cout << endl << "==================================================";
}

unsigned int ChooseOption() {

	unsigned int option;

	cout << endl << "Nhap chuc nang muon chon: ";
	cin >> option;

	while (option > 3 || option < 0) {
		cout << "Vui long chon lai! ";
		cin >> option;
	}

	return option;

}

void Process(unsigned int option, unsigned int n) {

	switch (option) {
	case 1:
		cout << Fib(n);
		break;

	case 2:
		FibSmallerThanN(n);
		break;

	case 3:
		FirstNFib(n);
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