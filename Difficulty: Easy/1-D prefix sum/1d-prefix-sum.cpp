class Solution {
  public:
    vector<int> prefSum(vector<int> &arr) {
        // code here
        vector<int> p;
        int sum = 0;
        for(int i = 0; i<arr.size(); i++){
             sum += arr[i];
            
            p.push_back(sum);
        }
        return p;
        
    }
};