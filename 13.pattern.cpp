#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int base = 4;
    
    for (int i = 1; i <= 4; i++) {
        int value = pow(base, i);
        for (int j = 0; j < i; j++) {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}

