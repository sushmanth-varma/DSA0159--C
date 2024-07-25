#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    cout << "Enter the size of the matrix: ";
    cin >> n;

    // Declare a 2D vector to store the matrix
    vector<vector<int>> matrix(n, vector<int>(n));

    // Input the matrix elements
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    // Calculate the sum of the primary and secondary diagonals
    for (int i = 0; i < n; ++i) {
        primaryDiagonalSum += matrix[i][i];
        secondaryDiagonalSum += matrix[i][n - i - 1];
    }

    cout << "Sum of primary diagonal: " << primaryDiagonalSum << endl;
    cout << "Sum of secondary diagonal: " << secondaryDiagonalSum << endl;

    return 0;
}
