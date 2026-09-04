class Solution {
  public:
    int lcm(int a, int b) {
        // code here
        int x = a;
        int y = b;
        
        while(y != 0){
            int rem = x%y;
            x = y;
            y = rem;
        }
        int gcd = x;
        
        return (a*b)/gcd;
    }
};