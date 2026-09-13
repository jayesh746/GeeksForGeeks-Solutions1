class Solution {
  public:

    int cost(vector<int>& arr) {
        // code here
        int n = arr.size();
        int minm = arr[0];
        for(int i = 0; i<arr.size(); i++){
            if(minm>arr[i]){
                minm = arr[i];
            }
        }
        return minm*(n-1);
    }
};