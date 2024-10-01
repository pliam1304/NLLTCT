#include<iostream>
#include<math.h>
#define PI 3.14
double TheTich(int BanKinh, int DuongCao);
double DienTichXQ(int BanKinh, int DuongCao);
double DienTIchTp(int BanKinh, int DuongCao);
using namespace std;
int main()
{
   int a,b;
   cout << " Gia tri cua ban kinh va duong cao la: "; cin >> a >> b;
   cout << " The tich hinh tru la : " << TheTich(a,b) << endl;
   cout << " Dien tich xung quang la : " << DienTIchTp(a,b) << endl;
   cout << " Dien tich toan phan la : " << DienTichXQ(a,b) << endl;
   return 1;
}
double TheTich(int BanKinh, int DuongCao)
{
   float T;
   T = PI * BanKinh * BanKinh * DuongCao;
   return T;
}
double DienTichXQ(int BanKinh, int DuongCao)
{
   float XQ;
   XQ = 2 * PI * BanKinh * DuongCao;
   return XQ;
}
double DienTIchTp(int BanKinh, int DuongCao)
{
   float Tp;
   Tp = 2 * PI * BanKinh * DuongCao + 2 * PI * BanKinh * BanKinh;
   return Tp;
}