"""
Problem Link : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
Platform     : LeetCode
Difficulty   : Medium
"""

class Solution:
    def findMin(self, nums):
        left = 0
        right = len(nums) - 1

        while left < right
            mid = (left + right) // 2

            if nums[mid] > nums[right]:
                
                left = mid + 1
            else:
             
                right = mid

        return nums[left]
