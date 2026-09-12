class Solution {
  public:
    int largestPrimeFactor(int n) {
        // code here
        int largest = 1;
        
        for(int i = 2; i*i<=n; i++){
            if(n%i == 0){
                largest = i;
                
                while(n%i == 0){
                    n /= i;
                }
            }
        }
        if(n>1){
            largest = n;
        }
        return largest;
    }
};