class Solution {
  public:
    int kthDigit(int a, int b, int k) {
        // code here
        long long ans = 1;
        for(int i = 0; i<b; i++){
            ans *= a;
        }
        
        for(int i = 1; i<k; i++){
            ans = ans/10;
            
        }
        return ans%10;
    }
};