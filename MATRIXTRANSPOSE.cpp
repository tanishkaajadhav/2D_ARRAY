//Transpose of matrix

#include <iostream>
using namespace std;

class MatrixTranspose
{
private:
    int mat[10][10], trans[10][10], row, col;

public:
    void InputMatrix()
    {
        cout << "Enter number of rows: ";
        cin >> row;
        cout << "Enter number of columns: ";
        cin >> col;

        cout << "Enter elements of the matrix:\n";
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> mat[i][j];
            }
        }
    }

    void TransposeMatrix()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                trans[j][i] = mat[i][j];
            }
        }
    }

    void DisplayTranspose()
    {
        cout << "Transpose of the matrix:\n";
        for (int i = 0; i < col; i++)
        {
            for (int j = 0; j < row; j++)
            {
                cout << trans[i][j] << " ";
            }
            cout << "\n";
        }
    }
};

int main()
{
    MatrixTranspose obj;
    obj.InputMatrix();
    obj.TransposeMatrix();
    obj.DisplayTranspose();

    return 0;
}

/*
OUTPUT
Enter number of rows: 2
Enter number of columns: 3
Enter elements of the matrix:
1 2 3
4 5 6
Transpose of the matrix:
1 4
2 5
3 6
*/