import heapq

class Solution:
    def sortArray(self, nums):
        # Create a min-heap
        heap = []
        
        # Push all elements into the heap
        for num in nums:
            heapq.heappush(heap, num)
        
        # Pop elements from the heap and place them back into nums
        for i in range(len(nums)):
            nums[i] = heapq.heappop(heap)
        
        return nums
