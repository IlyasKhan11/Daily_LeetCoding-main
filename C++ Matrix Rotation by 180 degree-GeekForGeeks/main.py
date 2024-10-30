#User function Template for python3

class Solution:
	def rotate(self, matrix):
		# Code here
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
            
        

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n = int(input())
		matrix = []
		for _ in range(n):
			matrix.append(list(map(int,input().split())))
		ob = Solution()
		ob.rotate(matrix)
		for i in range(n):
			for j in range(n):
				print(matrix[i][j], end = " ")
			print()
# } Driver Code Ends