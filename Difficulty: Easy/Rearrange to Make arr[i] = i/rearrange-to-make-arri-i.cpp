class Solution {
  public:
    void modifyArray(vector<int>& arr) {
        // code here
        unordered_set<int> st;
        
        for(int i = 0; i<arr.size(); i++){
            st.insert(arr[i]);
        }
        
        for(int i = 0; i<arr.size(); i++){
            if(st.find(i) != st.end()){
                arr[i] = i;
            }
            else
               arr[i] = -1;
        }
    }
};
