def RotateKTimes(matrix, k):
    def rotate90(matrix):
        n = len(matrix)
        # Transpose the matrix
        for i in range(n):
            for j in range(i, n):
                matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]
        # Reverse each row
        for row in matrix:
            row.reverse()

    k = k % 4  # Only need to rotate 0-3 times
    for _ in range(k):
        rotate90(matrix)

m = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

RotateKTimes(m, 4)
print(m)
