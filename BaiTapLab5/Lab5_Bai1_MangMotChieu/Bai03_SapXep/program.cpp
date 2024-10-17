#include <iostream>
#include <conio.h>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

#include "thuvien.h"
#include "menu.h"

void ChayChuongTrinh(DaySo a, int& n);

int main()
{
	DaySo a; int n;
	cout << "Nhap so luong phan tu cua mang: ";
	cin >> n;
	cout << "Nhap vao mang a: \n";
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]= ";
		cin >> a[i];
	}
	ChayChuongTrinh(a, n);
	return 0;
}

void ChayChuongTrinh(DaySo a, int& n)
{
	int chon;
	const int soMenu = 7;
	do
	{
		chon = ChonMenu(soMenu);
		XuLyMenu(chon, a, n);
	} while (chon > 0);
}