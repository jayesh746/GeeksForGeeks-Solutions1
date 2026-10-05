"""
Problem Link : https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/
Platform     : LeetCode
Difficulty   : Medium
"""

class Solution:
    def lowestCommonAncestor(self, root, p, q):


        if root is None:
            return None

        if root == p or root == q
            return root

    
        left = self.lowestCommonAncestor(root.left, p, q)
        right = self.lowestCommonAncestor(root.right, p, q)

        
        if left and right:
            return root

    
        if left:
            return left
        else:
            return right
