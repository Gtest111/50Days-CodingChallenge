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
    private:
        int sum(int num){
            int sum = 0;
            while(num){
                sum+=num%10;
                num/=10;
            }
            return sum;
        }
    public:
        int addDigits(int num) {
            while(num/10){
                num = sum(num);
            }
            return num;
        }
    };
    