class Solution {
  public:
    vector<int> twoSum(vector<int>& arr, int target) {
        // code here
        int left = 0;
        int right = arr.size()-1;
        
        while(right>left){
            int add = arr[left]+arr[right];
            
            if(add == target){
                return{left+1, right+1};
            }
            else if(add>target){
                right--;
            }
            else{
                left++;
            }
             
             
        }
        return{ -1,-1};
    }
};