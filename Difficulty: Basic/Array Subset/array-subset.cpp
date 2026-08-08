class Solution {
  public:
    bool isSubset(vector<int> &a, vector<int> &b) {
        // code here
        unordered_map<int, int> mp;
        for(int i = 0; i<a.size(); i++){
            mp[a[i]]++;
        }
        
        for(int i = 0; i<b.size(); i++){
            if(mp[b[i]] == 0){
                return false;
            }
            
            mp[b[i]]--;
        }
        return true;
    }
};