#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int row, coloum;
    cout << "Enter number of row and coloum: \n";
    cin >> row >> coloum;
    vector<vector<double>> matrix(row, vector<double>(coloum, 0.0));

    cout << "Enter matrix elements: " << endl;

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < coloum; j++) {
            cout << "matrix[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix[i][j];
        }
    }
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < coloum; j++) {
            cout  << matrix[i][j] << " ";
        }
        cout << "\n";
}

}