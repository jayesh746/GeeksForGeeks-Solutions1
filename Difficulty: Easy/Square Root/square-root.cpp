class Solution {
  public:
    int floorSqrt(int n) {
        // code here
        int a = 1; 
        int high = n;
        int ans = 0;
        
        for(int i = 0; i<n; i++){
            int mid = a+(high-a)/2;
            if(mid*mid<=n){
                ans = mid;
                a = mid+1;
            }
            else{
            high = mid-1;
            }
        }
        
        return ans;
    }
};