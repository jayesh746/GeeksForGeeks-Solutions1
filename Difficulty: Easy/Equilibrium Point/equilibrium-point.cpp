class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        int totalsum = 0;
        for(int i = 0; i<arr.size(); i++){
             totalsum += arr[i];
        }
      int  leftsum = 0;
        for(int i = 0; i<arr.size(); i++){
            totalsum -= arr[i];
            
            if(leftsum == totalsum){
                return i;
            }
            leftsum += arr[i];
        }
        return -1;
        
    }
};