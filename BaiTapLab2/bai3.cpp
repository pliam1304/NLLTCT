#include<iostream>
#include<math.h>
using namespace std;
#define  Max   3600
#define  MaxP 60
int ThoiGian(int n);
double TinhCanhBen(int DayLon, int DayBe, int ChieuCao);
double TinhChuVi(int DayLon, int DayBe, double canhBen);
double TinhDienTich(int DayLon, int DayBE, int ChieuCao);
int main()
{
   int a,b,c;
   cin>>a>>b>>c;
   cout << "canh ben la: " << TinhCanhBen(a,b,c) << endl;
   cout << "chu vi la: " << TinhChuVi(a,b,c) << endl;
   cout << "dien tich la: " << TinhDienTich(a,b,c);
   return 1;
}
double TinhCanhBen(int DayLon, int DayBe, int ChieuCao)
{
   float Canh;
   Canh = sqrt ( pow((DayLon-DayBe)/2, 2)+ pow(ChieuCao, 2));
   return Canh;
}
double TinhChuVi(int DayLon, int DayBe, double canhBen)
{
   float ChuVi;
   ChuVi = DayLon + DayBe + 2*canhBen;
   return ChuVi;
}
double TinhDienTich(int DayLon, int DayBE, int ChieuCao)
{
   float DienTich;
   DienTich = ((DayLon+DayBE)*ChieuCao)/2;
   return DienTich;
}