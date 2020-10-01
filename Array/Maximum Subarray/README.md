#### Leetcode Link: 

> https://leetcode.com/problems/maximum-subarray/

### Problem Statement

> Given an integer array `nums`, find the contiguous subarray (containing at least one number) which has the largest sum and return *its sum*.
>
> **Follow up:** If you have figured out the `O(n)` solution, try coding another solution using the **divide and conquer** approach, which is more subtle.
>
>  
>
> **Example 1:**
>
> ```
> Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
> Output: 6
> Explanation: [4,-1,2,1] has the largest sum = 6.
> ```
>
> **Example 2:**
>
> ```
> Input: nums = [1]
> Output: 1
> ```
>
> **Example 3:**
>
> ```
> Input: nums = [0]
> Output: 0
> ```
>
> **Example 4:**
>
> ```
> Input: nums = [-1]
> Output: -1
> ```
>
> **Example 5:**
>
> ```
> Input: nums = [-2147483647]
> Output: -2147483647
> ```
>
>  
>
> **Constraints:**
>
> - 1 <= nums.length <= 2 * 10<sup>4</sup>
> - -2<sup>31</sup> <= nums[i] <= 2<sup>31</sup> - 1

### Pseudo-code

```
maxSubArray(vector<int>& nums) {
    
    vector<int> dp(nums.SIZE());

    dp[0] = nums[0]
    max = dp[0]
    
    for(int i = 1;i < nums.SIZE(); i++)
    {
        If(dp[i-1] + nums[i] > nums[i])
        	dp[i] = dp[i-1] + nums[i]
        Else
        	dp[i] = nums[i]
        	
        If(dp[i]>max)
        max = dp[i]
    }
    
    return max
}
```



**Time Complexity: O(N)**, N being the length of the array.

**Space Complexity: O(1)**, since no constant space is being used.