#include <iostream>
using namespace std;

int main() {
    int matrixA[2][2] = {{1, 2},{1, 2}};
    int matrixB[2][2] = {{1, 2},{1, 2}};
    int c[2][2] = {0};
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 2; ++k) {
                c[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

