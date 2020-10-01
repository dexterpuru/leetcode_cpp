#### Leetcode Link: 

> https://leetcode.com/problems/sum-of-left-leaves/

### Problem Statement

> Find the sum of all left leaves in a given binary tree.
>
> **Example:**
>
> ```
>    3
>    / \
>  9  20
>     /  \
>    15   7
> 
> There are two left leaves in the binary tree, with values 9 and 15 respectively. Return 24.
> ```

### Pseudo-code

This problem can be solved using mere recursion.

```
sumOfLeftLeaves(root, c = 0) {

	If root is NULL, return 0
	
	If (c == 1 AND root -> left == NULL AND root -> right == NULL) 
		return root -> val
		
	left = sumOfLeftLeaves(root -> left, 1)
	right = sumOfLeftLeaves(root -> right, 0)
	
	return left + right
}
```



**Time Complexity: O(N)**, where N is the number of nodes, since we visit each node.

**Space Complexity: O(H)**, where H is the height of the tree, due to the recursive stack.