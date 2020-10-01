#### Leetcode Link: 

> https://leetcode.com/problems/spiral-matrix/

### Problem Statement

> Given a matrix of *m* x *n* elements (*m* rows, *n* columns), return all elements of the matrix in spiral order.
>
> **Example 1:**
>
> ```
> Input:
> [
>  [ 1, 2, 3 ],
>  [ 4, 5, 6 ],
>  [ 7, 8, 9 ]
> ]
> Output: [1,2,3,6,9,8,7,4,5]
> ```
>
> **Example 2:**
>
> ```
> Input:
> [
>   [1, 2, 3, 4],
>   [5, 6, 7, 8],
>   [9,10,11,12]
> ]
> Output: [1,2,3,4,8,12,11,10,9,5,6,7]
> ```

### Pseudo-code:

```
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        lu = 0, ll = 0, ld = matrix.size() - 1
        lr = matrix.isEmpty() ? 0 : matrix[0].SIZE() - 1
        sz = matrix.isEmpty() ? 0 : matrix.SIZE() * matrix[0].SIZE()
        
        vector<int> res
        
        while(res.SIZE() < sz){
            for(int i = ll; i <= lr; i++)
                res.PUSH_BACK(matrix[lu][i])
            ++lu
            for(int i = lu; i <= ld; ++i)
                res.PUSH_BACK(matrix[i][lr])
            --lr
            for(int i = lr; i >= ll; --i)
                res.PUSH_BACK(matrix[ld][i])
            --ld
            for(int i = ld;i >= lu; --i)
                res.PUSH_BACK(matrix[i][ll])
            ++ll
        }
        if(res.size() > sz)        
            res.ERASE(res.BEGIN() + sz, res.END())
        return res
    }
```



**Time Complexity: O(M * N)**, since we visit each cell once.

**Space Complexity: O(1)**, since no extra space is required.