// Addition of two matrices

#include <iostream>
using namespace std;

class MatrixAddition
{
private:
    int mat1[10][10], mat2[10][10], sum[10][10];
    int row, col;

public:
    void InputMatrices()
    {
        cout << "Enter number of rows: ";
        cin >> row;
        cout << "Enter number of columns: ";
        cin >> col;

        cout << "Enter elements of first matrix:\n";
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> mat1[i][j];
            }
        }

        cout << "Enter elements of second matrix:\n";
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> mat2[i][j];
            }
        }
    }

    void AddMatrices()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                sum[i][j] = mat1[i][j] + mat2[i][j];
            }
        }
    }

    void DisplaySum()
    {
        cout << "Sum of matrices:\n";
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << sum[i][j] << " ";
            }
            cout << "\n";
        }
    }
};

int main()
{
    MatrixAddition obj;
    obj.InputMatrices();
    obj.AddMatrices();
    obj.DisplaySum();

    return 0;
}

/*
OUTPUT
Enter number of rows: 2
Enter number of columns: 3
Enter elements of first matrix:
1 2 3
4 5 6
Enter elements of second matrix:
6 5 4
3 2 1
Sum of matrices:
7 7 7
7 7 7
*/