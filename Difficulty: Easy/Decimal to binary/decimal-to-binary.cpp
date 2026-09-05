class Solution {
  public:
    string decToBinary(int n) {
        // code here
        if( n == 0){
            return "0";
        }
        
        string ans = "";
        
        while(n>0){
            int rem = n%2;
            ans += char('0' + rem);
            n/=2;
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};