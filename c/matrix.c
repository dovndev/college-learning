#include <stdio.h>

#define MAX 10  // Maximum size of the matrix

void inputMatrix(int matrix[MAX][MAX], int row, int col) {
    printf("Enter elements of the matrix (%dx%d):\n", row, col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[MAX][MAX], int row, int col) {
    printf("Matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void subtractMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

void multiplyMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int row1, int col1, int col2) {
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int mat1[MAX][MAX], mat2[MAX][MAX], result[MAX][MAX];
    int row1, col1, row2, col2;
    int choice;

    do {
        printf("\nMatrix Operations Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 4) {
            printf("Exiting program...\n");
            break;
        }

        printf("Enter rows and columns for first matrix: ");
        scanf("%d %d", &row1, &col1);
        inputMatrix(mat1, row1, col1);

        printf("Enter rows and columns for second matrix: ");
        scanf("%d %d", &row2, &col2);
        inputMatrix(mat2, row2, col2);

        switch (choice) {
            case 1:
                if (row1 == row2 && col1 == col2) {
                    addMatrices(mat1, mat2, result, row1, col1);
                    printf("Resultant Matrix after Addition:\n");
                    displayMatrix(result, row1, col1);
                } else {
                    printf("Matrix addition not possible (different dimensions).\n");
                }
                break;

            case 2:
                if (row1 == row2 && col1 == col2) {
                    subtractMatrices(mat1, mat2, result, row1, col1);
                       printf("Resultant Matrix after Subtraction:\n");
                    displayMatrix(result, row1, col1);
                } else {
                    printf("Matrix subtraction not possible (different dimensions).\n");
                }
                break;

            case 3:
                if (col1 == row2) {
                    multiplyMatrices(mat1, mat2, result, row1, col1, col2);
                    printf("Resultant Matrix after Multiplication:\n");
                    displayMatrix(result, row1, col2);
                } else {
                    printf("Matrix multiplication not possible (columns of first != rows of second).\n");
                }
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
