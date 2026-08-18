class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
      unordered_set<int> seta;
      vector<int> ans;
      
      for(int i = 0; i<a.size(); i++){
          if(seta.find(a[i]) == seta.end()){
              seta.insert(a[i]);
              ans.push_back(a[i]);
          }
      }
      
      for(int i = 0; i<b.size(); i++){
          if(seta.find(b[i]) == seta.end()){
              seta.insert(b[i]);
              ans.push_back(b[i]);
          }
      }
      return ans;
    }
};