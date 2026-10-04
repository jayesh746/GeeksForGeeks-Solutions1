"""
Problem Link : https://leetcode.com/problems/rotate-array/
Platform     : LeetCode
Difficulty   : Medium
"""

class Solution:
    def rotate(self, nums, k):
        n = len(nums)
        k = k % n

        def reverse(left, right):
            while left < right:
                nums[left], nums[right] = nums[right], nums[left]
                left += 1
                right -= 1

        reverse(0, n )
        reverse(0, k - 1)
        reverse(k, n - 1)
        
