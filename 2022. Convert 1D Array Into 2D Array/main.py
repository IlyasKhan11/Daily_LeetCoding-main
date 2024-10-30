class Solution:
    def construct2DArray(self, original: List[int], m: int, n: int) -> List[List[int]]:
        arr2d=[]

        if m*n < len(original) or m*n> len(original):
            return arr2d

        for i in range(m):
            arr2d.append([0]*n)
        
        index=0
        for i in range(m):
            for j in range(n):
                arr2d[i][j]=original[index]
                index+=1
        
        return arr2d