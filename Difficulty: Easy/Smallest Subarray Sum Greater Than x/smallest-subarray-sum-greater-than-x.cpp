class Solution {
	public:
	int smallestSubWithSum(int x, vector<int>& arr) {
		// code here
		int n = arr.size();
		int left = 0;
		int sum = 0;
		int ans = n + 1;
		
		for (int right = 0; right < arr.size(); right++) {
			sum += arr[right];
			
			while (sum > x) {
				ans = min(ans, right - left + 1);
				sum -= arr[left];
				left++;
			}
		}
		if (ans == n + 1)
			return 0;
		
		return ans;
	}
};
