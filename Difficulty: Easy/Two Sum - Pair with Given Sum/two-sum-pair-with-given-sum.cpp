class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        unordered_set<int> st;
        
        for(int i = 0; i<arr.size(); i++){
            int need = target - arr[i];
            
            if(st.find(need) != st.end()){
                return true;
            }
            
            st.insert(arr[i]);
        }
        return false;
        
    }
};