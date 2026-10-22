## 01. First Occurence

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/implement-strstr/1)

### Problem Description

**Task:** Given two strings txt and pat, return the 0-based index of the first occurrence of the substring pat in txt. If pat is not found, return -1.Examples :Input: txt = "GeeksForGeeks", pat = "Fr"

#### Examples

##### Example 1

- **Output:**
```text
-1
```
- **Explanation:** "gr" is not present in the string "GeeksForGeeks" as substring.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n^2)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (2)

#### Solution 1 (C++)

- **Submitted:** 2026-10-22 13:53:02
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    int firstOccurence(string& txt, string& pat) {
        // code here
        size_t pos = txt.find(pat);
        
        if(pos == string :: npos){
            return -1;
        }
        return pos;
    }
};
```

#### Solution 2 (C++)

- **Submitted:** 2026-10-22 13:42:01
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    int firstOccurence(string& txt, string& pat) {
        // code here
        size_t st = txt.find(pat);
        
        if(st == string:: npos){
            return -1;
        }
        return st;
    }
};
```

*Generated on: 10/22/2026, 1:56:43 PM*