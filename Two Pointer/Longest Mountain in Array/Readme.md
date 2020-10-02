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