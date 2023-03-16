#include <stdio.h>

#define ROW 3
#define COL 3

void matrix_multiply(int matrix1[][COL], int matrix2[][COL], int result[][COL]) {
    int i, j, k;
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            result[i][j] = 0;
            for (k = 0; k < COL; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int matrix1[ROW][COL] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int matrix2[ROW][COL] = { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} };
    int result[ROW][COL] = { {0, 0, 0}, {0, 0, 0}, {0, 0, 0} };
    int i, j;

    matrix_multiply(matrix1, matrix2, result);

    printf("Result:\n");
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
