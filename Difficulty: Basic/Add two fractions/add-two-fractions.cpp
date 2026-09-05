class Solution {
  public:
    vector<int> addFraction(int num1, int den1, int num2, int den2) {
        // code here
        int num = num1*den2+num2*den1;
        int den = den1*den2;
        
        int a = num;
        int b = den;
        
        while(b!=0){
            int rem = a%b;
            a = b;
            b = rem;
        }
        int gcd = a;
        
        num = num/gcd;
        den = den/gcd;
        
        return {num, den};
        
    }
};