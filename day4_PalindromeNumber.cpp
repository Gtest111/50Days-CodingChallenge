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
        bool isPalindrome(int x) {
            if (x < 0 || (x != 0 && x % 10 == 0)) {
                return false;
            }
            int half = 0;
            while (x > half) {
                half = half * 10 + x % 10;
                x /= 10;
            }
            return x == half || x == half / 10;
        }
    };