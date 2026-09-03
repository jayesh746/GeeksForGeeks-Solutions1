class Solution {
  public:
    int factorial(int n) {
        // code here
        int ans = 1;
        for(int i = 1; i<= n; i++){
            ans *= i;
        }
        return ans;
    }
};