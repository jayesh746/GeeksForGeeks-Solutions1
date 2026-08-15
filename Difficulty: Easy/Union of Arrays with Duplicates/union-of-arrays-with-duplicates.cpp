class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        unordered_set<int> st;
        vector<int> ans;
        
        for(int i = 0; i<a.size(); i++){
            if(st.find(a[i]) == st.end()){
                st.insert(a[i]);
                ans.push_back(a[i]);
            }
        }
        
        for(int i = 0; i<b.size(); i++){
            if(st.find(b[i]) == st.end()){
                st.insert(b[i]);
                ans.push_back(b[i]);
            }
        }
        return ans;
    }
};