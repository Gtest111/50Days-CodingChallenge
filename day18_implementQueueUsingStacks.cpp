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

class MyQueue {
public:

    // stack<int> st;

    stack<int> s1;
    stack<int> s2;

    MyQueue() {
        
    }
    
    void push(int x) {
        // // 01 approach - stack + rec
        // // bc
        // if (st.empty()) {
        //     st.push(x);
        //     return;
        // }
        // // ek case mai solve krunga
        // int topEle = st.top();
        // st.pop();
        // // baaki rec sambhalega
        // push(x);
        // // bt
        // st.push(topEle);


        // // 02 approach - stack + stack - O(N)
        // // step 01 : transfer all element from s1 to s2
        // while (!s1.empty()) {
        //     s2.push(s1.top());
        //     s1.pop();  
        // }
        // // step 02 : insert at s1 (i.e empty)
        // s1.push(x);
        // // step 02 : transfer all element from s2 to s1
        // while (!s2.empty()) {
        //     s1.push(s2.top());
        //     s2.pop();
        // }


        // 03 approach - stack + stack - O(1)
        s1.push(x);
    }
    
    int pop() {
        // int toPop = st.top();
        // st.pop();
        // return toPop;


        // int toPop = s1.top();
        // s1.pop();
        // return toPop;


        // O(N)
        // s2 contains front elemnt at top
        int toPop = -1;
        // s2 not empty
        if (!s2.empty()) {
            toPop = s2.top();
            s2.pop();
        }
        // s2 empty - means s1 bottom contains front
        else {
            // from s1 to s2
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
            toPop = s2.top();
            s2.pop();
        }
        return toPop;
    }
    
    int peek() {
        // return st.top();

        // return s1.top();

        // O(N)
        // s2 contains front elemnt at top
        int front = -1;
        // s2 not empty
        if (!s2.empty()) {
            front = s2.top();
        }
        // s2 empty - means s1 bottom contains front
        else {
            // from s1 to s2
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
            front = s2.top();
        }
        return front;
    }
    
    bool empty() {
        // return st.empty();

        // return s1.empty();

        return s1.empty() && s2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */