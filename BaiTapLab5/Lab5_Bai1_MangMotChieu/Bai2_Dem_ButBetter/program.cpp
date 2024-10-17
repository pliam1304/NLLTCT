#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;
#include "thuvien.h"
#include "menu.h"

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
}