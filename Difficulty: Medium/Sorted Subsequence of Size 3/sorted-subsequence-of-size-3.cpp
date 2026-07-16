class Solution {
	public:
	vector<int> find3Numbers(vector<int> &arr) {
		
		int n = arr.size();
		
		vector<int> leftmin(n);
		vector<int> rightmax(n);
		
		leftmin[0] = -1;
		int smallest = arr[0];
		
		for (int i = 1; i<n; i++) {
			leftmin[i] = smallest;
			if (arr[i]<smallest) {
				smallest = arr[i];
			}
		}
		
		rightmax[n - 1] = -1;
		int largest = arr[n - 1];
		
		for (int i = n - 2; i >= 0; i--) {
			rightmax[i] = largest;
			if (arr[i]>largest) {
				largest = arr[i];
			}
		}
		
		for (int i = 1; i<n; i++) {
			if (leftmin[i]<arr[i] && arr[i]<rightmax[i]) {
				return {leftmin[i], arr[i], rightmax[i]};
			}
		}
		return {};
	}
};
