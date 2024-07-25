#include <iostream>
using namespace std;

int main() {
    int number = 5;  // Change this number to generate table for a different number
    int range = 10;  // Change this number to adjust the range of the table
    int result;
    for (int i = 1; i <= range; ++i) {
         result = number * i;
        cout << number << " * " << i << " = " << result << endl;
    }
    
    return 0;
}

