class Solution {
  public:
    bool binarySearch(vector<int>& arr, int k) {
        // code here
        int min = 0;
        int max = arr.size()-1;
        
        while(min<=max){
            
            int mide
            = (min+max
            )/2;
            
            if(arr[mide] == k)
            return true;
            
            else if(arr[mide]<k)
            min = mide+1;
            
            else
            max = mide-1;
        }
        return false;
        
    }
};