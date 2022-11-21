#include <iostream>

using namespace std;

int main()
{
    /*for (int i = 0; i < 4;i++) {
        if(i == 2) {
            continue;
        }
    if (i > 3) {
        break;
    }
    cout << i << endl;
    }

    i = 0, 0
    i = 1, 1
    i = 2,
    i = 3, 3
    */
    /*
    nested loop
    for (int i = 0; i <= 1;i++) {
        for (int j = 0; j <= i; j++)
            cout << i <<endl;
    } */
    /*
    0011
    i = 0, j=0 ,0
           j=1 ,0
    i = 1, j=0 ,1
    i = 1, j=1 ,1
    */
    for (int i = 0; i <= 1;i++) {
            cout << i << endl;
            for(int j = 0; j<= 1;j++) {
                cout <<i<<endl;
            }
        }                                                                                        }

    return 0;
}
