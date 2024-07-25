#include <iostream>
#include <cmath>  // Include cmath header for floor and ceil functions

using namespace std;

int main() {
    float number;
    
    // Input the floating-point number
    cout << "Enter a floating-point number: ";
    cin >> number;

    // Round to the nearest integer using floor and ceil functions
    int rounded_down = floor(number); // Rounds down to the nearest integer
    int rounded_up = ceil(number);   // Rounds up to the nearest integer

    // Output the results
    cout << "Original number: " << number << endl;
    cout << "Rounded down (floor): " << rounded_down << endl;
    cout << "Rounded up (ceil): " << rounded_up << endl;

    return 0;
}

