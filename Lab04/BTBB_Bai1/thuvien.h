#define TAB "\t"
#include<math.h>

void XuatCacSo(unsigned int n) 
{
	int count = 0;

	for (int i = 1; i <= n; i++) 
	{
		cout << i << TAB;

		count++;

		if (count == 10) 
		{
			cout << endl;
			count = 0;
		}
	}
}

int SoLuongChia3(unsigned int n) 
{
	int count = 0;

	if (n < 3) 
	{
		return count;

	}
	for (int i = 0; i <= n; i += 3) 
	{
		if (i % 4 != 0) 
		{
			count++;
		}
	}

	return count;
}

int SoLuongChuSo(unsigned int n) {
	int count = 0;

	do {
		count++;
		n /= 10;
	} while (n / 10 != 0 || n % 10 != 0);

	return count;
}

unsigned int DaoNguocSo(unsigned int n) {
	unsigned int result = 0;

	while (n / 10 != 0 || n % 10 != 0) {
		result = (result * 10) + (n % 10);
		n /= 10;
	}

	return result;
}

int TongCacChuSo(unsigned int n) {
	int result = 0;

	do {

		result += n % 10;
		n /= 10;

	} while (n / 10 != 0 || n % 10 != 0);

	return result;
}

unsigned int ChuSoDauTien(unsigned int n) 
{
	return n / pow(10, SoLuongChuSo(n) - 1);
}

unsigned int ChuyenDoiNhiPhan(unsigned int n) 
{
	unsigned int result = 0;
	return result;
}

bool SoHoanChinh(unsigned int n) 
{
	int tong = 0;

	for (int i = 1; i <= n / 2; i++) 
	{
		if (n % i == 0) 
		{
			tong += i;
		}
	}

	tong += n;

	if (tong == n * 2) 
	{
		return 1;
	}

	return 0;
}

void DaySoHoanChinh(unsigned int n) 
{
	for (int i = 6; i <= n; i++) 
	{
		if (SoHoanChinh(i)) 
		{
			cout << i << TAB;
		}
	}
}
unsigned int TimSoM(unsigned int n)
{
	unsigned int result = 0;

	if (n <= 2 && n > 0)
	{
		return 1;
	}
	for (int i = 1; i < n; i++)
	{
		if (result + i < n)
		{
			result += i;
		}
		else if (result + i == n)
		{
			return i;
		}
		else {
			return i - 1;
		}
	}

	return 0;
}