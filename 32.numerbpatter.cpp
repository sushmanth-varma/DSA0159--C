#include <iostream>

int main() {
    int n = 5; // Number of rows in the pattern
    
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < i; ++j) {
            std::cout << i;
        }
        std::cout << std::endl;
    }

    return 0;
}

