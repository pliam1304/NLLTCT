#include <iostream>
#include <conio.h>
using namespace std;
int main()
#define     MAX     100
#define     KHOA    "Cong nghe thong tin"
#define     PI      3.1415926
#define     TAB     '\t'
{
    cout << endl << "Gia tri hang so MAX    la:"<< MAX;
    cout << endl << "Gia tri hang so KHOA   la:"<< KHOA;
    cout << endl << "Gia tri hang so PI     la:"<< PI;
    cout << endl << "Gia tri hang so TAB    la:"<< TAB;
    float r;
    cout << endl << "Nhap ban kinh hinh tron";
    cin >> r;
    float chuvi , dientich;
    chuvi= 2*PI * r;
    dientich = PI * r * r;
    cout << endl << " Ban kinh : R = " << r
        << ", Chu vi : C = " << chuvi
        << ", Dien tich : S " << dientich;
    _getch();
    return 1;
}