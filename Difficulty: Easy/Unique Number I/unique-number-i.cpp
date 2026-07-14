class Solution {
	public:
	int findUnique(vector<int> &arr) {
		
	int ans = 0;
	
	for(int i = 0; i<arr.size(); i++){
	    ans = ans^arr[i];
	}
	return ans;
	}
};
