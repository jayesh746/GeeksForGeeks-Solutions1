class Solution {
  public:
    int closestToZero(vector<int> &arr) {
        
        sort(arr.begin(), arr.end());
        
        int left = 0;
        int right = arr.size()-1;
        int ans = arr[0]+arr[1];
        while(left<right){
            int sum = arr[left]+arr[right];
            
            
            if(abs(sum)<abs(ans))
                ans = sum;
            
            else if(abs(sum)==abs(ans))
                ans = max(ans, sum);
            
               
               if(sum<0)
               left++;
            
              else if(sum>0)
              right--;
              
              else
               return 0;
        }
        return ans;
        
    }
};