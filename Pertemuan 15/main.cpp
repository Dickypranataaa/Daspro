#include <iostream>

using namespace std;

int main()
{
    while(true) {
    cout << "==== Daftar Menu ===="<<endl;
    cout << "1. Nasi Kerikiri" <<endl;
    cout << "2. Rica-Rica Bekicot" <<endl;
    cout << "3. Pepes Brotowali" <<endl;
    cout << "4. Kepiting Presto" <<endl;

    int menu;
    cout << "====Input Kode Makanan===="<<endl;
    cin >>menu;
    switch (menu){
    case 1:
    cout << "Nasi Kerikiri"<<endl;
    break;
    case 2:
    cout << "Rica-Rica Bekicot"<<endl;
    break;
    case 3:
    cout << "Pepes Brotowali"<<endl;
    break;
    case 4:
    cout << "Kepiting Presto"<<endl;
    break;

    default:
        cout << "Menu tidak tersedia"<<endl;
        }
    }
    return 0;
}
