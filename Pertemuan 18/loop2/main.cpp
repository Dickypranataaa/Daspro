#include <iostream>

using namespace std;

int main()
{
    int i;
    for (i=1;i<=100;i++) {
        if(i % 2 == 0)
            cout << "NIlai Genap adalah" << i <<endl;
        continue;
    }
    return 0;
}
