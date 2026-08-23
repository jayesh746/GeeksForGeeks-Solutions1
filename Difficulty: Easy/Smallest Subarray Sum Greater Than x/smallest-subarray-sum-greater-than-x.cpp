class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        // code here
        
        int n = arr.size();
        int sum = 0;
        int left = 0;
        int answer = n+1;
        
        
        for(int right = 0; right<n; right++){
            
            sum += arr[right];
            
            while(sum>x){
                answer = min(answer, right - left + 1);
                sum -= arr[left];
                left++;
            }
        }
        if(answer == n+1){
            return 0;
        }
        return answer;
    }
};