// Compare elements of first row to the second row

#include <iostream>
using namespace std;

class RowCompare
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

    void CompareRows()
    {
        if (row < 2)
        {
            cout << "Matrix has less than 2 rows, cannot compare.\n";
            return;
        }

        bool identical = true;
        for (int j = 0; j < col; j++)
        {
            if (mat[0][j] != mat[1][j])
            {
                identical = false;
                break;
            }
        }

        if (identical)
            cout << "First row is identical to second row.\n";
        else
            cout << "First row is NOT identical to second row.\n";
    }
};

int main()
{
    RowCompare obj;
    obj.InputMatrix();
    obj.CompareRows();

    return 0;
}

/*
OUTPUT

Testcase 1 :
Enter number of rows: 2
Enter number of columns: 3
Enter elements of the matrix:
1 2 3
1 2 3
First row is identical to second row.

Testcase 2 :
Enter number of rows: 2
Enter number of columns: 3
Enter elements of the matrix:
1 2 3
4 5 6
First row is NOT identical to second row.
*/