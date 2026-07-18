class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        
        int subarrysum = 0;
        int maxsum = arr[0];
        
        for(int i = 0; i<arr.size(); i++){
            subarrysum += arr[i];
            
            maxsum = max(maxsum, subarrysum);
            
            if(subarrysum < 0){
                subarrysum = 0;
            }
        }
        return maxsum;
    }
};