#include <iostream>
using namespace std;
int main()
{
    int n, Gio, Phut, Giay;
    cout<< "Gia tri cua n la: ";
    cin>>n;
    const int Max = 3600;
    const int MaxP = 60;
    Gio = n/Max;
    Phut = (n%Max)/ MaxP;
    Giay = (n%Max) % MaxP;
    cout << Gio << ":"
         << Phut << ":"
         << Giay;
    return 0;
}