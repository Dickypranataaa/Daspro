#include <iostream>

using namespace std;

int main()
{
    int n,f1 = 0, f2 = 1, berikutnya = 0;

    cout << "Masukkan Batas Deret Bilangan Fibonacci" << endl;
    cin >> n;
    cout << endl;
    cout << "Deret Fibonacci : " << f1 << ", " << f2 << ", ";

    berikutnya = f1 + f2;

    while(berikutnya <=n) {
        cout << berikutnya << ", ";
        f1 = f2;
        f2 = berikutnya;
        berikutnya = f1 + f2;
    }
    return 0;
}
