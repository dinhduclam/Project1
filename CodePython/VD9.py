import numpy as np

ROW = 3
COL = 3

def matrix_multiply(matrix1, matrix2):
    result = np.zeros((ROW, COL))
    for i in range(ROW):
        for j in range(COL):
            result[i][j] = 0
            for k in range(COL):
                result[i][j] += matrix1[i][k] * matrix2[k][j]
    return result

matrix1 = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
matrix2 = [[9, 8, 7], [6, 5, 4], [3, 2, 1]]

result = matrix_multiply(matrix1, matrix2)

print("Result:")
print(result)