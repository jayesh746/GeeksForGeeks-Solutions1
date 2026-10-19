## 01. Remove a Character from a Given Position

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/remove-a-character-from-a-given-position/1)

### Problem Description

**Task:** Given a string and a position (0 based), remove a character from the given position.

#### Examples

##### Example 1

- **Input:**
```text
s = "abcde", pos = 1Output: s = "acde"
```

##### Example 2

- **Input:**
```text
s = "a", pos = 0Output: s = ""
```

#### Constraints

- **1.** `1 ≤ |s| ≤ 2*10⁵`

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-10-19 14:00:35
- **Status:** Correct
- **Marks:** 2

```cpp
class Solution {
  public:
    string removeCharacter(string &s, int pos) {
        // code here
       s.erase(pos, 1);
       return s;
    }
};
```

*Generated on: 10/19/2026, 2:04:04 PM*