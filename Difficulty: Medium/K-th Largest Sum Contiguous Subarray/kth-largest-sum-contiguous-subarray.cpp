class Solution {
  public:
    int kthLargest(vector<int> &arr, int k) {
        // code here
        vector<int> a;
        
        for(int i = 0; i<arr.size(); i++){
            
            int sum = 0;
            
            for(int j = i; j<arr.size(); j++){
                sum += arr[j];
                a.push_back(sum);
            }
        }
        sort(a.begin(), a.end(), greater<int>());
        return a[k-1];
    }
};