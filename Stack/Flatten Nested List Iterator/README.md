#### Leetcode Link: 

> https://leetcode.com/problems/flatten-nested-list-iterator/

### Problem Statement

> Given a nested list of integers, implement an iterator to flatten it.
>
> Each element is either an integer, or a list -- whose elements may also be integers or other lists.
>
> **Example 1:**
>
> ```
> Input: [[1,1],2,[1,1]]
> Output: [1,1,2,1,1]
> Explanation: By calling next repeatedly until hasNext returns false, 
>              the order of elements returned by next should be: [1,1,2,1,1].
> ```
>
> **Example 2:**
>
> ```
> Input: [1,[4,[6]]]
> Output: [1,4,6]
> Explanation: By calling next repeatedly until hasNext returns false, 
>              the order of elements returned by next should be: [1,4,6].
> ```

### Approach

Iterator through the given list. If it is an integer push it into a new stack otherwise iterate through the nested list and add it's elements one by one.

### Pseudo-code

> ``` 
> NestedIterator(vector<NestedInteger> &nestedList) {
>         for(auto i:nestedList){
>             stack<NestedInteger>st
>             st.PUSH(i)
>             While(!st.empty()){
>                 auto j =st.TOP()
>                 st.POP()
>                 If(j.isInteger())
>                     res.PUSH_BACK(j.getInteger())
>                 Else{
>                     vector<NestedInteger>tmp = j.getList()
>                     for(int i=tmp.SIZE()-1;i>-1;--i)
>                         st.PUSH(tmp[i])
>                 }
>             }
>         }   
>     }
> ```

**Time Complexity: O(N)**, where N is the length of the resultant vector.

**Space Complexity: O(N)**, since in the worst case, we might have to create a stack with N elements.