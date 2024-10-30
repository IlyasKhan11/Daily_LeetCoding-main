
# 844. Backspace String Compare










link:https://leetcode.com/problems/backspace-string-compare/description/

Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.

Note that after backspacing an empty text, the text will continue empty.

 



Example1:
```bash
Input: s = "ab#c", t = "ad#c"
Output: true
Explanation: Both s and t become "ac".


```

Example2:
```bash
Input: s = "ab##", t = "c#d#"
Output: true
Explanation: Both s and t become "".


```









Constraints:

1 <= s.length, t.length <= 200


s and t only contain lowercase letters and '#' characters.



Follow up: Can you solve it in O(n) time and O(1) space?

