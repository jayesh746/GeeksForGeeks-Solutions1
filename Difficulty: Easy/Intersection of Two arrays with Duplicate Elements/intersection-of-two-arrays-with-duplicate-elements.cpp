class Solution {
  public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
        // code here
        unordered_set<int> setA;
        unordered_set<int> ansset;
        vector<int> ans;
        
        for(int i = 0; i<a.size(); i++){
            setA.insert(a[i]);
        }
        
        for(int i = 0; i<b.size(); i++){
            if(setA.find(b[i]) != setA.end() && ansset.find(b[i]) == ansset.end()){
                ans.push_back(b[i]);
                ansset.insert(b[i]);
            }
        }
        return ans;
    }
};