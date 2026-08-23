class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        unordered_map<int, int> ans;
        
        for(int i = 0; i<arr.size(); i++){
            ans[arr[i]]++;
        }
        
        for(int i = 0; i<arr.size(); i++){
            if(ans[arr[i]] > arr.size()/2){
                return arr[i];
            }
        }
        return -1;
    }
};