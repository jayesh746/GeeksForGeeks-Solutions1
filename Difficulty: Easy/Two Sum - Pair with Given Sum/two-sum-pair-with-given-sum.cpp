class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        unordered_set<int> sd;
        
        for(int i = 0; i<arr.size(); i++){
            int need = target - arr[i];
            
            if(sd.find(need) != sd.end()){
               return true;
            }
            sd.insert(arr[i]);
        } 
        return false;
    }
};