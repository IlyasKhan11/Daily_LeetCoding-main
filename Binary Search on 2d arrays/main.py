class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        row=len(matrix)
        col=len(matrix[0])

        start=0
        end=row*col-1

        while start<=end:
            mid=start + (end-start)//2

            row_index=mid//col
            col_index=mid%col

            if matrix[row_index][col_index] == target:
                return True
            elif matrix[row_index][col_index]<target:
                start=mid+1
            else:
                end=mid-1

        return False
