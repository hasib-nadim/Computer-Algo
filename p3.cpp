/*3. To read a matrix of size m*n from the keyboard and display the
same on the screen using function.*/
#include <iostream>
using namespace std;
void displayMatrix(int** matrix, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int m, n;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;

    int** matrix = new int*[m];
    for (int i = 0; i < m; i++) {
        matrix[i] = new int[n];
    }

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "The matrix is:" << endl;
    displayMatrix(matrix, m, n);

    // Deallocate memory
    for (int i = 0; i < m; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}