#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    
    // Taking input for number of rows and columns
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;
    
    int matrix[rows][cols];
    
    // Taking input for matrix elements
    cout << "Enter the elements of the matrix:" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    
    // Displaying the matrix
    cout << "The entered matrix is:" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
