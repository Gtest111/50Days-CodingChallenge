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
        bool isHappy(int n) {
            int slow = getNextNumber(n);
            int fast = getNextNumber(getNextNumber(n));
    
            while (slow != fast) {
                if (fast == 1) return true;
                slow = getNextNumber(slow);
                fast = getNextNumber(getNextNumber(fast));
            }
    
            return slow == 1;
        }
    
    private:
        int getNextNumber(int n) {
            int output = 0;
            
            while (n > 0) {
                int digit = n % 10;
                output += digit * digit;
                n = n / 10;
            }
            
            return output;
        }
    };