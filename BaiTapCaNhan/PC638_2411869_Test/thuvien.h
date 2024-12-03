#define		MAX		100

struct QuanLyThietBi
{
	unsigned int MaTB;
	string TenTB;
	string Nam;
	string TGBaoHanh;
	int GiaTien;
};

typedef		QuanLyThietBi		QuanLy[MAX];

void NhapMotThietBi(QuanLyThietBi& TB);
void NhapDSTB(QuanLy a, int n);
void XuatDongTieuDe();
void XuatDongKeNgang();
void XuatMotThietBi(QuanLyThietBi TB);
void XuatDSTB(QuanLy a, int n);
int TinhTongGiaTienCacTB(QuanLy a, int n, int name);
void TimVaXuatThietBiTheoMS(QuanLy a, int n, int name);
void HoanVi(QuanLyThietBi& a, QuanLyThietBi& b);
void SapXepGiamTheoNam_TangTheoTenTB(QuanLy a, int n);
void XoaThietBiTheoNam(QuanLy a, int n, int name);
void XuatBangThongKeTheoNam(QuanLy a, int n, string name);


void NhapMotThietBi(QuanLyThietBi& TB)
{
	cout << "\nNhap ma thiet bi: ";
	cin >> TB.MaTB;
	cout << "\nNhap vao ten thiet bi: ";
	cin.ignore(1);
	getline(cin, TB.TenTB);
	cout << "\nNhap vao nam nhap thiet bi: ";
	getline(cin, TB.Nam);
	cout << "\nNhap vao thoi gian bao hanh cua thiet bi: ";
	getline(cin, TB.TGBaoHanh);
	cout << "\nNhap vao gia tien cua thiet bi: ";
	cin >> TB.GiaTien;
}
void NhapDSTB(QuanLy a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap thiet bi thu " << i + 1;
		NhapMotThietBi(a[i]);
	}
}
void XuatDongTieuDe()
{
	cout << endl << setiosflags(ios::left)
		<< setw(15) << "Ma thiet bi"
		<< setw(20) << "Ten thiet bi"
		<< setw(5) << "Nam"
		<< setw(20) << "Thoi gan bao hanh"
		<< setw(30) << "Gia tien";
}

void XuatDongKeNgang()
{
	cout << endl << setiosflags(ios::left)
		<< setw(15) << "==============="
		<< setw(20) << "==================="
		<< setw(5) << "====="
		<< setw(20) << "==================="
		<< setw(30) << "===============================";
}

void XuatMotThietBi(QuanLyThietBi TB)
{
	cout << endl << setiosflags(ios::left)
		<< setw(15) << TB.MaTB
		<< setw(20) << TB.TenTB
		<< setw(5) << TB.Nam
		<< setw(20) << TB.TGBaoHanh
		<< setw(30) << TB.GiaTien;
}

void XuatDSTB(QuanLy a, int n)
{
	XuatDongTieuDe();
	XuatDongKeNgang();
	for (int i = 0; i < n; i++)
		XuatMotThietBi(a[i]);
	XuatDongKeNgang();
}
int TinhTongGiaTienCacTB(QuanLy a, int n, string name)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
		if (a[i].Nam.compare(name) == 0)
			sum = sum + a[i].GiaTien;
	return sum;
}

void TimVaXuatThietBiTheoMS(QuanLy a, int n, int name)
{
	for (int i = 0; i < n; i++)
		if (a[i].MaTB == name)
			XuatMotThietBi(a[i]);
}

void HoanVi(QuanLyThietBi& a, QuanLyThietBi& b)
{
	QuanLyThietBi c = a;
	a = b;
	b = c;
}

void SapXepGiamTheoNam_TangTheoTenTB(QuanLy a, int n)
{
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if ((a[i].Nam < a[j].Nam) || (a[i].Nam == a[j].Nam && a[i].TenTB > a[j].TenTB))
				HoanVi(a[i], a[j]);
}

void XoaThietBiTheoNam(QuanLy a, int n, string name)
{
	int num = 0;
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].Nam.compare(name) == 0)
			{
				num++;
				a[i] = a[j];
			}
	cout << "\n Danh sach sau khi duoc xoa: ";
	XuatDSTB(a, n - num);
}

void XuatBangThongKeTheoNam(QuanLy a, int n, string name)
{
	for (int i = 0; i < n; i++)
		if (a[i].Nam.compare(name) == 0)
			XuatMotThietBi(a[i]);
}