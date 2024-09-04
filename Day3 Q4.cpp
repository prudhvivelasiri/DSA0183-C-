#include <iostream>
using namespace std;

int main() {
    int row1, col1, row2, col2;
    cout << "Enter the number of rows for the first matrix: ";
    cin >> row1;
    cout << "Enter the number of columns for the first matrix: ";
    cin >> col1;

    cout << "Enter the number of rows for the second matrix: ";
    cin >> row2;
    cout << "Enter the number of columns for the second matrix: ";
    cin >> col2;

    int matrix1[row1][col1], matrix2[row2][col2], result[row1][col2];
    cout << "Enter the elements of the first matrix: " << endl;
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col1; ++j) {
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter the elements of the second matrix: " << endl;
    for (int i = 0; i < row2; ++i) {
        for (int j = 0; j < col2; ++j) {
            cin >> matrix2[i][j];
        }
    }

    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col2; ++j) {
            result[i][j] = 0;
        }
    }

    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col2; ++j) {
            for (int k = 0; k < col1; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    cout << "Product of the matrices: " << endl;
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col2; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
