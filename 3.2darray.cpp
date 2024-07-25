#include <iostream>
using namespace std;
int main() {
	int rows;
    cout << "Enter the number of rows: ";
    cin >>rows;
    cout << "Enter the number of columns: ";
    int cols;
    cin >> cols;
    int** array = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        array[i] = new int[cols];
    }
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> array[i][j];
        }
    }
    cout << "The elements of the array are:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < rows; ++i) {
        delete[] array[i];
    }
    delete[] array;
    return 0;
}

