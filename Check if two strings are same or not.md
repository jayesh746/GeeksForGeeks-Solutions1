## 01. Check if two strings are same or not

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/check-if-two-strings-are-same-or-not--155406/1)

### Problem Description

**Task:** Given two strings s1 and s2, determine if they are exactly the same, considering case sensitivity.

#### Examples

##### Example 1

- **Input:**
```text
s1 = "abc" , s2 = "abc" Output: true
```

##### Example 2

- **Input:**
```text
s1 = " " , s2 = " "Output: true
```

##### Example 3

- **Input:**
```text
s1 = "geeks", s2 = "Geeks"Output: false
```

#### Constraints

- **1.** `1 ≤ |s1|, |s2| ≤ 10⁵`

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (3)

#### Solution 1 (C++)

- **Submitted:** 2026-10-19 13:34:58
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    bool areStringsSame(string &s1, string &s2) {
        // code here
        if(s1 == s2){
            return true;
        }
        else{
            return false;
        }
    }
};
```

#### Solution 2 (C++)

- **Submitted:** 2026-10-19 13:34:54
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    bool areStringsSame(string &s1, string &s2) {
        // code here
        if(s1 == s2){
            return true;
        }
        else{
            return false;
        }
    }
};
```

#### Solution 3 (C++)

- **Submitted:** 2026-10-19 13:33:55
- **Status:** Correct
- **Marks:** 2

```cpp
class Solution {
  public:
    bool areStringsSame(string &s1, string &s2) {
        // code here
        if(s1 == s2){
            return true;
        }
        else{
            return false;
        }
    }
};
```

*Generated on: 10/19/2026, 1:38:05 PM*