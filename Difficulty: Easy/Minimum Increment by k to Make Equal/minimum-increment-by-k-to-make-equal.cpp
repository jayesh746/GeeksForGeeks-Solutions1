class Solution {
	public:
	int minOps(vector<int> arr, int k) {
		// code here
		int max = arr[0];
		
		for (int i = 1; i<arr.size(); i++) {
			if (arr[i]>max) {
				max = arr[i];
			}
		}
		
		int sum = 0;
		
		for (int i = 0; i<arr.size(); i++) {
			int diff = max - arr[i];
			
			if (diff % k != 0)
				return - 1;
			
			sum += diff/k;
			
		}
		return sum;
		
	}
};
