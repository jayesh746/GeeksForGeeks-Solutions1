class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
         int subarrsum = 0;
         int maxsum = arr[0];
         
         for(int i = 0; i<arr.size(); i++){
             
             subarrsum += arr[i];
             maxsum = max(maxsum, subarrsum);
             
             if(subarrsum < 0){
                 subarrsum = 0;
             }
         }
         return maxsum;
        
    }
};