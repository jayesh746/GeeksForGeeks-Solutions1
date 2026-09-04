class Solution {
  public:
    int pairCubeCount(int n) {
        
        int count = 0;
        
        for(int a = 1; a*a*a <= n; a++){
            for(int b = 0; b*b*b <= n; b++){
                if(a*a*a + b*b*b == n){
                    count++;
                }
            }
        }
        return count;
        
    }
};