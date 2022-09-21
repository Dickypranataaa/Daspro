#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int p, l, t;
    cout << "Masukkan angka p : ";
    cin >> p;
    cout << "Masukkan angka l: ";
    cin >> l;
    cout << "Masukkan angka t: ";
    cin >> t;
    cout << "Hasil Luas Permukaan Balok 2*(p*l+p*t+l*t)=" << 2* (p*l+p*t+l*t);

    return 0;
}
