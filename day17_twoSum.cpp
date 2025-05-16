#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>

using namespace std;



class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        vector<int> ans;

        // Build a map of number to index
        for (int i = 0; i < nums.size(); i++) {
            numMap[nums[i]] = i;
        }

        // Find the complement in the map
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (numMap.find(complement) != numMap.end() && numMap[complement] != i) {
                ans.push_back(i);
                ans.push_back(numMap[complement]);
                break;  // Exit the loop once a solution is found
            }
        }

        return ans;
    }
};