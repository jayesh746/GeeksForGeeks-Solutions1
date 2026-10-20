## 01. Reverse a String

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/reverse-a-string/1)

### Problem Description

**Task:** Given a string s, reverse the string.Examples:Input: s = "Geeks"

#### Examples

##### Example 1

- **Output:**
```text
"skeeG"
```

##### Example 2

- **Input:**
```text
s = "for"
```
- **Output:**
```text
"a"
```

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (3)

#### Solution 1 (C++)

- **Submitted:** 2026-10-20 14:50:03
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    string reverseString(string& s) {
        // code here
       reverse(s.begin(), s.end());
       return s;
    }
};
```

#### Solution 2 (C++)

- **Submitted:** 2026-10-20 14:47:47
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    string reverseString(string& s) {
        // code here
        string u = "";
        for(int i = s.size()-1; i>=0; i--){
            u += s[i];
        }
        return u;
    }
};
```

#### Solution 3 (C++)

- **Submitted:** 2026-09-22 23:04:10
- **Status:** Correct
- **Marks:** 1

```cpp
class Solution {
  public:
    string reverseString(string& s) {
        // code here
        int st = 0;
        int end = s.size()-1;
        
        while(st<end){
            swap(s[st], s[end]);
            st++;
            end--;
        }
        return s;
    }
};
```

*Generated on: 10/20/2026, 2:53:52 PM*