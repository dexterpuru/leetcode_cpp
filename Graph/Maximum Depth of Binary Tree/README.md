#### Leetcode Link: 

> https://leetcode.com/problems/maximum-depth-of-binary-tree/

### Problem Statement

> Given a binary tree, find its maximum depth.
>
> The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
>
> **Note:** A leaf is a node with no children.
>
> **Example:**
>
> Given binary tree `[3,9,20,null,null,15,7]`,
>
> ```
>     3
>    / \
>   9  20
>     /  \
>    15   7
> ```
>
> return its depth = 3.

### Approach

Keep on recursively calling the maxDepth function (refer to the pseudo-code) until you reach the leaf node. On reaching the lead node, return 0, else return 1 + the value of the previous recursive value.

### Pseudo-code

```
maxDepth(TreeNode *root) {
        if (root == nullptr) {
            return 0;
        }
        return 1 + max(maxDepth(root->left), maxDepth(root->right))
}
```

**Time Complexity: O(N)**, N being number of nodes.
**Space Complexity: O(H)**, H being the height of the tree; Due to recursive stack.

