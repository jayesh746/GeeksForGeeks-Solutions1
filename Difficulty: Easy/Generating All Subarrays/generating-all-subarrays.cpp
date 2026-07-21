class Solution {
	public:
	vector<vector<int>> getSubArrays(vector<int>& arr) {
		
		vector<vector<int>>ans;
		
		for (int start = 0; start<arr.size(); start++) {
			for (int end = start; end < arr.size(); end++) {
				vector<int>temp;
				
				for (int k = start; k <= end; k++) {
					temp.push_back(arr[k]);
				}
				ans.push_back(temp);
			}
			
		}
		return ans;
		
	}
};
