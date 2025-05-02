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
        int missingNumber(vector<int>& nums) {
            int res = nums.size();
            
            for (int i = 0; i < nums.size(); i++) {
                res += i - nums[i];
            }
            
            return res;        
        }
    };