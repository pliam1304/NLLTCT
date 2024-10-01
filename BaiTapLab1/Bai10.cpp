#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {
    cout << "           DANH SACH SINH VIEN" << endl;
    cout << setiosflags(ios::left)
        << setw(10) << "MSSV"
        << setw(25) << "Ho va Ten"
        << setw(10) << "Khoa"
        << setw(10) << "Diem" << endl;
    cout << setiosflags(ios::left)
        << setw(10) << "-----"
        << setw(25) << "-------------------"
        << setw(10) << "-----"
        << setw(10) << "----" << endl;
    cout << setiosflags(ios::left)
        << setw(10) << "1211520"
        << setw(25) << "Le Duy Tung"
        << setw(10) << 33
        << setw(10) << 4.57 << endl;
    cout << setiosflags(ios::left)
        << setw(10) << "1210152"
        << setw(25) << "Tran Van Tien"
        << setw(10) << 35
        << setw(10) << 4.7 << endl;
    cout << setiosflags(ios::left)
        << setw(10) << "1214821"
        << setw(25) << "Ngo Tat To"
        << setw(10) << 24
        << setw(10) << 7.6 << endl;
    cout << setiosflags(ios::left)
        << setw(10) << "1218291"
        << setw(25) << "Nguyen Hong Phuc"
        << setw(10) << 34
        << setw(10) << 2.6 << endl;
    cout << setiosflags(ios::left)
        << setw(10) << "1214928"
        << setw(25) << "Pham Minh Duc"
        << setw(10) << 42
        << setw(10) << 10 << endl;
    cout << setiosflags(ios::left)
        << setw(10) << "1212721"
        << setw(25) << "Nguyen Khac Ky"
        << setw(10) << 39
        << setw(10) << 4.5 << endl;
    cout << setiosflags(ios::left)
        << setw(10) << "1219201"
        << setw(25) << "Nguyen Tan Tai"
        << setw(10) << 45
        << setw(10) << 6.7 << endl;
    cout << "==================================================";
    return 0;
}