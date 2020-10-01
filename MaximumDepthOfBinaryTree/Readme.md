## Problem Statement

### Maximum Depth of Binary Tree
Given a binary tree, find its maximum depth.

The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

Note: A leaf is a node with no children.

Given binary tree [3,9,20,null,null,15,7],

    3
   / \
  9  20
    /  \
   15   7
return its depth = 3.

### Problem Link: https://leetcode.com/problems/maximum-depth-of-binary-tree/

### Approach:
Keep on recursively calling the maxDepth function until you reach the leaf node. On reaching the lead node, return 0, else return 1 + the value of the previous recursive value.