class Solution {
  public:
    bool areDisjoint(vector<int> &a, vector<int> &b) {
        // code here
        unordered_map<int,int> fuck;
        
        for(int i = 0; i<a.size(); i++){
            fuck[a[i]]++;
        }
        
        for(int i = 0; i<b.size(); i++){
            if(fuck[b[i]]>0)
            return false;
        }
        return true;
    }
};