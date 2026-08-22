class Solution {
	public:
	int countTriangles(vector<int>& arr) {
		// code here
		sort(arr.begin(), arr.end());
		int n = arr.size();
		int count = 0;
		
		for (int right = n - 1; right >= 2; right--) {
			int left = 0;
			int mid = right - 1;
			
			while (left < mid) {
				if(arr[left] + arr[mid] > arr[right]) {
					
					count += mid - left;
					mid--;
				}
				
				else {
					left++;
				}
			}
		}
		return count;
	}
};
