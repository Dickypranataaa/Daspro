#include <iostream>

using namespace std;

int main()
{
    /*
    int a[5] = {9,5,3,1,6}
    int b[3];
    b[0];
    b[1];
    */
    /*
    int u;
    int sum = 0;
    float avg;
    cout << "input ukuran array : ";
    cin >>u;
    int c[u];
    for (int i=0;i<u;i++){
        cin >> c[i];
        sum= sum + c[i];
    }
    for (int i=0;i<u;i++) {
        cout << c[i];
    }
    cout << endl << "Jumlah semua nilai : " <<sum;
    avg=(float)sum/u;
    cout << endl << "Jumlah rata rata : " <<avg; */
    char huruf[5] = {'A', 'B', 'C', 'D', 'E'};
    char cari;
    bool ketemu = false;
    cout << "masukkan yang dicari : ";
    cin >> cari;
    for (int i=0;i<5;i++){
        if (cari == huruf[i]) {
            ketemu=true;
            break;
        } else {
            ketemu=false;
        }
    }
        if(ketemu == true){
            cout << "true\n";
        } else {
            cout << "false\n";
        }
    /*
    int c[3];
    for (int i=0; i < 3; i++){
        cin >> c[i];
    }
    for (int i=5; i>0;i--){
            cout << c[i] << " ";
    } */
    return 0;
}
