#include<iostream>
using namespace std;

int main() {
    int var = 5;
    int *pointer;
    pointer = &var;
    *pointer = 1;
    cout << var << endl;
    return 0;
}

