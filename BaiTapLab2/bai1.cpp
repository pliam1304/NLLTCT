
#include<iostream>
#include<math.h>
using namespace std;
float DienTich(float R);
float ChuVi(float R);
#define  Pi    3.14;
int main()
{ 
   int R;
   cout<<" Gia tri cua ban kinh la :";
   cin >> R;
   cout << "dien tich hinh tron la " << DienTich(R) << endl;
   cout << "chu vi hinh tron la " << ChuVi(R);
   return 1;
}
float DienTich(float R)
{
   float S;
   S = pow(R, 2) * Pi;
   return S;
}
float ChuVi(float R)
{
   float C;
   C = R * 2 * Pi;
   return C;
}
