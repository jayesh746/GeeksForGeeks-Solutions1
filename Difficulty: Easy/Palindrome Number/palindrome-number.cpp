class Solution {
	public:
	bool isPalindrome(int n) {
		// code here
		
		int x = n;
		int rev = 0;
		
		while (n!=0) {
			int digit = n%10;
			rev = rev*10+digit;
			n = n/10;
		}
		if (rev == x) {
			return true;
		}
		else {
			return false;
		}
	}
};
