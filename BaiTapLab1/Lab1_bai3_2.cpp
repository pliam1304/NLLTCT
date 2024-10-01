#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
int main()
{
    cout << setiosflags(ios::left)
        << setw(10) << "MSSV"
        << setw(25) << "Ho va ten"
        << setw(10) << "Lop"
        << setw(10) << "Diem TB"
        << setw(10) << "Diem TL"
        << endl;
    cout << setiosflags(ios::left)
        << setw(10) << "1410234"
        << setw(25) << "Nguyen Quang Tam"
        << setw(10) << "CTK38CD"
        << setw(10) << "7.50"
        << setw(10) << setprecision(2) << 5.75
        << endl;
     cout << setiosflags(ios::left)
        << setw(10) << "1413212"
        << setw(25) << "Nguyen Phuc Hung"
        << setw(10) << "CTK37CD"
        << setw(10) << "8.50"
        << setw(10) << setprecision(2) << 4.32
        << endl;
     cout << setiosflags(ios::left)
        << setw(10) << "143213"
        << setw(25) << "Huynh Van Lan"
        << setw(10) << "CTK20CD"
        << setw(10) << "5.50"
        << setw(10) << setprecision(2) << 9.43
        << endl;
     cout << setiosflags(ios::left)
        << setw(10) << "143982"
        << setw(25) << "Ton That Nhat"
        << setw(10) << "CTK45D"
        << setw(10) << "9.50"
        << setw(10) << setprecision(2) << 4.543
        << endl;
     cout << setiosflags(ios::left)
        << setw(10) << "1243234"
        << setw(25) << "Nguyen Phuoc Tuan"
        << setw(10) << "CTK23CD"
        << setw(10) << "6,9"
        << setw(10) << setprecision(2) << 8.23
        << endl;
    _getch();
    return 1;
}