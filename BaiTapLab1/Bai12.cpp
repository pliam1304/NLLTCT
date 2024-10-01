#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int R;
    float TheTich, DienTich;
    const float Pi = 3.14;
    cin >> R;
    TheTich = 4/3 * Pi * R;
    DienTich = 4 * Pi * sqrt(R);
    cout << TheTich << endl
        << DienTich << endl;
    return 0;
}