#define MAX 1000

typedef int DaySo[MAX];

int DemSoLe(DaySo a, int n);
void DemChia3KChia4(DaySo a, int n);
int XViTriLe(DaySo a, int n, int x);
int DemBaChuSo(DaySo a, int n);
int DemNgoaiMin_Max(DaySo a, int n, int min, int max);
int DemChinhPhuong(DaySo a, int n);
void DemPTuXuatHienK(DaySo a, int n, int k);
int CheckX(DaySo a, int n, int x);
int DemX(DaySo a, int n, int x);
int SoLanXuatHien_X(DaySo a, int n, int x, int vt);

int DemSoLe(DaySo a, int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 != 0)
			count++;
	return count;
}
void DemChia3KChia4(DaySo a, int n)
{
	int count = 0;
	cout << "Cac so thoa dieu kien la: ";
	for (int i = 0; i < n; i++)
		if (a[i] % 3 == 0 && a[i] % 4 != 0)
		{
			count++;
			cout << a[i];
		}
	cout << "\nCo tong cong " << count << " so thoa dieu kien";
}
int XViTriLe(DaySo a, int n, int x)
{
	int count = 0;
	for (int i = 1; i < n; i += 2)
		if (a[i] == x)
			count++;
	return count;
}
int DemBaChuSo(DaySo a, int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 99 && a[i] < 1000)
			count++;
	return count;
}
int DemNgoaiMin_Max(DaySo a, int n, int min, int max)
{
	int count = 0;
	for (int i = 0; i < n; i++)
		if (a[i] < min || a[i] > max)
			count++;
	return count;
}
int DemChinhPhuong(DaySo a, int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
		if (sqrt(a[i]) - (int)sqrt(a[i] == 0))
			count++;
	return count;
}
int DemX(DaySo a, int n, int x)
{
	int count = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			count++;
	return count;
}
int CheckX(DaySo a, int n, int x)
{
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			return 0;
	return 1;
}
void DemPTuXuatHienK(DaySo a, int n, int k)
{
	DaySo xuatHien; int ht = 0;
	for (int i = 0; i < n; i++)
		if (DemX(a, n, a[i]) >= k && CheckX(xuatHien, n, a[i]))
		{
			xuatHien[ht] = a[i];
			ht++;
			cout << a[i] << " xuat hien " << DemX(a, n, a[i]) << " lan\n";
		}
}
int SoLanXuatHien_X(DaySo a, int n, int x, int vt)
{
	if (vt >= n)
		return 0;

	int dem = 0;
	for (int i = vt; i < n; i++)
		if (a[i] == x)
			dem++;

	return dem;
}