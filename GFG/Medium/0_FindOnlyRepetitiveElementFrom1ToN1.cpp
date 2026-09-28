/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/find-repetitive-element-from-1-to-n-1/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
	int findDuplicate(vector<int>& arr) {
		unordered_map<int, int> mp;

		for (int i = 0; i<arr.size(); i++) {
			mp[arr[i]]++;
		}
		int repeating = -1;

		for (int i = 1; i <= arr.size(); i++) {
			if (mp[i] == 2) {
				repeating = i;
			}
		}
		return {repeating};

	}
};
