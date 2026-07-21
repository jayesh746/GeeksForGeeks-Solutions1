class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        vector<int>ans;
        
        int maxright = arr[arr.size()-1];
        ans.push_back(maxright);
        
        for(int i = arr.size()-2; i>=0; i--){
            if(arr[i]>=maxright){
                maxright = arr[i];
                ans.push_back(arr[i]);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};