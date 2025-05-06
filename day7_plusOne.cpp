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
        vector<int> plusOne(vector<int>& digits) {
             int n = digits.size();
        
       
        for (int i = n - 1; i >= 0; --i) {
            if (digits[i] < 9) {
                
                digits[i]++;
                return digits;
            }
           
            digits[i] = 0;
        }
        
       
        digits.insert(digits.begin(), 1);
        
        return digits;
        }
    };