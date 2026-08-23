class Solution {
  public:
    vector<int> constructArr(vector<int>& arr) {
        // code here
        int n = 0;
        
        while(n*(n-1)/2 < arr.size()){
            n++;
        }
        
        vector<int> res(n);
        
        res[0] = (arr[0]+arr[1]-arr[n-1]) / 2;
        
        for(int i = 1; i<n; i++){
            res[i] = arr[i-1] - res[0];
            
        }
        return res;
    }
};