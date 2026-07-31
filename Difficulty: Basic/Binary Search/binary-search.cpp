class Solution {
  public:
    bool binarySearch(vector<int>& arr, int k) {
        // code here
        int min = 0;
        int max = arr.size()-1;
        
        while(min<=max){
            
            int mid = (min+max
            )/2;
            
            if(arr[mid] == k)
            return true;
            
            else if(arr[mid]<k)
            min = mid+1;
            
            else
            max = mid-1;
        }
        return false;
        
    }
};