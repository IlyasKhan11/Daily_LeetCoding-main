class Solution:
    def sortVowels(self, s: str) -> str:
        # Split string into a list of characters
        s = list(s)
        
        # Lists to keep count of lowercase and uppercase vowels
        lowers = [0] * 26
        uppers = [0] * 26

        # Collect vowel counts and mark their positions in the string
        for i in range(len(s)):
            if s[i] in 'aeiou':
                lowers[ord(s[i]) - ord('a')] += 1
                s[i] = '#'
            elif s[i] in 'AEIOU':
                uppers[ord(s[i]) - ord('A')] += 1
                s[i] = '#'

        # Create a string of sorted vowels
        vowels = ""
        
        # Add sorted uppercase vowels to the vowels string
        for i in range(len(uppers)):
            while uppers[i] > 0:
                vowels += chr(ord('A') + i)
                uppers[i] -= 1
        
        # Add sorted lowercase vowels to the vowels string
        for i in range(len(lowers)):
            while lowers[i] > 0:
                vowels += chr(ord('a') + i)
                lowers[i] -= 1

        # Replace placeholders in the original string with sorted vowels
        j = 0
        for i in range(len(s)):
            if s[i] == '#':
                s[i] = vowels[j]
                j += 1

        # Join the list back into a string and return it
        return ''.join(s)
