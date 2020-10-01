#### Leetcode Link:

> https://leetcode.com/problems/permutations/

### Problem Statement: 

> Given a collection of **distinct** integers, return all possible permutations.
>
> **Example:**
>
> ```
> Input: [1,2,3]
> Output:
> [
>   [1,2,3],
>   [1,3,2],
>   [2,1,3],
>   [2,3,1],
>   [3,1,2],
>   [3,2,1]
> ]
> ```

### Pseudo-code

```
vector<vector<int>> permute(vector<int> nums, int limit=0) {
        
        if(limit>=nums.SIZE()) {
            
            combinations.PUSH_BACK(nums)    
            return {}
            
        }
        
        for(int i=limit;i<nums.size();i++) {
            SWAP(nums[i], nums[limit])
            permute(nums,  limit+1)
            SWAP(nums[i], nums[limit])
        }
        
        return combinations
    }
```

**Time Complexity: O(N<sup>2</sup>)**

**Space Complexity: O(N!)**, since we get **N!** number of permutations.