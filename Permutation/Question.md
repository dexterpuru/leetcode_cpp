Given a collection of distinct integers, return all possible permutations.

Difficulty- Medium

Example:

Input: [1,2,3]
Output:
[
[1,2,3],
[1,3,2],
[2,1,3],
[2,3,1],
[3,1,2],
[3,2,1]
]

Here's the problem link- https://leetcode.com/problems/permutations/#/description

Approach- Making a class name solution and then checking num size. if limit is greater then num. size then call combination.push_back function. And if number is equal to limit then call swap function and swap the no. with limit no.