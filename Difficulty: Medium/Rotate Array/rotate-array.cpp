class Solution {
  public:
    void rotateArr(vector<int>& arr, int a) {
        
        int n = arr.size();
        a = a%n;
        
        reverse(arr.begin(), arr.begin()+a);
        reverse(arr.begin()+a, arr.end());
        reverse(arr.begin(), arr.end());
        
    }
};