#include <iostream>

using namespace std;

int main()
{
    /*
    Nama : Dicky Pranata
    Nim : A11.2022.14615
    */
    float Temperature;
    cout << "Masukkan Temperature" << endl;
    cin >> Temperature;
    if (Temperature <= 0) {
        cout << "Ice" << endl;
    }
    else if (Temperature > 100) {
        cout << "Gas" << endl;
    }
    else {
        cout << "Liquid" << endl;
    }
    return 0;
}
