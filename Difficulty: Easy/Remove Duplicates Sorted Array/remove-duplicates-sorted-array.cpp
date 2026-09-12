class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        vector<int> ans;
        int diff = arr[0];
        ans.push_back(diff);
        
        for(int i = 1; i<arr.size(); i++){
            if(arr[i-1] != arr[i]){
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
};