class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int x = n;
        int y = n;
        int ans = 0;
        
        while(n!=0){
            y = n%10;
            ans += y*y*y;
            n = n/10;
        }
        if(ans == x){
            return true;
        }
        else{
            return false;
        }
    }
};