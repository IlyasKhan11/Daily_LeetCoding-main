class Solution:
    def subs(self, nums, index, n, ans, temp):
        if index == n:
            ans.append(temp.copy())  
            return

        self.subs(nums, index + 1, n, ans, temp)

        temp.append(nums[index])
        self.subs(nums, index + 1, n, ans, temp)

        temp.pop()

    def subsets(self, nums):
        temp = []
        ans = []
        n = len(nums)

        self.subs(nums, 0, n, ans, temp)

        return ans
