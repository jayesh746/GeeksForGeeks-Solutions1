class Solution {
  public:
    void selectionSort(vector<int> &arr) {
        // code here
        for(int i = 0; i<arr.size()-1; i++){
            int min = i;
            
            for(int j = i+1; j<arr.size(); j++){
                if(arr[j]<arr[min]){
                    min = j;
                }
            }
            swap(arr[i], arr[min]);
        }
        
     
    }
};