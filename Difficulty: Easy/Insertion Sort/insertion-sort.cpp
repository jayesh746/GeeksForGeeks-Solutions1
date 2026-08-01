class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        
        for(int i = 1; i<arr.size(); i++){
            
            int current = arr[i];
            int prev = i-1;
            
            while(prev>=0 && arr[prev]>current){
                arr[prev+1] = arr[prev];
                prev--;
            }
           arr[prev+1] = current;
        }
        
        
    }
};