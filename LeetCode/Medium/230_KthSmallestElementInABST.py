"""
Problem Link : https://leetcode.com/problems/kth-smallest-element-in-a-bst/
Platform     : LeetCode
Difficulty   : Medium
"""

class Solution:
    def kthSmallest(self, root, k):

        stack = []
        current = root

        while True:

            while current:
                stack.append(current)
                current = current.left

            current = stack.pop()

            k -=

            if k == 0:
                return current.val


            current = current.right
        
