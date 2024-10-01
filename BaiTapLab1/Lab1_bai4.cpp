#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x,y,z;
    cin>> x;
    cin>> y;
    cin>> z;
    cout << endl << x << "+" <<  y  << "+"<< z << "=" << x + y + z;
    int dai, rong;
    cout << endl << " Nhap chieu dai cua HCN :";
    cin >> dai;
    cout << endl << " Nhap chieu rong cua HCN :";
    cin >> rong;
    cout<<endl
        << "Chieu dai hinh chu nhat la " << dai << ","
        << "Chieu rong hinh chu nhat la " << rong;
        int chuvi, dientich;
        chuvi = (dai + rong)*2;
        dientich = dai * rong;
        cout << endl << " Chu vi cua HCN la : " << chuvi ;
        cout << endl << " Dien tich cua HCN la : " << dientich ;
    _getch();
    return 1;
}