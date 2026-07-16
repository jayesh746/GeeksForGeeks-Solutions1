class Solution {
	public:
	int missingNum(vector<int>& arr) {
		
		int sum = 0;
		
		for (int i = 0; i<arr.size(); i++) {
			sum += arr[i];
		}
			int long long n = arr.size() + 1;
			int long long missing = n * (n + 1)/2 - sum;
			
			return missing;
		
	}
	
};
