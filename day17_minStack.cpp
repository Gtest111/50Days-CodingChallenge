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

class MinStack {
private:
    stack<pair<int, int>> stk; // pair<int, int> to store value and minimum value

public:
    MinStack() {}

    void push(int val) {
        int minVal = stk.empty() ? val : min(val, stk.top().second);
        stk.push({val, minVal});
    }

    void pop() {
        stk.pop();
    }

    int top() {
        return stk.top().first;
    }

    int getMin() {
        return stk.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */