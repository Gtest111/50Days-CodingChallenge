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
        int titleToNumber(string columnTitle) {
            int result = 0;
            for (char c : columnTitle) {
                result = result * 26 + (c - 'A' + 1);
            }
            return result;
        }
    };