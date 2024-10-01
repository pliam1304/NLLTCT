#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x,y,n;
    cin>>x>>y>>n;
    x = pow(x,n);
    y = pow(y,n);
    cout<<x+y;
    return 0;
}