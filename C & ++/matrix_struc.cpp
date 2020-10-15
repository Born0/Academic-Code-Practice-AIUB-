#include <iostream>
#include <cstdlib>
using namespace std;

struct matrix
{
  int** data;       // Pointer to 2-D array that will simulate matrix
  int row, col;
};
istream& operator>> (istream& in, matrix& mat);
   // Input matrix like this (dim 2 x 3) cin >> 2 3 4 6 8 9 12 123

istream& operator>> (istream& in, matrix& mat)
{
    int row = mat.row;
    int col = mat.col;
    in >> row >> col;
    mat.data = new int* [row];
    for (int i = 0; i< row; i++)
    {
        mat.data[i] = new int [col];
    }
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            in >> mat.data[i][j];
    }
  }


    return in;
}
