class Solution {
  public:
    int nthFibonacci(int n) {
        // code here
        if(n == 0){
            return 0;
        }
        
        int prev = 0;
        int curr = 1;
        
        for(int i = 2; i<=n; i++){
            int next = prev + curr;
            prev = curr;
            curr = next;
        }
        return curr;
    }
};