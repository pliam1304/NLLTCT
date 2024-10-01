#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int DayLon, DayBe, CanhBen, ChieuCao ,TongDay;
    float ChuVi, DienTich;
    cin >> DayLon >> DayBe >> ChieuCao;
    TongDay = DayLon+DayBe;
    CanhBen = sqrt((pow(DayLon-DayBe,2)/2 + pow(ChieuCao,2)));
    ChuVi = TongDay + 2*CanhBen;
    DienTich = (TongDay*ChieuCao)/2;
    cout <<"Chu vi la:" << ChuVi << endl
        <<"Dien tich la:" << DienTich << endl;
    return 0;
}