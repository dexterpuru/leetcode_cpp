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
_________________________________________________________________________________________________________________________________
## Question : Longest Mountain in Array

Let's call any (contiguous) subarray B (of A) a mountain if the following properties hold:
B.length >= 3
There exists some 0 < i < B.length - 1 such that B[0] < B[1] < ... B[i-1] < B[i] > B[i+1] > ... > B[B.length - 1]
Given an array A of integers, return the length of the longest mountain.
Return 0 if there is no mountain.

Example 1:
Input: [2,1,4,7,3,2,5]
Output: 5
Explanation: The largest mountain is [1,4,7,3,2] which has length 5.

### Problem Link: https://leetcode.com/problems/longest-mountain-in-array/

### Approach: 
This solution keeps counting points that form up and down slope. 
Reset when new mountain or flat is found. Record longest mountain for each point.

_________________________________________________________________________________________________________________________________

## Question : Squares of a Sorted Array
Given an array of integers A sorted in non-decreasing order, return an array of the squares of each number, also in sorted non-decreasing order.

Example 1:

Input: [-4,-1,0,3,10]
Output: [0,1,9,16,100]

### Problem Link: https://leetcode.com/problems/squares-of-a-sorted-array/

### Approach: 
Two pointers have been used to move through the array and store the product such that the resulting vector stays in a sorted form
