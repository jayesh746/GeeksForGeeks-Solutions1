class Solution {
  public:
    int oppositeFaceOfDice(int n) {
        // code 
        int ans;
             if(n==1){
            ans =6;
        }
        else if(n==2){
            ans= 5;
        }
        else if(n==3){
            ans= 4;
        }
        else if(n==4){
            ans= 3;
        }
        else if(n==5){
           ans=2;
        }
        else if(n==6){
           ans=1;
        }
        return ans;
    }
};