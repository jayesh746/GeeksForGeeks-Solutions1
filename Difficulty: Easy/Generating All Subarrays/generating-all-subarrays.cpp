class Solution {
  public:
    vector<vector<int>> getSubArrays(vector<int>& arr) {
        // code here
        vector<vector<int>> ans;
        
        for(int st = 0; st<arr.size(); st++){
            for(int end = st; end<arr.size(); end++){
                
                vector<int> a;
                
                for(int k = st; k<=end; k++){
                    a.push_back(arr[k]);
                }
                ans.push_back(a);

            }
        }
        return ans;
    }
};