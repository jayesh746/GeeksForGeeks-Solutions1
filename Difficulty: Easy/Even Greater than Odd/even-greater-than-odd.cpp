class Solution {
	public:
	vector<int> rearrangeArray(vector<int>& ar) {
		// code here
		for (int i = 1; i<ar.size(); i++) {
			if (i%2 == 1) {
				if (ar[i] <= ar[i - 1]) {
					swap(ar[i], ar[i - 1]);
				}
				
			}
			else {
				if (ar[i]>ar[i - 1]) {
					swap(ar[i], ar[i - 1]);
				}
			}
		}
		return ar;
	}
};
