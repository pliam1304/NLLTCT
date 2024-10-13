#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
#include "thuvien.h"
#include "menu.h")
void ChayChuongTrinh();
int main()
{
	ChayChuongTrinh();
	_getch();
	return 0;
}
void ChayChuongTrinh()
{
	int deg, menu, soMenu = 3;
	do
	{
		menu = ChonMenu(soMenu);
		cout << " Nhap vao so can nhap : ";
		cin >> deg;
		XuLyMenu(menu, deg);
	} while (menu > 0);
	cout << endl << " Cam on da su dung chuong trinh";
	_getch();
}