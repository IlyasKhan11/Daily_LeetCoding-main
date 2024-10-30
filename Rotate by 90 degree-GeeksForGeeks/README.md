
# Rotate by 90 degree

link:https://www.geeksforgeeks.org/problems/rotate-by-90-degree-1587115621/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

Given a square matrix of size N x N. The task is to rotate it by 90 degrees in anti-clockwise direction without using any extra space. 


Example1:
```bash
Input:
N = 3 
matrix[][] = {{45, 48, 54},
             {21, 89, 87}
             {70, 78, 15}}
Output: 
45 48 54 87 89 21 70 78 15 
Explanation:
Matrix is as below:
45 48 54
21 89 87
70 78 15
Printing it in snake pattern will lead to 
the output as 45 48 54 87 89 21 70 78 15.

```

Example2:
```bash
Input:
N = 2
matrix[][] = {{1, 2},
              {3, 4}}
Output: 
Rotated Matrix:
2 4
1 3
```

our Task:
You dont need to read input or print anything. Complete the function rotateby90() which takes the matrix as input parameter and rotates it by 90 degrees in anti-clockwise direction without using any extra space. You have to modify the input matrix in-place. 


Constraints:

```bash
Input:
N = 2
matrix[][] = {{1, 2},
              {3, 4}}
Output: 
Rotated Matrix:
2 4
1 3
```

Your Task:
You dont need to read input or print anything. Complete the function snakePattern() that takes matrix as input parameter and returns a list of integers in order of the values visited in the snake pattern. 



Expected Time Complexity: O(N2)

Expected Auxiliary Space: O(1)



Constraints:

1 ≤ N ≤ 100

1 <= matrix[][] <= 1000