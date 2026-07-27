class Solution {
public:
    vector<int> find3Numbers(vector<int> &arr) {
        int n = arr.size();

        vector<int> leftSmall(n, -1);
        vector<int> rightLarge(n, -1);

        // Step 1: Find smallest element on the left
        int mini = arr[0];

        for (int i = 1; i < n; i++) {
            if (arr[i] > mini)
                leftSmall[i] = mini;
            else
                mini = arr[i];
        }

        // Step 2: Find largest element on the right
        int maxi = arr[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] < maxi)
                rightLarge[i] = maxi;
            else
                maxi = arr[i];
        }

        // Step 3: Find a valid subsequence
        for (int i = 0; i < n; i++) {
            if (leftSmall[i] != -1 && rightLarge[i] != -1) {
                return {leftSmall[i], arr[i], rightLarge[i]};
            }
        }

        return {};
    }
};