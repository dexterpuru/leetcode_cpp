#### Leetcode Link: 

> https://leetcode.com/problems/first-unique-character-in-a-string/

### Problem Statement

> Given a string, find the first non-repeating character in it and return its index. If it doesn't exist, return -1.

> **Note:** You may assume the string contains only lowercase English letters.
>
> **Example:**
>
> s = "leetcode"
> return 0.
> 
> s = "loveleetcode"
> return 2.

### Approach

Go through the string and save in a hash map the number of times each character appears in the string. 
And then we go through the string the second time, this time we use the hash map as a reference to check if a character is unique or not.
If the character is unique, one could just return its index. 

### Pseudo-code

```
    int firstUniqChar(string s) {
    returns Integer -> function (input string -> s)
        hashtable named frequency {type: char -> type: int}
        loop i from 0 till end of string
            freq[s[i]]++;
        
        loop i from 0 till end of string
            if (freq[s[i]] == 1)
               return i; 
        return -1;
    }
```

**Complexity Analysis**

> **Time Complexity:** O(N). Here, N is the length of string str. 

> **Space Complexity:** O(N). We use O(N) extra space for storing the elements and their frequencies in a hashtable.



