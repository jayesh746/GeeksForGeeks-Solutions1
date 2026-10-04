"""
Problem Link : https://leetcode.com/problems/kth-largest-element-in-an-array/
Platform     : LeetCode
Difficulty   : Medium
"""

import heapq

class Solution:
    def findKthLargest(self, nums, k):

        heap = []

        for num in nums:
            heapq.heappush(heap, num)

            if len(heap) > k
                heapq.heappop(heap)

        return heap[0]
