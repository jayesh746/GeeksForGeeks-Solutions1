"""
Problem Link : https://leetcode.com/problems/task-scheduler/
Platform     : LeetCode
Difficulty   : Medium
"""

class Solution:
    def leastInterval(self, tasks, n):

        # Count frequency of every task
        freq = [0] * 26

        for task in tasks:
            freq[ord(task) - ord('A')] += 1

        # Highest frequency
        max_freq = max(freq)

        # How many tasks have the highest frequency
        max_count = freq.count(max_freq)

        # Minimum intervals required
        result = (max_freq - 1) * (n + 1) + max_count

        # If other tasks can fill the gaps
        return max(result, len(tasks))
