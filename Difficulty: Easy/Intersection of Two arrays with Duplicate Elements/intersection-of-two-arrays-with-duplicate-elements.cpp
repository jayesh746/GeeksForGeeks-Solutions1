class Solution {
  public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
        // code here
        unordered_set<int> setA;
        unordered_set<int> anset;
        vector<int> ans;
        
        for(int i = 0; i<a.size(); i++){
            setA.insert(a[i]);
        }
        
        for(int i = 0; i<b.size(); i++){
            if(setA.find(b[i]) != setA.end() && anset.find(b[i]) == anset.end()){
                ans.push_back(b[i]);
                anset.insert(b[i]);
            }
        }
        return ans;
        
    }
};