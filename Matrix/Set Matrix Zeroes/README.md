#### Leetcode Link:

> https://leetcode.com/problems/set-matrix-zeroes/

### Problem Statement

<blockquote>
Given an m x n matrix. If an element is 0, set its entire row and column to 0. Do it in-place.

Follow up:

    A straight forward solution using O(mn) space is probably a bad idea.
    A simple improvement uses O(m + n) space, but still not the best solution.
    Could you devise a constant space solution?

Example 1:

Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]

Example 2:

Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]

Constraints:

    m == matrix.length
    n == matrix[0].length
    1 <= m, n <= 200
    -2^31 <= matrix[i][j] <= 2^31 - 1

</blockquote>

### Pseudo-code
We use flag variable to mark that first row have zeros in it

Then each zero cell set first element in row and col to zero
```c++
void setZeroes(vector<vector<int>>& matrix) {
        
        flag = false;
        n = matrix.SIZE()
        m = matrix[0].SIZE()

        for (i = 0 .. n) {
            for (j = 0 .. m) {
                if (matrix[i][j] = 0) {
                    if (j == 0)
                        {
                            flag = true;
                            continue;
                        }
                    matrix[0][j] = matrix[i][0] = 0
                }
            }
        }
        
        for(i = n .. 0) {
            for (j = m .. 1) {
                if (j == 0) {
                    if (flag) matrix[i][j] = 0;
                    continue;
                }
                if (!matrix[0][j] || !matrix[i][0]) matrix[i][j] = 0;
            }
        }
    }
```

**Time Complexity: O(M*N)**

**Space Complexity: O(1)**
