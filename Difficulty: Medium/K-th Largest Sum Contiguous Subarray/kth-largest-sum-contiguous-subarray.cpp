class Solution {
  public:
    int kthLargest(vector<int> &arr, int k) {
        // code here
        vector<int> sums;
        
        for(int i = 0; i<arr.size(); i++){
            int sum = 0;
            
            for(int j = i; j<arr.size(); j++){
                sum+= arr[j];
                sums.push_back(sum);
            }
        }
        sort(sums.begin(), sums.end(), greater<int>());
        return sums[k-1];
    }
};