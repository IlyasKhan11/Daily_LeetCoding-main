class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        start=0
        end=len(nums)-1
        ans=len(nums)

        while start<=end:
            mid=start+(end-start)//2

            if nums[mid]==target:
                ans=mid
                break
            elif nums[mid]<target:
                start=mid+1
            else:
                ans=mid
                end=mid-1
        
        return ans