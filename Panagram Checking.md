## 01. Panagram Checking

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/pangram-checking-1587115620/1)

### Problem Description

**Task:** Given a string s, check if it is a "Panagram" or not. A "Panagram" is a sentence containing every letter in the English Alphabet either in lowercase or Uppercase.Examples:Input: s = "Bawds jog, flick quartz, vex nymph"

#### Examples

##### Example 1

- **Output:**
```text
true
```
- **Explanation:** In the given string, there are all the letters of the English alphabet. Hence, the output is true.

##### Example 2

- **Input:**
```text
s = "sdfs"
```
- **Output:**
```text
false
```
- **Explanation:** In the given string, there aren't all the letters present in the English alphabet. Hence, the output is false.Constraints:1 ≤ |s| ≤ 10⁴The string may contain any ASCII character.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (2)

#### Solution 1 (C++)

- **Submitted:** 2026-10-22 12:39:11
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    bool checkPangram(string& s) {
        //  code here
        bool seen[26] = {false};
        int count = 0;
        
        for(int i = 0; i<s.size(); i++){
            
            char ch = tolower(s[i]);
            
            if(ch >= 'a' && ch <= 'z'){
                int index = ch - 'a';
                
                if(!seen[index]){
                    seen[index] = true;
                    count++;
                }
            }
        }
        return count == 26;
        }
};
```

#### Solution 2 (C++)

- **Submitted:** 2026-10-22 12:26:33
- **Status:** Correct
- **Marks:** 2

```cpp
class Solution {
  public:
    bool checkPangram(string& s) {
        //  code here
        bool seen[26] = {false};
        int count = 0;
        
        for(int i = 0; i<s.size(); i++){
            
            char ch = tolower(s[i]);
            
            if(ch >= 'a' && ch <= 'z'){
                int index = ch - 'a';
                
                
                if(!seen[index]){
                    seen[index] = true;
                    count++;
                }
            }
        }
        return count == 26;
        }
};
```

*Generated on: 10/22/2026, 12:43:05 PM*