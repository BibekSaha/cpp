#include <iostream>

using namespace std;

const int col = 10;

void inputMatrix(int[][col], int, int);
void displayMatrix(int[][col], int, int);

int main(void) {
  int mat1[3][col], 
    mat2[3][col] = {
      { 1, 2, 3 },
      { 4, 5, 6 },
      { 7, 8, 9 }
    };

  inputMatrix(mat1, 3, 3);
  cout << endl;
  displayMatrix(mat1, 3, 3);
  cout << endl;
  displayMatrix(mat2, 3, 3);

  return 0;
}

void inputMatrix(int arr[][col], int row, int col) {
  for (int i = 0; i < row; i++)
    for (int j = 0; j < col; j++) {
      cout << ">> ";
      cin >> arr[i][j];
    }
}

void displayMatrix(int arr[][col], int row, int col) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cout << arr[i][j] << "\t";
    }
    cout << endl;
  }
}