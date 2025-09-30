// Multiplication of two matrices

#include <iostream>
using namespace std;

class MatrixMultiplication
{
private:
    int mat1[10][10], mat2[10][10], product[10][10];
    int row1, col1, row2, col2;

public:
    void InputMatrices()
    {
        cout << "Enter rows and columns of first matrix: ";
        cin >> row1 >> col1;
        cout << "Enter elements of first matrix:\n";
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                cin >> mat1[i][j];
            }
        }

        cout << "Enter rows and columns of second matrix: ";
        cin >> row2 >> col2;
        cout << "Enter elements of second matrix:\n";
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                cin >> mat2[i][j];
            }
        }
    }

    void MultiplyMatrices()
    {
        if (col1 != row2)
        {
            cout << "Matrix multiplication not possible.\n";
            return;
        }

        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                product[i][j] = 0;
                for (int k = 0; k < col1; k++)
                {
                    product[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }
    }

    void DisplayProduct()
    {
        if (col1 != row2)
            return;

        cout << "Product of matrices:\n";
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                cout << product[i][j] << " ";
            }
            cout << "\n";
        }
    }
};

int main()
{
    MatrixMultiplication obj;
    obj.InputMatrices();
    obj.MultiplyMatrices();
    obj.DisplayProduct();

    return 0;
}

/*
OUTPUT
Enter rows and columns of first matrix: 2 3
Enter elements of first matrix:
1 2 3
4 5 6
Enter rows and columns of second matrix: 3 2
Enter elements of second matrix:
1 2
3 4
5 6
Product of matrices:
22 28
49 64
*/