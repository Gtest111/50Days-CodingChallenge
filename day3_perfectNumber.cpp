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
        bool checkPerfectNumber(int num) {
             if (num == 1) return false;
            int sum = 1;  // 1 is a divisor of every number
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    sum += i;
                    if (i != num / i) sum += num / i;  // Add both divisors
                }
            }
            return sum == num;
        }
    };