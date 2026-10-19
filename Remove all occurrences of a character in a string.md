## 01. Remove all occurrences of a character in a string

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/remove-all-occurrences-of-a-character-in-a-string/1)

### Problem Description

**Task:** Given a string s and a character c. The task is to remove all the occurrences of the character in the string.

#### Examples

##### Example 1

- **Input:**
```text
s = "geeksforgeeks", c = 'e'Output: s = "gksforgks"
```

##### Example 2

- **Input:**
```text
s = "geeksforgeeks", c = 'g'Output: s = "eeksforeeks"
```

#### Constraints

- **1.** `1 <= |s| <= 10⁵`

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** Not found
- **Expected Auxiliary Space Complexity:** Not found

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-10-19 14:31:25
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    // Function to remove all occurrences of the character from the string
    void removeCharacter(string &s, char c) {
        // code here
s.erase(remove(s.begin(), s.end(), c), s.end());
    }
};
```

*Generated on: 10/19/2026, 2:40:46 PM*