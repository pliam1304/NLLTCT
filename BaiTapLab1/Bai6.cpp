#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<" x = "<< x++ << " y = " << y<< endl;
    cout<<" x = "<< x-- << " y = " << y<< endl;
    cout<<" x = "<< ++x << " y = " << y<< endl;
    cout<<" x = "<< --x << " y = " << y<< endl;
    y = x/y;
    cout<<" x = "<< x << " y = " << y << endl;
    y = x%y;
    cout<<" x = "<< x << " y = " << y << endl;
    x*=y;
    cout<<" x = "<< x << " y = " << y << endl;
    return 0;
}