"""
Problem Link : https://leetcode.com/problems/subarray-sum-equals-k/
Platform     : LeetCode
Difficulty   : Medium
"""

class Solution:
    def subarraySum(self, nums, k):
        prefix = 0
        count

        mp = {0: 1}

        for num in nums:
            prefix += num

            # Check if a previous prefix sum exists
            if prefix - k in mp:
                count += mp[prefix - k]

            # Store current prefix sum
            mp[prefix] = mp.get(prefix, 0) + 1

        return count
