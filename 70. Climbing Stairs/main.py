class Solution:
    def climbStairs(self, n: int) -> int:
        # will excede time limit
        
        if n<=1:
            return 1
        return climbStairs(n-1) + climbStairs(n-2)