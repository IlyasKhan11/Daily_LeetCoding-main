class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        row=len(matrix)
        col=len(matrix[0])-1

        for i in range(row):
            if matrix[i][0]<= target and matrix[i][col]>=target:
                start=0
                end=col

                while start<=end:
                    mid=start+(end-start)//2

                    if matrix[i][mid] == target:
                        return True
                    elif matrix[i][mid]<target:
                        start=mid+1
                    else:
                        end=mid-1

        return False