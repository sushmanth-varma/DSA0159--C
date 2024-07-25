#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num, originalNum, sum = 0, n = 0, temp;
    cout << "Enter a number: ";
    cin >> num;
    originalNum = num;
    temp = num;
    while (temp > 0) {
        temp /= 10;
        n++;
    }
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, n);
        temp /= 10;
    }
    if (sum == originalNum) {
        cout << originalNum << " is a narcissistic number." << endl;
    } else {
        cout << originalNum << " is not a narcissistic number." << endl;
    }
    return 0;
}

