#define		SIZE	100
#define		TAB		'\t'

typedef float MaTranVuong[SIZE][SIZE];

void NhapMaTran(MaTranVuong a, int n);
void XuatMaTran(MaTranVuong a, int n);
int TongCacSoDuongMin(MaTranVuong a, int n);
int TongCacSoAmMax(MaTranVuong a, int n);

void NhapMaTran(MaTranVuong a, int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap vao gia tri a[" << i << "," << j << "] ma ban muon : ";
			cin >> a[i][j];
		}
}
void XuatMaTran(MaTranVuong a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "[" << a[i][j] << "]" << TAB;
		}
		cout << endl;
	}
}
int TongCacSoDuongMin(MaTranVuong a, int n)
{
	int sum = 0, min;
	for (int i = 0; i < n; i++) 
	{
		min = -1;
		for (int j = 0; j < n; j++) 
		{
			if (a[i][j] > 0 && min == -1)
				min = a[i][j];
			if (a[i][j] < min && a[i][j] > 0) 
			{
				min = a[i][j];
			}
		}
		if (min > 0)
			sum += min;
	}
	return sum;
}
int TongCacSoAmMax(MaTranVuong a, int n)
{
	int sum = 0, max;
	for (int i = 0; i < n; i++)
	{
		max = 0;
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] < 0 && max == 0)
				max = a[i][j];
			if (a[i][j] > max && a[i][j] < 0)
				max = a[i][j];
		}
		if (max < 0)
			sum += max;
	}
	return sum;
}