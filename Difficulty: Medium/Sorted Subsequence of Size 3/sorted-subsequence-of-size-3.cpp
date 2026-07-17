class Solution {
public:
    vector<int> find3Numbers(vector<int> &arr) {

        int n = arr.size();

        vector<int> leftmin(n);
        vector<int> rightmax(n);

        leftmin[0] = -1;
        int smallest = 0;

        for (int i = 1; i < n; i++) {

            if (arr[i] <= arr[smallest]) {
                smallest = i;
                leftmin[i] = -1;
            }
            else {
                leftmin[i] = smallest;
            }
        }

        rightmax[n - 1] = -1;
        int largest = n - 1;

        for (int i = n - 2; i >= 0; i--) {

            if (arr[i] >= arr[largest]) {
                largest = i;
                rightmax[i] = -1;
            }
            else {
                rightmax[i] = largest;
            }
        }

        for (int i = 0; i < n; i++) {

            if (leftmin[i] != -1 && rightmax[i] != -1) {

                return {arr[leftmin[i]], arr[i], arr[rightmax[i]]};
            }
        }

        return {};
    }
};