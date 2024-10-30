class Solution:
    def longestPalindrome(self, s: str) -> int:
        lowers = [0] * 26
        uppers = [0] * 26

        for i in range(len(s)):
            if s[i] >= 'a':
                lowers[ord(s[i]) - ord('a')] += 1
            else:
                uppers[ord(s[i]) - ord('A')] += 1

        count = 0
        odd = 0

        for i in range(26):
            if lowers[i] % 2 == 0:
                count += lowers[i]
            else:
                count += lowers[i] - 1
                odd = 1

            if uppers[i] % 2 == 0:
                count += uppers[i]
            else:
                count += uppers[i] - 1
                odd = 1

        return count + odd
