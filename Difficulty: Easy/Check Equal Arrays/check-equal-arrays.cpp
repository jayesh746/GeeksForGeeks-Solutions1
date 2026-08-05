class Solution {
	public:
	bool checkEqual(vector<int>& a, vector<int>& b) {
		// code here
		unordered_map<int, int> mp;
		unordered_map<int, int> np;
		
		for (int i = 0; i<a.size(); i++) {
			mp[a[i]]++;
		}
		for (int i = 0; i<b.size(); i++) {
			np[b[i]]++;
			
		}
		if (mp == np) {
			return true;
		}
		return false;
	}
	
	
};
