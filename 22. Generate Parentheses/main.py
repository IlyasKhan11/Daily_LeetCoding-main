class Solution:
    def solve(self, n, left, right, ans, temp):
        if left + right == 2 * n:
            ans.append(temp)
            return

        if left < n:
            self.solve(n, left + 1, right, ans, temp + '(')
        
        if right < left:
            self.solve(n, left, right + 1, ans, temp + ')')
    
    def generateParenthesis(self, n):
        ans = []
        self.solve(n, 0, 0, ans, "")
        return ans
