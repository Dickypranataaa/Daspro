#include <iostream>

using namespace std;

int main()
{
    int temp = 50;
    if (temp <= 0) {
        cout << "Ice" << endl;
    }
    else if (temp > 100) {
        cout << "Gas" << endl;
    }
    else {
        cout << "Liquid" << endl;
    }
    return 0;
}
