class Solution:
    def restoreString(self, s: str, indices: List[int]) -> str:
        ans=""

        for i in indices:
            ans+=s[i]
            

        return ans