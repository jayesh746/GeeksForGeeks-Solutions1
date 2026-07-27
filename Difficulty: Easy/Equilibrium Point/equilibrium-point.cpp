class Solution {
	public:
	int findEquilibrium(vector<int> &arr) {
		
		int totalsum = 0;
		
		for (int i = 0; i<arr.size(); i++) {
			totalsum += arr[i];
		}
		
		int leftsum = 0;
		
		for (int i = 0; i<arr.size(); i++) {
			int rightsum = totalsum - leftsum - arr[i];
			
			if (leftsum == rightsum)
				return i;
			
			leftsum += arr[i];
		}
		return -1;
		
	}
};
