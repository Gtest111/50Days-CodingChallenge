#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include<string>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Solution {
    public:
        int findNthDigit(int n) {
            size_t nb_digits = 1;
            size_t numbers_per_range = 9;
            size_t np = (size_t)n;
            while (np > nb_digits * numbers_per_range ) {
                np -= nb_digits * numbers_per_range;
                nb_digits++;
                numbers_per_range *= 10;
            }
            std::string number = to_string(std::pow(10, nb_digits - 1) +
                                                ((np - 1) / nb_digits));
    
            return number[(np - 1) % nb_digits] - '0';
        }
    };