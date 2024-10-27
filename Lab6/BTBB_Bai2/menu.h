void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, MaTran a, int n);
void ChayChuongTrinh(MaTran a, int& n);

void XuatMenu()
{
	cout << "\n================= HAY CHON CHUC NANG =================";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Nhap ma tran xoan oc";
	cout << "\n2. Xuat ma tran dang xoan oc";
	cout << "\n======================================================";
}
int ChonMenu(int soMenu)
{
	int stt;
	do
	{
		cout << "\nHay nhap chuc nang ban muon chon";
		cin >> stt;
	} while (stt < 0 || stt > soMenu);
	return stt;
}
void XuLyMenu(int menu, MaTran a, int n)
{
	switch (menu)
	{
	case 0:
		cout << "Thoat khoi chuong trinh";
		break;
	case 1:
		cout << "\n1. Nhap ma tran xoan oc";
		XuLyMaTranXoanOc(a, n);
		break;
	case 2:
		cout << "\n2. Xuat ma tran xoan oc\n";
		XuatMaTranXoanOc(a, n);
		break;
	}
	if (menu > 0)
	{
		cout << endl << endl << "\nNhan 1 phim bat ki de tiep tuc : ";
		_getch();
	}
}
void ChayChuongTrinh(MaTran a, int& n)
{
	cout << "\nNhap vao gioi han cua ma tran vuong cua ban : ";
	cin >> n;
	int menu, soMenu = 2;
	do
	{
		system("cls");
		XuatMenu();
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
}