class Solution {
  public:
    bool checkDuplicatesWithinK(vector<int>& arr, int k) {
        unordered_map<int, int> ap;
        
        for(int i = 0; i<arr.size(); i++){
            
            if(ap.find(arr[i]) != ap.end()){
                if(i-ap[arr[i]] <= k){
                    return true;
                }
            }
            ap[arr[i]]=i;
        }
        return false;
    }
};