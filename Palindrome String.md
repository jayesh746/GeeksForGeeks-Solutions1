## 01. Palindrome String

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/palindrome-string0817/1)

### Problem Description

**Task:** Given a string s, find if it is a palindrome. A string is considered a palindrome if it reads the same forwards and backwards.

#### Examples

##### Example 1

- **Input:**
```text
s = "abba"
```
- **Output:**
```text
true
```
- **Explanation:** "abba" reads the same forwards and backwards, so it is a palindrome.

##### Example 2

- **Input:**
```text
s = "abc"
```
- **Output:**
```text
false
```
- **Explanation:** "abc" does not read the same forwards and backwards, so it is not a palindrome.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (2)

#### Solution 1 (C++)

- **Submitted:** 2026-10-22 13:01:30
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        int st = 0;
        int end = s.size()-1;
        
        while(st<end){
            if(s[st] != s[end]){
                return false;
            }
            
            st++;
            end--;
            
        }
        return true;
    }
};
```

#### Solution 2 (C++)

- **Submitted:** 2026-10-22 12:51:08
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        int st = 0;
        int end = s.size()-1;
        
        while(st<end){
            
            if(s[st] != s[end]){
                return false;
            }
            
            st++;
            end--;
        }
        
        return true;
    }
};
```

*Generated on: 10/22/2026, 1:04:36 PM*