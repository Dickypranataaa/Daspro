#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    /*
    Nama : Dicky Pranata
    Nim : A11.2022.14615
    Kelompok : 4116
    */
    int u = 18; /* int untuk angka */
    float t = 167.5; /* float untuk angka yang ada koma */
    char ub = 'L'; /* Untuk huruf satu */
    string ubs = "XL"; /* untuk huruf lebih dari satu */

    cout << "Umur Saya : " << u;
    cout << endl;
    cout << "Tinggi Saya : " << t;
    cout << "\nUkuran Baju : " << ub;

    int a;
    cout << "\nMasukkan Angka : ";
    cin >> a;
    cout << "Angka Anda : " << a * u;


    return 0;
}
