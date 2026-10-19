## 01. Length of String

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/length-of-string/1)

### Problem Description

**Task:** Given a string s, return the length of the string.

#### Examples

##### Example 1

- **Input:**
```text
s = "Geeks"
```
- **Output:**
```text
5
```

##### Example 2

- **Input:**
```text
s = "Hello1234"
```
- **Output:**
```text
9
```

#### Constraints

- **1.** `1 ≤ |s| ≤ 10⁵`

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(1)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (2)

#### Solution 1 (C++)

- **Submitted:** 2026-10-19 13:25:45
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    int lengthString(string &s) {
        // code here
        return s.length();
    }
};
```

#### Solution 2 (C++)

- **Submitted:** 2026-09-22 20:29:05
- **Status:** Correct
- **Marks:** 1

```cpp
class Solution {
  public:
    int lengthString(string &s) {
        // code here
        return s.size();
    }
};
```

*Generated on: 10/19/2026, 1:29:25 PM*