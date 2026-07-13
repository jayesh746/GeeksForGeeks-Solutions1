class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        for (int i = 1; i < nums.size(); i++) {

            // Even position (1-based): nums[i] >= nums[i-1]
            if (i % 2 == 1) {
                if (nums[i] < nums[i - 1]) {
                    swap(nums[i], nums[i - 1]);
                }
            }

            // Odd position (1-based): nums[i] <= nums[i-1]
            else {
                if (nums[i] > nums[i - 1]) {
                    swap(nums[i], nums[i - 1]);
                }
            }
        }

        return nums;
    }
};