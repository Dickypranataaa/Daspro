#include <iostream>

using namespace std;

int main()
{
    /*
    Nama : Dicky Pranata
    Nim : A11.2022.14615
    */
    int hari;
    int bulan;

    cout << "\nMasukan hari:\n";
    cout << " > ";
    cin >> hari;
    cout << "Masukan Bulan;\n";
    cout << " > ";
    cin >> bulan;

    bool bulanGanjil = bulan % 2 == 1;
    int hariMaximal;

    if (bulan <= 7 )
    {
        if (bulanGanjil)
        {
            hariMaximal = 31;
        }
        else
        {
            hariMaximal = 30;
        }
    }
    else
    {
        if (bulanGanjil)
        {
            hariMaximal = 30;
        }
        else
        {
            hariMaximal = 31;
        }
    }

    if (hari < 1 || hari > hariMaximal || bulan < 1 || bulan > 12)
    {
        cout << "Tanggal Tidak Valid\n";
    }
    else
    {
        cout << "Tanggal Valid\n";
    }

    return 0;
}
