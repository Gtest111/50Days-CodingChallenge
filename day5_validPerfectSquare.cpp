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
        bool isPerfectSquare(long long num) {
            if(num==1)
            return true;
            else{
                for(long long i=0;i<=num/2;i++){
                    if(i*i==num)
                    {return true;
                    break;}
                }
            }
            return false;
        }
    };