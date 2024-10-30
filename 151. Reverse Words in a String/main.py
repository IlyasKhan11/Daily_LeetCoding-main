class Solution:
    def reverseWords(self, s: str) -> str:
        arr=s.strip().split(' ')

        start=0
        end=len(arr)-1
        while start<end:
            arr[start],arr[end]=arr[end],arr[start]

            start+=1
            end-=1
        
        
    
        return ans
