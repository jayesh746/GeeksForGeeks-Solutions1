class Solution {
	public:
	vector<vector<int>> getSubArrays(vector<int>& arr) {
		
		vector<vector<int>>ans;
		
		for(int st = 0; st<arr.size(); st++){
		    for(int end = st; end<arr.size(); end++){
		        vector<int>temp;
		        
		        for(int k = st; k <= end; k++){
		            temp.push_back(arr[k]);
		        }
		        ans.push_back(temp);
		    }
		}
		return ans;
		
	}
};
