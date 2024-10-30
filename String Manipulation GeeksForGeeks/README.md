
# Print Matrix in snake Pattern

link:https://www.geeksforgeeks.org/problems/string-manipulation3706/1?page=1&difficulty%5B%5D=0&category%5B%5D=Stack&sortBy=submissions

Tom is a string freak. He has got sequences of words arr[] to manipulate. If in a sequence, two same words come together then Tom destroys each other. Find the number of words left in the sequence after this pairwise destruction.

Example1:
```bash
Input: arr[] = ["ab", "aa", "aa", "bcd", "ab"]
Output: 3
Explanation: After the first iteration, we'll have: ab bcd ab. We can't further destroy more strings and hence we stop and the result is 3. 
```

Example2:
```bash
Input:
N = 2
matrix[][] = {{1, 2},
              {3, 4}}
Output: 
1 2 4 3
Explanation:
Matrix is as below:
1 2 
3 4
Printing it in snake pattern will 
give output as 1 2 4 3. 
```

Constraints:

```bash
Input: arr[] = ["tom", "jerry", "jerry", "tom"]
Output: 0
Explanation: After the first iteration, we'll have: tom tom. After the second iteration: 'empty-array' .Hence, the result is 0.


```

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)
