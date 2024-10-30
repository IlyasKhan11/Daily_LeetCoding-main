#User function Template for python3


class Solution:
    
    #Function to rotate matrix anticlockwise by 90 degrees.
    def rotateby90(self,a, n): 
        # code here
        n=len(matrix)
        for i in range(n):
            start=0
            end=n-1
            
            while start<=end:
                matrix[start][i],matrix[end][i] = matrix[end][i],matrix[start][i]
                start+=1
                end-=1
            
        for i in range(n):
            matrix[i].reverse()
            
        for i in range(n):
            start=0
            end=n-1
            
            while start<=end:
                matrix[start][i],matrix[end][i] = matrix[end][i],matrix[start][i]
                start+=1
                end-=1
        
        for i in range(n):
            for j in range(i,n):
                matrix[i][j],matrix[j][i]=matrix[j][i],matrix[i][j]
        

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        n = int(input())
        matrix = [[0 for j in range(n)] for i in range(n)]
        line1 = [int(x) for x in input().strip().split()]
        k=0
        for i in range(n):
            for j in range (n):
                matrix[i][j]=line1[k]
                k+=1
        obj = Solution()
        obj.rotateby90(matrix,n)
        for i in range(n):
            for j in range(n):
                print(matrix[i][j],end=" ")
        print()

# } Driver Code Ends