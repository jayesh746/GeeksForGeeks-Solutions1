"""
Problem Link : https://leetcode.com/problems/lru-cache/
Platform     : LeetCode
Difficulty   : Medium
"""

class Node:
    def __init__(self, key, value):
        self.key = key
        self.value = value
        self.prev = None
        self.next = None


class LRUCache:

    def __init__(self, capacity):
        self.capacity = capacity
        self.cache = {}

        # Dummy nodes
        self.left = Node(0, 0)    # LRU side
        self.right = Node(0, 0)   # MRU side

        self.left.next = self.right
        self.right.prev = self.left

    def remove(self, node):
        prev_node = node.prev
        next_node = node.next

        prev_node.next = next_node
        next_node.prev = prev_node

    def insert(self, node):
        # Insert at MRU position
        prev_node = self.right.prev
        next_node = self.right

        prev_node.next = node
        node.prev = prev_node

        node.next = next_node
        next_node.prev = node

    def get(self, key):
        if key not in self.cache:
            return -1

        node = self.cache[key]

        
        self.remove(node)
        self.insert(node)

        return node.value

    def put(self, key, value)
        if key in self.cache:
        
            self.remove(self.cache[key])


        node = Node(key, value)
        self.cache[key] = node

        
        self.insert(node)

        if len(self.cache) > self.capacity:
            
            lru = self.left.next

            self.remove(lru)
            del self.cache[lru.key]
