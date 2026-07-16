class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        
        unordered_map<int,int> mp;
        
        for(int i = 0; i<arr.size(); i++){
            mp[arr[i]]++;
        }
        
        int repeating = -1;
        int missing = -1;
        
        for(int i =1; i<=arr.size(); i++){
            if(mp[i] == 2){
                repeating = i;
            }
            if(mp[i] == 0){
                missing = i;
            }
        }
        return {repeating, missing};
    }
};