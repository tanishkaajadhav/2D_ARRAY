// Diagonal Matrix

#include <iostream>
using namespace std;

class DiagonalAddition
{
private:
    int mat[10][10], row, col;

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

    void AddDiagonal()
    {
        int sum = 0;
        for (int i = 0; i < row && i < col; i++)
        {
            sum += mat[i][i];
        }
        cout << "Sum of diagonal elements: " << sum << "\n";
    }
};

int main()
{
    DiagonalAddition obj;
    obj.InputMatrix();
    obj.AddDiagonal();

    return 0;
}

/*
OUTPUT
Enter number of rows: 3
Enter number of columns: 3
Enter elements of the matrix:
1 2 3
4 5 6
7 8 9
Sum of diagonal elements: 15

*/