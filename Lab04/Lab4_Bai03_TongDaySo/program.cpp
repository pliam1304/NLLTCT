#include<iostream>
#include<conio.h>

using namespace std;

#include"thuvien.h"
#include"menu.h"

int main() {
    unsigned int n;

    cout << endl << "Nhap mot so nguyen duong: ";
    cin >> n;

    ChayChuongTrinh(n);

    return 1;
}