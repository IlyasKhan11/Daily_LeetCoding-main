def reverse2d(matrix):
    n=len(matrix)

    for i in range(n):
        start=0
        end=n-1

        while start<=end:
            matrix[start][i], matrix[end][i] = matrix[end][i], matrix[start][i]
            start+=1
            end-=1

def wave(matrix):
    n=len(matrix)

    for j in range(n):
        if j%2==0:
            for i in range(n):
                print(matrix[i][j],end=" ")
            print()
        else:
            for i in reversed(range(n)):
                print(matrix[i][j],end=" ")
            print()



m=[
    [1,2,3],
    [4,5,6],
    [7,8,9]
]

wave(m)