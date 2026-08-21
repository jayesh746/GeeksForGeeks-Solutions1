class Solution {
  public:
    int findDuplicate(vector<int>& arr) {
        // code here
        unordered_map<int, int> sp;
        
        for(int i = 0; i<arr.size(); i++){
            sp[arr[i]]++;
        }
        
        int repeating = 0;
        
        for(int i = 0; i<=arr.size(); i++){
            if(sp[i]==2){
                repeating = i;
            }
        }
        return repeating;
    }
};