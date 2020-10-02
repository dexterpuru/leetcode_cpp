## Question : Two Sum

### Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]

### Problem Link: https://leetcode.com/problems/two-sum/

### Approach: 
This solution does not use hash maps or any advanced techniques and can be developed intuitively.
Two pointer approach has been used to find solutions and then pass them to a vector.
The second half of the solution deals with recurring solutions and how to return the correct output.
