class Solution {
  public:
    int subarraySum(vector<int>& arr) {

        int n = arr.size();
        int add = 0;

        for(int i = 0; i<n; i++){
            add += arr[i]*(i+1)*(n-i);
        }
        return add;
    }
};