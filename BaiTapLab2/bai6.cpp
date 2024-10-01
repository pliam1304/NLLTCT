#include<iostream>
#include<math.h>
using namespace std;
double BMI(double CanNang, double ChieuCao);
int main()
{
   double w,h;
   cout << " can nang va chieu cao la: "; cin >> w >> h;
   cout << " BMI duoc tinh la : " << BMI(w,h);
   return 0;
}
double BMI(double CanNang, double ChieuCao)
{
   double BMI;
   BMI = CanNang/(ChieuCao*ChieuCao);
   return BMI;
}