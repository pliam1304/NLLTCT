void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, MaTranVuong a, int n);
void ChayChuongTrinh(MaTranVuong a, int& n);

void XuatMenu()
{
	cout << "\n=============CHON CHUONG TRINH=============";
	cout << "\n0. Ket thuc chuong trinh";
	cout << "\n1. Nhap vao 1 ma tran vuong ";
	cout << "\n2. Xuat ma tran da nhap";
	cout << "\n3. Tong cac so duong nho nhat trong tung hang i";
	cout << "\n4. Tong cac so am lon nhat trong tung cot j";
	cout << "\n5. Lay tong cac so duong nho nhat tru cho tong cac so am lon nhat";
}
int ChonMenu(int soMenu)
{
	int stt;
	do
	{
		cout << "\nNhap chuc mang ban muon chon : ";
		cin >> stt;
	} while (stt < 0 || stt > soMenu);
	return stt;
}
void XuLyMenu(int menu, MaTranVuong a, int n)
{
	int kqua;
	switch (menu)
	{
	case 0:
		cout << "\nKet thuc chuong trinh\n";
		break;
	case 1:
		cout << "\nNhap vao mot ma tran vuong\n";
		NhapMaTran(a, n);
		break;
	case 2:
		cout << "\nXuat ma tran cua ban \n";
		XuatMaTran(a, n);
		break;
	case 3:
		cout << "\nTong cac so duong nho nhat trong tung hang i\n";
		kqua = TongCacSoDuongMin(a, n);
		cout << kqua;
		cout << "\n Hay kiem tra lai theo ma tran\n";
		XuatMaTran(a, n);
		break;
	case 4:
		cout << "\nTong cac so am lon nhat trong tung cot j\n";
		kqua = TongCacSoAmMax(a, n);
		cout << kqua;
		cout << "\n Hay kiem tra lai theo ma tran\n";
		XuatMaTran(a, n);
		break;
	case 5:
		cout << "\nLay tong cac so duong nho nhat tru cho tong cac so am lon nhat\n";
		kqua = TongCacSoDuongMin(a, n) - TongCacSoAmMax(a, n);
		cout << kqua;
		cout << "\n Hay kiem tra lai theo ma tran\n";
		XuatMaTran(a, n);
	}
	if (menu > 0)
	{
		cout << endl << endl << " Nhan 1 phim bat ki de tiep tuc : ";
		_getch();
	}
}
void ChayChuongTrinh(MaTranVuong a, int& n)
{
	cout << "\nNhap vao gioi han cua ma tran vuong cua ban : ";
	cin >> n;
	int menu, soMenu = 5;
	do
	{
		system("cls");
		XuatMenu();
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
}