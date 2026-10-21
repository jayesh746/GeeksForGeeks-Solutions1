## 01. Check for Binary String

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/check-for-binary/1)

### Problem Description

**Task:** Given a non-empty sequence of characters s, return true if sequence is Binary, else false.Examples:Input: s = "101"

#### Examples

##### Example 1

- **Output:**
```text
true
```
- **Explanation:** Since string contains only '0' and '1', output is true.

##### Example 2

- **Input:**
```text
s = "75"
```
- **Output:**
```text
false
```
- **Explanation:** Since string contains digits other than '0' and '1', output is false.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-10-21 13:17:27
- **Status:** Correct
- **Marks:** 1

```cpp
class Solution {
  public:
    bool isBinary(string& s) {
        // code here
        for(int i = 0; i<s.size(); i++){
            if(s[i] != '0' && s[i] != '1'){
                return false;
            }
           
          
            
        }
             return true;
    }
};
```

*Generated on: 10/21/2026, 1:24:08 PM*