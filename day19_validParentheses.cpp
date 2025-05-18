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
    bool isValid(string s) {
    stack<char> st;

    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        } else if (!st.empty() &&
                   ((c == ')' && st.top() == '(') ||
                    (c == ']' && st.top() == '[') ||
                    (c == '}' && st.top() == '{'))) {
            st.pop();
        } else {
            return false; // Mismatched closing bracket or empty stack
        }
    }

    return st.empty(); // Stack should be empty if all brackets are matched
}
};