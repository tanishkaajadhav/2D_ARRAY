// Take matrix input from user and display it

#include <iostream>
using namespace std;

class MatrixInput
{
private:
    int mat[10][10];
    int row, col;

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

    void DisplayMatrix()
    {
        cout << "The matrix is:\n";
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << "\n";
        }
    }
};

int main()
{
    MatrixInput obj;
    obj.InputMatrix();
    obj.DisplayMatrix();

    return 0;
}

/*
OUTPUT
Enter number of rows: 2
Enter number of columns: 3
Enter elements of the matrix:
1 2 3
4 5 6
The matrix is:
1 2 3
4 5 6
*/