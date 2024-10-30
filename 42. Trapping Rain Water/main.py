class Solution:
    def trap(self, height: List[int]) -> int:

        n = len(height)
        leftMax = 0
        rightMax = 0
        maxHeight = height[0]
        index = 0
        water = 0

        for i in range(n):
            if maxHeight < height[i]:
                maxHeight = height[i]
                index = i

        for i in range(index):
            if leftMax > height[i]:
                water += leftMax - height[i]
            else:
                leftMax = height[i]

        for i in range(n - 1, index, -1):
            if rightMax > height[i]:
                water += rightMax - height[i]
            else:
                rightMax = height[i]

        return water