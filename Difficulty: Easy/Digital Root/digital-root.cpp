class Solution {
  public:
    int digitalRoot(int n) {
        // code here
        while(n>=10){
            int sum = 0;
            
            while(n>0){
                int digit = n%10;
                sum += digit;
                n = n/10;
            }
            n = sum;
        }
        return n;
    }
};