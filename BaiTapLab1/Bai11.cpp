#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int R,h;
    cin >> R >> h;
    const float Pi = 3.14;
    float ChuViDay, DienTichDay, DienTichXQ, DienTichTP, TheTich;
    ChuViDay = R*2*Pi;
    DienTichDay = sqrt(R)*Pi;
    TheTich = Pi*sqrt(R)*h;
    DienTichTP = 2*Pi*R*h + 2*Pi*sqrt(R);
    DienTichXQ = 2*Pi*R*h;
    cout << DienTichXQ << endl
        << DienTichTP << endl
        << TheTich << endl;
    return 0;
}