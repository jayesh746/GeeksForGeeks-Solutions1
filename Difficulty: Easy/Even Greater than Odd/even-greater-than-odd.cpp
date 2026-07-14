class Solution {
	public:
	vector<int> rearrangeArray(vector<int>& arr) {
	
	for (int i = 1; i<arr.size(); i++) {
		if (i%2 == 1) {
			if (arr[i]<arr[i - 1]) {
				swap(arr[i], arr[i - 1]);
			}
		}
		else {
			if (arr[i]>arr[i-1]) {
				swap(arr[i ], arr[i-1]);
			}
		}
		
	}
	return arr;
}
};
