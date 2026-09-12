class Solution {
  public:

    int cost(vector<int>& arr) {
        // code here
        int min = arr[0];
        int n = arr.size();
        for(int i = 1; i<arr.size(); i++){
            if(min>arr[i]){
                min = arr[i];
            }
        }
        return min*(n-1);
    }
};