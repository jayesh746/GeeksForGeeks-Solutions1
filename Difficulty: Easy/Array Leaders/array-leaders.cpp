class Solution {
public:
    vector<int> leaders(vector<int>& arr) {

        vector<int> ans;

        int maxi = arr[arr.size() - 1];

        ans.push_back(maxi);

        for (int i = arr.size() - 2; i >= 0; i--) {

            if (arr[i] >= maxi) {
                ans.push_back(arr[i]);
                maxi = arr[i];
            }
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};