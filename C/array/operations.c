#include <stdio.h>

// Function to input elements into a 2D array (matrix)
void inputMatrix(int matrix[][3], int rows, int cols) {
    printf("Enter %d elements for a %dx%d matrix:\n", rows * cols, rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display a 2D array (matrix)
void displayMatrix(int matrix[][3], int rows, int cols, const char *message) {
    printf("%s:\n", message);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to calculate the sum of diagonals in a square matrix
int sumDiagonals(int matrix[][3], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += matrix[i][i] + matrix[i][size - 1 - i];
    }
    return sum;
}

// Function to multiply two matrices
void multiplyMatrices(int matrix1[][3], int matrix2[][3], int result[][3], int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

// Function to calculate the transpose of a matrix
void transposeMatrix(int matrix[][3], int rows, int cols, int result[][3]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int rows1 = 3;
    int cols1 = 3;
    int rows2 = 3;
    int cols2 = 3;

    int matrix1[3][3];
    int matrix2[3][3];
    int multiplyResult[3][3];
    int transposeResult[3][3];


    // Input elements into matrices
    inputMatrix(matrix1, rows1, cols1);
    inputMatrix(matrix2, rows2, cols2);

    // Display input matrices
    displayMatrix(matrix1, rows1, cols1, "Matrix 1");
    displayMatrix(matrix2, rows2, cols2, "Matrix 2");

    // Square matrix for diagonal sum
    int diagonalSum = sumDiagonals(matrix1, rows1);
    printf("Sum of Diagonals: %d\n\n", diagonalSum);

    // Multiplying matrices
    multiplyMatrices(matrix1, matrix2, multiplyResult, rows1, cols1, cols2);
    displayMatrix(multiplyResult, rows1, cols2, "Matrix Multiplication Result");

     // Transposing a matrix
    transposeMatrix(matrix1, rows1, cols1, transposeResult);
    displayMatrix(transposeResult, cols1, rows1, "Transpose of Matrix 1");

    return 0;
}
