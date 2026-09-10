class Solution {
  public:
    long long nPr(int n, int r) {
        // code here
        long long answer = 1;
        for(int i = 0; i<r; i++){
            answer *= n;
            n--;
        }
        return answer;
    }
};