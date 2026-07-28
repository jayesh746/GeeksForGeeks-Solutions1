class Solution {
  public:
    void modifyArray(vector<int>& arr) {
        
        vector<int> ans(arr.size(), -1);
        
        for(int i = 0; i<arr.size(); i++){
            if(arr[i]>=0 && arr[i]<arr.size()){
                ans[arr[i]] = arr[i];
            }
        }
        arr = ans;
    }
};