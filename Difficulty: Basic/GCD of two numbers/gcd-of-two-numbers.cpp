class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        while(b!=0){
            int x = a%b;
            a = b;
            b = x;
        }
        return a;
    }
};
