from typing import List

class Solution:
    def search(self, nums: List[int], target: int) -> int:
        left=0
        right=len(nums)-1

        pivot=-1

        while left<=right:
            mid=right-left //2

            if nums[mid] >= nums[0]:
                left=mid+1
            else:
                pivot=mid
                right=mid-1


        start = 0
        end = len(nums) - 1

        # Determine which side of the pivot to search in
        if target >= nums[pivot] and target <= nums[end]:
            start = pivot
        else:
            end = pivot - 1

        # Perform standard binary search
        while start <= end:
            mid = start + (end - start) // 2

            if nums[mid] == target:
                return mid
            elif nums[mid] < target:
                start = mid + 1
            else:
                end = mid - 1

        return -1
