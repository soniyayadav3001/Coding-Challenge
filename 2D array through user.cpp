#include <iostream>
using namespace std;
int main() {
  // Get the number of rows and columns from the user
  int rows, cols;
  cout << "Enter the number of rows: ";
  cin >> rows;
  cout << "Enter the number of columns: ";
  cin >> cols;

  // Create a 2D array
  int array[rows][cols];

  // Get the elements of the array from the user
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cout << "Enter the element at row " << i << " and column " << j << ": ";
      cin >> array[i][j];
    }
  }

  // Print the array
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cout << array[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
