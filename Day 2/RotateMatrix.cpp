#include <iostream>
#include <vector>
using namespace std;
void rotate(vector<vector<int>> &matrix) {
    int n = matrix.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for (int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}
int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    vector<vector<int>> arr(rows, vector<int>(cols));
    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element at position (" << i + 1 << ", " << j + 1 << "): ";
            cin >> arr[i][j];
        }
    }
    rotate(arr);
    cout << "Rotated Image" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
