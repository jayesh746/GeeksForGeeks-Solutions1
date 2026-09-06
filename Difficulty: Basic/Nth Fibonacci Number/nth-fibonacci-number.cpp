class Solution {
  public:
    int nthFibonacci(int n) {
        // code here
        if(n == 0){
            return 0;
        }
        
        int pre = 0;
        int cur = 1;
        
        for(int i = 2; i<=n; i++){
            int next = pre + cur;
            pre = cur;
            cur = next;
        }
        return cur;
    }
};