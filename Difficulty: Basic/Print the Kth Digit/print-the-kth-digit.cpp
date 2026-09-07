class Solution {
  public:
    int kthDigit(int a, int b, int k) {
        // code here
        int long long n = 1;
        
        for(int i = 0; i<b; i++){
            n *= a;
        }
        
        for(int i = 1; i<k; i++){
            n = n/10;
        }
        
        return n%10;
    }
};