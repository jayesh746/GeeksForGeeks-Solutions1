class Solution {
  public:
    int kthLargest(vector<int> &arr, int k) {
        // code here
        vector<int> q;
        
        for(int i = 0; i<arr.size(); i++){
            
            int sum = 0;
            
            for(int j = i; j<arr.size(); j++){
                sum += arr[j];
                q.push_back(sum);
            }
        }
        sort(q.begin(), q.end(), greater<int>());
        return q[k-1];
    }
};