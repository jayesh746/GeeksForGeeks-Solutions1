class Solution {
  public:
    int mostFreqEle(vector<int>& arr) {
        // code here
        unordered_map<int, int> mp;
        
        int maxfreq = 0;
        int ans = arr[0];
        
        for(int i = 0; i<arr.size(); i++){
            mp[arr[i]]++;
        }
        
        for(int i = 0; i<arr.size(); i++){
            if(mp[arr[i]] > maxfreq){
                maxfreq = mp[arr[i]];
                ans = arr[i];
            }
            
            else if(maxfreq == mp[arr[i]] && arr[i] > ans){
                ans = arr[i];
            }
        }
        return ans;
    }
};