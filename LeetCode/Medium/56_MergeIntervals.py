"""
Problem Link : https://leetcode.com/problems/merge-intervals/
Platform     : LeetCode
Difficulty   : Medium
"""

class Solution:
    def merge(self, intervals):
        intervals.sort()

        result = []

        for interval in intervals:

            # If result is empty OR no overlap
            if not result or interval[0] > result[-1][1]
                result.append(interval)

            else:
                # Merge overlapping intervals
                result[-1][1] = max(result[-1][1], interval[1])

        return result
