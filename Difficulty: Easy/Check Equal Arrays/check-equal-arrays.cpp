class Solution {
	public:
	bool checkEqual(vector<int>& a, vector<int>& b) {
		// code here
		unordered_map<int, int> mp;
		unordered_map<int, int> bp;
		
		for (int i = 0; i<a.size(); i++) {
			mp[a[i]]++;
		}
		for (int i = 0; i<b.size(); i++) {
			bp[b[i]]++;
			
		}
		if (mp == bp) {
			return true;
		}
		return false;
	}
	
	
};
