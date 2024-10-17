#define MAX 100
#define TAB '\t'

typedef int DaySo[MAX];

void NhapMang(DaySo a, int n);
void XuatMang(DaySo a, int n);
void HoanVi(int& a, int& b);
void SoDuongTangDan(DaySo a, int n);
void So0CuoiMang(DaySo a, int n);
void so0_AmGiam_DuongTang(DaySo a, int n);

void NhapMang(DaySo a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

void XuatMang(DaySo a, int n)
{
	cout << endl << "Cac phan tu cua mang : " << endl;

	for (int i = 0; i < n; i++)
	{
		cout << a[i] << TAB;
	}
	cout << endl << endl;
}

void HoanVi(int& a, int& b)
{
	int tam = a;
	a = b;
	b = tam;
}

void SoDuongTangDan(DaySo a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > 0 && a[j] > 0 && a[i] > a[j])
				HoanVi(a[i], a[j]);
		}
	}
}

void So0CuoiMang(DaySo a, int n)
{
	int i, j, dk;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			dk = (a[i] == 0 && a[j] != 0) ||
				(a[i] != 0 && a[j] != 0 && a[i] > a[j]);

			if (dk)
				HoanVi(a[i], a[j]);
		}
	}
}

void so0_AmGiam_DuongTang(DaySo a, int n)
{
	int i, j, dk;
	for (i = n - 1; i > 0; i--)
	{
		for (j = i - 1; j >= 0; j--)
		{
			dk = (a[i] < 0 && a[j] < 0 && a[i] > a[j]) ||
				(a[i] == 0 && a[j] != 0) ||
				(a[i] < 0 && a[j] > 0) ||
				(a[i] > 0 && a[j] > 0 && a[i] < a[j]);

			if (dk)
				HoanVi(a[i], a[j]);
		}
	}
}