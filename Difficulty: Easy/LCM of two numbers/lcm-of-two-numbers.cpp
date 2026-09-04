class Solution {
  public:
    int lcm(int a, int b) {
        // code here
        int x = a;
        int y = b;
        
        while(y != 0){
            int remain = x%y;
            x = y;
            y = remain;
        }
        int gcd = x;
        return (a*b)/gcd;
    }
};