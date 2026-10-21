## 01. Binary Substrings with Corners as 1

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/binary-string-1587115620/1)

### Problem Description

**Task:** Given a binary string s, count the number of substrings that start and end with 1.Examples:Input: s = "1111"

#### Examples

##### Example 1

- **Output:**
```text
3
```
- **Explanation:** There are 3 substrings from the given string. They are "11", "101", "1101".Constraints:1 ≤ |s| ≤ 10⁴

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (2)

#### Solution 1 (C++)

- **Submitted:** 2026-10-21 14:30:21
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    int binarySubstring(string& s) {
        // code here
        long long ones = 0;
        
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '1'){
                ones++;
            }
        }
        return ones*(ones-1)/2;
    }
};
```

#### Solution 2 (C++)

- **Submitted:** 2026-10-21 14:23:35
- **Status:** Correct
- **Marks:** 1

```cpp
class Solution {
  public:
    int binarySubstring(string& s) {
        // code here
        long long ones = 0;
        
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '1'){
                ones++;
            }
        }
        return ones*(ones-1)/2;
    }
};
```

*Generated on: 10/21/2026, 2:33:28 PM*