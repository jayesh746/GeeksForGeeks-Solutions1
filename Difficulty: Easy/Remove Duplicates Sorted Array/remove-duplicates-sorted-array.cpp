class Solution {
	public:
	vector<int> removeDuplicates(vector<int> &arr) {
		// code here
		vector<int> ans;
		int diff = arr[0];
		ans.push_back(diff);
		
		for (int i = 0; i<arr.size()-1; i++) {
			if (arr[i] != arr[i + 1]) {
				ans.push_back(arr[i + 1]);
				
			}
		}
		return ans;
		
	}
};
