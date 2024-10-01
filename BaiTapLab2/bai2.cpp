#include<iostream>
#include<math.h>
using namespace std;
#define  Max   3600
#define  MaxP 60
int ThoiGian(int n);
int main()
{
   int SoGiay;
   cout << " SoGiay Can nhap vao la"; cin >> SoGiay;
   ThoiGian(SoGiay);
   return 1;
}
int ThoiGian(int n)
{
   float Gio, Phut, Giay;
   Gio = n/Max;
   Phut =  (n % Max ) / MaxP;
   Giay =  ( n % Max ) % MaxP;
   cout << Gio << ":"
        << Phut << ":"
        << Giay;
}