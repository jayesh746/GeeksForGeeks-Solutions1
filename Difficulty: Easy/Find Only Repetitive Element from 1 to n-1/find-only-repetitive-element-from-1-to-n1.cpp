class Solution {
  public:
    int findDuplicate(vector<int>& arr) {
        // code here
        unordered_map<int, int> mp;
        
        for(int i = 0; i<arr.size(); i++){
            mp[arr[i]]++;
        }
        
        int repeating = 0;
        
        for(int i = 1; i<=arr.size(); i++){
            if(mp[i]==2){
                repeating = i;
            }
        }
        return repeating;
    }
};