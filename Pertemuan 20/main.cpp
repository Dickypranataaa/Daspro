#include <iostream>

using namespace std;

int main()
{
    /*
    int c=1;
    for(int i = 1; i <= 3 ;i++){
            for(int j = 0; j < 4;j++) {
        cout<< c << "\t";
        c++;
    }
    cout <<"\n";
    }
    // i buat baris kebawah
    // j buat baris kesampingnya berapa
    // c untuk menambah jumlah angka perulangan

    */

    //array
    int x = 5;
    int y[5] = {1,2,5,6,4};
    char z[2] = {'A', 'B'};
    for(int i = 0 ; i < 5 ; i++) {
        cout << y[i] << " ";
    }
    return 0;
}
