void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, QuanLy a, int& n);
void ChayChuongTrinh();

void XuatMenu()
{
	cout << "\n=============CHON CHUONG TRINH=============";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap danh sach thiet bi";
	cout << "\n2. Xuat danh sach thiet bi";
	cout << "\n3. Tinh tong gia tien cua tat ca thiet bi co nam nhap tu ban phim";
	cout << "\n4. Tim vi tri thiet bi theo ma thiet bi";
	cout << "\n5. Sap xep danh sach thiet bi giam theo nam nhap, tang theo ten";
	cout << "\n6. Xoa tat ca thiet bi co nam nhap tu ban phim";
	cout << "\n7. Chen thiet bi tb sau thiet bi cho truoc";
	cout << "\n8. In bang thong ke so thiet bi thao nam nhap";
	cout << "\n===========================================";
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
void XuLyMenu(int menu, QuanLy a, int &n)
{
	int kqua, ma;
	string name;
	switch (menu)
	{
	case 1:
		cout << "\n1. Nhap danh sach thiet bi";
		NhapDSTB(a, n);
		break;
	case 2:
		cout << "\n2. Xuat danh sach thiet bi";
		XuatDSTB(a, n);
		break;
	case 3:
		cout << "\n3. Tinh tong gia tien cua tat ca thiet bi co nam nhap tu ban phim";
		cout << "\n Hay nhap nam ma ban muon tinh tong: ";
		cin >> name;
		kqua = TinhTongGiaTienCacTB(a, n, name);
		cout << "\nNam " << name << " co tong so tien la: " << kqua;
		break;
	case 4:
		cout << "\n4. Tim vi tri thiet bi theo ma thiet bi";
		XuatDSTB(a, n);
		cout << "\nHay nhap ma so thiet bi ban muon tim :";
		cin >> ma;
		TimVaXuatThietBiTheoMS(a, n, ma);
		break;
	case 5:
		cout << "\n5. Sap xep danh sach thiet bi giam theo nam nhap, tang theo ten";
		cout << "\n Danh sach truoc khi sap xep";
		XuatDSTB(a, n);
		SapXepGiamTheoNam_TangTheoTenTB(a, n);
		cout << "\n Danh sach sau khi duoc sap xep";
		XuatDSTB(a, n);
		break;
	case 6:
		cout << "\n6. Xoa tat ca thiet bi co nam nhap tu ban phim";
		XuatDSTB(a, n);
		cout << "\n Hay nhap so nam cua thiet bi ma ban muon xoa: ";
		cin >> name;
		XoaThietBiTheoNam(a,n,name);
		break;
	case 7:
		cout << "\n7. Chen thiet bi tb sau thiet bi cho truoc";
		
		break;
	case 8:
		cout << "\n8. In bang thong ke so thiet bi theo nam nhap";
		XuatDSTB(a, n);
		cout << "\n Hay nhap am ban muon thong ke: ";
		cin >> name;
		XuatBangThongKeTheoNam(a, n, name);
		break;
	default:
		cout << "\nThoat khoi chuong trinh";
		break;
	}
	if (menu > 0)
	{
		cout << endl << endl << " Nhan 1 phim bat ki de tiep tuc : ";
		_getch();
	}
}
void ChayChuongTrinh()
{
	int menu, n, soMenu = 8;
	QuanLy a;
	cout << "\nHay nhap so thiet bi ban muon quan ly: ";
	cin >> n;
	do
	{
		system("cls");
		XuatMenu();
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
}