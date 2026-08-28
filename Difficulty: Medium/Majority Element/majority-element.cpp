class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        unordered_map<int, int> answer;
        
        for(int i = 0; i<arr.size(); i++){
            answer[arr[i]]++;
        }
        
        for(int i = 0; i<arr.size(); i++){
            if(answer[arr[i]] > arr.size()/2){
                return arr[i];
            }
        }
        return -1;
    }
};