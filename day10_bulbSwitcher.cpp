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
        int bulbSwitch(int n) {
            return floor(pow(n,0.5));
        }
    };