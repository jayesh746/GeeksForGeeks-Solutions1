class Solution {
  public:

    int cost(vector<int>& arr) {
        int n = arr.size();
        
        int min = arr[0];
        
        for(int i = 1; i<n; i++){
            if(min>arr[i]){
                min = arr[i];
            }
        }
        return min*(n-1);
        
    }
};