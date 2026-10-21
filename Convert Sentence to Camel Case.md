## 01. Convert Sentence to Camel Case

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/convert-sentence-to-camel-case/1)

### Problem Description

**Task:** Given a sentence s, remove all spaces and convert it to Camel Case. In Camel Case, words are joined without spaces, the first word is converted to lowercase, and each subsequent word starts with an uppercase letter.Note: It is guaranteed that s does not contain leading or trailing spaces.Examples:Input: s = "I got intern at geeksforgeeks"Output: "iGotInternAtGeeksforgeeks"Explanation: All spaces are removed and each word starts with a capital letter, except the first word which retains its original capitalization.Input: s = "here comes the garden"Output: "hereComesTheGarden"Explanation: Spaces are removed and each word after the first is capitalized.Input: s = "coding is fun"Output: "codingIsFun"Explanation: Spaces are removed, the first word retains its original case, and each subsequent word starts with a capital letter.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (2)

#### Solution 1 (C++)

- **Submitted:** 2026-10-21 14:12:49
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    string convertToCamelCase(string& s) {
        // code here
        string ans = "";
        bool cap = false;
        
        for(int i = 0; i<s.size(); i++){
            if(s[i] == ' '){
                cap = true;
            }
            
            
        else{
            
            if(s.empty()){
                ans += tolower(s[i]);
            }
            
            else if(cap){
                ans += toupper(s[i]);
                cap = false;
            }
            
            else{
                ans += s[i];
            }
        }
        }
        return ans;
    }
};
```

#### Solution 2 (C++)

- **Submitted:** 2026-10-21 14:01:09
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
	public:
	string convertToCamelCase(string& s) {
		// code here
		string ans = "";
		bool cap = false;
		
		for (int i = 0; i<s.size(); i++) {
			if (s[i] == ' ') {
				cap = true;
			}
			
			else {
				
				if (s.empty()) {
					ans += tolower(s[i]);
				}
				
				else if (cap) {
					ans += toupper(s[i]);
					cap = false;
				}
				
				else {
					ans += s[i];
				}
			}
		}
		return ans;
	}
};
```

*Generated on: 10/21/2026, 2:16:04 PM*