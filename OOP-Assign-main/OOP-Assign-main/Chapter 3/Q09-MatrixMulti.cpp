#include <iostream>
using namespace std;
int main() {
  int rows, cols;
  cout << "Enter no of rows";
  cin >> rows;
  cout << "Enter no of columns";
  cin >> cols;
  int matrix[rows][cols];
  int matrix2[rows][cols];
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cout << "Enter Element for position (" << i << "," << j
           << ") For Matrix 1:";
      cin >> matrix[i][j];
    }
  }
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cout << "Enter Element for position (" << i << "," << j
           << ") For Matrix 2:";
      cin >> matrix2[i][j];
    }
  }
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      int sum = 0;
      for (int k = 0; k < rows; k++) {
        sum += matrix[i][k] * matrix2[k][j];
      }
      cout <<" "<< sum<<" ";
    }
    cout << endl;
  }
}