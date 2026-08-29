class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
         int subarrsum = 0;
         int mas = arr[0];
         
         for(int i = 0; i<arr.size(); i++){
             
             subarrsum += arr[i];
             mas = max(mas, subarrsum);
             
             if(subarrsum < 0){
                 subarrsum = 0;
             }
         }
         return mas;
        
    }
};