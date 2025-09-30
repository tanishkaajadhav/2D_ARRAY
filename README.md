(a) TAKE MATRIX INPUT AND DISPLAY IT – MATRIXINPUT.CPP

AIM:

To input a 2-D array from the user and display it.

APPARATUS:

Laptop with C++ compiler (MinGW), Text Editor / IDE (VS Code), Terminal/Console (Command Prompt).

THEORY:

A 2-D array stores elements in rows and columns. Nested loops are used to input and display the elements row-wise.

ALGORITHM:

Start the program and include necessary header files.

Accept number of rows and columns from the user.

Use nested loops to input elements into the 2-D array.

Use nested loops to display the elements row-wise.

Stop the program.

CONCLUSION:

The program successfully inputs and displays a 2-D array.

(b) ADDITION OF TWO MATRICES – MATRIXADD.CPP

AIM:

To perform addition of two matrices of the same dimensions.

APPARATUS:

Laptop with C++ compiler (MinGW), Text Editor / IDE (VS Code), Terminal/Console (Command Prompt).

THEORY:

Matrix addition is done element-wise. Both matrices must have the same number of rows and columns.

ALGORITHM:

Start the program and include necessary header files.

Input number of rows and columns for both matrices.

Use nested loops to input elements of matrices A and B.

Use nested loops to calculate the sum C[i][j] = A[i][j] + B[i][j].

Display the resulting matrix C.

Stop the program.

CONCLUSION:

The program successfully adds two matrices and displays the result.

(c) MULTIPLICATION OF MATRICES – MATRIXMULT.CPP

AIM:

To multiply two matrices.

APPARATUS:

Laptop with C++ compiler (MinGW), Text Editor / IDE (VS Code), Terminal/Console (Command Prompt).

THEORY:

Matrix multiplication is possible only when the number of columns of the first matrix equals the number of rows of the second matrix. Each element of the result matrix is the sum of products of corresponding row and column elements.

ALGORITHM:

Start the program and include necessary header files.

Input dimensions of matrices ensuring columns of first = rows of second.

Input elements of matrices A and B.

Initialize result matrix C to zero.

Use nested loops to compute C[i][j] = Σ (A[i][k] * B[k][j]).

Display the resulting matrix C.

Stop the program.

CONCLUSION:

The program successfully multiplies two matrices and displays the product.

(d) DIAGONAL ADDITION – DIAGONALSUM.CPP

AIM:

To calculate the sum of elements on the main diagonal of a matrix.

APPARATUS:

Laptop with C++ compiler (MinGW), Text Editor / IDE (VS Code), Terminal/Console (Command Prompt).

THEORY:

The main diagonal of a square matrix consists of elements where the row index equals the column index. Their sum can be calculated by traversing these indices.

ALGORITHM:

Start the program and include necessary header files.

Input a square matrix.

Initialize sum to zero.

Use a loop to add elements A[i][i] to sum.

Display the sum.

Stop the program.

CONCLUSION:

The program successfully calculates the sum of diagonal elements of a matrix.

(e) TRANSPOSE OF A MATRIX – MATRIXTRANSPOSE.CPP

AIM:

To find the transpose of a given matrix.

APPARATUS:

Laptop with C++ compiler (MinGW), Text Editor / IDE (VS Code), Terminal/Console (Command Prompt).

THEORY:

The transpose of a matrix is obtained by interchanging its rows and columns. Element at position A[i][j] moves to B[j][i].

ALGORITHM:

Start the program and include necessary header files.

Input the matrix and its dimensions.

Use nested loops to assign B[j][i] = A[i][j].

Display the transposed matrix.

Stop the program.

CONCLUSION:

The program successfully finds and displays the transpose of a matrix.

(f) COMPARE ELEMENTS OF FIRST ROW TO SECOND ROW – ROWCOMPARE.CPP

AIM:

To compare elements of the first row with the second row of a matrix.

APPARATUS:

Laptop with C++ compiler (MinGW), Text Editor / IDE (VS Code), Terminal/Console (Command Prompt).

THEORY:

Row comparison involves checking each element of one row against the corresponding element of another row to determine equality.

ALGORITHM:

Start the program and include necessary header files.

Input a matrix with at least two rows.

Use a loop to compare elements of first row with second row.

If all elements match, display “Rows are equal”, else display “Rows are not equal”.

Stop the program.

CONCLUSION:

The program successfully compares the first and second rows and reports equality or inequality.
