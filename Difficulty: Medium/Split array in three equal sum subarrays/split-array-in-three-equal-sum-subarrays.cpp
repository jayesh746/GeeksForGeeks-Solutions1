//  Class Solution to contain the method for solving the problem.
class Solution {
  public:
    // Function to determine if array arr can be split into three equal sum sets.
    vector<int> findSplit(vector<int>& arr) {
         int totalsum = 0;
         for(int i = 0; i<arr.size(); i++){
             totalsum += arr[i];
         }
         
         if(totalsum%3 != 0 ){
             return {-1,-1};
         }
         
         int target = totalsum/3;
         int currentsum = 0;
         
         int first = -1;
         int second = -1;
         
         for(int i = 0; i<arr.size(); i++){
             currentsum += arr[i];
             
             if(first == -1 && currentsum == target){
                 first = i;
             }
             else if(second == -1 && currentsum == 2*target && i<arr.size()-1){
                 second = i;
                 break;
             }
            
             }
             if(first != -1 && second !=-1){
                 return {first,second};
         }
         
        return{-1,-1};
    }
};