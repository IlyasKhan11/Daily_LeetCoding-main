class Solution:
    def romanToInt(self, s: str) -> int:
        roman_to_integer = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000,
        }     
        ans = 0
        for i in range(len(s) - 1):
            if roman_to_integer[s[i]] < roman_to_integer[s[i + 1]]:
                ans -= roman_to_integer[s[i]]
            else:
                ans += roman_to_integer[s[i]]
        
        ans += roman_to_integer[s[-1]]
        
        return ans
